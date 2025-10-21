// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_ap_top.h"

VL_ATTR_COLD void Vsig_topology_top_sig_ap_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__0(Vsig_topology_top_sig_ap_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_ap_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bytemask_o = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__bytemask_to_HN_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__bitmask_first_set_bit_i 
        = vlSelfRef.__PVT__bitmask_first_set_bit_reg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__align_operand_i 
        = vlSelfRef.__PVT__align_operand_reg;
    VL_ASSIGN_W(256,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__bitmask_i
                [1U], vlSelfRef.__PVT__bitmask_reg[1U]);
    VL_ASSIGN_W(256,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__bitmask_i
                [0U], vlSelfRef.__PVT__bitmask_reg[0U]);
    vlSelfRef.__PVT__atom_addr_upper_shift_adder = vlSelfRef.__PVT__atom_addr_upper_shift_reg;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_adder, vlSelfRef.__PVT__dat_init_reg);
    vlSelfRef.__PVT__atom_addr_bit_offset_adder = vlSelfRef.__PVT__atom_addr_bit_offset_reg;
    vlSelfRef.__PVT__atom_is_big_endian_adder = vlSelfRef.__PVT__atom_is_big_endian_reg;
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_adder, vlSelfRef.__PVT__dat_txn_reg);
    vlSelfRef.__PVT__alu_control_adder = vlSelfRef.__PVT__alu_control_reg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__atom_addr_upper_shift_i 
        = vlSelfRef.__PVT__atom_addr_upper_shift_adder;
    VL_ASSIGN_W(128,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__dat_init_i, vlSelfRef.__PVT__dat_init_adder);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__atom_addr_bit_offset_i 
        = vlSelfRef.__PVT__atom_addr_bit_offset_adder;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__atom_is_big_endian_i 
        = vlSelfRef.__PVT__atom_is_big_endian_adder;
    VL_ASSIGN_W(256,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__dat_txn_i, vlSelfRef.__PVT__dat_txn_adder);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__alu_control_i 
        = vlSelfRef.__PVT__alu_control_adder;
}

VL_ATTR_COLD void Vsig_topology_top_sig_ap_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__1(Vsig_topology_top_sig_ap_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_ap_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__atom_is_big_endian_decoder = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_is_big_endian_to_adder_o;
    vlSelfRef.__PVT__atom_addr_upper_shift_decoder 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_addr_upper_shift_o;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_decoder, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_init_to_adder_o);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_decoder, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_txn_to_adder_o);
    vlSelfRef.__PVT__atom_addr_bit_offset_decoder = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_addr_bit_offset_o;
    vlSelfRef.__PVT__atom_size_decoder = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_size_to_adder_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_txn_en_i 
        = vlSelfRef.__PVT__dat_txn_en_i;
    VL_ASSIGN_W(256,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_txn_i, vlSelfRef.__PVT__dat_txn_i);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_is_big_endian_i 
        = vlSelfRef.__PVT__atom_is_big_endian_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_size_i 
        = vlSelfRef.__PVT__atom_size_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_addr_i 
        = vlSelfRef.__PVT__atom_addr_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_op_i 
        = vlSelfRef.__PVT__atom_op_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__atom_be_i 
        = vlSelfRef.__PVT__atom_be_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__addr_is_aligned_i 
        = vlSelfRef.__PVT__addr_is_aligned_i;
    VL_ASSIGN_W(128,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_init_i, vlSelfRef.__PVT__dat_init_i);
    vlSelfRef.__PVT__dat_res_wr_flag_int = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__dat_res_wr_flag_o;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_int, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__dat_res_o);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_res_wr_flag_i 
        = vlSelfRef.__PVT__dat_res_wr_flag_int;
    VL_ASSIGN_W(128,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_res_from_adder_i, vlSelfRef.__PVT__dat_res_int);
}

