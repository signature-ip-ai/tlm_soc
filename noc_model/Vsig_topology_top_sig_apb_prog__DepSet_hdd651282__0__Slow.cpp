// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_apb_prog.h"

VL_ATTR_COLD void Vsig_topology_top_sig_apb_prog___eval_initial__TOP__sig_topology_top__i_sig_apb_prog(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___eval_initial__TOP__sig_topology_top__i_sig_apb_prog\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PSLVERR_prog = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_apb_prog___stl_sequent__TOP__sig_topology_top__i_sig_apb_prog__0(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___stl_sequent__TOP__sig_topology_top__i_sig_apb_prog__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg_address_prog = vlSelfRef.__PVT__PADDR_prog;
    vlSelfRef.__PVT__reg_wrstrb_prog = vlSelfRef.__PVT__PSTRB_prog;
    vlSelfRef.__PVT__reg_wrdata_prog = vlSelfRef.__PVT__PWDATA_prog;
}

VL_ATTR_COLD void Vsig_topology_top_sig_apb_prog___stl_sequent__TOP__sig_topology_top__i_sig_apb_prog__1(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___stl_sequent__TOP__sig_topology_top__i_sig_apb_prog__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_apb_prog___ctor_var_reset(Vsig_topology_top_sig_apb_prog* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_apb_prog___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__PCLK_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8104985963892920610ull);
    vlSelf->__PVT__PRESETn_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6230616544574779527ull);
    vlSelf->__PVT__PADDR_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14704174210238913493ull);
    vlSelf->__PVT__PSEL_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15936286226652394475ull);
    vlSelf->__PVT__PENABLE_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1475247925059085336ull);
    vlSelf->__PVT__PWRITE_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18321884463666558778ull);
    vlSelf->__PVT__PWDATA_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8915447913214836150ull);
    vlSelf->__PVT__PSTRB_prog = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17622495250906810659ull);
    vlSelf->__PVT__PREADY_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10144761143080778533ull);
    vlSelf->__PVT__PRDATA_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2338494102912948993ull);
    vlSelf->__PVT__PSLVERR_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 450623240131851891ull);
    vlSelf->__PVT__reg_wren_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7786184497976211995ull);
    vlSelf->__PVT__reg_address_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12275681853826624396ull);
    vlSelf->__PVT__reg_wrdata_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3757935861495027888ull);
    vlSelf->__PVT__reg_wrstrb_prog = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12837608835784584698ull);
    vlSelf->__PVT__wrdata_rdy_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12237348272837384244ull);
    vlSelf->__PVT__reg_rden_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7829053783300692125ull);
    vlSelf->__PVT__reg_rddata_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16911108032389899917ull);
    vlSelf->__PVT__reg_rddata_valid_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8204230655296286855ull);
    vlSelf->__PVT__apb_st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4086833121681689915ull);
    vlSelf->__PVT__apb_st_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7688461616786236819ull);
    vlSelf->__PVT__PRDATA_prog_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10350186966725942757ull);
    vlSelf->__Vdly__apb_st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2257008070105204196ull);
    vlSelf->__Vdly__PRDATA_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8692002085357454795ull);
}
