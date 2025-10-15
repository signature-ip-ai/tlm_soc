// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ap_opcode_decoder.h"

VL_INLINE_OPT void Vsig_topology_top_sig_ap_opcode_decoder___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_nxt = 0U;
    vlSelfRef.__PVT__dat_init_wr_flag_o = 0U;
    vlSelfRef.__PVT__dat_res_wr_flag_o = 0U;
    VL_CONST_W_1X(128,vlSelfRef.__PVT__dat_res_o,0x00000000);
    vlSelfRef.__PVT__bytemask_to_adder_o[1U] = 0U;
    vlSelfRef.__PVT__bytemask_to_adder_o[0U] = 0U;
    vlSelfRef.__PVT__alu_control_o = 0U;
    vlSelfRef.__PVT__ready_o = 0U;
    vlSelfRef.__PVT__valid_o = 0U;
    vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = vlSelfRef.__PVT__dat_init_wr_flag_reg;
    vlSelfRef.__PVT__dat_res_wr_flag_reg_nxt = vlSelfRef.__PVT__dat_res_wr_flag_reg;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_reg_nxt, vlSelfRef.__PVT__dat_init_reg);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_reg_nxt, vlSelfRef.__PVT__dat_txn_reg);
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_reg_nxt, vlSelfRef.__PVT__dat_res_reg);
    vlSelfRef.__PVT__atom_addr_reg_nxt = vlSelfRef.__PVT__atom_addr_reg;
    vlSelfRef.__PVT__atom_addr_upper_shift_nxt = vlSelfRef.__PVT__atom_addr_upper_shift;
    vlSelfRef.__PVT__atom_addr_bit_offset_nxt = vlSelfRef.__PVT__atom_addr_bit_offset;
    vlSelfRef.__PVT__atom_size_reg_nxt = vlSelfRef.__PVT__atom_size_reg;
    vlSelfRef.__PVT__atom_is_big_endian_reg_nxt = vlSelfRef.__PVT__atom_is_big_endian_reg;
    vlSelfRef.__PVT__atom_be_reg_nxt = vlSelfRef.__PVT__atom_be_reg;
    vlSelfRef.__PVT__atom_op_reg_nxt = vlSelfRef.__PVT__atom_op_reg;
    vlSelfRef.__PVT__addr_is_aligned_nxt = vlSelfRef.__PVT__addr_is_aligned_reg;
    vlSelfRef.__PVT__bytemask_aligned_nxt = vlSelfRef.__PVT__bytemask_aligned_reg;
    vlSelfRef.__PVT__bytemask_unaligned_nxt = vlSelfRef.__PVT__bytemask_unaligned_reg;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 1U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__atom_op_reg_nxt = vlSelfRef.__PVT__atom_op_i;
        vlSelfRef.__PVT__atom_addr_reg_nxt = vlSelfRef.__PVT__atom_addr_i;
        vlSelfRef.__PVT__atom_addr_upper_shift_nxt 
            = (1U & VL_BITSEL_IQII(52, vlSelfRef.__PVT__atom_addr_i, 4U));
        vlSelfRef.__PVT__atom_addr_bit_offset_nxt = 
            VL_CONCAT_III(7,4,3, (0xfU & VL_SEL_IQII(52, vlSelfRef.__PVT__atom_addr_i, 0U, 4)), 0U);
        vlSelfRef.__PVT__atom_be_reg_nxt = vlSelfRef.__PVT__atom_be_i;
        vlSelfRef.__PVT__atom_size_reg_nxt = vlSelfRef.__PVT__atom_size_i;
        vlSelfRef.__PVT__atom_is_big_endian_reg_nxt 
            = vlSelfRef.__PVT__atom_is_big_endian_i;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_reg_nxt, vlSelfRef.__PVT__dat_init_i);
        VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_reg_nxt, vlSelfRef.__PVT__dat_txn_i);
        vlSelfRef.__PVT__addr_is_aligned_nxt = vlSelfRef.__PVT__addr_is_aligned_i;
        vlSelfRef.__PVT__size_in_bytes = (0x3fU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__PVT__atom_size_i)));
        vlSelfRef.__PVT__half_of_size_in_bytes = (0x1fU 
                                                  & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__size_in_bytes), 1U, 5));
        vlSelfRef.__PVT__half_size_plus_unset_bits 
            = (0x3fU & (VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__half_of_size_in_bytes)) 
                        + VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__num_unset_bits))));
        vlSelfRef.__PVT__bytemask_aligned_nxt = (vlSelfRef.__PVT__atom_be_i 
                                                 & (~ 
                                                    (VL_SHIFTL_III(32,32,6, (IData)(1U), (IData)(vlSelfRef.__PVT__half_size_plus_unset_bits)) 
                                                     - (IData)(1U))));
        vlSelfRef.__PVT__bytemask_unaligned_nxt = (
                                                   (vlSelfRef.__PVT__atom_be_i 
                                                    >> (IData)(vlSelfRef.__PVT__half_of_size_in_bytes)) 
                                                   & (~ 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.__PVT__num_unset_bits)) 
                                                       - (IData)(1U))));
        vlSelfRef.__PVT__state_nxt = (((IData)(vlSelfRef.__PVT__valid_i) 
                                       & (5U == (7U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_i), 3U, 3))))
                                       ? 2U : (((IData)(vlSelfRef.__PVT__valid_i) 
                                                & (6U 
                                                   == 
                                                   (7U 
                                                    & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_i), 3U, 3))))
                                                ? 3U
                                                : (
                                                   (((IData)(vlSelfRef.__PVT__valid_i) 
                                                     & (0x39U 
                                                        == (IData)(vlSelfRef.__PVT__atom_op_i))) 
                                                    & (3U 
                                                       == (IData)(vlSelfRef.__PVT__dat_txn_en_i)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__valid_i) 
                                                     & (0x38U 
                                                        == (IData)(vlSelfRef.__PVT__atom_op_i)))
                                                     ? 5U
                                                     : 0U))));
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 0U;
        vlSelfRef.__PVT__bytemask_to_adder_o[0U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__bytemask_to_adder_o[1U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__alu_control_o = VL_EXTEND_II(4,3, 
                                                      (7U 
                                                       & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_reg), 0U, 3)));
        vlSelfRef.__PVT__state_nxt = 6U;
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 1U;
        vlSelfRef.__PVT__bytemask_to_adder_o[0U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__bytemask_to_adder_o[1U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__alu_control_o = (0xfU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_reg), 0U, 4));
        vlSelfRef.__PVT__state_nxt = 6U;
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 1U;
        vlSelfRef.__PVT__alu_control_o = 8U;
        vlSelfRef.__PVT__state_nxt = 6U;
        if (vlSelfRef.__PVT__addr_is_aligned_reg) {
            vlSelfRef.__PVT__bytemask_to_adder_o[0U] 
                = vlSelfRef.__PVT__bytemask_unaligned_reg;
            vlSelfRef.__PVT__bytemask_to_adder_o[1U] 
                = vlSelfRef.__PVT__bytemask_aligned_reg;
        } else {
            vlSelfRef.__PVT__bytemask_to_adder_o[0U] 
                = vlSelfRef.__PVT__bytemask_aligned_reg;
            vlSelfRef.__PVT__bytemask_to_adder_o[1U] 
                = vlSelfRef.__PVT__bytemask_unaligned_reg;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 1U;
        vlSelfRef.__PVT__alu_control_o = 0xcU;
        vlSelfRef.__PVT__bytemask_to_adder_o[0U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__bytemask_to_adder_o[1U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__state_nxt = 6U;
    } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__state_nxt = 7U;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_reg_nxt, vlSelfRef.__PVT__dat_res_from_adder_i);
        vlSelfRef.__PVT__dat_res_wr_flag_reg_nxt = vlSelfRef.__PVT__dat_res_wr_flag_i;
    } else if ((7U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        if (vlSelfRef.__PVT__ready_i) {
            vlSelfRef.__PVT__valid_o = 1U;
            VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_o, vlSelfRef.__PVT__dat_res_reg);
            vlSelfRef.__PVT__dat_res_wr_flag_o = vlSelfRef.__PVT__dat_res_wr_flag_reg;
            vlSelfRef.__PVT__dat_init_wr_flag_o = vlSelfRef.__PVT__dat_init_wr_flag_reg;
            vlSelfRef.__PVT__state_nxt = 0U;
        } else {
            vlSelfRef.__PVT__valid_o = 0U;
            vlSelfRef.__PVT__state_nxt = 7U;
        }
    }
    vlSelfRef.__PVT__bytemask_to_HN_reg_nxt = ((1U 
                                                & VL_BITSEL_IQII(52, vlSelfRef.__PVT__atom_addr_reg, 4U))
                                                ? VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__bytemask_to_adder_o
                                                                [0U], 0x10U)
                                                : vlSelfRef.__PVT__bytemask_to_adder_o
                                               [0U]);
}

