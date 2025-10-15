// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_sram_init__Sa.h"

VL_INLINE_OPT void Vsig_topology_top_sig_sram_init__Sa___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init__0(Vsig_topology_top_sig_sram_init__Sa* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_sram_init__Sa___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__sram_ptr_o = vlSelfRef.__PVT__sram_ptr_o;
    vlSelfRef.__Vdly__sram_init_state = vlSelfRef.__PVT__sram_init_state;
    vlSelfRef.__Vdly__sram_init_complete_o = vlSelfRef.__PVT__sram_init_complete_o;
    vlSelfRef.__Vdly__sram_init_state = ((IData)(vlSelfRef.__PVT__rst_n_i) 
                                         && (IData)(vlSelfRef.__PVT__sram_init_state_nxt));
    if (vlSelfRef.__PVT__rst_n_i) {
        if (vlSelfRef.__PVT__sram_ptr_hit_max_value) {
            vlSelfRef.__Vdly__sram_ptr_o = vlSelfRef.__PVT__sram_ptr_o;
            vlSelfRef.__Vdly__sram_init_complete_o = 1U;
        } else {
            vlSelfRef.__Vdly__sram_ptr_o = (0x3ffU 
                                            & ((IData)(vlSelfRef.__PVT__sram_init_en_o)
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__sram_ptr_o))
                                                : (IData)(vlSelfRef.__PVT__sram_ptr_o)));
        }
    } else {
        vlSelfRef.__Vdly__sram_ptr_o = 0U;
        vlSelfRef.__Vdly__sram_init_complete_o = 0U;
    }
    vlSelfRef.__PVT__sram_init_state = vlSelfRef.__Vdly__sram_init_state;
    vlSelfRef.__PVT__sram_init_complete_o = vlSelfRef.__Vdly__sram_init_complete_o;
    vlSelfRef.__PVT__sram_ptr_o = vlSelfRef.__Vdly__sram_ptr_o;
    vlSelfRef.__Vdly__sram_init_en_o = vlSelfRef.__PVT__sram_init_en_o;
    vlSelfRef.__PVT__sram_init_state_nxt = vlSelfRef.__PVT__sram_init_state;
    if (vlSelfRef.__PVT__sram_init_state) {
        if (vlSelfRef.__PVT__sram_init_state) {
            if (vlSelfRef.__PVT__sram_init_complete_o) {
                vlSelfRef.__PVT__sram_init_state_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__sram_init_state_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__sram_init_state_nxt = (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__sram_init_complete_o)));
    }
    vlSelfRef.__PVT__sram_ptr_hit_max_value = (0x3ffU 
                                               == (IData)(vlSelfRef.__PVT__sram_ptr_o));
    vlSelfRef.__Vdly__sram_init_en_o = ((IData)(vlSelfRef.__PVT__rst_n_i) 
                                        && (IData)(vlSelfRef.__PVT__sram_init_en_nxt));
    vlSelfRef.__PVT__sram_init_en_o = vlSelfRef.__Vdly__sram_init_en_o;
    vlSelfRef.__PVT__sram_init_en_nxt = vlSelfRef.__PVT__sram_init_en_o;
    if (vlSelfRef.__PVT__sram_init_state) {
        if (vlSelfRef.__PVT__sram_init_state) {
            if (vlSelfRef.__PVT__sram_ptr_hit_max_value) {
                vlSelfRef.__PVT__sram_init_en_nxt = 0U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__sram_init_complete_o)))) {
        vlSelfRef.__PVT__sram_init_en_nxt = 1U;
    }
}
