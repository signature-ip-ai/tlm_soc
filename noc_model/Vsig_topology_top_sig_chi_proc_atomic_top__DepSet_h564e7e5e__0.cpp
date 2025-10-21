// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_proc_atomic_top.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__resetn_i 
        = vlSelfRef.__PVT__rstb_cc_clk_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__clk_i 
        = vlSelfRef.__PVT__cc_clk_i;
}

extern const VlWide<16>/*511:0*/ Vsig_topology_top__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__send_init_data = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_init_wr_flag_o;
    vlSelfRef.__PVT__send_res_data = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_res_wr_flag_o;
    vlSelfRef.__PVT__ap_in_ready = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__ready_o;
    vlSelfRef.__PVT__ap_out_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__valid_o;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__ap_dat_res_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_res_o);
    VL_SEL_WWII(512, 684, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
    if ((1U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((2U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0x80U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((3U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        if (vlSelfRef.__PVT__addr_is_aligned) {
            VL_ASSIGNSEL_WW(512,128,0U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        } else {
            VL_ASSIGNSEL_WW(512,128,0x80U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        }
    } else if ((4U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0x100U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((8U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((0xcU == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        if (vlSelfRef.__PVT__addr_is_aligned) {
            VL_ASSIGNSEL_WW(512,128,0x100U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        } else {
            VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        }
    }
    vlSelfRef.__PVT__ap_in_valid = 0U;
    vlSelfRef.__PVT__ap_out_ready = 0U;
    vlSelfRef.__PVT__clr_dat_rcvd = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf = 0U;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0ULL;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid = 0U;
    vlSelfRef.__PVT__reg_meta_out = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini = 0U;
    vlSelfRef.__PVT__clr_collnreg_sending_ini_n = vlSelfRef.__PVT__clr_collnreg_sending_ini;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__atom_proc_state_c)) 
               | (1U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
              | (2U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
             | (3U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
            | (4U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
           | (5U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
          | (6U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
         | (7U == (IData)(vlSelfRef.__PVT__atom_proc_state_c)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 0U;
            vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 0U;
            if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid))) {
                vlSelfRef.__PVT__atom_proc_state_n = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 1U;
            if (((IData)(vlSelfRef.__PVT__dat_init_rcvd) 
                 & (IData)(vlSelfRef.__PVT__dat_txn_rcvd))) {
                vlSelfRef.__PVT__atom_proc_state_n = 2U;
                vlSelfRef.__PVT__clr_dat_rcvd = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 2U;
            vlSelfRef.__PVT__ap_in_valid = 1U;
            if (vlSelfRef.__PVT__ap_in_ready) {
                vlSelfRef.__PVT__atom_proc_state_n = 3U;
                vlSelfRef.__PVT__reg_meta_out = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 3U;
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready) {
                vlSelfRef.__PVT__ap_out_ready = 1U;
                if (vlSelfRef.__PVT__ap_out_valid) {
                    VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done);
                    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid 
                        = (0xfffU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0U, 12));
                    if (VL_LIKELY((VL_ONEHOT_I(VL_CONCAT_III(4,2,2, 
                                                             VL_CONCAT_III(2,1,1, 
                                                                           (1U 
                                                                            & ((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                                                               & (~ (IData)(vlSelfRef.__PVT__send_init_data)))), 
                                                                           ((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                                                            & (IData)(vlSelfRef.__PVT__send_init_data))), 
                                                             VL_CONCAT_III(2,1,1, 
                                                                           ((IData)(vlSelfRef.__PVT__send_res_data) 
                                                                            & (~ (IData)(vlSelfRef.__PVT__send_init_data))), 
                                                                           ((IData)(vlSelfRef.__PVT__send_res_data) 
                                                                            & (IData)(vlSelfRef.__PVT__send_init_data)))))))) {
                        if (((IData)(vlSelfRef.__PVT__send_res_data) 
                             & (IData)(vlSelfRef.__PVT__send_init_data))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 4U;
                            VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                            VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__dat_res_full);
                            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                            vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                        } else if (((IData)(vlSelfRef.__PVT__send_res_data) 
                                    & (~ (IData)(vlSelfRef.__PVT__send_init_data)))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 5U;
                            VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                            VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__dat_res_full);
                            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                            vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                        } else if (((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                    & (IData)(vlSelfRef.__PVT__send_init_data))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 4U;
                            if ((1U & VL_BITSEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 4U))) {
                                VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                                VL_SEL_WWII(512, 684, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
                                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                                vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                            }
                        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                          & (~ (IData)(vlSelfRef.__PVT__send_init_data))))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 5U;
                            if ((1U & VL_BITSEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 4U))) {
                                VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                                VL_SEL_WWII(512, 684, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
                                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                                vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                            }
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: sig_chi_proc_atomic_top.sv:187: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_chi_proc_atomic_0.atom_proc_states_cmb: 'unique if' statement violated\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_chi_proc_atomic_top.sv", 187, "");
                    }
                }
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 4U;
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready) {
                vlSelfRef.__PVT__atom_proc_state_n = 0U;
                VL_ASSIGNBIT_IO(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done);
                VL_ASSIGNBIT_IO(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid 
                    = (0xfffU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0xcU, 12));
                VL_SEL_WWII(512, 684, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini 
                    = vlSelfRef.__PVT__clr_collnreg_sending_ini;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 5U;
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready) {
                vlSelfRef.__PVT__atom_proc_state_n = 0U;
                VL_ASSIGNBIT_IO(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done);
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid 
                    = (0xfffU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0xcU, 12));
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini 
                    = vlSelfRef.__PVT__clr_collnreg_sending_ini;
            }
        } else {
            vlSelfRef.__PVT__atom_proc_state_n = 0U;
        }
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__valid_i 
        = vlSelfRef.__PVT__ap_in_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__ready_i 
        = vlSelfRef.__PVT__ap_out_ready;
}

extern const VlWide<8>/*255:0*/ Vsig_topology_top__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_ASSIGNSEL_II(4,2,0U, vlSelfRef.__PVT__res_idx, 
                    VL_CONCAT_III(2,1,1, VL_REDOR_I(
                                                    (0xffffU 
                                                     & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x10U, 16))), 
                                  VL_REDOR_I((0xffffU 
                                              & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0U, 16)))));
    VL_ASSIGNSEL_II(4,2,2U, vlSelfRef.__PVT__res_idx, 
                    VL_CONCAT_III(2,1,1, VL_REDOR_I(
                                                    (0xffffU 
                                                     & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x30U, 16))), 
                                  VL_REDOR_I((0xffffU 
                                              & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x20U, 16)))));
    VL_ASSIGN_W(256,vlSelfRef.__PVT__aligned_dat_txn, Vsig_topology_top__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.__PVT__aligned_dat_txn_be = 0U;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 0U) 
               | VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 1U)))) {
        VL_SEL_WWII(128, 512, __Vtemp_1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0U, 128);
        VL_ASSIGNSEL_WW(256,128,0U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_1);
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0U, 16)));
        VL_SEL_WWII(128, 512, __Vtemp_2, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0x80U, 128);
        VL_ASSIGNSEL_WW(256,128,0x80U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_2);
        VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x10U, 16)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 2U) 
               | VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 3U)))) {
        VL_SEL_WWII(128, 512, __Vtemp_3, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0x100U, 128);
        VL_ASSIGNSEL_WW(256,128,0U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_3);
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x20U, 16)));
        VL_SEL_WWII(128, 512, __Vtemp_4, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0x180U, 128);
        VL_ASSIGNSEL_WW(256,128,0x80U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_4);
        VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x30U, 16)));
    }
}