extern const VlWide<8>/*255:0*/ Vsig_topology_top__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsig_topology_top_sig_ap_opcode_decoder___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__bytemask_to_HN_reg = vlSelfRef.__PVT__bytemask_to_HN_reg;
    vlSelfRef.__Vdly__bytemask_to_HN_o = vlSelfRef.__PVT__bytemask_to_HN_o;
    vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state;
    vlSelfRef.__Vdly__dat_init_wr_flag_reg = vlSelfRef.__PVT__dat_init_wr_flag_reg;
    vlSelfRef.__Vdly__dat_res_wr_flag_reg = vlSelfRef.__PVT__dat_res_wr_flag_reg;
    VL_ASSIGN_W(128,vlSelfRef.__Vdly__dat_res_reg, vlSelfRef.__PVT__dat_res_reg);
    vlSelfRef.__Vdly__atom_addr_reg = vlSelfRef.__PVT__atom_addr_reg;
    vlSelfRef.__Vdly__atom_be_reg = vlSelfRef.__PVT__atom_be_reg;
    vlSelfRef.__Vdly__atom_op_reg = vlSelfRef.__PVT__atom_op_reg;
    vlSelfRef.__Vdly__addr_is_aligned_reg = vlSelfRef.__PVT__addr_is_aligned_reg;
    vlSelfRef.__Vdly__bytemask_unaligned_reg = vlSelfRef.__PVT__bytemask_unaligned_reg;
    vlSelfRef.__Vdly__bytemask_aligned_reg = vlSelfRef.__PVT__bytemask_aligned_reg;
    VL_ASSIGN_W(128,vlSelfRef.__Vdly__dat_init_reg, vlSelfRef.__PVT__dat_init_reg);
    VL_ASSIGN_W(256,vlSelfRef.__Vdly__dat_txn_reg, vlSelfRef.__PVT__dat_txn_reg);
    vlSelfRef.__Vdly__atom_addr_upper_shift = vlSelfRef.__PVT__atom_addr_upper_shift;
    vlSelfRef.__Vdly__atom_is_big_endian_reg = vlSelfRef.__PVT__atom_is_big_endian_reg;
    vlSelfRef.__Vdly__atom_addr_bit_offset = vlSelfRef.__PVT__atom_addr_bit_offset;
    vlSelfRef.__Vdly__atom_size_reg = vlSelfRef.__PVT__atom_size_reg;
    if (vlSelfRef.__PVT__resetn_i) {
        vlSelfRef.__Vdly__state = vlSelfRef.__PVT__state_nxt;
        vlSelfRef.__Vdly__dat_init_wr_flag_reg = vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt;
        vlSelfRef.__Vdly__dat_res_wr_flag_reg = vlSelfRef.__PVT__dat_res_wr_flag_reg_nxt;
        VL_ASSIGN_W(128,vlSelfRef.__Vdly__dat_init_reg, vlSelfRef.__PVT__dat_init_reg_nxt);
        VL_ASSIGN_W(256,vlSelfRef.__Vdly__dat_txn_reg, vlSelfRef.__PVT__dat_txn_reg_nxt);
        VL_ASSIGN_W(128,vlSelfRef.__Vdly__dat_res_reg, vlSelfRef.__PVT__dat_res_reg_nxt);
        vlSelfRef.__Vdly__atom_addr_reg = vlSelfRef.__PVT__atom_addr_reg_nxt;
        vlSelfRef.__Vdly__atom_addr_upper_shift = vlSelfRef.__PVT__atom_addr_upper_shift_nxt;
        vlSelfRef.__Vdly__atom_addr_bit_offset = vlSelfRef.__PVT__atom_addr_bit_offset_nxt;
        vlSelfRef.__Vdly__atom_size_reg = vlSelfRef.__PVT__atom_size_reg_nxt;
        vlSelfRef.__Vdly__atom_is_big_endian_reg = vlSelfRef.__PVT__atom_is_big_endian_reg_nxt;
        vlSelfRef.__Vdly__atom_be_reg = vlSelfRef.__PVT__atom_be_reg_nxt;
        vlSelfRef.__Vdly__atom_op_reg = vlSelfRef.__PVT__atom_op_reg_nxt;
        vlSelfRef.__Vdly__bytemask_to_HN_reg = vlSelfRef.__PVT__bytemask_to_HN_reg_nxt;
        vlSelfRef.__Vdly__bytemask_to_HN_o = vlSelfRef.__PVT__bytemask_to_HN_reg;
        vlSelfRef.__Vdly__addr_is_aligned_reg = vlSelfRef.__PVT__addr_is_aligned_nxt;
        vlSelfRef.__Vdly__bytemask_unaligned_reg = vlSelfRef.__PVT__bytemask_unaligned_nxt;
        vlSelfRef.__Vdly__bytemask_aligned_reg = vlSelfRef.__PVT__bytemask_aligned_nxt;
    } else {
        vlSelfRef.__Vdly__state = 0U;
        vlSelfRef.__Vdly__dat_init_wr_flag_reg = 0U;
        vlSelfRef.__Vdly__dat_res_wr_flag_reg = 0U;
        VL_CONST_W_1X(128,vlSelfRef.__Vdly__dat_init_reg,0x00000000);
        VL_ASSIGN_W(256,vlSelfRef.__Vdly__dat_txn_reg, Vsig_topology_top__ConstPool__CONST_h9e67c271_0);
        VL_CONST_W_1X(128,vlSelfRef.__Vdly__dat_res_reg,0x00000000);
        vlSelfRef.__Vdly__atom_addr_reg = 0ULL;
        vlSelfRef.__Vdly__atom_addr_upper_shift = 0U;
        vlSelfRef.__Vdly__atom_addr_bit_offset = 0U;
        vlSelfRef.__Vdly__atom_size_reg = 0U;
        vlSelfRef.__Vdly__atom_is_big_endian_reg = 0U;
        vlSelfRef.__Vdly__atom_be_reg = 0U;
        vlSelfRef.__Vdly__atom_op_reg = 0x1fU;
        vlSelfRef.__Vdly__bytemask_to_HN_reg = 0U;
        vlSelfRef.__Vdly__bytemask_to_HN_o = 0U;
        vlSelfRef.__Vdly__addr_is_aligned_reg = 0U;
        vlSelfRef.__Vdly__bytemask_unaligned_reg = 0U;
        vlSelfRef.__Vdly__bytemask_aligned_reg = 0U;
    }
    vlSelfRef.__PVT__bytemask_to_HN_reg = vlSelfRef.__Vdly__bytemask_to_HN_reg;
    vlSelfRef.__PVT__bytemask_to_HN_o = vlSelfRef.__Vdly__bytemask_to_HN_o;
    vlSelfRef.__PVT__state = vlSelfRef.__Vdly__state;
    vlSelfRef.__PVT__dat_init_wr_flag_reg = vlSelfRef.__Vdly__dat_init_wr_flag_reg;
    vlSelfRef.__PVT__dat_res_wr_flag_reg = vlSelfRef.__Vdly__dat_res_wr_flag_reg;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_reg, vlSelfRef.__Vdly__dat_res_reg);
    vlSelfRef.__PVT__atom_addr_reg = vlSelfRef.__Vdly__atom_addr_reg;
    vlSelfRef.__PVT__atom_be_reg = vlSelfRef.__Vdly__atom_be_reg;
    vlSelfRef.__PVT__atom_op_reg = vlSelfRef.__Vdly__atom_op_reg;
    vlSelfRef.__PVT__addr_is_aligned_reg = vlSelfRef.__Vdly__addr_is_aligned_reg;
    vlSelfRef.__PVT__bytemask_unaligned_reg = vlSelfRef.__Vdly__bytemask_unaligned_reg;
    vlSelfRef.__PVT__bytemask_aligned_reg = vlSelfRef.__Vdly__bytemask_aligned_reg;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_reg, vlSelfRef.__Vdly__dat_init_reg);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_reg, vlSelfRef.__Vdly__dat_txn_reg);
    vlSelfRef.__PVT__atom_addr_upper_shift = vlSelfRef.__Vdly__atom_addr_upper_shift;
    vlSelfRef.__PVT__atom_is_big_endian_reg = vlSelfRef.__Vdly__atom_is_big_endian_reg;
    vlSelfRef.__PVT__atom_addr_bit_offset = vlSelfRef.__Vdly__atom_addr_bit_offset;
    vlSelfRef.__PVT__atom_size_reg = vlSelfRef.__Vdly__atom_size_reg;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_to_adder_o, vlSelfRef.__PVT__dat_init_reg);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_to_adder_o, vlSelfRef.__PVT__dat_txn_reg);
    vlSelfRef.__PVT__atom_addr_upper_shift_o = vlSelfRef.__PVT__atom_addr_upper_shift;
    vlSelfRef.__PVT__atom_is_big_endian_to_adder_o 
        = vlSelfRef.__PVT__atom_is_big_endian_reg;
    vlSelfRef.__PVT__atom_addr_bit_offset_o = vlSelfRef.__PVT__atom_addr_bit_offset;
    vlSelfRef.__PVT__atom_size_to_adder_o = vlSelfRef.__PVT__atom_size_reg;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ap_opcode_decoder___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__1(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__set_bit_temp = ((1ULL + (~ VL_EXTEND_QI(33,32, vlSelfRef.__PVT__atom_be_i))) 
                                     & VL_EXTEND_QI(33,32, vlSelfRef.__PVT__atom_be_i));
    vlSelfRef.__Vfunc_clogb2__0__set_bit_location = 
        VL_SEL_IQII(33, vlSelfRef.__PVT__set_bit_temp, 0U, 32);
    vlSelf->__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_clogb2__0__temp_overflow = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10891123961742352ull);
    vlSelf->__Vfunc_clogb2__0__multiply_set_bit = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6359231406285960006ull);
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = 0U;
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = 0U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 0U;
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 1U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 1U)));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 2U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 2U))), 1U);
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 3U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(3U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 3U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 4U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 4U))), 2U);
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 5U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(5U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 5U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 6U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(6U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 6U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 7U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(7U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 7U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 8U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 8U))), 3U);
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 9U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(9U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 9U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0xaU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0xaU) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0xaU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0xbU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0xbU) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0xbU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0xcU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0xcU) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0xcU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0xdU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0xdU) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0xdU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0xeU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0xeU) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0xeU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0xfU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0xfU) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0xfU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                             (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x10U))), 4U);
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x11U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x11U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x11U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x12U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x12U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x12U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x13U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x13U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x13U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x14U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x14U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x14U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x15U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x15U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x15U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x16U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x16U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x16U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x17U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x17U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x17U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x18U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x18U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x18U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x19U;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x19U) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x19U))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x1aU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x1aU) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x1aU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x1bU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x1bU) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x1bU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x1cU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x1cU) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x1cU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x1dU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x1dU) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x1dU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x1eU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x1eU) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x1eU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x1fU;
    vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit = 
        ((IData)(0x1fU) * VL_EXTEND_II(32,1, (1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__0__set_bit_location, 0x1fU))));
    vlSelfRef.__Vconcswap_1_h9e6ed4fe__0 = (0xfffffffU 
                                            & VL_SEL_IQII(33, 
                                                          (0x1ffffffffULL 
                                                           & (VL_EXTEND_QI(33,5, (IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout)) 
                                                              + 
                                                              VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit))), 5U, 28));
    vlSelfRef.__Vconcswap_1_h9fcad676__0 = (0x1fU & 
                                            ((IData)(vlSelfRef.__Vfunc_clogb2__0__Vfuncout) 
                                             + VL_SEL_IQII(33, 
                                                           VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clogb2__0__multiply_set_bit), 0U, 5)));
    vlSelfRef.__Vfunc_clogb2__0__temp_overflow = vlSelfRef.__Vconcswap_1_h9e6ed4fe__0;
    vlSelfRef.__Vfunc_clogb2__0__Vfuncout = vlSelfRef.__Vconcswap_1_h9fcad676__0;
    vlSelfRef.__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0x20U;
    vlSelfRef.__PVT__num_unset_bits = vlSelfRef.__Vfunc_clogb2__0__Vfuncout;
}

