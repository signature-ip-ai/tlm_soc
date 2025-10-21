// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_sram_model__Fa_FB45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__ram__v0 = 0U;
    if (vlSelfRef.__PVT__wren) {
        VL_ASSIGN_W(69,vlSelfRef.__VdlyVal__ram__v0, vlSelfRef.__PVT__wrdata);
        vlSelfRef.__VdlyDim0__ram__v0 = vlSelfRef.__PVT__wrptr;
        vlSelfRef.__VdlySet__ram__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__rddata);
    if (vlSelfRef.__PVT__rden) {
        VL_ASSIGN_W(69,vlSelfRef.__Vdly__rddata, vlSelfRef.__PVT__ram
                    [vlSelfRef.__PVT__rdptr]);
    }
    VL_ASSIGN_W(69,vlSelfRef.__PVT__rddata, vlSelfRef.__Vdly__rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2(Vsig_topology_top_sig_sram_model__Fa_FB45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_sram_model__Fa_FB45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__sig_sram_valid_tag_data__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ram__v0) {
        VL_ASSIGN_W(69,vlSelfRef.__PVT__ram[vlSelfRef.__VdlyDim0__ram__v0], vlSelfRef.__VdlyVal__ram__v0);
    }
}