extern const VlWide<26>/*831:0*/ Vsig_topology_top__ConstPool__CONST_hab1519b0_0;

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<9>/*287:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    // Body
    vlSelfRef.__Vdly__atom_proc_state_c = vlSelfRef.__PVT__atom_proc_state_c;
    vlSelfRef.__Vdly__clr_collnreg_sending_ini = vlSelfRef.__PVT__clr_collnreg_sending_ini;
    vlSelfRef.__Vdly__dat_init_rcvd = vlSelfRef.__PVT__dat_init_rcvd;
    vlSelfRef.__Vdly__dat_txn_rcvd = vlSelfRef.__PVT__dat_txn_rcvd;
    VL_ASSIGN_W(684,vlSelfRef.__Vdly__ap_data_out, vlSelfRef.__PVT__ap_data_out);
    vlSelfRef.__Vdly__atom_proc_state_c = ((IData)(vlSelfRef.__PVT__rstb_cc_clk_i)
                                            ? (IData)(vlSelfRef.__PVT__atom_proc_state_n)
                                            : 0U);
    vlSelfRef.__Vdly__clr_collnreg_sending_ini = ((IData)(vlSelfRef.__PVT__rstb_cc_clk_i) 
                                                  && (IData)(vlSelfRef.__PVT__clr_collnreg_sending_ini_n));
    if (vlSelfRef.__PVT__rstb_cc_clk_i) {
        if (vlSelfRef.__PVT__clr_dat_rcvd) {
            vlSelfRef.__Vdly__dat_init_rcvd = 0U;
            vlSelfRef.__Vdly__dat_txn_rcvd = 0U;
        } else {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init_valid) {
                vlSelfRef.__Vdly__dat_init_rcvd = 1U;
            }
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_valid) {
                vlSelfRef.__Vdly__dat_txn_rcvd = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__dat_init_rcvd = 0U;
        vlSelfRef.__Vdly__dat_txn_rcvd = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk_i) {
        if (((IData)(vlSelfRef.__PVT__ap_out_valid) 
             & (IData)(vlSelfRef.__PVT__ap_out_ready))) {
            VL_CONCAT_WWI(144,128,16, __Vtemp_1, vlSelfRef.__PVT__ap_dat_res_out, 
                          (0xffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__ap_dat_be_out, 0U, 16)));
            VL_ASSIGNSEL_WW(684,144,0x1cU, vlSelfRef.__Vdly__ap_data_out, __Vtemp_1);
        }
        if (vlSelfRef.__PVT__reg_meta_out) {
            VL_ASSIGNSEL_WI(684,24,0U, vlSelfRef.__Vdly__ap_data_out, 
                            (0xffffffU & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0U, 24)));
            VL_SEL_WWII(512, 805, __Vtemp_2, vlSelfRef.__PVT__ap_data_in, 5U, 512);
            VL_ASSIGNSEL_WW(684,512,0xacU, vlSelfRef.__Vdly__ap_data_out, __Vtemp_2);
            VL_ASSIGNSEL_WI(684,4,0x18U, vlSelfRef.__Vdly__ap_data_out, 
                            (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
        }
    } else {
        VL_CONST_W_1X(144,__Vtemp_3,0x00000000);
        VL_ASSIGNSEL_WW(684,144,0x1cU, vlSelfRef.__Vdly__ap_data_out, __Vtemp_3);
        VL_ASSIGNSEL_WI(684,24,0U, vlSelfRef.__Vdly__ap_data_out, 0U);
        VL_ASSIGNSEL_WW(684,512,0xacU, vlSelfRef.__Vdly__ap_data_out, Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
        VL_ASSIGNSEL_WI(684,4,0x18U, vlSelfRef.__Vdly__ap_data_out, 0U);
    }
    vlSelfRef.__PVT__atom_proc_state_c = vlSelfRef.__Vdly__atom_proc_state_c;
    vlSelfRef.__PVT__clr_collnreg_sending_ini = vlSelfRef.__Vdly__clr_collnreg_sending_ini;
    vlSelfRef.__PVT__dat_init_rcvd = vlSelfRef.__Vdly__dat_init_rcvd;
    vlSelfRef.__PVT__dat_txn_rcvd = vlSelfRef.__Vdly__dat_txn_rcvd;
    VL_ASSIGN_W(684,vlSelfRef.__PVT__ap_data_out, vlSelfRef.__Vdly__ap_data_out);
    VL_ASSIGN_W(805,vlSelfRef.__Vdly__ap_data_in, vlSelfRef.__PVT__ap_data_in);
    VL_ASSIGN_W(87,vlSelfRef.__Vdly__ap_meta_in, vlSelfRef.__PVT__ap_meta_in);
    if (vlSelfRef.__PVT__rstb_cc_clk_i) {
        if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid))) {
            VL_ASSIGNSEL_WQ(87,63,0x18U, vlSelfRef.__Vdly__ap_meta_in, 
                            VL_CONCAT_QQI(63,52,11, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__addr, 
                                          VL_CONCAT_III(11,3,8, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__size), 
                                                        VL_CONCAT_III(8,7,1, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__opcode), (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__endian)))));
        }
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid), 1U))) {
            VL_ASSIGNSEL_WI(87,12,0xcU, vlSelfRef.__Vdly__ap_meta_in, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__txnid);
        }
        if ((1U & VL_BITSEL_IIII(2, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid), 0U))) {
            VL_ASSIGNSEL_WI(87,12,0U, vlSelfRef.__Vdly__ap_meta_in, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__txnid);
        }
        if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_valid) {
            VL_CONCAT_WWI(288,256,32, __Vtemp_4, vlSelfRef.__PVT__aligned_dat_txn, vlSelfRef.__PVT__aligned_dat_txn_be);
            VL_ASSIGNSEL_WW(805,288,0x205U, vlSelfRef.__Vdly__ap_data_in, __Vtemp_4);
            VL_ASSIGNSEL_WI(805,4,0U, vlSelfRef.__Vdly__ap_data_in, vlSelfRef.__PVT__res_idx);
        }
        if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init_valid) {
            VL_CONCAT_WWI(513,512,1, __Vtemp_5, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_init_dirty));
            VL_ASSIGNSEL_WW(805,513,4U, vlSelfRef.__Vdly__ap_data_in, __Vtemp_5);
        }
    } else {
        VL_CONST_W_1X(87,vlSelfRef.__Vdly__ap_meta_in,0x3e000000);
        VL_ASSIGN_W(805,vlSelfRef.__Vdly__ap_data_in, Vsig_topology_top__ConstPool__CONST_hab1519b0_0);
    }
    VL_ASSIGN_W(805,vlSelfRef.__PVT__ap_data_in, vlSelfRef.__Vdly__ap_data_in);
    VL_ASSIGN_W(87,vlSelfRef.__PVT__ap_meta_in, vlSelfRef.__Vdly__ap_meta_in);
    VL_SEL_WWII(256, 805, vlSelfRef.__Vcellinp__u_sig_ap_top__dat_txn_i, vlSelfRef.__PVT__ap_data_in, 0x225U, 256);
    vlSelfRef.__Vcellinp__u_sig_ap_top__atom_be_i = 
        VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0x205U, 32);
    vlSelfRef.__Vcellinp__u_sig_ap_top__atom_is_big_endian_i 
        = (1U & VL_BITSEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x18U));
    vlSelfRef.__Vcellinp__u_sig_ap_top__atom_size_i 
        = (7U & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x20U, 3));
    vlSelfRef.__Vcellinp__u_sig_ap_top__atom_addr_i 
        = (0xfffffffffffffULL & VL_SEL_QWII(87, vlSelfRef.__PVT__ap_meta_in, 0x23U, 52));
    vlSelfRef.__Vcellinp__u_sig_ap_top__atom_op_i = 
        (0x7fU & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x19U, 7));
    vlSelfRef.__PVT__addr_is_aligned = ((((((1U == 
                                             (7U & 
                                              VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x20U, 3))) 
                                            & (~ VL_BITSEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x23U))) 
                                           | ((2U == 
                                               (7U 
                                                & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x20U, 3))) 
                                              & (0U 
                                                 == 
                                                 (3U 
                                                  & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x23U, 2))))) 
                                          | ((3U == 
                                              (7U & 
                                               VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x20U, 3))) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x23U, 3))))) 
                                         | ((4U == 
                                             (7U & 
                                              VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x20U, 3))) 
                                            & (0U == 
                                               (0xfU 
                                                & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x23U, 4))))) 
                                        | ((5U == (7U 
                                                   & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x20U, 3))) 
                                           & (0U == 
                                              (0x1fU 
                                               & VL_SEL_IWII(87, vlSelfRef.__PVT__ap_meta_in, 0x23U, 5)))));
    VL_ASSIGN_W(256,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_txn_i, vlSelfRef.__Vcellinp__u_sig_ap_top__dat_txn_i);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__atom_be_i 
        = vlSelfRef.__Vcellinp__u_sig_ap_top__atom_be_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__atom_is_big_endian_i 
        = vlSelfRef.__Vcellinp__u_sig_ap_top__atom_is_big_endian_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__atom_size_i 
        = vlSelfRef.__Vcellinp__u_sig_ap_top__atom_size_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__atom_addr_i 
        = vlSelfRef.__Vcellinp__u_sig_ap_top__atom_addr_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__atom_op_i 
        = vlSelfRef.__Vcellinp__u_sig_ap_top__atom_op_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__addr_is_aligned_i 
        = vlSelfRef.__PVT__addr_is_aligned;
    VL_SEL_WWII(128, 805, __Vtemp_6, vlSelfRef.__PVT__ap_data_in, 5U, 128);
    VL_SEL_WWII(128, 805, __Vtemp_7, vlSelfRef.__PVT__ap_data_in, 0x85U, 128);
    VL_SEL_WWII(128, 805, __Vtemp_8, vlSelfRef.__PVT__ap_data_in, 5U, 128);
    VL_SEL_WWII(128, 805, __Vtemp_9, vlSelfRef.__PVT__ap_data_in, 0x85U, 128);
    VL_COND_WIWW(128, __Vtemp_10, (IData)(vlSelfRef.__PVT__addr_is_aligned), __Vtemp_8, __Vtemp_9);
    VL_SEL_WWII(128, 805, __Vtemp_11, vlSelfRef.__PVT__ap_data_in, 0x105U, 128);
    VL_SEL_WWII(128, 805, __Vtemp_12, vlSelfRef.__PVT__ap_data_in, 0x185U, 128);
    VL_SEL_WWII(128, 805, __Vtemp_13, vlSelfRef.__PVT__ap_data_in, 0x105U, 128);
    VL_SEL_WWII(128, 805, __Vtemp_14, vlSelfRef.__PVT__ap_data_in, 0x185U, 128);
    VL_COND_WIWW(128, __Vtemp_15, (IData)(vlSelfRef.__PVT__addr_is_aligned), __Vtemp_13, __Vtemp_14);
    VL_SEL_WWII(128, 805, __Vtemp_16, vlSelfRef.__PVT__ap_data_in, 5U, 128);
    __Vtemp_17 = (0xcU == (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
    VL_COND_WIWW(128, __Vtemp_18, __Vtemp_17, __Vtemp_15, __Vtemp_16);
    __Vtemp_19 = (8U == (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
    VL_COND_WIWW(128, __Vtemp_20, __Vtemp_19, __Vtemp_12, __Vtemp_18);
    __Vtemp_21 = (4U == (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
    VL_COND_WIWW(128, __Vtemp_22, __Vtemp_21, __Vtemp_11, __Vtemp_20);
    __Vtemp_23 = (3U == (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
    VL_COND_WIWW(128, __Vtemp_24, __Vtemp_23, __Vtemp_10, __Vtemp_22);
    __Vtemp_25 = (2U == (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
    VL_COND_WIWW(128, __Vtemp_26, __Vtemp_25, __Vtemp_7, __Vtemp_24);
    __Vtemp_27 = (1U == (0xfU & VL_SEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 0U, 4)));
    VL_COND_WIWW(128, vlSelfRef.__PVT__aligned_dat_ini, __Vtemp_27, __Vtemp_6, __Vtemp_26);
    VL_ASSIGN_W(128,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_init_i, vlSelfRef.__PVT__aligned_dat_ini);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__1(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ap_dat_be_out = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__bytemask_o;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__send_init_data = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_init_wr_flag_o;
    vlSelfRef.__PVT__send_res_data = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_res_wr_flag_o;
    vlSelfRef.__PVT__ap_in_ready = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__ready_o;
    vlSelfRef.__PVT__ap_out_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__valid_o;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__ap_dat_res_out, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__dat_res_o);
    VL_SEL_WWII(512, 684, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
    if ((1U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((2U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0x80U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((3U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        if (vlSelfRef.__PVT__addr_is_aligned) {
            VL_ASSIGNSEL_WW(512,128,0U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        } else {
            VL_ASSIGNSEL_WW(512,128,0x80U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        }
    } else if ((4U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0x100U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((8U == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
    } else if ((0xcU == (0xfU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0x18U, 4)))) {
        if (vlSelfRef.__PVT__addr_is_aligned) {
            VL_ASSIGNSEL_WW(512,128,0x100U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        } else {
            VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__dat_res_full, vlSelfRef.__PVT__ap_dat_res_out);
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__1(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ap_in_valid = 0U;
    vlSelfRef.__PVT__ap_out_ready = 0U;
    vlSelfRef.__PVT__clr_dat_rcvd = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf = 0U;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0ULL;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid = 0U;
    vlSelfRef.__PVT__reg_meta_out = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini = 0U;
    vlSelfRef.__PVT__clr_collnreg_sending_ini_n = vlSelfRef.__PVT__clr_collnreg_sending_ini;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__atom_proc_state_c)) 
               | (1U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
              | (2U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
             | (3U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
            | (4U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
           | (5U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
          | (6U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) 
         | (7U == (IData)(vlSelfRef.__PVT__atom_proc_state_c)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 0U;
            vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 0U;
            if (VL_REDOR_I((IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid))) {
                vlSelfRef.__PVT__atom_proc_state_n = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 1U;
            if (((IData)(vlSelfRef.__PVT__dat_init_rcvd) 
                 & (IData)(vlSelfRef.__PVT__dat_txn_rcvd))) {
                vlSelfRef.__PVT__atom_proc_state_n = 2U;
                vlSelfRef.__PVT__clr_dat_rcvd = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 2U;
            vlSelfRef.__PVT__ap_in_valid = 1U;
            if (vlSelfRef.__PVT__ap_in_ready) {
                vlSelfRef.__PVT__atom_proc_state_n = 3U;
                vlSelfRef.__PVT__reg_meta_out = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 3U;
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready) {
                vlSelfRef.__PVT__ap_out_ready = 1U;
                if (vlSelfRef.__PVT__ap_out_valid) {
                    VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done);
                    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid 
                        = (0xfffU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0U, 12));
                    if (VL_LIKELY((VL_ONEHOT_I(VL_CONCAT_III(4,2,2, 
                                                             VL_CONCAT_III(2,1,1, 
                                                                           (1U 
                                                                            & ((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                                                               & (~ (IData)(vlSelfRef.__PVT__send_init_data)))), 
                                                                           ((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                                                            & (IData)(vlSelfRef.__PVT__send_init_data))), 
                                                             VL_CONCAT_III(2,1,1, 
                                                                           ((IData)(vlSelfRef.__PVT__send_res_data) 
                                                                            & (~ (IData)(vlSelfRef.__PVT__send_init_data))), 
                                                                           ((IData)(vlSelfRef.__PVT__send_res_data) 
                                                                            & (IData)(vlSelfRef.__PVT__send_init_data)))))))) {
                        if (((IData)(vlSelfRef.__PVT__send_res_data) 
                             & (IData)(vlSelfRef.__PVT__send_init_data))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 4U;
                            VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                            VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__dat_res_full);
                            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                            vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                        } else if (((IData)(vlSelfRef.__PVT__send_res_data) 
                                    & (~ (IData)(vlSelfRef.__PVT__send_init_data)))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 5U;
                            VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                            VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__dat_res_full);
                            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                            vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                        } else if (((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                    & (IData)(vlSelfRef.__PVT__send_init_data))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 4U;
                            if ((1U & VL_BITSEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 4U))) {
                                VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                                VL_SEL_WWII(512, 684, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
                                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                                vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                            }
                        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__send_res_data)) 
                                          & (~ (IData)(vlSelfRef.__PVT__send_init_data))))) {
                            vlSelfRef.__PVT__atom_proc_state_n = 5U;
                            if ((1U & VL_BITSEL_IWII(805, vlSelfRef.__PVT__ap_data_in, 4U))) {
                                VL_ASSIGNBIT_IO(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                                VL_SEL_WWII(512, 684, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
                                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                                vlSelfRef.__PVT__clr_collnreg_sending_ini_n = 1U;
                            }
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: sig_chi_proc_atomic_top.sv:187: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_chi_proc_atomic_0.atom_proc_states_cmb: 'unique if' statement violated\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_chi_proc_atomic_top.sv", 187, "");
                    }
                }
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 4U;
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready) {
                vlSelfRef.__PVT__atom_proc_state_n = 0U;
                VL_ASSIGNBIT_IO(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done);
                VL_ASSIGNBIT_IO(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__need_trsf);
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid 
                    = (0xfffU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0xcU, 12));
                VL_SEL_WWII(512, 684, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat, vlSelfRef.__PVT__ap_data_out, 0xacU, 512);
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__dat_be = 0xffffffffffffffffULL;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini 
                    = vlSelfRef.__PVT__clr_collnreg_sending_ini;
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__atom_proc_state_c))) {
            vlSelfRef.__PVT__atom_proc_state_n = 5U;
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__ready) {
                vlSelfRef.__PVT__atom_proc_state_n = 0U;
                VL_ASSIGNBIT_IO(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__atom_done);
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__txnid 
                    = (0xfffU & VL_SEL_IWII(684, vlSelfRef.__PVT__ap_data_out, 0xcU, 12));
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_from_ap.__PVT__clr_collnreg_sending_ini 
                    = vlSelfRef.__PVT__clr_collnreg_sending_ini;
            }
        } else {
            vlSelfRef.__PVT__atom_proc_state_n = 0U;
        }
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__valid_i 
        = vlSelfRef.__PVT__ap_in_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top.__PVT__ready_i 
        = vlSelfRef.__PVT__ap_out_ready;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_proc_atomic_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__2(Vsig_topology_top_sig_chi_proc_atomic_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_proc_atomic_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_ASSIGNSEL_II(4,2,0U, vlSelfRef.__PVT__res_idx, 
                    VL_CONCAT_III(2,1,1, VL_REDOR_I(
                                                    (0xffffU 
                                                     & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x10U, 16))), 
                                  VL_REDOR_I((0xffffU 
                                              & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0U, 16)))));
    VL_ASSIGNSEL_II(4,2,2U, vlSelfRef.__PVT__res_idx, 
                    VL_CONCAT_III(2,1,1, VL_REDOR_I(
                                                    (0xffffU 
                                                     & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x30U, 16))), 
                                  VL_REDOR_I((0xffffU 
                                              & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x20U, 16)))));
    VL_ASSIGN_W(256,vlSelfRef.__PVT__aligned_dat_txn, Vsig_topology_top__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.__PVT__aligned_dat_txn_be = 0U;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 0U) 
               | VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 1U)))) {
        VL_SEL_WWII(128, 512, __Vtemp_1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0U, 128);
        VL_ASSIGNSEL_WW(256,128,0U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_1);
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0U, 16)));
        VL_SEL_WWII(128, 512, __Vtemp_2, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0x80U, 128);
        VL_ASSIGNSEL_WW(256,128,0x80U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_2);
        VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x10U, 16)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 2U) 
               | VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__res_idx), 3U)))) {
        VL_SEL_WWII(128, 512, __Vtemp_3, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0x100U, 128);
        VL_ASSIGNSEL_WW(256,128,0U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_3);
        VL_ASSIGNSEL_II(32,16,0U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x20U, 16)));
        VL_SEL_WWII(128, 512, __Vtemp_4, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn, 0x180U, 128);
        VL_ASSIGNSEL_WW(256,128,0x80U, vlSelfRef.__PVT__aligned_dat_txn, __Vtemp_4);
        VL_ASSIGNSEL_II(32,16,0x10U, vlSelfRef.__PVT__aligned_dat_txn_be, 
                        (0xffffU & VL_SEL_IQII(64, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__data_to_ap.__PVT__dat_txn_be, 0x30U, 16)));
    }
}