VL_INLINE_OPT void Vsig_topology_top_sig_ap_opcode_decoder___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_nxt = 0U;
    vlSelfRef.__PVT__dat_init_wr_flag_o = 0U;
    vlSelfRef.__PVT__dat_res_wr_flag_o = 0U;
    VL_CONST_W_1X(128,vlSelfRef.__PVT__dat_res_o,0x00000000);
    vlSelfRef.__PVT__bytemask_to_adder_o[1U] = 0U;
    vlSelfRef.__PVT__bytemask_to_adder_o[0U] = 0U;
    vlSelfRef.__PVT__alu_control_o = 0U;
    vlSelfRef.__PVT__ready_o = 0U;
    vlSelfRef.__PVT__valid_o = 0U;
    vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = vlSelfRef.__PVT__dat_init_wr_flag_reg;
    vlSelfRef.__PVT__dat_res_wr_flag_reg_nxt = vlSelfRef.__PVT__dat_res_wr_flag_reg;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_reg_nxt, vlSelfRef.__PVT__dat_init_reg);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_reg_nxt, vlSelfRef.__PVT__dat_txn_reg);
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_reg_nxt, vlSelfRef.__PVT__dat_res_reg);
    vlSelfRef.__PVT__atom_addr_reg_nxt = vlSelfRef.__PVT__atom_addr_reg;
    vlSelfRef.__PVT__atom_addr_upper_shift_nxt = vlSelfRef.__PVT__atom_addr_upper_shift;
    vlSelfRef.__PVT__atom_addr_bit_offset_nxt = vlSelfRef.__PVT__atom_addr_bit_offset;
    vlSelfRef.__PVT__atom_size_reg_nxt = vlSelfRef.__PVT__atom_size_reg;
    vlSelfRef.__PVT__atom_is_big_endian_reg_nxt = vlSelfRef.__PVT__atom_is_big_endian_reg;
    vlSelfRef.__PVT__atom_be_reg_nxt = vlSelfRef.__PVT__atom_be_reg;
    vlSelfRef.__PVT__atom_op_reg_nxt = vlSelfRef.__PVT__atom_op_reg;
    vlSelfRef.__PVT__addr_is_aligned_nxt = vlSelfRef.__PVT__addr_is_aligned_reg;
    vlSelfRef.__PVT__bytemask_aligned_nxt = vlSelfRef.__PVT__bytemask_aligned_reg;
    vlSelfRef.__PVT__bytemask_unaligned_nxt = vlSelfRef.__PVT__bytemask_unaligned_reg;
    if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 1U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__atom_op_reg_nxt = vlSelfRef.__PVT__atom_op_i;
        vlSelfRef.__PVT__atom_addr_reg_nxt = vlSelfRef.__PVT__atom_addr_i;
        vlSelfRef.__PVT__atom_addr_upper_shift_nxt 
            = (1U & VL_BITSEL_IQII(52, vlSelfRef.__PVT__atom_addr_i, 4U));
        vlSelfRef.__PVT__atom_addr_bit_offset_nxt = 
            VL_CONCAT_III(7,4,3, (0xfU & VL_SEL_IQII(52, vlSelfRef.__PVT__atom_addr_i, 0U, 4)), 0U);
        vlSelfRef.__PVT__atom_be_reg_nxt = vlSelfRef.__PVT__atom_be_i;
        vlSelfRef.__PVT__atom_size_reg_nxt = vlSelfRef.__PVT__atom_size_i;
        vlSelfRef.__PVT__atom_is_big_endian_reg_nxt 
            = vlSelfRef.__PVT__atom_is_big_endian_i;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_reg_nxt, vlSelfRef.__PVT__dat_init_i);
        VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_reg_nxt, vlSelfRef.__PVT__dat_txn_i);
        vlSelfRef.__PVT__addr_is_aligned_nxt = vlSelfRef.__PVT__addr_is_aligned_i;
        vlSelfRef.__PVT__size_in_bytes = (0x3fU & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__PVT__atom_size_i)));
        vlSelfRef.__PVT__half_of_size_in_bytes = (0x1fU 
                                                  & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__size_in_bytes), 1U, 5));
        vlSelfRef.__PVT__half_size_plus_unset_bits 
            = (0x3fU & (VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__half_of_size_in_bytes)) 
                        + VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__num_unset_bits))));
        vlSelfRef.__PVT__bytemask_aligned_nxt = (vlSelfRef.__PVT__atom_be_i 
                                                 & (~ 
                                                    (VL_SHIFTL_III(32,32,6, (IData)(1U), (IData)(vlSelfRef.__PVT__half_size_plus_unset_bits)) 
                                                     - (IData)(1U))));
        vlSelfRef.__PVT__bytemask_unaligned_nxt = (
                                                   (vlSelfRef.__PVT__atom_be_i 
                                                    >> (IData)(vlSelfRef.__PVT__half_of_size_in_bytes)) 
                                                   & (~ 
                                                      (((IData)(1U) 
                                                        << (IData)(vlSelfRef.__PVT__num_unset_bits)) 
                                                       - (IData)(1U))));
        vlSelfRef.__PVT__state_nxt = (((IData)(vlSelfRef.__PVT__valid_i) 
                                       & (5U == (7U 
                                                 & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_i), 3U, 3))))
                                       ? 2U : (((IData)(vlSelfRef.__PVT__valid_i) 
                                                & (6U 
                                                   == 
                                                   (7U 
                                                    & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_i), 3U, 3))))
                                                ? 3U
                                                : (
                                                   (((IData)(vlSelfRef.__PVT__valid_i) 
                                                     & (0x39U 
                                                        == (IData)(vlSelfRef.__PVT__atom_op_i))) 
                                                    & (3U 
                                                       == (IData)(vlSelfRef.__PVT__dat_txn_en_i)))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__valid_i) 
                                                     & (0x38U 
                                                        == (IData)(vlSelfRef.__PVT__atom_op_i)))
                                                     ? 5U
                                                     : 0U))));
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 0U;
        vlSelfRef.__PVT__bytemask_to_adder_o[0U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__bytemask_to_adder_o[1U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__alu_control_o = VL_EXTEND_II(4,3, 
                                                      (7U 
                                                       & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_reg), 0U, 3)));
        vlSelfRef.__PVT__state_nxt = 6U;
    } else if ((3U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 1U;
        vlSelfRef.__PVT__bytemask_to_adder_o[0U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__bytemask_to_adder_o[1U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__alu_control_o = (0xfU & VL_SEL_IIII(7, (IData)(vlSelfRef.__PVT__atom_op_reg), 0U, 4));
        vlSelfRef.__PVT__state_nxt = 6U;
    } else if ((4U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 1U;
        vlSelfRef.__PVT__alu_control_o = 8U;
        vlSelfRef.__PVT__state_nxt = 6U;
        if (vlSelfRef.__PVT__addr_is_aligned_reg) {
            vlSelfRef.__PVT__bytemask_to_adder_o[0U] 
                = vlSelfRef.__PVT__bytemask_unaligned_reg;
            vlSelfRef.__PVT__bytemask_to_adder_o[1U] 
                = vlSelfRef.__PVT__bytemask_aligned_reg;
        } else {
            vlSelfRef.__PVT__bytemask_to_adder_o[0U] 
                = vlSelfRef.__PVT__bytemask_aligned_reg;
            vlSelfRef.__PVT__bytemask_to_adder_o[1U] 
                = vlSelfRef.__PVT__bytemask_unaligned_reg;
        }
    } else if ((5U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__valid_o = 0U;
        vlSelfRef.__PVT__dat_init_wr_flag_reg_nxt = 1U;
        vlSelfRef.__PVT__alu_control_o = 0xcU;
        vlSelfRef.__PVT__bytemask_to_adder_o[0U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__bytemask_to_adder_o[1U] = vlSelfRef.__PVT__atom_be_reg;
        vlSelfRef.__PVT__state_nxt = 6U;
    } else if ((6U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        vlSelfRef.__PVT__state_nxt = 7U;
        VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_reg_nxt, vlSelfRef.__PVT__dat_res_from_adder_i);
        vlSelfRef.__PVT__dat_res_wr_flag_reg_nxt = vlSelfRef.__PVT__dat_res_wr_flag_i;
    } else if ((7U == (IData)(vlSelfRef.__PVT__state))) {
        vlSelfRef.__PVT__ready_o = 0U;
        if (vlSelfRef.__PVT__ready_i) {
            vlSelfRef.__PVT__valid_o = 1U;
            VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_o, vlSelfRef.__PVT__dat_res_reg);
            vlSelfRef.__PVT__dat_res_wr_flag_o = vlSelfRef.__PVT__dat_res_wr_flag_reg;
            vlSelfRef.__PVT__dat_init_wr_flag_o = vlSelfRef.__PVT__dat_init_wr_flag_reg;
            vlSelfRef.__PVT__state_nxt = 0U;
        } else {
            vlSelfRef.__PVT__valid_o = 0U;
            vlSelfRef.__PVT__state_nxt = 7U;
        }
    }
    vlSelfRef.__PVT__bytemask_to_HN_reg_nxt = ((1U 
                                                & VL_BITSEL_IQII(52, vlSelfRef.__PVT__atom_addr_reg, 4U))
                                                ? VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__bytemask_to_adder_o
                                                                [0U], 0x10U)
                                                : vlSelfRef.__PVT__bytemask_to_adder_o
                                               [0U]);
}
