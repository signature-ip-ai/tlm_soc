// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ap_adder.h"

VL_ATTR_COLD void Vsig_topology_top_sig_ap_adder___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst__0(Vsig_topology_top_sig_ap_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_adder___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<8>/*255:0*/ __Vtemp_17;
    VlWide<8>/*255:0*/ __Vtemp_18;
    VlWide<8>/*255:0*/ __Vtemp_19;
    VlWide<8>/*255:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_21;
    VlWide<8>/*255:0*/ __Vtemp_22;
    VlWide<8>/*255:0*/ __Vtemp_23;
    VlWide<8>/*255:0*/ __Vtemp_24;
    VlWide<8>/*255:0*/ __Vtemp_25;
    VlWide<8>/*255:0*/ __Vtemp_26;
    VlWide<8>/*255:0*/ __Vtemp_27;
    VlWide<8>/*255:0*/ __Vtemp_28;
    VlWide<8>/*255:0*/ __Vtemp_29;
    VlWide<8>/*255:0*/ __Vtemp_30;
    VlWide<8>/*255:0*/ __Vtemp_31;
    VlWide<8>/*255:0*/ __Vtemp_32;
    VlWide<8>/*255:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_37;
    VlWide<5>/*159:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<5>/*159:0*/ __Vtemp_41;
    VlWide<5>/*159:0*/ __Vtemp_42;
    // Body
    vlSelfRef.__PVT__adder_op = vlSelfRef.__PVT__alu_control_i;
    VL_ASSIGN_W(256,vlSelfRef.__PVT__bitmask[0U], vlSelfRef.__PVT__bitmask_i
                [0U]);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__bitmask[1U], vlSelfRef.__PVT__bitmask_i
                [1U]);
    if (vlSelfRef.__PVT__atom_addr_upper_shift_i) {
        VL_SEL_WWII(128, 256, vlSelfRef.__PVT__shifted_bitmask_0, 
                    vlSelfRef.__PVT__bitmask[0U], 0x80U, 128);
        VL_AND_W(4, vlSelfRef.__PVT__op_A_tmp, vlSelfRef.__PVT__shifted_bitmask_0, vlSelfRef.__PVT__dat_init_i);
        VL_AND_W(8, __Vtemp_1, vlSelfRef.__PVT__bitmask
                 [0U], vlSelfRef.__PVT__dat_txn_i);
        VL_SHIFTR_WWI(256,256,32, __Vtemp_2, __Vtemp_1, 0x80U);
        VL_SEL_WWII(128, 256, vlSelfRef.__PVT__op_B_overflow, __Vtemp_2, 0x80U, 128);
        VL_SEL_WWII(128, 256, __Vtemp_3, vlSelfRef.__PVT__bitmask
                    [0U], 0x80U, 128);
        VL_SEL_WWII(128, 256, __Vtemp_4, vlSelfRef.__PVT__dat_txn_i, 0x80U, 128);
        VL_AND_W(4, vlSelfRef.__PVT__op_B_tmp, __Vtemp_3, __Vtemp_4);
    } else {
        VL_SEL_WWII(128, 256, vlSelfRef.__PVT__shifted_bitmask_0, 
                    vlSelfRef.__PVT__bitmask[0U], 0U, 128);
        VL_SEL_WWII(128, 256, __Vtemp_5, vlSelfRef.__PVT__bitmask
                    [0U], 0U, 128);
        VL_AND_W(4, vlSelfRef.__PVT__op_A_tmp, __Vtemp_5, vlSelfRef.__PVT__dat_init_i);
        VL_SEL_WWII(128, 256, __Vtemp_6, vlSelfRef.__PVT__bitmask
                    [0U], 0U, 128);
        VL_SEL_WWII(128, 256, __Vtemp_7, vlSelfRef.__PVT__dat_txn_i, 0U, 128);
        VL_AND_W(4, vlSelfRef.__PVT__op_B_tmp, __Vtemp_6, __Vtemp_7);
        VL_CONST_W_1X(128,vlSelfRef.__PVT__op_B_overflow,0x00000000);
    }
    if (((IData)(vlSelfRef.__PVT__atom_is_big_endian_i) 
         & (0xcU != (IData)(vlSelfRef.__PVT__adder_op)))) {
        VL_STREAML_WWI(128, vlSelfRef.__PVT__op_A, vlSelfRef.__PVT__op_A_tmp, 8U);
        VL_STREAML_WWI(128, vlSelfRef.__PVT__op_B, vlSelfRef.__PVT__op_B_tmp, 8U);
    } else {
        VL_ASSIGN_W(128,vlSelfRef.__PVT__op_A, vlSelfRef.__PVT__op_A_tmp);
        VL_ASSIGN_W(128,vlSelfRef.__PVT__op_B, vlSelfRef.__PVT__op_B_tmp);
    }
    if ((1U & ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__alu_control_i), 3U)) 
               & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__alu_control_i), 2U)))) {
        if (vlSelfRef.__PVT__atom_is_big_endian_i) {
            VL_SHIFTL_WWI(128,128,7, vlSelfRef.__PVT__op_A_signed, vlSelfRef.__PVT__op_A, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
            VL_SHIFTL_WWI(128,128,7, vlSelfRef.__PVT__op_B_signed, vlSelfRef.__PVT__op_B, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
        } else {
            VL_SHIFTL_WWI(128,128,8, vlSelfRef.__PVT__op_A_signed, vlSelfRef.__PVT__op_A, (IData)(vlSelfRef.__PVT__align_operand_i));
            VL_SHIFTL_WWI(128,128,8, vlSelfRef.__PVT__op_B_signed, vlSelfRef.__PVT__op_B, (IData)(vlSelfRef.__PVT__align_operand_i));
        }
    } else {
        VL_CONST_W_1X(128,vlSelfRef.__PVT__op_A_signed,0x00000000);
        VL_CONST_W_1X(128,vlSelfRef.__PVT__op_B_signed,0x00000000);
    }
    VL_CONST_W_1X(128,vlSelfRef.__PVT__alu_out,0x00000000);
    VL_CONST_W_1X(129,vlSelfRef.__PVT__alu_out_temp,0x00000000);
    if (((((((((0U == (IData)(vlSelfRef.__PVT__adder_op)) 
               | (1U == (IData)(vlSelfRef.__PVT__adder_op))) 
              | (2U == (IData)(vlSelfRef.__PVT__adder_op))) 
             | (3U == (IData)(vlSelfRef.__PVT__adder_op))) 
            | (4U == (IData)(vlSelfRef.__PVT__adder_op))) 
           | (5U == (IData)(vlSelfRef.__PVT__adder_op))) 
          | (6U == (IData)(vlSelfRef.__PVT__adder_op))) 
         | (7U == (IData)(vlSelfRef.__PVT__adder_op)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__adder_op))) {
            VL_CONST_W_5X(160,__Vtemp_8,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            VL_EXTEND_WW(129,128, __Vtemp_9, vlSelfRef.__PVT__op_A);
            VL_EXTEND_WW(129,128, __Vtemp_10, vlSelfRef.__PVT__op_B);
            VL_ADD_W(5, __Vtemp_11, __Vtemp_9, __Vtemp_10);
            VL_AND_W(5, vlSelfRef.__PVT__alu_out_temp, __Vtemp_8, __Vtemp_11);
            VL_SEL_WWII(128, 129, vlSelfRef.__PVT__alu_out, vlSelfRef.__PVT__alu_out_temp, 0U, 128);
        } else if ((1U == (IData)(vlSelfRef.__PVT__adder_op))) {
            VL_NOT_W(4, __Vtemp_12, vlSelfRef.__PVT__op_B);
            VL_AND_W(4, vlSelfRef.__PVT__alu_out, vlSelfRef.__PVT__op_A, __Vtemp_12);
        } else if ((2U == (IData)(vlSelfRef.__PVT__adder_op))) {
            VL_XOR_W(4, vlSelfRef.__PVT__alu_out, vlSelfRef.__PVT__op_A, vlSelfRef.__PVT__op_B);
        } else if ((3U == (IData)(vlSelfRef.__PVT__adder_op))) {
            VL_OR_W(4, vlSelfRef.__PVT__alu_out, vlSelfRef.__PVT__op_A, vlSelfRef.__PVT__op_B);
        } else if ((4U == (IData)(vlSelfRef.__PVT__adder_op))) {
            if (VL_GTS_IWW(128, vlSelfRef.__PVT__op_B_signed, vlSelfRef.__PVT__op_A_signed)) {
                VL_CONST_W_1X(128,vlSelfRef.__PVT__alu_out,0x00000001);
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__adder_op))) {
            if (VL_LTS_IWW(128, vlSelfRef.__PVT__op_B_signed, vlSelfRef.__PVT__op_A_signed)) {
                VL_CONST_W_1X(128,vlSelfRef.__PVT__alu_out,0x00000001);
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__adder_op))) {
            if (VL_GT_W(4, vlSelfRef.__PVT__op_B_signed, vlSelfRef.__PVT__op_A_signed)) {
                VL_CONST_W_1X(128,vlSelfRef.__PVT__alu_out,0x00000001);
            }
        } else if (VL_LT_W(4, vlSelfRef.__PVT__op_B_signed, vlSelfRef.__PVT__op_A_signed)) {
            VL_CONST_W_1X(128,vlSelfRef.__PVT__alu_out,0x00000001);
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__adder_op))) {
        if (VL_EQ_W(4, vlSelfRef.__PVT__op_B, vlSelfRef.__PVT__op_A)) {
            VL_CONST_W_1X(128,vlSelfRef.__PVT__alu_out,0x00000001);
        }
    } else {
        VL_CONST_W_1X(128,__Vtemp_13,0x00000001);
        VL_CONST_W_1X(128,__Vtemp_14,0x00000000);
        __Vtemp_15 = (0xcU == (IData)(vlSelfRef.__PVT__adder_op));
        VL_COND_WIWW(128, vlSelfRef.__PVT__alu_out, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    }
    vlSelfRef.__PVT__dat_res_wr_flag = 0U;
    if ((((((0U == (IData)(vlSelfRef.__PVT__adder_op)) 
            || (1U == (IData)(vlSelfRef.__PVT__adder_op))) 
           || (2U == (IData)(vlSelfRef.__PVT__adder_op))) 
          || (3U == (IData)(vlSelfRef.__PVT__adder_op))) 
         || (0xcU == (IData)(vlSelfRef.__PVT__adder_op)))) {
        vlSelfRef.__PVT__dat_res_wr_flag = 1U;
    } else if ((((((4U == (IData)(vlSelfRef.__PVT__adder_op)) 
                   || (5U == (IData)(vlSelfRef.__PVT__adder_op))) 
                  || (6U == (IData)(vlSelfRef.__PVT__adder_op))) 
                 || (7U == (IData)(vlSelfRef.__PVT__adder_op))) 
                || (8U == (IData)(vlSelfRef.__PVT__adder_op)))) {
        vlSelfRef.__PVT__dat_res_wr_flag = (1U & VL_BITSEL_IWII(128, vlSelfRef.__PVT__alu_out, 0U));
    }
    VL_CONST_W_1X(128,vlSelfRef.__PVT__dat_res,0x00000000);
    VL_CONST_W_1X(128,vlSelfRef.__PVT__tmp,0x00000000);
    if (((((0U == (IData)(vlSelfRef.__PVT__adder_op)) 
           || (1U == (IData)(vlSelfRef.__PVT__adder_op))) 
          || (2U == (IData)(vlSelfRef.__PVT__adder_op))) 
         || (3U == (IData)(vlSelfRef.__PVT__adder_op)))) {
        VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res, vlSelfRef.__PVT__alu_out);
        if (vlSelfRef.__PVT__atom_is_big_endian_i) {
            VL_STREAML_WWI(128, __Vtemp_16, vlSelfRef.__PVT__dat_res, 8U);
            VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res, __Vtemp_16);
        }
    } else if ((((((4U == (IData)(vlSelfRef.__PVT__adder_op)) 
                   || (5U == (IData)(vlSelfRef.__PVT__adder_op))) 
                  || (6U == (IData)(vlSelfRef.__PVT__adder_op))) 
                 || (7U == (IData)(vlSelfRef.__PVT__adder_op))) 
                || (0xcU == (IData)(vlSelfRef.__PVT__adder_op)))) {
        if (VL_REDOR_W(4, vlSelfRef.__PVT__alu_out)) {
            VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res, vlSelfRef.__PVT__op_B_tmp);
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__adder_op))) {
        if (VL_REDOR_W(4, vlSelfRef.__PVT__alu_out)) {
            VL_EXTEND_WI(256,8, vlSelfRef.__PVT__swap_fsb, (IData)(vlSelfRef.__PVT__bitmask_first_set_bit_i));
            VL_EXTEND_WI(256,7, __Vtemp_17, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
            if (VL_GT_W(8, vlSelfRef.__PVT__swap_fsb, __Vtemp_17)) {
                VL_AND_W(8, __Vtemp_18, vlSelfRef.__PVT__dat_txn_i, 
                         vlSelfRef.__PVT__bitmask[1U]);
                VL_EXTEND_WI(256,7, __Vtemp_19, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
                VL_SUB_W(8, __Vtemp_20, vlSelfRef.__PVT__swap_fsb, __Vtemp_19);
                VL_SHIFTR_WWW(256,256,256, __Vtemp_21, __Vtemp_18, __Vtemp_20);
                VL_SEL_WWII(128, 256, vlSelfRef.__PVT__tmp, __Vtemp_21, 0x80U, 128);
                VL_AND_W(8, __Vtemp_22, vlSelfRef.__PVT__dat_txn_i, 
                         vlSelfRef.__PVT__bitmask[1U]);
                VL_EXTEND_WI(256,7, __Vtemp_23, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
                VL_SUB_W(8, __Vtemp_24, vlSelfRef.__PVT__swap_fsb, __Vtemp_23);
                VL_SHIFTR_WWW(256,256,256, __Vtemp_25, __Vtemp_22, __Vtemp_24);
                VL_SEL_WWII(128, 256, vlSelfRef.__PVT__dat_res, __Vtemp_25, 0U, 128);
            } else {
                VL_AND_W(8, __Vtemp_26, vlSelfRef.__PVT__dat_txn_i, 
                         vlSelfRef.__PVT__bitmask[1U]);
                VL_EXTEND_WI(256,7, __Vtemp_27, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
                VL_SUB_W(8, __Vtemp_28, __Vtemp_27, vlSelfRef.__PVT__swap_fsb);
                VL_SHIFTL_WWW(256,256,256, __Vtemp_29, __Vtemp_26, __Vtemp_28);
                VL_SEL_WWII(128, 256, vlSelfRef.__PVT__tmp, __Vtemp_29, 0x80U, 128);
                VL_AND_W(8, __Vtemp_30, vlSelfRef.__PVT__dat_txn_i, 
                         vlSelfRef.__PVT__bitmask[1U]);
                VL_EXTEND_WI(256,7, __Vtemp_31, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_i));
                VL_SUB_W(8, __Vtemp_32, __Vtemp_31, vlSelfRef.__PVT__swap_fsb);
                VL_SHIFTL_WWW(256,256,256, __Vtemp_33, __Vtemp_30, __Vtemp_32);
                VL_SEL_WWII(128, 256, vlSelfRef.__PVT__dat_res, __Vtemp_33, 0U, 128);
            }
        }
    }
    vlSelfRef.__PVT__unused_signal_nxt = ((VL_REDOR_W(4, vlSelfRef.__PVT__op_B_overflow) 
                                           | VL_REDOR_W(4, vlSelfRef.__PVT__tmp)) 
                                          | (IData)(vlSelfRef.__PVT__unused_signal));
    vlSelfRef.__PVT__dat_res_wr_flag_o = vlSelfRef.__PVT__dat_res_wr_flag;
    VL_CONST_W_5X(160,__Vtemp_34,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_EXTEND_WW(129,128, __Vtemp_35, vlSelfRef.__PVT__dat_res);
    VL_EXTEND_WW(129,128, __Vtemp_36, vlSelfRef.__PVT__shifted_bitmask_0);
    VL_AND_W(5, __Vtemp_37, __Vtemp_35, __Vtemp_36);
    VL_EXTEND_WW(129,128, __Vtemp_38, vlSelfRef.__PVT__dat_init_i);
    VL_EXTEND_WW(129,128, __Vtemp_39, vlSelfRef.__PVT__shifted_bitmask_0);
    VL_NOT_W(5, __Vtemp_40, __Vtemp_39);
    VL_AND_W(5, __Vtemp_41, __Vtemp_38, __Vtemp_40);
    VL_ADD_W(5, __Vtemp_42, __Vtemp_37, __Vtemp_41);
    VL_AND_W(5, vlSelfRef.__PVT__dat_res_temp, __Vtemp_34, __Vtemp_42);
    VL_SEL_WWII(128, 129, vlSelfRef.__PVT__dat_res_o, vlSelfRef.__PVT__dat_res_temp, 0U, 128);
}

VL_ATTR_COLD void Vsig_topology_top_sig_ap_adder___ctor_var_reset(Vsig_topology_top_sig_ap_adder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_adder___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__resetn_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16428992625228223244ull);
    vlSelf->__PVT__alu_control_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9466664303705735134ull);
    vlSelf->__PVT__atom_addr_upper_shift_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10543288450987013621ull);
    vlSelf->__PVT__atom_addr_bit_offset_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10251970692661751554ull);
    vlSelf->__PVT__atom_is_big_endian_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16613246239333852749ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_i, __VscopeHash, 5902796130906426658ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_i, __VscopeHash, 16830430132081561429ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__bitmask_i[__Vi0], __VscopeHash, 2203637475083550551ull);
    }
    vlSelf->__PVT__align_operand_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18255757832276879515ull);
    vlSelf->__PVT__bitmask_first_set_bit_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2610303137506965645ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_o, __VscopeHash, 15597002275697658829ull);
    vlSelf->__PVT__dat_res_wr_flag_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3795956372782955513ull);
    vlSelf->__PVT__adder_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12552153142981651171ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__dat_res_temp, __VscopeHash, 6400424856204764591ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res, __VscopeHash, 5923221097634745001ull);
    vlSelf->__PVT__dat_res_wr_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11408225019782170168ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_A, __VscopeHash, 9869466551579803635ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_B, __VscopeHash, 11144923104656064837ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_A_tmp, __VscopeHash, 5350691418520389274ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_B_tmp, __VscopeHash, 16012406675970012526ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_B_overflow, __VscopeHash, 14246002891653392439ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_A_signed, __VscopeHash, 441283630646248783ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__op_B_signed, __VscopeHash, 11275960710938725486ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__bitmask[__Vi0], __VscopeHash, 4524642218699242223ull);
    }
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__shifted_bitmask_0, __VscopeHash, 14555416739081787030ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__alu_out, __VscopeHash, 6029336550601928105ull);
    VL_SCOPED_RAND_RESET_W(129, vlSelf->__PVT__alu_out_temp, __VscopeHash, 414431325633195908ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__swap_fsb, __VscopeHash, 5938116137181906393ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__tmp, __VscopeHash, 6305915743055363235ull);
    vlSelf->__PVT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2568504964857157653ull);
    vlSelf->__PVT__unused_signal_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10648582900817310478ull);
    vlSelf->__Vdly__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13192819126114309939ull);
}
