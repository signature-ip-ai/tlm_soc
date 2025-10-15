// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top___024root.h"

void Vsig_topology_top___024root___eval_triggers__ico(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_ico(Vsig_topology_top___024root* vlSelf);

bool Vsig_topology_top___024root___eval_phase__ico(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_phase__ico\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsig_topology_top___024root___eval_triggers__ico(vlSelf);
    vlSelfRef.__VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (vlSelfRef.__VicoExecute) {
        Vsig_topology_top___024root___eval_ico(vlSelf);
    }
    return (vlSelfRef.__VicoExecute);
}

void Vsig_topology_top___024root___eval_triggers__act__0(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_triggers__act__1(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_triggers__act__2(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_triggers__act__3(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_triggers__act__4(Vsig_topology_top___024root* vlSelf);

void Vsig_topology_top___024root___eval_triggers__act(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_triggers__act\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsig_topology_top___024root___eval_triggers__act__0(vlSelf);
    Vsig_topology_top___024root___eval_triggers__act__1(vlSelf);
    Vsig_topology_top___024root___eval_triggers__act__2(vlSelf);
    Vsig_topology_top___024root___eval_triggers__act__3(vlSelf);
    Vsig_topology_top___024root___eval_triggers__act__4(vlSelf);
}

void Vsig_topology_top___024root___eval_nba__0(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_nba__1(Vsig_topology_top___024root* vlSelf);
void Vsig_topology_top___024root___eval_nba__2(Vsig_topology_top___024root* vlSelf);

void Vsig_topology_top___024root___eval_nba(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_nba\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsig_topology_top___024root___eval_nba__0(vlSelf);
    Vsig_topology_top___024root___eval_nba__1(vlSelf);
    Vsig_topology_top___024root___eval_nba__2(vlSelf);
}

void Vsig_topology_top___024root___eval_act(Vsig_topology_top___024root* vlSelf);

bool Vsig_topology_top___024root___eval_phase__act(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_phase__act\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsig_topology_top___024root___eval_triggers__act(vlSelf);
    vlSelfRef.__VactExecute = vlSelfRef.__VactTriggered.any();
    if (vlSelfRef.__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsig_topology_top___024root___eval_act(vlSelf);
    }
    return (vlSelfRef.__VactExecute);
}

bool Vsig_topology_top___024root___eval_phase__nba(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_phase__nba\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (vlSelfRef.__VnbaExecute) {
        Vsig_topology_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (vlSelfRef.__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsig_topology_top___024root___dump_triggers__ico(Vsig_topology_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsig_topology_top___024root___dump_triggers__nba(Vsig_topology_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsig_topology_top___024root___dump_triggers__act(Vsig_topology_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsig_topology_top___024root___eval(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    vlSelfRef.__VicoContinue = 1U;
    while (vlSelfRef.__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsig_topology_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("sig_topology_top.sv", 16, "", "Input combinational region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VicoIterCount);
        vlSelfRef.__VicoIterCount = __Vtemp_1;
        vlSelfRef.__VicoContinue = 0U;
        if (Vsig_topology_top___024root___eval_phase__ico(vlSelf)) {
            vlSelfRef.__VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    vlSelfRef.__VnbaIterCount = 0U;
    vlSelfRef.__VnbaFirstIteration = 1U;
    vlSelfRef.__VnbaContinue = 1U;
    while (vlSelfRef.__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsig_topology_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sig_topology_top.sv", 16, "", "NBA region did not converge.");
        }
        __Vtemp_2 = ((IData)(1U) + vlSelfRef.__VnbaIterCount);
        vlSelfRef.__VnbaIterCount = __Vtemp_2;
        vlSelfRef.__VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactFirstIteration = 1U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsig_topology_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sig_topology_top.sv", 16, "", "Active region did not converge.");
            }
            __Vtemp_3 = ((IData)(1U) + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactIterCount = __Vtemp_3;
            vlSelfRef.__VactContinue = 0U;
            if (Vsig_topology_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
            vlSelfRef.__VactFirstIteration = 0U;
        }
        if (Vsig_topology_top___024root___eval_phase__nba(vlSelf)) {
            vlSelfRef.__VnbaContinue = 1U;
        }
        vlSelfRef.__VnbaFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
void Vsig_topology_top___024root___eval_debug_assertions(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___eval_debug_assertions\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
