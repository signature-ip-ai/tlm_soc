// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_proc_atomic_top.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_proc_atomic_top___ctor_var_reset(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6632358265600295717ull);
    vlSelf->__PVT__rstb_cc_clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11882622910903719866ull);
    vlSelf->__PVT__debug_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11753623590764697457ull);
    vlSelf->__PVT__atom_proc_state_c = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15681919490514208946ull);
    vlSelf->__PVT__atom_proc_state_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8495193725134730232ull);
    VL_SCOPED_RAND_RESET_W(87, vlSelf->__PVT__ap_meta_in, __VscopeHash, 1917826194622689014ull);
    VL_SCOPED_RAND_RESET_W(805, vlSelf->__PVT__ap_data_in, __VscopeHash, 12954863108649702055ull);
    VL_SCOPED_RAND_RESET_W(684, vlSelf->__PVT__ap_data_out, __VscopeHash, 7828767462226147359ull);
    vlSelf->__PVT__dat_init_rcvd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8333347810550520249ull);
    vlSelf->__PVT__dat_txn_rcvd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12240842205730336841ull);
    vlSelf->__PVT__clr_dat_rcvd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6001425486755829100ull);
    vlSelf->__PVT__ap_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5683958275269958087ull);
    vlSelf->__PVT__ap_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 360936009954907951ull);
    vlSelf->__PVT__ap_out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13591402699247213462ull);
    vlSelf->__PVT__ap_out_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199516582519952702ull);
    vlSelf->__PVT__dat_txn_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10597861257340885808ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__ap_dat_res_out, __VscopeHash, 715645499981206907ull);
    vlSelf->__PVT__ap_dat_be_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3284500757904246656ull);
    vlSelf->__PVT__send_res_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12235645057462637506ull);
    vlSelf->__PVT__send_init_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4835745792510339120ull);
    vlSelf->__PVT__addr_is_aligned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9821890561217769713ull);
    vlSelf->__PVT__reg_meta_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16475393817267383216ull);
    vlSelf->__PVT__res_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10874380639077251143ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__aligned_dat_txn, __VscopeHash, 8080552150754575347ull);
    vlSelf->__PVT__aligned_dat_txn_be = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13099178221277250817ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__aligned_dat_ini, __VscopeHash, 3319241090555655254ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__dat_res_full, __VscopeHash, 9191782040238275463ull);
    vlSelf->__PVT__clr_collnreg_sending_ini = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2021161492290688597ull);
    vlSelf->__PVT__clr_collnreg_sending_ini_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18005772654514359911ull);
    vlSelf->__Vcellinp__u_sig_ap_top__atom_be_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9351501655837567615ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__Vcellinp__u_sig_ap_top__dat_txn_i, __VscopeHash, 11390676353698912019ull);
    vlSelf->__Vcellinp__u_sig_ap_top__atom_is_big_endian_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16439783646079200034ull);
    vlSelf->__Vcellinp__u_sig_ap_top__atom_size_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8220747500914586353ull);
    vlSelf->__Vcellinp__u_sig_ap_top__atom_addr_i = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 3777055982238816715ull);
    vlSelf->__Vcellinp__u_sig_ap_top__atom_op_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12982920781548700630ull);
    vlSelf->__Vdly__atom_proc_state_c = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 669599473673357054ull);
    vlSelf->__Vdly__dat_init_rcvd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14540091190855513492ull);
    vlSelf->__Vdly__dat_txn_rcvd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14688390149658991863ull);
    VL_SCOPED_RAND_RESET_W(87, vlSelf->__Vdly__ap_meta_in, __VscopeHash, 17902078956359027209ull);
    VL_SCOPED_RAND_RESET_W(805, vlSelf->__Vdly__ap_data_in, __VscopeHash, 11521788354562820148ull);
    VL_SCOPED_RAND_RESET_W(684, vlSelf->__Vdly__ap_data_out, __VscopeHash, 18305625217858349785ull);
    vlSelf->__Vdly__clr_collnreg_sending_ini = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10301564004254297070ull);
}