VL_ATTR_COLD void Vsig_topology_top_sig_ap_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__2(Vsig_topology_top_sig_ap_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_ap_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__resetn_i 
        = vlSelfRef.__PVT__resetn_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__resetn_i 
        = vlSelfRef.__PVT__resetn_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__clk_i 
        = vlSelfRef.__PVT__clk_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_adder_inst.__PVT__clk_i 
        = vlSelfRef.__PVT__clk_i;
}

extern const VlWide<8>/*255:0*/ Vsig_topology_top__ConstPool__CONST_h9e67c271_0;

VL_ATTR_COLD void Vsig_topology_top_sig_ap_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__0(Vsig_topology_top_sig_ap_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_ap_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_control_decoder = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__alu_control_o;
    vlSelfRef.__PVT__bytemask_decoder[1U] = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__bytemask_to_adder_o
        [1U];
    vlSelfRef.__PVT__bytemask_decoder[0U] = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__bytemask_to_adder_o
        [0U];
    vlSelfRef.__PVT__dat_init_wr_flag_o = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_init_wr_flag_o;
    vlSelfRef.__PVT__dat_res_wr_flag_o = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_res_wr_flag_o;
    vlSelfRef.__PVT__ready_o = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__ready_o;
    vlSelfRef.__PVT__valid_o = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__valid_o;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_res_o, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__dat_res_o);
    vlSelfRef.__Vfunc_replicator__0__bytemask = vlSelfRef.__PVT__bytemask_decoder
        [0U];
    vlSelf->__Vfunc_replicator__0__unnamedblk2__DOT__i = 0;
    VL_ASSIGN_W(256,vlSelfRef.__Vfunc_replicator__0__Vfuncout, Vsig_topology_top__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGNSEL_WI(256,8,0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 1U;
    VL_ASSIGNSEL_WI(256,8,8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 1U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 2U;
    VL_ASSIGNSEL_WI(256,8,0x10U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 2U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 3U;
    VL_ASSIGNSEL_WI(256,8,0x18U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 3U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 4U;
    VL_ASSIGNSEL_WI(256,8,0x20U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 4U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 5U;
    VL_ASSIGNSEL_WI(256,8,0x28U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 5U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 6U;
    VL_ASSIGNSEL_WI(256,8,0x30U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 6U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 7U;
    VL_ASSIGNSEL_WI(256,8,0x38U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 7U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 8U;
    VL_ASSIGNSEL_WI(256,8,0x40U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 8U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 9U;
    VL_ASSIGNSEL_WI(256,8,0x48U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 9U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0xaU;
    VL_ASSIGNSEL_WI(256,8,0x50U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0xaU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0xbU;
    VL_ASSIGNSEL_WI(256,8,0x58U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0xbU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0xcU;
    VL_ASSIGNSEL_WI(256,8,0x60U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0xcU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0xdU;
    VL_ASSIGNSEL_WI(256,8,0x68U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0xdU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0xeU;
    VL_ASSIGNSEL_WI(256,8,0x70U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0xeU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0xfU;
    VL_ASSIGNSEL_WI(256,8,0x78U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0xfU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x10U;
    VL_ASSIGNSEL_WI(256,8,0x80U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x10U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x11U;
    VL_ASSIGNSEL_WI(256,8,0x88U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x11U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x12U;
    VL_ASSIGNSEL_WI(256,8,0x90U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x12U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x13U;
    VL_ASSIGNSEL_WI(256,8,0x98U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x13U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x14U;
    VL_ASSIGNSEL_WI(256,8,0xa0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x14U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x15U;
    VL_ASSIGNSEL_WI(256,8,0xa8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x15U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x16U;
    VL_ASSIGNSEL_WI(256,8,0xb0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x16U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x17U;
    VL_ASSIGNSEL_WI(256,8,0xb8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x17U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x18U;
    VL_ASSIGNSEL_WI(256,8,0xc0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x18U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x19U;
    VL_ASSIGNSEL_WI(256,8,0xc8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x19U)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x1aU;
    VL_ASSIGNSEL_WI(256,8,0xd0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x1aU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x1bU;
    VL_ASSIGNSEL_WI(256,8,0xd8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x1bU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x1cU;
    VL_ASSIGNSEL_WI(256,8,0xe0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x1cU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x1dU;
    VL_ASSIGNSEL_WI(256,8,0xe8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x1dU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x1eU;
    VL_ASSIGNSEL_WI(256,8,0xf0U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x1eU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x1fU;
    VL_ASSIGNSEL_WI(256,8,0xf8U, vlSelfRef.__Vfunc_replicator__0__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__0__bytemask, 0x1fU)), 8U)));
    vlSelfRef.__Vfunc_replicator__0__unnamedblk2__DOT__i = 0x20U;
    VL_ASSIGN_W(256,vlSelfRef.__PVT__bitmask_nxt[0U], vlSelfRef.__Vfunc_replicator__0__Vfuncout);
    vlSelfRef.__Vfunc_replicator__1__bytemask = vlSelfRef.__PVT__bytemask_decoder
        [1U];
    vlSelf->__Vfunc_replicator__1__unnamedblk2__DOT__i = 0;
    VL_ASSIGN_W(256,vlSelfRef.__Vfunc_replicator__1__Vfuncout, Vsig_topology_top__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGNSEL_WI(256,8,0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 1U;
    VL_ASSIGNSEL_WI(256,8,8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 1U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 2U;
    VL_ASSIGNSEL_WI(256,8,0x10U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 2U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 3U;
    VL_ASSIGNSEL_WI(256,8,0x18U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 3U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 4U;
    VL_ASSIGNSEL_WI(256,8,0x20U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 4U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 5U;
    VL_ASSIGNSEL_WI(256,8,0x28U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 5U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 6U;
    VL_ASSIGNSEL_WI(256,8,0x30U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 6U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 7U;
    VL_ASSIGNSEL_WI(256,8,0x38U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 7U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 8U;
    VL_ASSIGNSEL_WI(256,8,0x40U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 8U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 9U;
    VL_ASSIGNSEL_WI(256,8,0x48U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 9U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0xaU;
    VL_ASSIGNSEL_WI(256,8,0x50U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0xaU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0xbU;
    VL_ASSIGNSEL_WI(256,8,0x58U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0xbU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0xcU;
    VL_ASSIGNSEL_WI(256,8,0x60U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0xcU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0xdU;
    VL_ASSIGNSEL_WI(256,8,0x68U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0xdU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0xeU;
    VL_ASSIGNSEL_WI(256,8,0x70U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0xeU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0xfU;
    VL_ASSIGNSEL_WI(256,8,0x78U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0xfU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x10U;
    VL_ASSIGNSEL_WI(256,8,0x80U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x10U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x11U;
    VL_ASSIGNSEL_WI(256,8,0x88U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x11U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x12U;
    VL_ASSIGNSEL_WI(256,8,0x90U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x12U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x13U;
    VL_ASSIGNSEL_WI(256,8,0x98U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x13U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x14U;
    VL_ASSIGNSEL_WI(256,8,0xa0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x14U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x15U;
    VL_ASSIGNSEL_WI(256,8,0xa8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x15U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x16U;
    VL_ASSIGNSEL_WI(256,8,0xb0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x16U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x17U;
    VL_ASSIGNSEL_WI(256,8,0xb8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x17U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x18U;
    VL_ASSIGNSEL_WI(256,8,0xc0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x18U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x19U;
    VL_ASSIGNSEL_WI(256,8,0xc8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x19U)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x1aU;
    VL_ASSIGNSEL_WI(256,8,0xd0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x1aU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x1bU;
    VL_ASSIGNSEL_WI(256,8,0xd8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x1bU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x1cU;
    VL_ASSIGNSEL_WI(256,8,0xe0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x1cU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x1dU;
    VL_ASSIGNSEL_WI(256,8,0xe8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x1dU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x1eU;
    VL_ASSIGNSEL_WI(256,8,0xf0U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x1eU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x1fU;
    VL_ASSIGNSEL_WI(256,8,0xf8U, vlSelfRef.__Vfunc_replicator__1__Vfuncout, 
                    (0xffU & VL_REPLICATE_IOI(1,(1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_replicator__1__bytemask, 0x1fU)), 8U)));
    vlSelfRef.__Vfunc_replicator__1__unnamedblk2__DOT__i = 0x20U;
    VL_ASSIGN_W(256,vlSelfRef.__PVT__bitmask_nxt[1U], vlSelfRef.__Vfunc_replicator__1__Vfuncout);
    vlSelfRef.__PVT__align_operand_nxt = (0xffU & (
                                                   ((IData)(0x80U) 
                                                    - 
                                                    VL_SEL_IIII(32, 
                                                                VL_EXTEND_II(32,7, (IData)(vlSelfRef.__PVT__atom_addr_bit_offset_decoder)), 0U, 8)) 
                                                   - 
                                                   VL_SEL_IIII(32, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             VL_POWSS_III(32,32,3, (IData)(2U), (IData)(vlSelfRef.__PVT__atom_size_decoder), 1,0), 3U), 0U, 8)));
    vlSelfRef.__PVT__bitmask_first_set_bit_nxt = (0xffU 
                                                  & VL_SEL_IIII(32, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              VL_EXTEND_II(32,5, 
                                                                                ([&]() {
                            vlSelfRef.__Vfunc_get_first_set_bit_idx__2__bitmask 
                                = vlSelfRef.__PVT__bytemask_decoder
                                [1U];
                            vlSelfRef.__Vfunc_clogb2__3__set_bit_location 
                                = (vlSelfRef.__Vfunc_get_first_set_bit_idx__2__bitmask 
                                   & (~ (vlSelfRef.__Vfunc_get_first_set_bit_idx__2__bitmask 
                                         - (IData)(1U))));
                            vlSelf->__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0;
                            vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 1U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 1U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 1U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 2U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 2U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 2U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 3U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 3U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 3U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 4U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 4U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 4U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 5U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 5U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 5U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 6U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 6U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 6U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 7U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 7U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 7U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 8U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 8U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 8U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 9U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 9U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 9U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0xaU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0xaU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0xaU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0xbU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0xbU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0xbU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0xcU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0xcU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0xcU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0xdU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0xdU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0xdU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0xeU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0xeU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0xeU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0xfU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0xfU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0xfU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x10U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x10U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x10U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x11U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x11U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x11U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x12U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x12U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x12U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x13U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x13U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x13U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x14U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x14U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x14U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x15U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x15U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x15U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x16U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x16U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x16U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x17U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x17U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x17U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x18U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x18U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x18U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x19U;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x19U))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x19U;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x1aU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x1aU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x1aU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x1bU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x1bU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x1bU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x1cU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x1cU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x1cU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x1dU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x1dU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x1dU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x1eU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x1eU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x1eU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x1fU;
                            if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clogb2__3__set_bit_location, 0x1fU))) {
                                vlSelfRef.__Vfunc_clogb2__3__Vfuncout = 0x1fU;
                            }
                            vlSelfRef.__Vfunc_clogb2__3__unnamedblk1__DOT__i = 0x20U;
                            vlSelfRef.__Vfunc_get_first_set_bit_idx__2__Vfuncout 
                                = vlSelfRef.__Vfunc_clogb2__3__Vfuncout;
                        }(), (IData)(vlSelfRef.__Vfunc_get_first_set_bit_idx__2__Vfuncout))), 3U), 0U, 8));
}

VL_ATTR_COLD void Vsig_topology_top_sig_ap_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__1(Vsig_topology_top_sig_ap_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_ap_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__valid_i 
        = vlSelfRef.__PVT__valid_i;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst.__PVT__ready_i 
        = vlSelfRef.__PVT__ready_i;
}
