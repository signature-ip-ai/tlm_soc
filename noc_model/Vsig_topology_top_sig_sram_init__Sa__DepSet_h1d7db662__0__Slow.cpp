// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_sram_init__Sa.h"

VL_ATTR_COLD void Vsig_topology_top_sig_sram_init__Sa___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init__0(Vsig_topology_top_sig_sram_init__Sa* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_sram_init__Sa___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vsig_topology_top_sig_sram_init__Sa___ctor_var_reset(Vsig_topology_top_sig_sram_init__Sa* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_sram_init__Sa___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16109589058913104882ull);
    vlSelf->__PVT__sram_init_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3155491837401559265ull);
    vlSelf->__PVT__sram_init_complete_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12376561296784486113ull);
    vlSelf->__PVT__sram_ptr_o = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17654452567724192235ull);
    vlSelf->__PVT__sram_init_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16746499936284752165ull);
    vlSelf->__PVT__sram_init_state_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15730288463937119009ull);
    vlSelf->__PVT__sram_init_en_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18162427161698630112ull);
    vlSelf->__PVT__sram_ptr_hit_max_value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5165030513530417175ull);
    vlSelf->__Vdly__sram_init_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2878324668724852186ull);
    vlSelf->__Vdly__sram_init_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 426995718025838639ull);
    vlSelf->__Vdly__sram_ptr_o = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16116118603198022263ull);
    vlSelf->__Vdly__sram_init_complete_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4746867396886583743ull);
}
