// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_apb_prog.h"

VL_INLINE_OPT void Vsig_topology_top_sig_apb_prog___ico_sequent__TOP__sig_topology_top__i_sig_apb_prog__0(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___ico_sequent__TOP__sig_topology_top__i_sig_apb_prog__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apb_st_nxt = vlSelfRef.__PVT__apb_st;
    vlSelfRef.__PVT__reg_wren_prog = 0U;
    vlSelfRef.__PVT__reg_rden_prog = 0U;
    vlSelfRef.__PVT__PREADY_prog = 0U;
    vlSelfRef.__PVT__PRDATA_prog_nxt = vlSelfRef.__PVT__PRDATA_prog;
    if ((0U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__PSEL_prog) {
            vlSelfRef.__PVT__apb_st_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__PSEL_prog) {
            if (vlSelfRef.__PVT__PENABLE_prog) {
                if (vlSelfRef.__PVT__PWRITE_prog) {
                    vlSelfRef.__PVT__reg_wren_prog = 1U;
                    vlSelfRef.__PVT__apb_st_nxt = 2U;
                } else {
                    vlSelfRef.__PVT__reg_rden_prog = 1U;
                    vlSelfRef.__PVT__apb_st_nxt = 3U;
                }
            }
        } else {
            vlSelfRef.__PVT__apb_st_nxt = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__wrdata_rdy_prog) {
            vlSelfRef.__PVT__apb_st_nxt = 0U;
            vlSelfRef.__PVT__PREADY_prog = 1U;
        } else {
            vlSelfRef.__PVT__reg_wren_prog = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__reg_rddata_valid_prog) {
            vlSelfRef.__PVT__PRDATA_prog_nxt = vlSelfRef.__PVT__reg_rddata_prog;
            vlSelfRef.__PVT__apb_st_nxt = 4U;
        } else {
            vlSelfRef.__PVT__reg_rden_prog = 1U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__apb_st))) {
        vlSelfRef.__PVT__apb_st_nxt = 1U;
        vlSelfRef.__PVT__PREADY_prog = 1U;
    }
    vlSelfRef.__PVT__reg_address_prog = vlSelfRef.__PVT__PADDR_prog;
    vlSelfRef.__PVT__reg_wrstrb_prog = vlSelfRef.__PVT__PSTRB_prog;
    vlSelfRef.__PVT__reg_wrdata_prog = vlSelfRef.__PVT__PWDATA_prog;
}

VL_INLINE_OPT void Vsig_topology_top_sig_apb_prog___nba_sequent__TOP__sig_topology_top__i_sig_apb_prog__0(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___nba_sequent__TOP__sig_topology_top__i_sig_apb_prog__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__apb_st = vlSelfRef.__PVT__apb_st;
    vlSelfRef.__Vdly__PRDATA_prog = vlSelfRef.__PVT__PRDATA_prog;
    if (vlSelfRef.__PVT__PRESETn_prog) {
        vlSelfRef.__Vdly__apb_st = vlSelfRef.__PVT__apb_st_nxt;
        vlSelfRef.__Vdly__PRDATA_prog = vlSelfRef.__PVT__PRDATA_prog_nxt;
    } else {
        vlSelfRef.__Vdly__apb_st = 0U;
        vlSelfRef.__Vdly__PRDATA_prog = 0U;
    }
    vlSelfRef.__PVT__apb_st = vlSelfRef.__Vdly__apb_st;
    vlSelfRef.__PVT__PRDATA_prog = vlSelfRef.__Vdly__PRDATA_prog;
}

VL_INLINE_OPT void Vsig_topology_top_sig_apb_prog___nba_comb__TOP__sig_topology_top__i_sig_apb_prog__0(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___nba_comb__TOP__sig_topology_top__i_sig_apb_prog__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apb_st_nxt = vlSelfRef.__PVT__apb_st;
    vlSelfRef.__PVT__reg_wren_prog = 0U;
    vlSelfRef.__PVT__reg_rden_prog = 0U;
    vlSelfRef.__PVT__PREADY_prog = 0U;
    vlSelfRef.__PVT__PRDATA_prog_nxt = vlSelfRef.__PVT__PRDATA_prog;
    if ((0U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__PSEL_prog) {
            vlSelfRef.__PVT__apb_st_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__PSEL_prog) {
            if (vlSelfRef.__PVT__PENABLE_prog) {
                if (vlSelfRef.__PVT__PWRITE_prog) {
                    vlSelfRef.__PVT__reg_wren_prog = 1U;
                    vlSelfRef.__PVT__apb_st_nxt = 2U;
                } else {
                    vlSelfRef.__PVT__reg_rden_prog = 1U;
                    vlSelfRef.__PVT__apb_st_nxt = 3U;
                }
            }
        } else {
            vlSelfRef.__PVT__apb_st_nxt = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__wrdata_rdy_prog) {
            vlSelfRef.__PVT__apb_st_nxt = 0U;
            vlSelfRef.__PVT__PREADY_prog = 1U;
        } else {
            vlSelfRef.__PVT__reg_wren_prog = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__apb_st))) {
        if (vlSelfRef.__PVT__reg_rddata_valid_prog) {
            vlSelfRef.__PVT__PRDATA_prog_nxt = vlSelfRef.__PVT__reg_rddata_prog;
            vlSelfRef.__PVT__apb_st_nxt = 4U;
        } else {
            vlSelfRef.__PVT__reg_rden_prog = 1U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__apb_st))) {
        vlSelfRef.__PVT__apb_st_nxt = 1U;
        vlSelfRef.__PVT__PREADY_prog = 1U;
    }
}
