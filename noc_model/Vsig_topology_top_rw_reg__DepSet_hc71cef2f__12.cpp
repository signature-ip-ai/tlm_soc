// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_rw_reg.h"

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_114_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_114_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_114_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_114_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_114_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_114_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_115_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_115_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_115_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_115_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_115_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_115_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_116_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_116_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_116_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_116_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_116_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_116_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_117_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_117_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_117_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_117_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_117_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_117_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_118_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_118_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_118_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_118_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_118_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_118_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_119_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_119_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_119_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_119_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_119_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_119_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_120_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_120_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_120_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_120_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_120_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_120_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_121_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_121_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_121_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_121_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_121_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_121_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_122_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_122_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_122_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_122_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_122_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_122_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_123_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_123_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_123_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_123_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_123_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_123_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_124_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_124_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_124_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_124_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_124_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_124_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_125_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_125_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_125_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_125_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_125_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_125_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_126_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_126_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_126_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_126_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_126_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_126_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_127_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_127_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_127_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_127_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_127_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_127_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_128_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_128_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_128_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_128_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_128_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_128_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_129_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_129_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_129_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_129_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_129_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_129_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_130_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_130_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_130_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_130_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_130_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_130_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_131_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_131_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_131_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_131_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_131_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_131_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_132_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_132_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_132_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_132_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_132_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_132_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_133_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_133_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_133_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_133_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_133_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_133_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_134_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_134_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_134_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_134_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_134_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_134_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_135_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_135_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_135_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_135_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_135_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_135_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_136_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_136_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_136_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_136_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_136_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_136_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_137_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_137_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_137_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_137_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_137_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_137_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_138_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_138_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_138_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_138_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_138_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_138_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_139_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_139_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_139_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_139_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_139_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_139_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_140_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_140_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_140_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_140_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_140_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_140_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_141_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_141_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_141_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_141_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_141_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_141_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_142_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_142_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_142_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_142_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_142_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_142_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_143_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_143_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_143_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_143_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_143_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_143_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_144_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_144_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_144_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_144_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_144_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_144_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_145_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_145_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_145_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_145_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_145_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_145_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_146_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_146_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_146_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_146_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_146_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_146_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_147_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_147_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_147_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_147_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_147_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_147_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_148_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_148_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_148_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_148_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_148_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_148_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_149_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_149_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_149_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_149_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_149_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_149_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_150_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_150_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_150_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_150_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_150_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_150_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_151_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_151_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_151_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_151_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_151_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_151_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_152_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_152_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_152_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_152_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_152_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_152_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_153_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_153_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_153_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_153_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_153_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_153_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_154_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_154_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_154_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_154_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_154_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_154_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_155_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_155_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_155_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_155_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_155_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_155_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_156_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_156_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_156_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_156_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_156_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_156_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_157_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_157_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_157_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_157_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_157_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_157_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_158_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_158_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_158_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_158_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_158_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_158_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_159_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_159_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_159_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_159_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_159_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_159_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_160_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_160_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_160_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_160_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_160_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_160_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_161_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_161_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_161_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_161_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_161_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_161_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_162_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_162_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_162_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_162_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_162_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_162_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_163_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_163_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_163_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_163_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_163_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_163_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_164_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_164_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_164_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_164_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_164_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_164_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_165_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_165_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_165_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_165_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_165_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_165_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_166_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_166_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_166_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_166_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_166_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_166_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_167_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_167_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_167_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_167_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_167_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_167_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_168_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_168_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_168_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_168_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_168_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_168_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_169_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_169_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_169_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_169_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_169_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_169_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_170_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_170_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_170_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_170_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_170_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_170_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_171_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_171_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_171_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_171_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_171_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_171_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_172_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_172_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_172_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_172_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_172_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_172_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_173_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_173_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_173_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_173_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_173_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_173_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_174_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_174_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_174_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_174_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_174_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_174_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_175_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_175_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_175_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_175_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_175_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_175_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_176_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_176_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_176_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_176_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_176_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_176_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_177_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_177_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_177_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_177_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_177_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_177_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_178_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_178_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_178_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_178_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_178_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_178_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_179_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_179_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_179_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_179_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_179_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_179_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_180_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_180_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_180_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_180_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_180_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_180_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_181_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_181_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_181_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_181_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_181_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_181_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_182_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_182_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_182_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_182_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_182_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_182_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_183_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_183_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_183_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_183_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_183_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_183_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_184_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_184_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_184_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_184_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_184_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_184_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_185_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_185_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_185_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_185_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_185_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_185_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_186_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_186_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_186_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_186_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_186_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_186_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_187_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_187_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_187_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_187_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_187_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_187_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_188_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_188_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_188_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_188_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_188_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_188_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_189_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_189_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_189_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_189_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_189_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_189_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_190_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_190_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_190_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_190_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_190_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_190_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_191_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_191_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_191_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_191_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_191_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_191_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_192_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_192_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_192_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_192_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_192_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_192_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_193_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_193_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_193_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_193_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_193_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_193_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_194_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_194_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_194_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_194_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_194_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_194_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_195_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_195_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_195_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_195_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_195_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_195_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_196_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_196_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_196_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_196_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_196_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_196_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_197_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_197_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_197_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_197_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_197_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_197_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_198_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_198_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_198_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_198_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_198_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_198_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_199_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_199_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_199_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_199_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_199_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_199_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_200_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_200_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_200_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_200_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_200_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_200_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_201_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_201_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_201_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_201_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_201_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_201_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_202_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_202_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_202_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_202_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_202_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_202_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_203_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_203_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_203_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_203_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_203_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_203_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_204_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_204_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_204_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_204_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_204_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_204_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_205_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_205_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_205_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_205_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_205_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_205_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_206_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_206_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_206_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_206_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_206_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_206_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_207_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_207_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_207_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_207_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_207_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_207_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_208_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___ico_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_208_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_208_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_208_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data_stored = vlSelfRef.__PVT__data_stored;
    vlSelfRef.__Vdly__data_stored = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                      ? vlSelfRef.__PVT__data_stored_nxt
                                      : 0U);
    vlSelfRef.__PVT__data_stored = vlSelfRef.__Vdly__data_stored;
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__PVT__data_stored;
}

VL_INLINE_OPT void Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_208_config__0(Vsig_topology_top_rw_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_rw_reg___nba_comb__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__rw_cl_208_config__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    if (vlSelfRef.__PVT__i_wr_reg_en) {
        VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 0U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0U, 8))));
        vlSelfRef.__PVT__i = 1U;
        VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 1U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 8U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 8U, 8))));
        vlSelfRef.__PVT__i = 2U;
        VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 2U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x10U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x10U, 8))));
        vlSelfRef.__PVT__i = 3U;
        VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__data_stored_nxt, 
                        (0xffU & ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_strobe), 3U))
                                   ? VL_SEL_IIII(32, vlSelfRef.__PVT__i_wr_data, 0x18U, 8)
                                   : VL_SEL_IIII(32, vlSelfRef.__PVT__data_stored, 0x18U, 8))));
        vlSelfRef.__PVT__i = 4U;
    } else {
        vlSelfRef.__PVT__data_stored_nxt = vlSelfRef.__PVT__data_stored;
    }
}
