// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ap_opcode_decoder.h"

VL_ATTR_COLD void Vsig_topology_top_sig_ap_opcode_decoder___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__atom_is_big_endian_to_adder_o 
        = vlSelfRef.__PVT__atom_is_big_endian_reg;
    vlSelfRef.__PVT__atom_addr_upper_shift_o = vlSelfRef.__PVT__atom_addr_upper_shift;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__dat_init_to_adder_o, vlSelfRef.__PVT__dat_init_reg);
    VL_ASSIGN_W(256,vlSelfRef.__PVT__dat_txn_to_adder_o, vlSelfRef.__PVT__dat_txn_reg);
    vlSelfRef.__PVT__atom_addr_bit_offset_o = vlSelfRef.__PVT__atom_addr_bit_offset;
    vlSelfRef.__PVT__atom_size_to_adder_o = vlSelfRef.__PVT__atom_size_reg;
}

VL_ATTR_COLD void Vsig_topology_top_sig_ap_opcode_decoder___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__1(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_ap_opcode_decoder___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0__u_sig_ap_top__sig_ap_opcode_decoder_inst__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_ap_opcode_decoder___ctor_var_reset(Vsig_topology_top_sig_ap_opcode_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_ap_opcode_decoder___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__resetn_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16428992625228223244ull);
    vlSelf->__PVT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->__PVT__atom_op_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14815449415981953086ull);
    vlSelf->__PVT__atom_addr_i = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 5196867826460760961ull);
    vlSelf->__PVT__atom_size_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1614248495627974406ull);
    vlSelf->__PVT__atom_is_big_endian_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16613246239333852749ull);
    vlSelf->__PVT__atom_be_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5576412840530224203ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_i, __VscopeHash, 5902796130906426658ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_i, __VscopeHash, 16830430132081561429ull);
    vlSelf->__PVT__dat_txn_en_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4298247275846093556ull);
    vlSelf->__PVT__addr_is_aligned_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3981969165672858159ull);
    vlSelf->__PVT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2487444212943817592ull);
    vlSelf->__PVT__ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6223107695775132031ull);
    vlSelf->__PVT__dat_init_wr_flag_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11024343149341724920ull);
    vlSelf->__PVT__dat_res_wr_flag_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3795956372782955513ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_o, __VscopeHash, 15597002275697658829ull);
    vlSelf->__PVT__bytemask_to_HN_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 132199646317352633ull);
    vlSelf->__PVT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10854271546065566948ull);
    vlSelf->__PVT__alu_control_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 71522638767392407ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__bytemask_to_adder_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 913621950678855239ull);
    }
    vlSelf->__PVT__atom_size_to_adder_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6176159085480443343ull);
    vlSelf->__PVT__atom_is_big_endian_to_adder_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15982343625215250177ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_to_adder_o, __VscopeHash, 12089655657306024145ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_to_adder_o, __VscopeHash, 11728156029012561507ull);
    vlSelf->__PVT__atom_addr_upper_shift_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1078679785026881643ull);
    vlSelf->__PVT__atom_addr_bit_offset_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14487419874197892716ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_from_adder_i, __VscopeHash, 12302804955561227327ull);
    vlSelf->__PVT__dat_res_wr_flag_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4373214178790693626ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__state_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10572276988956296863ull);
    vlSelf->__PVT__size_in_bytes = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14272219269604422180ull);
    vlSelf->__PVT__half_of_size_in_bytes = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17240548058901081543ull);
    vlSelf->__PVT__half_size_plus_unset_bits = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4969935108884960795ull);
    vlSelf->__PVT__num_unset_bits = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5293317616109143564ull);
    vlSelf->__PVT__atom_op_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15078014261158352609ull);
    vlSelf->__PVT__atom_op_reg_nxt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8346979393984115253ull);
    vlSelf->__PVT__atom_addr_reg = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7363127061045562937ull);
    vlSelf->__PVT__atom_addr_reg_nxt = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17756370081495202246ull);
    vlSelf->__PVT__atom_addr_bit_offset = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6300873234480195079ull);
    vlSelf->__PVT__atom_addr_bit_offset_nxt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16998458773354559474ull);
    vlSelf->__PVT__atom_addr_upper_shift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2930732367094804911ull);
    vlSelf->__PVT__atom_addr_upper_shift_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6675550234416083913ull);
    vlSelf->__PVT__atom_be_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7387322268630998811ull);
    vlSelf->__PVT__atom_be_reg_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7316896847519931395ull);
    vlSelf->__PVT__atom_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5758455702582493913ull);
    vlSelf->__PVT__atom_size_reg_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10161815435537352445ull);
    vlSelf->__PVT__atom_is_big_endian_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10169179819045902685ull);
    vlSelf->__PVT__atom_is_big_endian_reg_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4164170338223039342ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_reg, __VscopeHash, 15189165225244578201ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_init_reg_nxt, __VscopeHash, 9965061600829655164ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_reg, __VscopeHash, 1829941083604378763ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__PVT__dat_txn_reg_nxt, __VscopeHash, 12648828666600279643ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_reg, __VscopeHash, 7482999645511201830ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__dat_res_reg_nxt, __VscopeHash, 10110072058956973237ull);
    vlSelf->__PVT__dat_res_wr_flag_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8580109036342337561ull);
    vlSelf->__PVT__dat_res_wr_flag_reg_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16950220223060318300ull);
    vlSelf->__PVT__dat_init_wr_flag_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12460936161258151119ull);
    vlSelf->__PVT__dat_init_wr_flag_reg_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15720386183484985798ull);
    vlSelf->__PVT__bytemask_to_HN_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13214070917679557760ull);
    vlSelf->__PVT__bytemask_to_HN_reg_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9939954268153258046ull);
    vlSelf->__PVT__set_bit_temp = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5210501654602766590ull);
    vlSelf->__PVT__addr_is_aligned_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9428181101513297077ull);
    vlSelf->__PVT__addr_is_aligned_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13512612449046402304ull);
    vlSelf->__PVT__bytemask_unaligned_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14042401060474398378ull);
    vlSelf->__PVT__bytemask_unaligned_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1642281446228488766ull);
    vlSelf->__PVT__bytemask_aligned_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9235729894290434188ull);
    vlSelf->__PVT__bytemask_aligned_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 929856358847824305ull);
    vlSelf->__Vconcswap_1_h9e6ed4fe__0 = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 7379148399516403633ull);
    vlSelf->__Vconcswap_1_h9fcad676__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7459391937655976965ull);
    vlSelf->__Vfunc_clogb2__0__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1471347567881708008ull);
    vlSelf->__Vfunc_clogb2__0__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12305165852282339956ull);
    vlSelf->__Vfunc_clogb2__0__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_clogb2__0__temp_overflow = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10891123961742352ull);
    vlSelf->__Vfunc_clogb2__0__multiply_set_bit = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6359231406285960006ull);
    vlSelf->__Vdly__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15137669457351727936ull);
    vlSelf->__Vdly__dat_init_wr_flag_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3261543772421040298ull);
    vlSelf->__Vdly__dat_res_wr_flag_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416648546726988960ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__Vdly__dat_init_reg, __VscopeHash, 15176982406707199460ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->__Vdly__dat_txn_reg, __VscopeHash, 13395679854059088946ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__Vdly__dat_res_reg, __VscopeHash, 6141758929248921258ull);
    vlSelf->__Vdly__atom_addr_reg = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 537695461012247747ull);
    vlSelf->__Vdly__atom_addr_upper_shift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14852314157192462246ull);
    vlSelf->__Vdly__atom_addr_bit_offset = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9034857217041007078ull);
    vlSelf->__Vdly__atom_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7474080678691400526ull);
    vlSelf->__Vdly__atom_is_big_endian_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930603603501129079ull);
    vlSelf->__Vdly__atom_be_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2501437673349944332ull);
    vlSelf->__Vdly__atom_op_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15920348736605281139ull);
    vlSelf->__Vdly__bytemask_to_HN_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12516726207554490009ull);
    vlSelf->__Vdly__bytemask_to_HN_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3915377715556191720ull);
    vlSelf->__Vdly__addr_is_aligned_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15557850916929140873ull);
    vlSelf->__Vdly__bytemask_unaligned_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9849678669574065575ull);
    vlSelf->__Vdly__bytemask_aligned_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12997939054489719796ull);
}
