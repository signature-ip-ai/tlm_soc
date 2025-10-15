// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface___ctor_var_reset(Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clr_collnreg_sending_ini = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2021161492290688597ull);
    vlSelf->__PVT__atom_done = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3682312012905009868ull);
    vlSelf->__PVT__need_trsf = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5594247878706969198ull);
    vlSelf->__PVT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__dat, __VscopeHash, 9837207709914848172ull);
    vlSelf->__PVT__dat_be = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17117261657141130509ull);
    vlSelf->__PVT__txnid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15900677118656389850ull);
}
