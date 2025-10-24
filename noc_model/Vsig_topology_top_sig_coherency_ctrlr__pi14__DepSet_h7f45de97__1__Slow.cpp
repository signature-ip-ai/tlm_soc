// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi14.h"

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi14___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    CData/*31:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    CData/*31:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    CData/*31:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    CData/*31:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    CData/*31:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    CData/*31:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_59;
    CData/*31:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_64;
    CData/*31:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    CData/*31:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_74;
    CData/*31:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<4>/*127:0*/ __Vtemp_79;
    CData/*31:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_84;
    CData/*31:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_89;
    CData/*31:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_94;
    CData/*31:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_99;
    CData/*31:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_104;
    CData/*31:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    CData/*31:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_114;
    CData/*31:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_118;
    VlWide<4>/*127:0*/ __Vtemp_119;
    CData/*31:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_122;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    CData/*31:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_127;
    VlWide<4>/*127:0*/ __Vtemp_128;
    VlWide<4>/*127:0*/ __Vtemp_129;
    CData/*31:0*/ __Vtemp_130;
    VlWide<4>/*127:0*/ __Vtemp_131;
    VlWide<4>/*127:0*/ __Vtemp_132;
    VlWide<4>/*127:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_134;
    CData/*31:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_138;
    VlWide<4>/*127:0*/ __Vtemp_139;
    CData/*31:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_142;
    VlWide<4>/*127:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_144;
    CData/*31:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_146;
    VlWide<4>/*127:0*/ __Vtemp_147;
    VlWide<4>/*127:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_149;
    CData/*31:0*/ __Vtemp_150;
    VlWide<4>/*127:0*/ __Vtemp_151;
    VlWide<4>/*127:0*/ __Vtemp_152;
    VlWide<4>/*127:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_154;
    CData/*31:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_159;
    CData/*31:0*/ __Vtemp_160;
    VlWide<4>/*127:0*/ __Vtemp_161;
    VlWide<4>/*127:0*/ __Vtemp_162;
    // Body
    vlSelfRef.__PVT__req_is_anydwt_ph3 = ((IData)(vlSelfRef.__PVT__reg_dwt_en) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                             | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[1U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [1U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[2U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [2U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[3U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [3U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[4U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [4U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[5U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [5U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[6U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [6U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[7U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [7U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[8U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [8U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[9U] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [9U], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xaU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xaU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xbU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xbU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xcU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xcU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xdU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xdU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xeU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xeU], 0x18U, 4));
    vlSelfRef.__PVT__ucie_sliced_base_addresses[0xfU] 
        = (0xfU & VL_SEL_IIII(28, vlSelfRef.__PVT__i_ucie_base_addresses
                              [0xfU], 0x18U, 4));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0U], 0x18U, 4));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [1U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[1U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [1U], 0x18U, 4));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [2U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[2U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [2U], 0x18U, 4));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [3U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[3U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [3U], 0x18U, 4));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [4U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[4U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [4U], 0x18U, 4));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [5U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[5U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [5U], 0x18U, 4));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [6U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[6U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [6U], 0x18U, 4));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [7U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[7U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [7U], 0x18U, 4));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [8U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[8U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [8U], 0x18U, 4));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [9U], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[9U] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [9U], 0x18U, 4));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xaU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xaU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xaU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xbU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xbU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xbU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xcU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xcU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xcU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xdU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xdU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xdU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xeU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xeU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xeU], 0x18U, 4));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_sam_activated, 
                    (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                                         [0xfU], 0x1cU)));
    vlSelfRef.__PVT__ucie_sliced_limit_addresses[0xfU] 
        = (0xfU & VL_SEL_IIII(29, vlSelfRef.__PVT__i_ucie_limit_addresses
                              [0xfU], 0x18U, 4));
    vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_full 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                 & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
               & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
              | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                  & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                 & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))));
    vlSelfRef.__PVT__itis_wrnosnpfull_send_wr_data_ph3 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                  & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                 & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
               | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                  & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
              & (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & ((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                     & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                    & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              | ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                  & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                 & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))));
    vlSelfRef.__PVT__itis_wrnosnpptl_send_wr_data_ph3 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & (((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                     & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                 | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                       & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                      & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                | ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_zero 
        = ((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (IData)(vlSelfRef.__PVT__use_early_write_response)) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
               | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3 
        = (((((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                & (~ (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3))) 
               & (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)) 
              & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
             & (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3)) 
            & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
           & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (~ (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3))) 
             & (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3)) 
                   & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)));
    vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd 
        = (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_compdata)
            ? (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_compdata)
            : (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_snpreq)
                ? (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_snpreq)
                : 0U));
    vlSelfRef.__PVT__clr_outstand_cmd = (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_compdata)
                                          ? vlSelfRef.__PVT__clr_outstand_cmd_compdata
                                          : (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_snpreq)
                                              ? vlSelfRef.__PVT__clr_outstand_cmd_snpreq
                                              : 0U));
    vlSelfRef.__PVT__block_reqcmdq_dueto_eviction = vlSelfRef.__PVT__en_blocking_reqcmdq;
    vlSelfRef.__PVT__req_cmq = ((IData)(vlSelfRef.__PVT__cm_cmdvalid) 
                                | (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict));
    vlSelfRef.__PVT__wren_outcompfifo_retry = ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                               & (IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3));
    vlSelfRef.__PVT__wren_outcompfifo_excl_fail = (
                                                   (~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                                   & (IData)(vlSelfRef.__PVT__itis_lastresp_nonsnp_excl_store_fail_ph3));
    vlSelfRef.__PVT__wren_outcompfifo_compack = 0U;
    if ((((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
          & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
         & ((IData)(vlSelfRef.__PVT__opcode_compack_resp_ph3) 
            | ((IData)(vlSelfRef.__PVT__opcode_readreceipt_ph3) 
               & ((0U == (IData)(vlSelfRef.__PVT__origreq_order_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3))))))) {
        vlSelfRef.__PVT__wren_outcompfifo_compack = 
            (((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
              | ((IData)(vlSelfRef.__PVT__orig_makeread_u_ph3) 
                 & (~ (((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                        | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3)) 
                       & (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3)))))
              ? (((IData)(vlSelfRef.__PVT__last_read_snp_sent_ph3) 
                  | (IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3)) 
                 | (IData)(vlSelfRef.__PVT__origreq_invalid_addr))
              : ((1U & (~ ((((((((((0x1dU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                   | (0x1cU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                  | (0x44U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                 | (0x43U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                | (0x51U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                               | (0x50U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                              | (0x61U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                             | (0x60U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                            | (0x54U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                           | (0x64U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))))) 
                 && ((1U & (~ ((0x19U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                               | (0x18U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))))) 
                     || (1U & (~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3))))));
    }
    vlSelfRef.__PVT__rddata_cmq_addr = (0xfffffffffffffULL 
                                        & VL_SEL_QWII(155, vlSelfRef.__PVT__cm_cmd, 0x48U, 52));
    vlSelfRef.__PVT__block_cmqfull = (1U & (~ (IData)(vlSelfRef.__PVT__fiforoom_atlst4_cmq)));
    vlSelfRef.__PVT__pshare_cnt_ph5_rsp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__ones_count;
    vlSelfRef.__PVT__pshare_cnt_ph5_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__ones_count;
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_drespcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_rddata);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_memrespcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_rddata);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__rddata_respcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__pshare_ph4 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__ones_count;
    VL_ASSIGN_W(156,vlSelfRef.__PVT__rddata_reqcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__flit_dwt_en_ph3 = vlSelfRef.__PVT__req_is_anydwt_ph3;
    vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp 
        = ((IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_full) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl));
    vlSelfRef.__PVT__itis_wrnosnp_send_wr_data_ph3 
        = ((IData)(vlSelfRef.__PVT__itis_wrnosnpptl_send_wr_data_ph3) 
           | (IData)(vlSelfRef.__PVT__itis_wrnosnpfull_send_wr_data_ph3));
    vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp 
        = (((IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_full) 
            | (IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_zero));
    vlSelfRef.__PVT__wren_outcompfifo_resp = ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                              & ((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                                                     | (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3)) 
                                                    | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_ph3)) 
                                                   & ((((((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                                                          | (IData)(vlSelfRef.__PVT__origreq_need_dataxfr_toic)) 
                                                         | (IData)(vlSelfRef.__PVT__origreq_need_dataxfr_tomm)) 
                                                        | (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)) 
                                                       | (IData)(vlSelfRef.__PVT__origreq_no_dataxfr)) 
                                                      | (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) 
                                                  | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
                                                 | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo)));
    vlSelfRef.__PVT__wren_cache_vector_ph4_rsp_nxt = 0U;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                 | ((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
                    & (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3))) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3)) 
               | (((IData)(vlSelfRef.__PVT__itis_lastresp_atom_comp_ph3) 
                   | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_inidata_ph3)) 
                  & (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3))) 
              & (~ (IData)(vlSelfRef.__PVT__orig_read_nosnp_ph3))) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_snp)))) {
        vlSelfRef.__PVT__wren_cache_vector_ph4_rsp_nxt 
            = (0xffffU & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x5cU, 16));
    }
    vlSelfRef.__PVT__origreq_got_snpptldata_ic = 0U;
    if (((((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                 | (IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3)) 
                | (IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl)) 
               | (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo)) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo))) {
        if (((IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3) 
             | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode))))) {
            vlSelfRef.__PVT__origreq_got_snpptldata_ic = 1U;
        }
    }
    vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3))) {
        if (vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compfifo_index_ic_data_ph3;
        } else if ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     | (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    | (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if ((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                     | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)) 
                    | (IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        }
    } else if (((((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if (vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if (vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_fl) {
        if (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
             & ((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA) 
                | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if (vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compfifo_index_mm_ph3;
        }
    } else if (((IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_full) 
                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_full)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_full))) {
        if (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
             & ((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA) 
                | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if (vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compfifo_index_mm_ph3;
        }
    } else if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl) 
                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if (vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
                | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    }
    vlSelfRef.__PVT__origreq_got_snpdata_ic = 0U;
    if ((((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                | (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo)) 
               | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
         & (((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
             | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__origreq_got_snpdata_ic = 1U;
    } else if (((IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) 
                & (((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
                    | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)) 
                   | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__origreq_got_snpdata_ic = 1U;
    }
    vlSelfRef.__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt 
        = vlSelfRef.__PVT__was_lastresp_dataless_snpdataptl_ph3;
    if ((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
         & ((IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3) 
            | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
               & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)))))) {
        vlSelfRef.__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__wren_outcompfifo_prelastresp = 
        ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
         & (((((((((((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                     | (IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3)) 
                    | (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo)) 
                   | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_comp_ph3_cmo)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3)) 
               | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
            | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo)));
    vlSelfRef.__PVT__addr_clln_clearing_nxt = (0xfffffffffffffULL 
                                               & ((0x67fU 
                                                   >= 
                                                   (0x7ffU 
                                                    & VL_SEL_IIII(32, 
                                                                  ((IData)(0x34U) 
                                                                   * 
                                                                   VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd), 0U, 5)))), 0U, 11)))
                                                   ? 
                                                  VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                              (0x7ffU 
                                                               & VL_SEL_IIII(32, 
                                                                             ((IData)(0x34U) 
                                                                              * 
                                                                              VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd), 0U, 5)))), 0U, 11)), 52)
                                                   : 0ULL));
    vlSelfRef.__PVT__en_clr_collnreg_nxt = (((0U != vlSelfRef.__PVT__clr_outstand_cmd) 
                                             & (~ (IData)(vlSelfRef.__PVT__clr_collnreg_sending_ini_compdata))) 
                                            & (~ (IData)(vlSelfRef.__PVT__avoid_clr_colln_snpreq)));
    VL_ASSIGNSEL_II(32,2,0U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 1U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0U)))));
    VL_ASSIGNSEL_II(32,2,2U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 3U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 2U)))));
    VL_ASSIGNSEL_II(32,2,4U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 5U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 4U)))));
    VL_ASSIGNSEL_II(32,2,6U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 7U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 6U)))));
    VL_ASSIGNSEL_II(32,2,8U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 9U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 8U)))));
    VL_ASSIGNSEL_II(32,2,0xaU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xbU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xaU)))));
    VL_ASSIGNSEL_II(32,2,0xcU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xdU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xcU)))));
    VL_ASSIGNSEL_II(32,2,0xeU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xfU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xeU)))));
    VL_ASSIGNSEL_II(32,2,0x10U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x11U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x10U)))));
    VL_ASSIGNSEL_II(32,2,0x12U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x13U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x12U)))));
    VL_ASSIGNSEL_II(32,2,0x14U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x15U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x14U)))));
    VL_ASSIGNSEL_II(32,2,0x16U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x17U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x16U)))));
    VL_ASSIGNSEL_II(32,2,0x18U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x19U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x18U)))));
    VL_ASSIGNSEL_II(32,2,0x1aU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1bU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1aU)))));
    VL_ASSIGNSEL_II(32,2,0x1cU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1dU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1cU)))));
    VL_ASSIGNSEL_II(32,2,0x1eU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1fU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1eU)))));
    vlSelfRef.__PVT__itis_finalcompack = vlSelfRef.__PVT__wren_outcompfifo_compack;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))));
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_drespcmdq_s, vlSelfRef.__PVT__rddata_drespcmdq);
    vlSelfRef.__PVT__block_b2b_resp_drespcmdq = ((~ (IData)(vlSelfRef.__PVT__empty_drespcmdq)) 
                                                 & (((((((0x3fU 
                                                          & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                         == (IData)(vlSelfRef.__PVT__last_resp_index_0)) 
                                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                                       | (((0x3fU 
                                                            & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                           == (IData)(vlSelfRef.__PVT__last_resp_index_1)) 
                                                          & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1))) 
                                                      | (((0x3fU 
                                                           & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                          == (IData)(vlSelfRef.__PVT__last_resp_index_2)) 
                                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2))) 
                                                     | (((0x3fU 
                                                          & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                         == (IData)(vlSelfRef.__PVT__last_resp_index_3)) 
                                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3))) 
                                                    | (((0x3fU 
                                                         & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                        == (IData)(vlSelfRef.__PVT__last_resp_index_4)) 
                                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4))));
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_memrespcmdq_prepped, vlSelfRef.__PVT__rddata_memrespcmdq);
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 74, __Vtemp_2, vlSelfRef.__PVT__rddata_respcmdq, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__rddata_respcmdq_s, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__pshare_forsnp_ph4 = (0x1fU & (
                                                   (1U 
                                                    & (((2U 
                                                         == (IData)(vlSelfRef.__PVT__req_atmo_ph4)) 
                                                        | (~ (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph4))) 
                                                       | (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph4)))
                                                    ? (IData)(vlSelfRef.__PVT__pshare_ph4)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pshare_ph4) 
                                                    - (IData)(1U))));
    vlSelfRef.__PVT__new_wrdata_cnt_req_ph3 = 0U;
    if (vlSelfRef.__PVT__req_is_atom_ph3) {
        vlSelfRef.__PVT__new_wrdata_cnt_req_ph3 = 1U;
    } else if ((((((IData)(vlSelfRef.__PVT__req_is_anywr_ph3) 
                   & (~ (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__req_is_wruniquezero_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__flit_dwt_en_ph3))) 
                | (IData)(vlSelfRef.__PVT__req_is_writecmo_ph3))) {
        vlSelfRef.__PVT__new_wrdata_cnt_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__wren_outcompfifo_wr_all = ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                                & ((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_all) 
                                                         | (IData)(vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp)) 
                                                        | (IData)(vlSelfRef.__PVT__itis_atom_txn_data_ph3)) 
                                                       | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last)) 
                                                     | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3_comp_is_last)) 
                                                    | (IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp)) 
                                                   | (IData)(vlSelfRef.__PVT__itis_wrnosnp_send_wr_data_ph3)));
    vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3))) {
        if (vlSelfRef.__PVT__cmdq_src2_ph3) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = ((IData)(vlSelfRef.__PVT__origreq_invalidate_ph3)
                    ? (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3)
                    : (IData)(vlSelfRef.__PVT__compfifo_index_mm_ph3));
        } else if (vlSelfRef.__PVT__cmdq_src1_ph3) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = ((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)
                    ? (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3)
                    : (IData)(vlSelfRef.__PVT__compfifo_index_ic_ph3));
        } else if (((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                    | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3))) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if (vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = ((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)
                    ? (IData)(vlSelfRef.__PVT__compfifo_index_mm_ph3)
                    : ((IData)(vlSelfRef.__PVT__origreq_invalidate_ph3)
                        ? (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3)
                        : (IData)(vlSelfRef.__PVT__compfifo_index_ic_ph3)));
        }
    } else if (vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if (((IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if ((((IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3) 
                 & (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)) 
                & (2U == (IData)(vlSelfRef.__PVT__atmo_state_ph3)))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if ((((((IData)(vlSelfRef.__PVT__itis_wrnosnpptl_send_wr_data_ph3) 
                   | (IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl)) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl)) 
                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb) 
                & (0x1aU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if (((((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo))) {
        if (((IData)(vlSelfRef.__PVT__origreq_got_snpresp_ic) 
             | (IData)(vlSelfRef.__PVT__origreq_got_snpdata_ic))) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
        }
    } else if (((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) 
                | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    }
    vlSelfRef.__PVT__en_clr_atom_rd_collnreg_nxt = 
        VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 0U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 1U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 2U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 3U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 4U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 5U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 6U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 7U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    VL_ASSIGN_W(109,vlSelfRef.__PVT__rddata_memrespcmdq_s, vlSelfRef.__PVT__rddata_memrespcmdq_prepped);
    vlSelfRef.__PVT__block_b2b_resp_memrespcmdq = (
                                                   (~ (IData)(vlSelfRef.__PVT__empty_memrespcmdq)) 
                                                   & (((((((0x3fU 
                                                            & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                           == (IData)(vlSelfRef.__PVT__last_resp_index_0)) 
                                                          & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                                         | (((0x3fU 
                                                              & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                             == (IData)(vlSelfRef.__PVT__last_resp_index_1)) 
                                                            & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1))) 
                                                        | (((0x3fU 
                                                             & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                            == (IData)(vlSelfRef.__PVT__last_resp_index_2)) 
                                                           & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2))) 
                                                       | (((0x3fU 
                                                            & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                           == (IData)(vlSelfRef.__PVT__last_resp_index_3)) 
                                                          & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3))) 
                                                      | (((0x3fU 
                                                           & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                          == (IData)(vlSelfRef.__PVT__last_resp_index_4)) 
                                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4))));
    vlSelfRef.__PVT__block_b2b_resp_respcmdq = ((~ (IData)(vlSelfRef.__PVT__empty_respcmdq)) 
                                                & (((((((0x3fU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                        == (IData)(vlSelfRef.__PVT__last_resp_index_0)) 
                                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                                      | (((0x3fU 
                                                           & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                          == (IData)(vlSelfRef.__PVT__last_resp_index_1)) 
                                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1))) 
                                                     | (((0x3fU 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                         == (IData)(vlSelfRef.__PVT__last_resp_index_2)) 
                                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2))) 
                                                    | (((0x3fU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                        == (IData)(vlSelfRef.__PVT__last_resp_index_3)) 
                                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3))) 
                                                   | (((0x3fU 
                                                        & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                       == (IData)(vlSelfRef.__PVT__last_resp_index_4)) 
                                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4))));
    vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 0U;
    if (((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4) 
         & ((IData)(vlSelfRef.__PVT__req_st_invalid_ph4) 
            | (5U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4))))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 0U;
    } else if (((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4) 
                & (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (((((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph4) 
                    & (IData)(vlSelfRef.__PVT__snpattr_req_ph4)) 
                   | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph4)) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph4)) 
                 & (IData)(vlSelfRef.__PVT__req_st_dirty_ph4)) 
                & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 1U;
    } else if ((((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph4) 
                   & (IData)(vlSelfRef.__PVT__snpattr_req_ph4)) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph4)) 
                 | (IData)(vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph4)) 
                & (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4) 
                 & (IData)(vlSelfRef.__PVT__req_st_dirty_ph4)) 
                & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 1U;
    } else if (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph4) 
                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph4)) 
                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph4)) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph4)) 
                 | ((IData)(vlSelfRef.__PVT__req_is_dataless_ph4) 
                    & (IData)(vlSelfRef.__PVT__snpattr_req_ph4))) 
                & (IData)(vlSelfRef.__PVT__req_st_valid_ph4))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (vlSelfRef.__PVT__req_is_wr_uniq_ph4) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (((0U != (IData)(vlSelfRef.__PVT__req_atmo_ph4)) 
                & (IData)(vlSelfRef.__PVT__snpattr_req_ph4))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (vlSelfRef.__PVT__cmdis_invalidate_ph4) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    }
    vlSelfRef.__PVT__wren_outcompfifo = (((((((IData)(vlSelfRef.__PVT__wren_outcompfifo_resp) 
                                              | (IData)(vlSelfRef.__PVT__wren_outcompfifo_prelastresp)) 
                                             | (IData)(vlSelfRef.__PVT__wren_outcompfifo_compack)) 
                                            | (IData)(vlSelfRef.__PVT__wren_outcompfifo_wr_all)) 
                                           | (IData)(vlSelfRef.__PVT__wren_outcompfifo_retry)) 
                                          | (IData)(vlSelfRef.__PVT__wren_outcompfifo_excl_fail)) 
                                         | (IData)(vlSelfRef.__PVT__wren_outcompfifo_atom));
    vlSelfRef.__PVT__blockcmq_dueto_highestseqnum_incollnq 
        = (0U != (IData)(vlSelfRef.__PVT__highest_seq_cmq_is3_or_more));
    vlSelfRef.__PVT__block_b2b_resp = (((IData)(vlSelfRef.__PVT__block_b2b_resp_respcmdq) 
                                        | (IData)(vlSelfRef.__PVT__block_b2b_resp_memrespcmdq)) 
                                       | (IData)(vlSelfRef.__PVT__block_b2b_resp_drespcmdq));
    VL_ASSIGNSEL_WI(108,32,0U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(32,12,20, (0xfffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x1aU, 12)), 
                                  VL_CONCAT_III(20,11,9, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0xfU, 11)), 
                                                VL_CONCAT_III(9,7,2, 
                                                              (0x7fU 
                                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)), 
                                                              (3U 
                                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x4cU, 2))))));
    VL_ASSIGNSEL_WI(108,19,0x20U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(19,6,13, VL_CONCAT_III(6,4,2, 
                                                         (0xfU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0U, 4)), 
                                                         VL_CONCAT_III(2,1,1, 
                                                                       (1U 
                                                                        & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x89U)), 
                                                                       (1U 
                                                                        & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x87U)))), 
                                  VL_CONCAT_III(13,11,2, (IData)(vlSelfRef.__PVT__tgt_id_ph4), 
                                                (3U 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x7fU, 2)))));
    VL_ASSIGNSEL_WI(108,19,0x33U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(19,5,14, (IData)(vlSelfRef.__PVT__new_snpresp_cnt_req_ph4), 
                                  VL_CONCAT_III(14,5,9, (IData)(vlSelfRef.__PVT__pshare_ph4), 
                                                VL_CONCAT_III(9,3,6, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), (IData)(vlSelfRef.__PVT__wrindex_req_ph4)))));
    VL_ASSIGNSEL_WI(108,20,0x46U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(20,10,10, VL_CONCAT_III(10,4,6, 
                                                          (0xfU 
                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x85U, 4)), 
                                                          VL_CONCAT_III(6,1,5, 
                                                                        (1U 
                                                                         & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x7cU)), 
                                                                        (0x1fU 
                                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x8aU, 5)))), 
                                  VL_CONCAT_III(10,3,7, 
                                                VL_CONCAT_III(3,1,2, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x92U)), 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__excl_pass_ph4), (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph4))), 
                                                VL_CONCAT_III(7,4,3, 
                                                              VL_CONCAT_III(4,3,1, 
                                                                            (7U 
                                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x45U, 3)), (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph4)), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph4), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph4), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x93U))))))));
    VL_ASSIGNSEL_WI(108,18,0x5aU, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(18,16,2, (IData)(vlSelfRef.__PVT__cachehit_vector_ph4), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__cmd_ph4_nonexcl_read_dct_req), (IData)(vlSelfRef.__PVT__cmd_ph4_apply_dmt_req))));
    vlSelfRef.__PVT__RespErr_ph3 = (3U & ((IData)(vlSelfRef.__PVT__origreq_invalid_addr)
                                           ? 3U : (
                                                   ((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                    & ((IData)(vlSelfRef.__PVT__origreq_excl_ld_snp_ph3) 
                                                       | (((IData)(vlSelfRef.__PVT__orig_clean_u_ph3) 
                                                           & (IData)(vlSelfRef.__PVT__origreq_excl_ph3)) 
                                                          & (IData)(vlSelfRef.__PVT__origreq_excl_pass_ph3))))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                     & ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3)))
                                                     ? 
                                                    VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2bU, 2)
                                                     : 
                                                    ((((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                       & (((IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp) 
                                                           | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp)) 
                                                          | ((IData)(vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp) 
                                                             & (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3)))) 
                                                      & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL) 
                                                           | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                          | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                         | (IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3)))
                                                      ? (IData)(vlSelfRef.__PVT__comp_resperr_ph3)
                                                      : 
                                                     (((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                       & ((IData)(vlSelfRef.__PVT__live_RespErr_active) 
                                                          | (IData)(vlSelfRef.__PVT__origreq_excl_ld_nonsnp_ph3)))
                                                       ? 
                                                      VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x35U, 2)
                                                       : 
                                                      (((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                        & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3))
                                                        ? (IData)(vlSelfRef.__PVT__cmd_ph3_dat_resperr)
                                                        : (IData)(vlSelfRef.__PVT__first_RespErr_ph3))))))));
    VL_CONST_W_4X(128,__Vtemp_3,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_4, vlSelfRef.__PVT__status_field_req, 0U, 108);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                 & (0U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_4);
    VL_AND_W(4, __Vtemp_7, __Vtemp_3, __Vtemp_6);
    VL_ASSIGNSEL_WW(3456,108,0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_7);
    VL_CONST_W_4X(128,__Vtemp_8,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_9, vlSelfRef.__PVT__status_field_req, 0x6cU, 108);
    __Vtemp_10 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (1U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_9);
    VL_AND_W(4, __Vtemp_12, __Vtemp_8, __Vtemp_11);
    VL_ASSIGNSEL_WW(3456,108,0x6cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_12);
    VL_CONST_W_4X(128,__Vtemp_13,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_14, vlSelfRef.__PVT__status_field_req, 0xd8U, 108);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (2U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_14);
    VL_AND_W(4, __Vtemp_17, __Vtemp_13, __Vtemp_16);
    VL_ASSIGNSEL_WW(3456,108,0xd8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_17);
    VL_CONST_W_4X(128,__Vtemp_18,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_19, vlSelfRef.__PVT__status_field_req, 0x144U, 108);
    __Vtemp_20 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (3U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_21, __Vtemp_20, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_19);
    VL_AND_W(4, __Vtemp_22, __Vtemp_18, __Vtemp_21);
    VL_ASSIGNSEL_WW(3456,108,0x144U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_22);
    VL_CONST_W_4X(128,__Vtemp_23,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_24, vlSelfRef.__PVT__status_field_req, 0x1b0U, 108);
    __Vtemp_25 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (4U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_26, __Vtemp_25, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_24);
    VL_AND_W(4, __Vtemp_27, __Vtemp_23, __Vtemp_26);
    VL_ASSIGNSEL_WW(3456,108,0x1b0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_27);
    VL_CONST_W_4X(128,__Vtemp_28,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_29, vlSelfRef.__PVT__status_field_req, 0x21cU, 108);
    __Vtemp_30 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (5U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_31, __Vtemp_30, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_29);
    VL_AND_W(4, __Vtemp_32, __Vtemp_28, __Vtemp_31);
    VL_ASSIGNSEL_WW(3456,108,0x21cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_32);
    VL_CONST_W_4X(128,__Vtemp_33,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_34, vlSelfRef.__PVT__status_field_req, 0x288U, 108);
    __Vtemp_35 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (6U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_36, __Vtemp_35, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_34);
    VL_AND_W(4, __Vtemp_37, __Vtemp_33, __Vtemp_36);
    VL_ASSIGNSEL_WW(3456,108,0x288U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_37);
    VL_CONST_W_4X(128,__Vtemp_38,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_39, vlSelfRef.__PVT__status_field_req, 0x2f4U, 108);
    __Vtemp_40 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (7U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_41, __Vtemp_40, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_39);
    VL_AND_W(4, __Vtemp_42, __Vtemp_38, __Vtemp_41);
    VL_ASSIGNSEL_WW(3456,108,0x2f4U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_42);
    VL_CONST_W_4X(128,__Vtemp_43,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_44, vlSelfRef.__PVT__status_field_req, 0x360U, 108);
    __Vtemp_45 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (8U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_46, __Vtemp_45, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_44);
    VL_AND_W(4, __Vtemp_47, __Vtemp_43, __Vtemp_46);
    VL_ASSIGNSEL_WW(3456,108,0x360U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_47);
    VL_CONST_W_4X(128,__Vtemp_48,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_49, vlSelfRef.__PVT__status_field_req, 0x3ccU, 108);
    __Vtemp_50 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (9U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_51, __Vtemp_50, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_49);
    VL_AND_W(4, __Vtemp_52, __Vtemp_48, __Vtemp_51);
    VL_ASSIGNSEL_WW(3456,108,0x3ccU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_52);
    VL_CONST_W_4X(128,__Vtemp_53,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_54, vlSelfRef.__PVT__status_field_req, 0x438U, 108);
    __Vtemp_55 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xaU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_56, __Vtemp_55, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_54);
    VL_AND_W(4, __Vtemp_57, __Vtemp_53, __Vtemp_56);
    VL_ASSIGNSEL_WW(3456,108,0x438U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_57);
    VL_CONST_W_4X(128,__Vtemp_58,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_59, vlSelfRef.__PVT__status_field_req, 0x4a4U, 108);
    __Vtemp_60 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xbU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_59);
    VL_AND_W(4, __Vtemp_62, __Vtemp_58, __Vtemp_61);
    VL_ASSIGNSEL_WW(3456,108,0x4a4U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_62);
    VL_CONST_W_4X(128,__Vtemp_63,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_64, vlSelfRef.__PVT__status_field_req, 0x510U, 108);
    __Vtemp_65 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xcU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_66, __Vtemp_65, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_64);
    VL_AND_W(4, __Vtemp_67, __Vtemp_63, __Vtemp_66);
    VL_ASSIGNSEL_WW(3456,108,0x510U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_67);
    VL_CONST_W_4X(128,__Vtemp_68,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_69, vlSelfRef.__PVT__status_field_req, 0x57cU, 108);
    __Vtemp_70 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xdU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_71, __Vtemp_70, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_69);
    VL_AND_W(4, __Vtemp_72, __Vtemp_68, __Vtemp_71);
    VL_ASSIGNSEL_WW(3456,108,0x57cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_72);
    VL_CONST_W_4X(128,__Vtemp_73,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_74, vlSelfRef.__PVT__status_field_req, 0x5e8U, 108);
    __Vtemp_75 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xeU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_76, __Vtemp_75, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_74);
    VL_AND_W(4, __Vtemp_77, __Vtemp_73, __Vtemp_76);
    VL_ASSIGNSEL_WW(3456,108,0x5e8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_77);
    VL_CONST_W_4X(128,__Vtemp_78,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_79, vlSelfRef.__PVT__status_field_req, 0x654U, 108);
    __Vtemp_80 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xfU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_81, __Vtemp_80, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_79);
    VL_AND_W(4, __Vtemp_82, __Vtemp_78, __Vtemp_81);
    VL_ASSIGNSEL_WW(3456,108,0x654U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_82);
    VL_CONST_W_4X(128,__Vtemp_83,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_84, vlSelfRef.__PVT__status_field_req, 0x6c0U, 108);
    __Vtemp_85 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x10U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_86, __Vtemp_85, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_84);
    VL_AND_W(4, __Vtemp_87, __Vtemp_83, __Vtemp_86);
    VL_ASSIGNSEL_WW(3456,108,0x6c0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_87);
    VL_CONST_W_4X(128,__Vtemp_88,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_89, vlSelfRef.__PVT__status_field_req, 0x72cU, 108);
    __Vtemp_90 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x11U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_91, __Vtemp_90, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_89);
    VL_AND_W(4, __Vtemp_92, __Vtemp_88, __Vtemp_91);
    VL_ASSIGNSEL_WW(3456,108,0x72cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_92);
    VL_CONST_W_4X(128,__Vtemp_93,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_94, vlSelfRef.__PVT__status_field_req, 0x798U, 108);
    __Vtemp_95 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x12U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_96, __Vtemp_95, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_94);
    VL_AND_W(4, __Vtemp_97, __Vtemp_93, __Vtemp_96);
    VL_ASSIGNSEL_WW(3456,108,0x798U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_97);
    VL_CONST_W_4X(128,__Vtemp_98,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_99, vlSelfRef.__PVT__status_field_req, 0x804U, 108);
    __Vtemp_100 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x13U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_101, __Vtemp_100, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_99);
    VL_AND_W(4, __Vtemp_102, __Vtemp_98, __Vtemp_101);
    VL_ASSIGNSEL_WW(3456,108,0x804U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_102);
    VL_CONST_W_4X(128,__Vtemp_103,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_104, vlSelfRef.__PVT__status_field_req, 0x870U, 108);
    __Vtemp_105 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x14U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_106, __Vtemp_105, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_104);
    VL_AND_W(4, __Vtemp_107, __Vtemp_103, __Vtemp_106);
    VL_ASSIGNSEL_WW(3456,108,0x870U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_107);
    VL_CONST_W_4X(128,__Vtemp_108,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_109, vlSelfRef.__PVT__status_field_req, 0x8dcU, 108);
    __Vtemp_110 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x15U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_111, __Vtemp_110, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_109);
    VL_AND_W(4, __Vtemp_112, __Vtemp_108, __Vtemp_111);
    VL_ASSIGNSEL_WW(3456,108,0x8dcU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_112);
    VL_CONST_W_4X(128,__Vtemp_113,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_114, vlSelfRef.__PVT__status_field_req, 0x948U, 108);
    __Vtemp_115 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x16U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_116, __Vtemp_115, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_114);
    VL_AND_W(4, __Vtemp_117, __Vtemp_113, __Vtemp_116);
    VL_ASSIGNSEL_WW(3456,108,0x948U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_117);
    VL_CONST_W_4X(128,__Vtemp_118,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_119, vlSelfRef.__PVT__status_field_req, 0x9b4U, 108);
    __Vtemp_120 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x17U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_121, __Vtemp_120, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_119);
    VL_AND_W(4, __Vtemp_122, __Vtemp_118, __Vtemp_121);
    VL_ASSIGNSEL_WW(3456,108,0x9b4U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_122);
    VL_CONST_W_4X(128,__Vtemp_123,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_124, vlSelfRef.__PVT__status_field_req, 0xa20U, 108);
    __Vtemp_125 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x18U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_126, __Vtemp_125, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_124);
    VL_AND_W(4, __Vtemp_127, __Vtemp_123, __Vtemp_126);
    VL_ASSIGNSEL_WW(3456,108,0xa20U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_127);
    VL_CONST_W_4X(128,__Vtemp_128,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_129, vlSelfRef.__PVT__status_field_req, 0xa8cU, 108);
    __Vtemp_130 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x19U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_131, __Vtemp_130, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_129);
    VL_AND_W(4, __Vtemp_132, __Vtemp_128, __Vtemp_131);
    VL_ASSIGNSEL_WW(3456,108,0xa8cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_132);
    VL_CONST_W_4X(128,__Vtemp_133,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_134, vlSelfRef.__PVT__status_field_req, 0xaf8U, 108);
    __Vtemp_135 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1aU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_136, __Vtemp_135, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_134);
    VL_AND_W(4, __Vtemp_137, __Vtemp_133, __Vtemp_136);
    VL_ASSIGNSEL_WW(3456,108,0xaf8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_137);
    VL_CONST_W_4X(128,__Vtemp_138,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_139, vlSelfRef.__PVT__status_field_req, 0xb64U, 108);
    __Vtemp_140 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1bU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_141, __Vtemp_140, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_139);
    VL_AND_W(4, __Vtemp_142, __Vtemp_138, __Vtemp_141);
    VL_ASSIGNSEL_WW(3456,108,0xb64U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_142);
    VL_CONST_W_4X(128,__Vtemp_143,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_144, vlSelfRef.__PVT__status_field_req, 0xbd0U, 108);
    __Vtemp_145 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1cU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_146, __Vtemp_145, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_144);
    VL_AND_W(4, __Vtemp_147, __Vtemp_143, __Vtemp_146);
    VL_ASSIGNSEL_WW(3456,108,0xbd0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_147);
    VL_CONST_W_4X(128,__Vtemp_148,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_149, vlSelfRef.__PVT__status_field_req, 0xc3cU, 108);
    __Vtemp_150 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1dU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_151, __Vtemp_150, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_149);
    VL_AND_W(4, __Vtemp_152, __Vtemp_148, __Vtemp_151);
    VL_ASSIGNSEL_WW(3456,108,0xc3cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_152);
    VL_CONST_W_4X(128,__Vtemp_153,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_154, vlSelfRef.__PVT__status_field_req, 0xca8U, 108);
    __Vtemp_155 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1eU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_156, __Vtemp_155, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_154);
    VL_AND_W(4, __Vtemp_157, __Vtemp_153, __Vtemp_156);
    VL_ASSIGNSEL_WW(3456,108,0xca8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_157);
    VL_CONST_W_4X(128,__Vtemp_158,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_159, vlSelfRef.__PVT__status_field_req, 0xd14U, 108);
    __Vtemp_160 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1fU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_161, __Vtemp_160, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_159);
    VL_AND_W(4, __Vtemp_162, __Vtemp_158, __Vtemp_161);
    VL_ASSIGNSEL_WW(3456,108,0xd14U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_162);
    VL_ASSIGNSEL_WI(181,9,0xacU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(9,5,4, VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__final_compcmo_resperr_ph3), (IData)(vlSelfRef.__PVT__origreq_got_copybackwrdata_invalid)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_compcmo_wrcmo), (IData)(vlSelfRef.__PVT__send_comp_wrcmo))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo), (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo), (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)))));
    VL_ASSIGNSEL_WI(181,4,0xa8U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_got_snpresp_ic), (IData)(vlSelfRef.__PVT__origreq_got_mem_data)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo), (IData)(vlSelfRef.__PVT__itis_prelastresp_write_comp_ph3_cmo))));
    VL_ASSIGNSEL_WI(181,7,0xa1U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo), 
                                  VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo), 
                                                VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo), (IData)(vlSelfRef.__PVT__origreq_memattr_ph3)))));
    VL_ASSIGNSEL_WI(181,4,0x9dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__origreq_ns_ph3), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__itis_wrnosnp_send_wr_data_ph3), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3), (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_invalid_addr)))));
    VL_ASSIGNSEL_WI(181,4,0x99U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3), (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_rsp), (IData)(vlSelfRef.__PVT__cmd_ph3_snprespfwded_dct_rsp))));
    VL_ASSIGNSEL_WI(181,6,0x93U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__cmd_ph3_snprespdatafwded_dct_rsp), 
                                  VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__origreq_size_ph3), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_excl_ph3), (IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3)))));
    VL_ASSIGNSEL_WI(181,7,0x8cU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph3), 
                                  VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__itis_lastresp_nonsnp_excl_store_fail_ph3), 
                                                VL_EXTEND_II(5,1, (IData)(vlSelfRef.__PVT__was_prelastresp_wr_uniq_ptl_ph3)))));
    VL_ASSIGNSEL_WI(181,8,0x84U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ptl_ph3), (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3), (IData)(vlSelfRef.__PVT__itis_lastresp_comp_ph3_wr_nosnp))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp), (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp), (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)))));
    VL_ASSIGNSEL_WI(181,8,0x7cU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__dat_opcode_write_data_ph3), 
                                  VL_CONCAT_III(4,2,2, (IData)(vlSelfRef.__PVT__RespErr_ph3), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_invalid_addr), (IData)(vlSelfRef.__PVT__itis_atom_clr_buff_ph3)))));
    VL_ASSIGNSEL_WI(181,4,0x78U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, 
                                                       (1U 
                                                        & VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6cU)), (IData)(vlSelfRef.__PVT__itis_atom_ini_data_ph3)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_atom_res_data_ph3), (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last))));
    VL_ASSIGNSEL_WI(181,3,0x75U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3_comp_is_last), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_atom_comp_rsp_ph3), 
                                                ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ph3) 
                                                 | (IData)(vlSelfRef.__PVT__origreq_got_snpptldata_ic)))));
    VL_ASSIGNSEL_WI(181,8,0x6dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3), (IData)(vlSelfRef.__PVT__itis_atom_txn_data_ph3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3), (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__pkt_forwarded_bit_mem_ph3), (IData)(vlSelfRef.__PVT__pkt_forwarded_bit_snp_ph3)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__got_compack_ph3), (IData)(vlSelfRef.__PVT__pd_bit_ph3)))));
    VL_ASSIGNSEL_WQ(181,36,0x49U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_QII(36,12,24, (IData)(vlSelfRef.__PVT__dbid_from_slc_ph3), 
                                  VL_CONCAT_III(24,12,12, (IData)(vlSelfRef.__PVT__dbid_from_slavemem_ph3), 
                                                VL_CONCAT_III(12,11,1, (IData)(vlSelfRef.__PVT__origreq_tgt_id_ph3), (IData)(vlSelfRef.__PVT__origreq_got_snpptldata_ic)))));
    VL_ASSIGNSEL_WI(181,12,0x3dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(12,1,11, (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3), 
                                  VL_CONCAT_III(11,7,4, (IData)(vlSelfRef.__PVT__origreq_opcode_ph3), 
                                                VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.__PVT__orig_cachest_ph3), (IData)(vlSelfRef.__PVT__orig_wr_evict_full_ph3)))));
    VL_ASSIGNSEL_WI(181,13,0x30U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(13,4,9, VL_CONCAT_III(4,2,2, 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_outcompfifo_wr_all), (IData)(vlSelfRef.__PVT__itis_finalcompack)), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__drop_write_data_to_slc), (IData)(vlSelfRef.__PVT__read_notsd_has_data_to_mem))), 
                                  VL_CONCAT_III(9,3,6, 
                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3), (IData)(vlSelfRef.__PVT__origreq_order_ph3)), 
                                                VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__outcompfifo_index_2nd), (IData)(vlSelfRef.__PVT__origreq_no_dataxfr)))));
    VL_ASSIGNSEL_WI(181,9,0x27U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(9,2,7, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3), (IData)(vlSelfRef.__PVT__origreq_got_snpdata_ic)), 
                                  VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__pendingq_index_resp_ph3), 0U)));
    VL_ASSIGNSEL_WQ(181,39,0U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_QII(39,9,30, VL_CONCAT_III(9,2,7, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_need_dataxfr_tomm), (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)), 
                                                         VL_CONCAT_III(7,5,2, (IData)(vlSelfRef.__PVT__outcompfifo_index), (IData)(vlSelfRef.__PVT__origreq_ccid_ph3))), 
                                  VL_CONCAT_III(30,15,15, 
                                                VL_CONCAT_III(15,3,12, (IData)(vlSelfRef.__PVT__resp_outcompdata_resp), (IData)(vlSelfRef.__PVT__origreq_txnid_ph3)), 
                                                VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), (IData)(vlSelfRef.__PVT__origreq_qos_ph3)))));
    if (((IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3) 
         | (IData)(vlSelfRef.__PVT__retryack_match))) {
        VL_ASSIGNSEL_WI(181,4,0x8dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                        (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)));
        VL_ASSIGNBIT_WI(0x27U, vlSelfRef.__PVT__wrdata_outcompfifo, 0U);
    } else {
        VL_ASSIGNBIT_WI(0x27U, vlSelfRef.__PVT__wrdata_outcompfifo, vlSelfRef.__PVT__origreq_need_dataxfr_toic);
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi14___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    CData/*31:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    CData/*31:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<5>/*159:0*/ __Vtemp_46;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<5>/*159:0*/ __Vtemp_48;
    VlWide<5>/*159:0*/ __Vtemp_49;
    VlWide<5>/*159:0*/ __Vtemp_50;
    CData/*31:0*/ __Vtemp_51;
    VlWide<5>/*159:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<5>/*159:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_56;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<5>/*159:0*/ __Vtemp_65;
    VlWide<5>/*159:0*/ __Vtemp_66;
    VlWide<5>/*159:0*/ __Vtemp_67;
    VlWide<5>/*159:0*/ __Vtemp_68;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_70;
    CData/*31:0*/ __Vtemp_71;
    VlWide<5>/*159:0*/ __Vtemp_72;
    CData/*31:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_74;
    VlWide<5>/*159:0*/ __Vtemp_75;
    VlWide<5>/*159:0*/ __Vtemp_76;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_78;
    VlWide<5>/*159:0*/ __Vtemp_79;
    VlWide<5>/*159:0*/ __Vtemp_80;
    CData/*31:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<5>/*159:0*/ __Vtemp_84;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_86;
    VlWide<5>/*159:0*/ __Vtemp_87;
    VlWide<5>/*159:0*/ __Vtemp_88;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_90;
    CData/*31:0*/ __Vtemp_91;
    VlWide<5>/*159:0*/ __Vtemp_92;
    CData/*31:0*/ __Vtemp_93;
    VlWide<5>/*159:0*/ __Vtemp_94;
    VlWide<5>/*159:0*/ __Vtemp_95;
    VlWide<5>/*159:0*/ __Vtemp_96;
    VlWide<5>/*159:0*/ __Vtemp_97;
    VlWide<5>/*159:0*/ __Vtemp_98;
    VlWide<5>/*159:0*/ __Vtemp_99;
    VlWide<5>/*159:0*/ __Vtemp_100;
    CData/*31:0*/ __Vtemp_101;
    VlWide<5>/*159:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<5>/*159:0*/ __Vtemp_104;
    VlWide<5>/*159:0*/ __Vtemp_105;
    VlWide<5>/*159:0*/ __Vtemp_106;
    VlWide<5>/*159:0*/ __Vtemp_107;
    VlWide<5>/*159:0*/ __Vtemp_108;
    VlWide<5>/*159:0*/ __Vtemp_109;
    VlWide<5>/*159:0*/ __Vtemp_110;
    CData/*31:0*/ __Vtemp_111;
    VlWide<5>/*159:0*/ __Vtemp_112;
    CData/*31:0*/ __Vtemp_113;
    VlWide<5>/*159:0*/ __Vtemp_114;
    VlWide<5>/*159:0*/ __Vtemp_115;
    VlWide<5>/*159:0*/ __Vtemp_116;
    VlWide<5>/*159:0*/ __Vtemp_117;
    VlWide<5>/*159:0*/ __Vtemp_118;
    VlWide<5>/*159:0*/ __Vtemp_119;
    VlWide<5>/*159:0*/ __Vtemp_120;
    CData/*31:0*/ __Vtemp_121;
    VlWide<5>/*159:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<5>/*159:0*/ __Vtemp_124;
    VlWide<5>/*159:0*/ __Vtemp_125;
    VlWide<5>/*159:0*/ __Vtemp_126;
    VlWide<5>/*159:0*/ __Vtemp_127;
    VlWide<5>/*159:0*/ __Vtemp_128;
    VlWide<5>/*159:0*/ __Vtemp_129;
    VlWide<5>/*159:0*/ __Vtemp_130;
    CData/*31:0*/ __Vtemp_131;
    VlWide<5>/*159:0*/ __Vtemp_132;
    CData/*31:0*/ __Vtemp_133;
    VlWide<5>/*159:0*/ __Vtemp_134;
    VlWide<5>/*159:0*/ __Vtemp_135;
    VlWide<5>/*159:0*/ __Vtemp_136;
    VlWide<5>/*159:0*/ __Vtemp_137;
    VlWide<5>/*159:0*/ __Vtemp_138;
    VlWide<5>/*159:0*/ __Vtemp_139;
    VlWide<5>/*159:0*/ __Vtemp_140;
    CData/*31:0*/ __Vtemp_141;
    VlWide<5>/*159:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<5>/*159:0*/ __Vtemp_144;
    VlWide<5>/*159:0*/ __Vtemp_145;
    VlWide<5>/*159:0*/ __Vtemp_146;
    VlWide<5>/*159:0*/ __Vtemp_147;
    VlWide<5>/*159:0*/ __Vtemp_148;
    VlWide<5>/*159:0*/ __Vtemp_149;
    VlWide<5>/*159:0*/ __Vtemp_150;
    CData/*31:0*/ __Vtemp_151;
    VlWide<5>/*159:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<5>/*159:0*/ __Vtemp_154;
    VlWide<5>/*159:0*/ __Vtemp_155;
    VlWide<5>/*159:0*/ __Vtemp_156;
    VlWide<5>/*159:0*/ __Vtemp_157;
    VlWide<5>/*159:0*/ __Vtemp_158;
    VlWide<5>/*159:0*/ __Vtemp_159;
    VlWide<5>/*159:0*/ __Vtemp_160;
    CData/*31:0*/ __Vtemp_161;
    VlWide<5>/*159:0*/ __Vtemp_162;
    CData/*31:0*/ __Vtemp_163;
    VlWide<5>/*159:0*/ __Vtemp_164;
    VlWide<5>/*159:0*/ __Vtemp_165;
    VlWide<5>/*159:0*/ __Vtemp_166;
    VlWide<5>/*159:0*/ __Vtemp_167;
    VlWide<5>/*159:0*/ __Vtemp_168;
    VlWide<5>/*159:0*/ __Vtemp_169;
    VlWide<5>/*159:0*/ __Vtemp_170;
    CData/*31:0*/ __Vtemp_171;
    VlWide<5>/*159:0*/ __Vtemp_172;
    CData/*31:0*/ __Vtemp_173;
    VlWide<5>/*159:0*/ __Vtemp_174;
    VlWide<5>/*159:0*/ __Vtemp_175;
    VlWide<5>/*159:0*/ __Vtemp_176;
    VlWide<5>/*159:0*/ __Vtemp_177;
    VlWide<5>/*159:0*/ __Vtemp_178;
    VlWide<5>/*159:0*/ __Vtemp_179;
    VlWide<5>/*159:0*/ __Vtemp_180;
    CData/*31:0*/ __Vtemp_181;
    VlWide<5>/*159:0*/ __Vtemp_182;
    CData/*31:0*/ __Vtemp_183;
    VlWide<5>/*159:0*/ __Vtemp_184;
    VlWide<5>/*159:0*/ __Vtemp_185;
    VlWide<5>/*159:0*/ __Vtemp_186;
    VlWide<5>/*159:0*/ __Vtemp_187;
    VlWide<5>/*159:0*/ __Vtemp_188;
    VlWide<5>/*159:0*/ __Vtemp_189;
    VlWide<5>/*159:0*/ __Vtemp_190;
    CData/*31:0*/ __Vtemp_191;
    VlWide<5>/*159:0*/ __Vtemp_192;
    CData/*31:0*/ __Vtemp_193;
    VlWide<5>/*159:0*/ __Vtemp_194;
    VlWide<5>/*159:0*/ __Vtemp_195;
    VlWide<5>/*159:0*/ __Vtemp_196;
    VlWide<5>/*159:0*/ __Vtemp_197;
    VlWide<5>/*159:0*/ __Vtemp_198;
    VlWide<5>/*159:0*/ __Vtemp_199;
    VlWide<5>/*159:0*/ __Vtemp_200;
    CData/*31:0*/ __Vtemp_201;
    VlWide<5>/*159:0*/ __Vtemp_202;
    CData/*31:0*/ __Vtemp_203;
    VlWide<5>/*159:0*/ __Vtemp_204;
    VlWide<5>/*159:0*/ __Vtemp_205;
    VlWide<5>/*159:0*/ __Vtemp_206;
    VlWide<5>/*159:0*/ __Vtemp_207;
    VlWide<5>/*159:0*/ __Vtemp_208;
    VlWide<5>/*159:0*/ __Vtemp_209;
    VlWide<5>/*159:0*/ __Vtemp_210;
    CData/*31:0*/ __Vtemp_211;
    VlWide<5>/*159:0*/ __Vtemp_212;
    CData/*31:0*/ __Vtemp_213;
    VlWide<5>/*159:0*/ __Vtemp_214;
    VlWide<5>/*159:0*/ __Vtemp_215;
    VlWide<5>/*159:0*/ __Vtemp_216;
    VlWide<5>/*159:0*/ __Vtemp_217;
    VlWide<5>/*159:0*/ __Vtemp_218;
    VlWide<5>/*159:0*/ __Vtemp_219;
    VlWide<5>/*159:0*/ __Vtemp_220;
    CData/*31:0*/ __Vtemp_221;
    VlWide<5>/*159:0*/ __Vtemp_222;
    CData/*31:0*/ __Vtemp_223;
    VlWide<5>/*159:0*/ __Vtemp_224;
    VlWide<5>/*159:0*/ __Vtemp_225;
    VlWide<5>/*159:0*/ __Vtemp_226;
    VlWide<5>/*159:0*/ __Vtemp_227;
    VlWide<5>/*159:0*/ __Vtemp_228;
    VlWide<5>/*159:0*/ __Vtemp_229;
    VlWide<5>/*159:0*/ __Vtemp_230;
    CData/*31:0*/ __Vtemp_231;
    VlWide<5>/*159:0*/ __Vtemp_232;
    CData/*31:0*/ __Vtemp_233;
    VlWide<5>/*159:0*/ __Vtemp_234;
    VlWide<5>/*159:0*/ __Vtemp_235;
    VlWide<5>/*159:0*/ __Vtemp_236;
    VlWide<5>/*159:0*/ __Vtemp_237;
    VlWide<5>/*159:0*/ __Vtemp_238;
    VlWide<5>/*159:0*/ __Vtemp_239;
    VlWide<5>/*159:0*/ __Vtemp_240;
    CData/*31:0*/ __Vtemp_241;
    VlWide<5>/*159:0*/ __Vtemp_242;
    CData/*31:0*/ __Vtemp_243;
    VlWide<5>/*159:0*/ __Vtemp_244;
    VlWide<5>/*159:0*/ __Vtemp_245;
    VlWide<5>/*159:0*/ __Vtemp_246;
    VlWide<5>/*159:0*/ __Vtemp_247;
    VlWide<5>/*159:0*/ __Vtemp_248;
    VlWide<5>/*159:0*/ __Vtemp_249;
    VlWide<5>/*159:0*/ __Vtemp_250;
    CData/*31:0*/ __Vtemp_251;
    VlWide<5>/*159:0*/ __Vtemp_252;
    CData/*31:0*/ __Vtemp_253;
    VlWide<5>/*159:0*/ __Vtemp_254;
    VlWide<5>/*159:0*/ __Vtemp_255;
    VlWide<5>/*159:0*/ __Vtemp_256;
    VlWide<5>/*159:0*/ __Vtemp_257;
    VlWide<5>/*159:0*/ __Vtemp_258;
    VlWide<5>/*159:0*/ __Vtemp_259;
    VlWide<5>/*159:0*/ __Vtemp_260;
    CData/*31:0*/ __Vtemp_261;
    VlWide<5>/*159:0*/ __Vtemp_262;
    CData/*31:0*/ __Vtemp_263;
    VlWide<5>/*159:0*/ __Vtemp_264;
    VlWide<5>/*159:0*/ __Vtemp_265;
    VlWide<5>/*159:0*/ __Vtemp_266;
    VlWide<5>/*159:0*/ __Vtemp_267;
    VlWide<5>/*159:0*/ __Vtemp_268;
    VlWide<5>/*159:0*/ __Vtemp_269;
    VlWide<5>/*159:0*/ __Vtemp_270;
    CData/*31:0*/ __Vtemp_271;
    VlWide<5>/*159:0*/ __Vtemp_272;
    CData/*31:0*/ __Vtemp_273;
    VlWide<5>/*159:0*/ __Vtemp_274;
    VlWide<5>/*159:0*/ __Vtemp_275;
    VlWide<5>/*159:0*/ __Vtemp_276;
    VlWide<5>/*159:0*/ __Vtemp_277;
    VlWide<5>/*159:0*/ __Vtemp_278;
    VlWide<5>/*159:0*/ __Vtemp_279;
    VlWide<5>/*159:0*/ __Vtemp_280;
    CData/*31:0*/ __Vtemp_281;
    VlWide<5>/*159:0*/ __Vtemp_282;
    CData/*31:0*/ __Vtemp_283;
    VlWide<5>/*159:0*/ __Vtemp_284;
    VlWide<5>/*159:0*/ __Vtemp_285;
    VlWide<5>/*159:0*/ __Vtemp_286;
    VlWide<5>/*159:0*/ __Vtemp_287;
    VlWide<5>/*159:0*/ __Vtemp_288;
    VlWide<5>/*159:0*/ __Vtemp_289;
    VlWide<5>/*159:0*/ __Vtemp_290;
    CData/*31:0*/ __Vtemp_291;
    VlWide<5>/*159:0*/ __Vtemp_292;
    CData/*31:0*/ __Vtemp_293;
    VlWide<5>/*159:0*/ __Vtemp_294;
    VlWide<5>/*159:0*/ __Vtemp_295;
    VlWide<5>/*159:0*/ __Vtemp_296;
    VlWide<5>/*159:0*/ __Vtemp_297;
    VlWide<5>/*159:0*/ __Vtemp_298;
    VlWide<5>/*159:0*/ __Vtemp_299;
    VlWide<5>/*159:0*/ __Vtemp_300;
    CData/*31:0*/ __Vtemp_301;
    VlWide<5>/*159:0*/ __Vtemp_302;
    CData/*31:0*/ __Vtemp_303;
    VlWide<5>/*159:0*/ __Vtemp_304;
    VlWide<5>/*159:0*/ __Vtemp_305;
    VlWide<5>/*159:0*/ __Vtemp_306;
    VlWide<5>/*159:0*/ __Vtemp_307;
    VlWide<5>/*159:0*/ __Vtemp_308;
    VlWide<5>/*159:0*/ __Vtemp_309;
    VlWide<5>/*159:0*/ __Vtemp_310;
    CData/*31:0*/ __Vtemp_311;
    VlWide<5>/*159:0*/ __Vtemp_312;
    CData/*31:0*/ __Vtemp_313;
    VlWide<5>/*159:0*/ __Vtemp_314;
    VlWide<5>/*159:0*/ __Vtemp_315;
    VlWide<5>/*159:0*/ __Vtemp_316;
    VlWide<5>/*159:0*/ __Vtemp_317;
    VlWide<5>/*159:0*/ __Vtemp_318;
    VlWide<5>/*159:0*/ __Vtemp_319;
    VlWide<5>/*159:0*/ __Vtemp_320;
    CData/*31:0*/ __Vtemp_321;
    VlWide<5>/*159:0*/ __Vtemp_322;
    CData/*31:0*/ __Vtemp_323;
    VlWide<5>/*159:0*/ __Vtemp_324;
    VlWide<5>/*159:0*/ __Vtemp_325;
    VlWide<5>/*159:0*/ __Vtemp_326;
    VlWide<5>/*159:0*/ __Vtemp_327;
    VlWide<5>/*159:0*/ __Vtemp_328;
    VlWide<5>/*159:0*/ __Vtemp_329;
    VlWide<5>/*159:0*/ __Vtemp_330;
    CData/*31:0*/ __Vtemp_331;
    VlWide<5>/*159:0*/ __Vtemp_332;
    CData/*31:0*/ __Vtemp_333;
    VlWide<5>/*159:0*/ __Vtemp_334;
    VlWide<5>/*159:0*/ __Vtemp_335;
    VlWide<5>/*159:0*/ __Vtemp_336;
    VlWide<5>/*159:0*/ __Vtemp_337;
    VlWide<5>/*159:0*/ __Vtemp_338;
    VlWide<5>/*159:0*/ __Vtemp_339;
    VlWide<5>/*159:0*/ __Vtemp_340;
    CData/*31:0*/ __Vtemp_341;
    VlWide<5>/*159:0*/ __Vtemp_342;
    CData/*31:0*/ __Vtemp_343;
    VlWide<5>/*159:0*/ __Vtemp_344;
    VlWide<5>/*159:0*/ __Vtemp_345;
    VlWide<5>/*159:0*/ __Vtemp_346;
    VlWide<5>/*159:0*/ __Vtemp_347;
    VlWide<5>/*159:0*/ __Vtemp_348;
    VlWide<5>/*159:0*/ __Vtemp_349;
    VlWide<5>/*159:0*/ __Vtemp_350;
    CData/*31:0*/ __Vtemp_351;
    VlWide<5>/*159:0*/ __Vtemp_352;
    CData/*31:0*/ __Vtemp_353;
    VlWide<5>/*159:0*/ __Vtemp_354;
    VlWide<5>/*159:0*/ __Vtemp_355;
    VlWide<5>/*159:0*/ __Vtemp_356;
    VlWide<5>/*159:0*/ __Vtemp_357;
    VlWide<5>/*159:0*/ __Vtemp_358;
    VlWide<5>/*159:0*/ __Vtemp_359;
    VlWide<5>/*159:0*/ __Vtemp_360;
    CData/*31:0*/ __Vtemp_361;
    VlWide<5>/*159:0*/ __Vtemp_362;
    CData/*31:0*/ __Vtemp_363;
    VlWide<5>/*159:0*/ __Vtemp_364;
    VlWide<5>/*159:0*/ __Vtemp_365;
    VlWide<3>/*95:0*/ __Vtemp_366;
    VlWide<3>/*95:0*/ __Vtemp_367;
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelfRef.__PVT__addr_outstandq_to_compdata = (0xfffffffffffffULL 
                                                   & ((0x67fU 
                                                       >= 
                                                       (0x7ffU 
                                                        & VL_SEL_IIII(32, 
                                                                      ((IData)(0x34U) 
                                                                       * 
                                                                       VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5)))), 0U, 11)))
                                                       ? 
                                                      VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                                  (0x7ffU 
                                                                   & VL_SEL_IIII(32, 
                                                                                ((IData)(0x34U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5)))), 0U, 11)), 52)
                                                       : 0ULL));
    vlSelfRef.__PVT__rddata_cache_sel_ph3 = ((IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                                               ? VL_SEL_IWII(84, vlSelfRef.__PVT__evict_details, 0U, 32)
                                               : vlSelfRef.__PVT__rddata_cache_ph3));
    vlSelfRef.__PVT__sel_cmq_path_ph3 = (((((~ (IData)(vlSelfRef.__PVT__cachehit_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__cmd_addr_ph3_has_matchingentry_incmq)) 
                                           & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
                                         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__Vcellinp__sig_countones_0__share_vec 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0xaU, 22)));
    vlSelfRef.__PVT__share_vec_ph3 = (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0xaU, 22));
    vlSelfRef.__PVT__req_share_vect_ph3 = (0x3fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0xaU, 22));
    vlSelfRef.__PVT__ownerp_id_ph3 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 3U, 7));
    vlSelfRef.__PVT__req_cache_st_ph3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0U, 3));
    vlSelfRef.__PVT__wren_cmq_ph4_nxt = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req) 
                                          & (IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3)) 
                                         & (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3));
    vlSelfRef.__PVT__cmdvalid_ph4_req_nxt = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req) 
                                             & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                                                     & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                                                  & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                                                 | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                                                | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                                                   & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 2))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 3))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 4))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0x1fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 5))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0x3fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 6))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0x7fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 7))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 2))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 3))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 4))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 5))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 6))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 7))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 8))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 9))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 10))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 11))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 12))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 13))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 14))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 15))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 16))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 17))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 18))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 19))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 20))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 21))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 22))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 23))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 24))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1ffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 25))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3ffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 26))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7ffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 27))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 28))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 29))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 30))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 31))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__share_vec 
        = vlSelfRef.__Vcellinp__sig_countones_0__share_vec;
    vlSelfRef.__PVT__reqid_matches_sharevec_ph3 = (
                                                   (0x15U 
                                                    >= 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 5))) 
                                                   && (1U 
                                                       & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vec_ph3, 
                                                                        (0x1fU 
                                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 5)))));
    vlSelfRef.__PVT__req_share_vect_m_ph3 = vlSelfRef.__PVT__req_share_vect_ph3;
    vlSelfRef.__PVT__reqid_matches_ownerpid_ph3 = (
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)) 
                                                   == (IData)(vlSelfRef.__PVT__ownerp_id_ph3));
    vlSelfRef.__PVT__req_st_invalid_ph3 = (1U & (~ 
                                                 VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U)));
    VL_CONST_W_5X(160,__Vtemp_1,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_2, vlSelfRef.__PVT__colln_cmd_field, 0U, 155);
    __Vtemp_3 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U));
    VL_COND_WIWW(155, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_2);
    VL_AND_W(5, __Vtemp_5, __Vtemp_1, __Vtemp_4);
    VL_ASSIGNSEL_WW(1240,155,0U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_5);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 0U))));
    VL_CONST_W_5X(160,__Vtemp_6,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_7, vlSelfRef.__PVT__colln_cmd_field, 0x9bU, 155);
    __Vtemp_8 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U));
    VL_COND_WIWW(155, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_7);
    VL_AND_W(5, __Vtemp_10, __Vtemp_6, __Vtemp_9);
    VL_ASSIGNSEL_WW(1240,155,0x9bU, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_10);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 1U))));
    VL_CONST_W_5X(160,__Vtemp_11,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_12, vlSelfRef.__PVT__colln_cmd_field, 0x136U, 155);
    __Vtemp_13 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U));
    VL_COND_WIWW(155, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_12);
    VL_AND_W(5, __Vtemp_15, __Vtemp_11, __Vtemp_14);
    VL_ASSIGNSEL_WW(1240,155,0x136U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_15);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 2U))));
    VL_CONST_W_5X(160,__Vtemp_16,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_17, vlSelfRef.__PVT__colln_cmd_field, 0x1d1U, 155);
    __Vtemp_18 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U));
    VL_COND_WIWW(155, __Vtemp_19, __Vtemp_18, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_17);
    VL_AND_W(5, __Vtemp_20, __Vtemp_16, __Vtemp_19);
    VL_ASSIGNSEL_WW(1240,155,0x1d1U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_20);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 3U))));
    VL_CONST_W_5X(160,__Vtemp_21,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_22, vlSelfRef.__PVT__colln_cmd_field, 0x26cU, 155);
    __Vtemp_23 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U));
    VL_COND_WIWW(155, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_22);
    VL_AND_W(5, __Vtemp_25, __Vtemp_21, __Vtemp_24);
    VL_ASSIGNSEL_WW(1240,155,0x26cU, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_25);
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 4U))));
    VL_CONST_W_5X(160,__Vtemp_26,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_27, vlSelfRef.__PVT__colln_cmd_field, 0x307U, 155);
    __Vtemp_28 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U));
    VL_COND_WIWW(155, __Vtemp_29, __Vtemp_28, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_27);
    VL_AND_W(5, __Vtemp_30, __Vtemp_26, __Vtemp_29);
    VL_ASSIGNSEL_WW(1240,155,0x307U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_30);
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 5U))));
    VL_CONST_W_5X(160,__Vtemp_31,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_32, vlSelfRef.__PVT__colln_cmd_field, 0x3a2U, 155);
    __Vtemp_33 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U));
    VL_COND_WIWW(155, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_32);
    VL_AND_W(5, __Vtemp_35, __Vtemp_31, __Vtemp_34);
    VL_ASSIGNSEL_WW(1240,155,0x3a2U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_35);
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 6U))));
    VL_CONST_W_5X(160,__Vtemp_36,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_37, vlSelfRef.__PVT__colln_cmd_field, 0x43dU, 155);
    __Vtemp_38 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U));
    VL_COND_WIWW(155, __Vtemp_39, __Vtemp_38, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_37);
    VL_AND_W(5, __Vtemp_40, __Vtemp_36, __Vtemp_39);
    VL_ASSIGNSEL_WW(1240,155,0x43dU, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_40);
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 7U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNSEL_WI(224,12,0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x1cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12))));
    VL_ASSIGNSEL_WI(224,12,0x38U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x54U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x70U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x8cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12))));
    VL_ASSIGNSEL_WI(224,12,0xa8U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12))));
    VL_ASSIGNSEL_WI(224,12,0xc4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12))));
    VL_ASSIGNSEL_WI(224,12,0xcU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x28U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x44U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x60U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x7cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x98U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0xb4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0xd0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)))));
    VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 0U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 0U))))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 1U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 1U))))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 2U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 2U))))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 3U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 3U))))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 4U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 4U))))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 5U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 5U))))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 6U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 6U))))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 7U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 7U))))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 0U))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 1U))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 2U))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 3U))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 4U))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 5U))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 6U))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 5U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 2U : 1U)))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 7U))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3) 
                               - (IData)(1U))));
    }
    vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr_nxt 
        = ((VL_REDOR_I(vlSelfRef.__PVT__wren_outstand_cmd) 
            & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
           | ((~ VL_REDOR_I((vlSelfRef.__PVT__clr_outstand_cmd 
                             & vlSelfRef.__PVT__outstand_req_atmo_wr))) 
              & (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)))));
    VL_ASSIGNSEL_WQ(1664,52,0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0U, 52))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x34U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x34U, 52))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x68U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x68U, 52))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x9cU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x9cU, 52))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)))));
    VL_ASSIGNSEL_WQ(1664,52,0xd0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0xd0U, 52))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x104U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x104U, 52))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x138U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x138U, 52))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x16cU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x16cU, 52))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x1a0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x1a0U, 52))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x1d4U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x1d4U, 52))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x208U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x208U, 52))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x23cU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x23cU, 52))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x270U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x270U, 52))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x2a4U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x2a4U, 52))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x2d8U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x2d8U, 52))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x30cU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x30cU, 52))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x340U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x340U, 52))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x374U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x374U, 52))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x3a8U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3a8U, 52))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x3dcU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3dcU, 52))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x410U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x410U, 52))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x444U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x444U, 52))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x478U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x478U, 52))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x4acU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x4acU, 52))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x4e0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x4e0U, 52))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)))));
    VL_ASSIGNSEL_WQ(1664,52,0x514U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x514U, 52))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x548U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x548U, 52))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x57cU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x57cU, 52))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x5b0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x5b0U, 52))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x5e4U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x5e4U, 52))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x618U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x618U, 52))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)))));
    VL_ASSIGNSEL_WQ(1664,52,0x64cU, vlSelfRef.__PVT__outstand_cmd_addr_nxt, 
                    (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                            ? vlSelfRef.__PVT__cmd_addr_ph3
                                            : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x64cU, 52))));
    VL_ASSIGNSEL_WI(576,18,0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))) {
        VL_ASSIGNSEL_WI(576,18,0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x12U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))) {
        VL_ASSIGNSEL_WI(576,18,0x12U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x12U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x24U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))) {
        VL_ASSIGNSEL_WI(576,18,0x24U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x24U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x36U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))) {
        VL_ASSIGNSEL_WI(576,18,0x36U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x36U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x48U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))) {
        VL_ASSIGNSEL_WI(576,18,0x48U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x48U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x5aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))) {
        VL_ASSIGNSEL_WI(576,18,0x5aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x5aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x6cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))) {
        VL_ASSIGNSEL_WI(576,18,0x6cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x6cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x7eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))) {
        VL_ASSIGNSEL_WI(576,18,0x7eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x7eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x90U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))) {
        VL_ASSIGNSEL_WI(576,18,0x90U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x90U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xa2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))) {
        VL_ASSIGNSEL_WI(576,18,0xa2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xa2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xb4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))) {
        VL_ASSIGNSEL_WI(576,18,0xb4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xb4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xc6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))) {
        VL_ASSIGNSEL_WI(576,18,0xc6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xc6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xd8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))) {
        VL_ASSIGNSEL_WI(576,18,0xd8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xd8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xeaU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))) {
        VL_ASSIGNSEL_WI(576,18,0xeaU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xeaU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xfcU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))) {
        VL_ASSIGNSEL_WI(576,18,0xfcU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xfcU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x10eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))) {
        VL_ASSIGNSEL_WI(576,18,0x10eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x10eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x120U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))) {
        VL_ASSIGNSEL_WI(576,18,0x120U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x120U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x132U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))) {
        VL_ASSIGNSEL_WI(576,18,0x132U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x132U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x144U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))) {
        VL_ASSIGNSEL_WI(576,18,0x144U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x144U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x156U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))) {
        VL_ASSIGNSEL_WI(576,18,0x156U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x156U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x168U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))) {
        VL_ASSIGNSEL_WI(576,18,0x168U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x168U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x17aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))) {
        VL_ASSIGNSEL_WI(576,18,0x17aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x17aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x18cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))) {
        VL_ASSIGNSEL_WI(576,18,0x18cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x18cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x19eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))) {
        VL_ASSIGNSEL_WI(576,18,0x19eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x19eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1b0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))) {
        VL_ASSIGNSEL_WI(576,18,0x1b0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1b0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1c2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))) {
        VL_ASSIGNSEL_WI(576,18,0x1c2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1c2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1d4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))) {
        VL_ASSIGNSEL_WI(576,18,0x1d4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1d4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1e6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))) {
        VL_ASSIGNSEL_WI(576,18,0x1e6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1e6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1f8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))) {
        VL_ASSIGNSEL_WI(576,18,0x1f8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1f8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x20aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))) {
        VL_ASSIGNSEL_WI(576,18,0x20aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x20aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x21cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))) {
        VL_ASSIGNSEL_WI(576,18,0x21cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x21cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x22eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))) {
        VL_ASSIGNSEL_WI(576,18,0x22eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x22eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18))));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 1U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 2U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 3U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 4U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 5U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 6U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 7U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 8U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 9U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xaU)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xbU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xcU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xdU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xeU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xfU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x10U)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x11U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x12U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x13U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x14U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x15U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x16U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x17U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x18U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x19U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1fU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1fU)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0U)))) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18))))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 1U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 1U)))) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18))))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 2U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 2U)))) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18))))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 3U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 3U)))) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18))))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 4U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 4U)))) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18))))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 5U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 5U)))) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18))))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 6U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 6U)))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18))))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 7U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 7U)))) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18))))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 8U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 8U)))) {
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18))))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 9U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 9U)))) {
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18))))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xaU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xaU)))) {
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18))))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xbU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xbU)))) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18))))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xcU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xcU)))) {
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18))))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xdU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xdU)))) {
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18))))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xeU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xeU)))) {
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18))))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xfU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xfU)))) {
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18))))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x10U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x10U)))) {
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18))))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x11U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x11U)))) {
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18))))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x12U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x12U)))) {
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18))))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x13U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x13U)))) {
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18))))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x14U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x14U)))) {
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18))))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x15U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x15U)))) {
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18))))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x16U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x16U)))) {
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18))))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x17U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x17U)))) {
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18))))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x18U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x18U)))) {
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18))))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x19U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x19U)))) {
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18))))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1aU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1aU)))) {
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18))))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1bU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1bU)))) {
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18))))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1cU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1cU)))) {
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18))))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1dU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1dU)))) {
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18))))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1eU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1eU)))) {
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18))))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1fU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1fU)))) {
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18))))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNSEL_WI(768,12,0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x18U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x30U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x30U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x48U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x48U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x60U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x60U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x78U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x78U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x90U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x90U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xa8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xc0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xc0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xd8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xf0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xf0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x108U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x108U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x120U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x120U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x138U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x138U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x150U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x150U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x168U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x168U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x180U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x180U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x198U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x198U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1b0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1b0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1c8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1e0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1e0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1f8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x210U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x210U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x228U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x228U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x240U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x240U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x258U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x258U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x270U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x270U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x288U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x288U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2a0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2a0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2b8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2d0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2d0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2e8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x24U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x3cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x47U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x3cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x54U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x5fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x54U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x6cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x77U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x6cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x84U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x8fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x84U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x9cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x9cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xb4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xbfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xb4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xccU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xccU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xe4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xefU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xe4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xfcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x107U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xfcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x114U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x11fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x114U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x12cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x137U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x12cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x144U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x14fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x144U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x15cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x167U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x15cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x174U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x174U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x18cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x197U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1a4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1afU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1a4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1bcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1bcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1d4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1dfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1d4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1ecU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1ecU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x204U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x20fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x204U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x21cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x227U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x21cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x234U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x23fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x234U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x24cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x257U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x264U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x26fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x264U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x27cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x287U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x27cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x294U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x29fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x294U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2acU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2acU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2c4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2cfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2c4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2dcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2dcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2f4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2ffU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2f4U, 11)))));
    vlSelfRef.__PVT__wrindex_req_ph3 = 0U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1fU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1eU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1eU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1dU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1dU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1cU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1cU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1bU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1bU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1aU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1aU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x19U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x19U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x18U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x17U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x17U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x16U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x16U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x15U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x15U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x14U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x14U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x13U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x13U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x12U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x12U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x11U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x11U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x10U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 9U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 8U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 7U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 6U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 5U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 4U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 3U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 2U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xffffffffU;
    vlSelfRef.__PVT__cmdvalid_ph3_req_outstd = VL_REDOR_I(vlSelfRef.__PVT__wren_outstand_cmd);
    vlSelfRef.__PVT__req_share_vect_m_qual_ph3 = vlSelfRef.__PVT__req_share_vect_m_ph3;
    vlSelfRef.__PVT__cmd_ph3_nonexcl_read_dct_req = 
        (((IData)(vlSelfRef.__PVT__req_is_anydct_ph3) 
          & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U))) 
         & ((((1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
              | (3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
             | ((7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                & (IData)(vlSelfRef.__PVT__read_req_requires_non_inv_snoop_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))));
    vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 0U;
    if ((((IData)(vlSelfRef.__PVT__req_is_make_i_ph3) 
          | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph3)) 
         | (IData)(vlSelfRef.__PVT__req_is_evict_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 0U;
    } else if (((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if (((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                  & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
                 & (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                 & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
                & (5U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 1U;
    } else if (((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                  | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                 & (3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                 & (~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if (((((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                  & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U)) 
                 & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U)) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__new_comp_slc_cnt_req_ph3 = ((VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U) 
                                                  & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))) 
                                                 & (((IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_i_ph3) 
                                                     | (IData)(vlSelfRef.__PVT__req_is_writenosnpptl_clean_si_ph3)) 
                                                    | (((IData)(vlSelfRef.__PVT__req_is_wruniqueptl_clean_s_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph3)) 
                                                       & (~ 
                                                          ((((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                             | (3U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))))));
    vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd_ph3 
        = ((((IData)(vlSelfRef.__PVT__req_read_oc_ph3) 
             | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
            & (((3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                | (7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
               | (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) 
           & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)));
    vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3 = (
                                                   ((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                                    & (((1U 
                                                         == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                        | (3U 
                                                           == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                       | (7U 
                                                          == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)));
    VL_ASSIGNSEL_II(24,9,0U, vlSelfRef.__PVT__seq_num_all_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 6U, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 3U, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0U, 3)))));
    VL_ASSIGNSEL_II(24,9,9U, vlSelfRef.__PVT__seq_num_all_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0xfU, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0xcU, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 9U, 3)))));
    VL_ASSIGNSEL_II(24,6,0x12U, vlSelfRef.__PVT__seq_num_all_nxt, 
                    VL_CONCAT_III(6,3,3, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0x15U, 3)), 
                                  (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0x12U, 3))));
    VL_ASSIGNSEL_II(24,9,0U, vlSelfRef.__PVT__seq_num_all_atom_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 6U, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 3U, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0U, 3)))));
    VL_ASSIGNSEL_II(24,9,9U, vlSelfRef.__PVT__seq_num_all_atom_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0xfU, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0xcU, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 9U, 3)))));
    VL_ASSIGNSEL_II(24,6,0x12U, vlSelfRef.__PVT__seq_num_all_atom_nxt, 
                    VL_CONCAT_III(6,3,3, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0x15U, 3)), 
                                  (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0x12U, 3))));
    vlSelfRef.__PVT__cmd_ph4_23_18_req_nxt = vlSelfRef.__PVT__wrindex_req_ph3;
    vlSelfRef.__PVT__wraddr_stat_req_ph3 = vlSelfRef.__PVT__wrindex_req_ph3;
    vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3 
        = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
            & (2U == (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2)))) 
           & ((~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U)) 
              | (~ (IData)(vlSelfRef.__PVT__snpattr_req_ph3))));
    vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
              & (IData)(vlSelfRef.__PVT__cmdis_req_ph3)) 
             & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))) 
            & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
           & ((((IData)(vlSelfRef.__PVT__req_is_make_i_ph3) 
                | (IData)(vlSelfRef.__PVT__req_is_clean_si_ph3)) 
               & ((~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U)) 
                  | ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U) 
                      & (~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                     & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))) 
              | ((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                 & (5U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))));
    vlSelfRef.__PVT__dn_sm_req_ph3 = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                        & (IData)(vlSelfRef.__PVT__cmdis_req_ph3)) 
                                       & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))) 
                                      & ((((((((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                               | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                              & (~ 
                                                 VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U))) 
                                             | (((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                                 & (~ 
                                                    VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                                                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) 
                                            | (((IData)(vlSelfRef.__PVT__req_is_make_u_ph3) 
                                                & (~ 
                                                   VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                                               & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) 
                                           | (((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                                               & (~ 
                                                  VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                                              & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) 
                                          | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                         | ((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                                              | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph3)) 
                                             | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                            & (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))));
    vlSelfRef.__PVT__wren_stat_req_ph3 = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                          & (IData)(vlSelfRef.__PVT__cmdis_req_ph3));
    vlSelfRef.__PVT__excl_store_reqv = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                             | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3))) 
                                         & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U))
                                         ? 3U : ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                                   & (((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3))) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U)))
                                                  ? 2U
                                                  : 0U));
    vlSelfRef.__PVT__inpendingq_matches_collnq = 0U;
    if (((0U != (IData)(vlSelfRef.__PVT__colln_match_check_for_inpendingq)) 
         | (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
             & (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_req))) 
            & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
               == VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)))))) {
        vlSelfRef.__PVT__inpendingq_matches_collnq = 1U;
    }
    VL_ASSIGNBIT_II(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid, 
                    ((((~ (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__full_apfifo)) 
                       & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd)) 
                      & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))) 
                     & (2U == (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2)))));
    VL_ASSIGNBIT_II(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid, 
                    ((((~ (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__full_apfifo)) 
                       & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd)) 
                      & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))) 
                     & (1U == (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__addr 
        = (0xfffffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x48U, 52));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__size 
        = (7U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x45U, 3));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__endian 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x31U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__txnid 
        = VL_EXTEND_II(12,6, (IData)(vlSelfRef.__PVT__wrindex_req_ph3));
    vlSelfRef.__PVT__new_dbid_cnt_req_ph3 = ((((((((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3)) 
                                                 | (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                                                | (IData)(vlSelfRef.__PVT__req_is_wrunique_ph3)) 
                                               | (IData)(vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3)) 
                                              | ((~ 
                                                  VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)) 
                                                 & (IData)(vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3))) 
                                             & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__PVT__new_compdbid_cnt_req_ph3 = 0U;
    if (((((((((IData)(vlSelfRef.__PVT__req_is_anywr_ph3) 
               & (~ (IData)(vlSelfRef.__PVT__flit_dwt_en_ph3))) 
              | (IData)(vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3)) 
             | (IData)(vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd_ph3)) 
            | ((IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3) 
               & (((1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                   | (3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                  | (7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))))) 
           | (VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U) 
              & (IData)(vlSelfRef.__PVT__req_is_writefull_clean_s_ph3))) 
          | ((~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)) 
             & (IData)(vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3))) 
         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)))) {
        vlSelfRef.__PVT__new_compdbid_cnt_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__new_comp_cnt_req_ph3 = 0U;
    if ((((((((((((IData)(vlSelfRef.__PVT__flit_dwt_en_ph3) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3)) 
                 | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)) 
                | (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3)) 
               | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
              | (IData)(vlSelfRef.__PVT__req_is_clean_si_ph3)) 
             | (IData)(vlSelfRef.__PVT__req_is_wrunique_ph3)) 
            | (IData)(vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3)) 
           | (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
          | ((~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)) 
             & (IData)(vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3))) 
         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)))) {
        vlSelfRef.__PVT__new_comp_cnt_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__req_atmo_ph3 = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3)
                                      ? 3U : VL_EXTEND_II(3,2, 
                                                          (3U 
                                                           & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2))));
    vlSelfRef.__PVT__new_mmemresp_cnt_req_ph3 = (((
                                                   (((((((IData)(vlSelfRef.__PVT__req_is_read_ocsu_notsd_pu_ph3) 
                                                         & (((((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                               | (5U 
                                                                  == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                              | (1U 
                                                                 == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                             | (3U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                            | ((7U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                               & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))) 
                                                        | ((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                                                           & ((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                              | ((~ (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph3)) 
                                                                 & (((5U 
                                                                      == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                                     | (1U 
                                                                        == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                                    | (3U 
                                                                       == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))))))) 
                                                       & (~ (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req))) 
                                                      | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3)) 
                                                     | ((IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3) 
                                                        & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U))) 
                                                    | ((IData)(vlSelfRef.__PVT__req_is_wruniqueptl_ph3) 
                                                       & (~ 
                                                          ((((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                             | (1U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                            | (3U 
                                                               == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))))) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_wrbackptl_ph3)) 
                                                  | ((IData)(vlSelfRef.__PVT__req_is_clean_si_ph3) 
                                                     & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U))) 
                                                 & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_ph3 
        = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3) 
           | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3));
    vlSelfRef.__PVT__new_cache_st_1_ph3_req = (1U & 
                                               VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 1U));
    vlSelfRef.__PVT__determine_st_atreq = 0U;
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        vlSelfRef.__PVT__determine_st_atreq = 1U;
        vlSelfRef.__PVT__new_cache_st_1_ph3_req = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__req_is_clean_s_ph3)) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                           & ((IData)(vlSelfRef.__PVT__req_is_read_su_notsd_pu_ph3) 
                                                              | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)))) 
                                                         & ((IData)(vlSelfRef.__PVT__req_is_make_u_ph3) 
                                                            | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 1U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        vlSelfRef.__PVT__new_cache_st_1_ph3_req = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                                                        & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                           & (((IData)(vlSelfRef.__PVT__req_is_read_su_notsd_pu_ph3) 
                                                               | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                                              | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)))) 
                                                         & ((IData)(vlSelfRef.__PVT__req_is_make_u_ph3) 
                                                            | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 1U)))));
    }
    vlSelfRef.__PVT__new_ownerp_id_ph3_req = vlSelfRef.__PVT__ownerp_id_ph3;
    vlSelfRef.__PVT__determine_ownerp_id_atreq = 0U;
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        vlSelfRef.__PVT__determine_ownerp_id_atreq = 1U;
        vlSelfRef.__PVT__new_ownerp_id_ph3_req = (0x7fU 
                                                  & ((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)
                                                      : (IData)(vlSelfRef.__PVT__ownerp_id_ph3)));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        vlSelfRef.__PVT__new_ownerp_id_ph3_req = (0x7fU 
                                                  & ((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)
                                                      : 
                                                     (((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                       & (IData)(vlSelfRef.__PVT__req_is_read_cs_notsd_ph3))
                                                       ? 
                                                      VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)
                                                       : 
                                                      ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                                        & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))
                                                        ? 0x7fU
                                                        : (IData)(vlSelfRef.__PVT__ownerp_id_ph3)))));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0U)))));
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 1U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (1U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (1U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 1U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (1U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (1U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 1U)))));
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 2U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (2U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (2U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 2U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (2U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (2U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 2U)))));
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 3U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (3U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (3U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 3U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (3U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (3U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 3U)))));
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 4U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (4U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (4U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 4U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (4U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (4U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 4U)))));
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 5U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (5U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (5U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 5U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (5U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (5U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 5U)))));
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 6U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (6U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (6U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 6U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (6U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (6U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 6U)))));
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 7U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (7U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (7U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 7U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (7U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (7U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 7U)))));
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 8U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (8U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (8U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 8U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (8U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (8U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 8U)))));
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 9U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (9U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (9U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 9U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (9U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (9U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 9U)))));
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xaU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xaU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xaU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xaU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xaU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xaU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xaU)))));
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xbU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xbU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xbU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xbU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xbU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xbU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xbU)))));
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xcU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xcU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xcU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xcU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xcU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xcU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xcU)))));
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xdU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xdU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xdU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xdU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xdU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xdU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xdU)))));
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xeU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xeU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xeU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xeU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xeU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xeU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xeU)))));
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xfU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xfU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xfU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xfU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xfU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xfU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xfU)))));
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x10U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x10U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x10U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x10U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x10U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x10U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x10U)))));
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x11U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x11U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x11U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x11U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x11U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x11U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x11U)))));
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x12U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x12U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x12U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x12U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x12U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x12U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x12U)))));
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x13U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x13U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x13U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x13U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x13U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x13U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x13U)))));
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x14U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x14U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x14U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x14U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x14U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x14U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x14U)))));
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x15U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x15U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x15U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x15U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x15U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x15U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x15U)))));
    }
    vlSelfRef.__PVT__wren_cache_vector_ph4_req_nxt = 0U;
    vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3 = 0U;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
          & (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) 
              | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3)) 
             | (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req))) 
         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)))) {
        vlSelfRef.__PVT__wren_cache_vector_ph4_req_nxt 
            = vlSelfRef.__PVT__cachehit_vector_ph3;
        vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3 = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (1U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (2U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (3U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (4U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (5U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (6U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (7U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (8U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (9U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xaU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xbU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xcU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xdU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xeU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xfU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x10U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x11U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x12U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x13U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x14U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x15U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x16U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x17U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x18U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x19U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1aU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1bU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1cU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1dU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1eU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1fU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    vlSelfRef.__PVT__excl_store_addr = (0x3fffffffffffULL 
                                        & ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                            ? VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x4eU, 46)
                                            : 0ULL));
    vlSelfRef.__PVT__excl_store_srcid = (0x7ffU & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                                    : 0U));
    vlSelfRef.__PVT__excl_store_lpid = (0x1fU & ((1U 
                                                  & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x8aU, 5)
                                                  : 0U));
    vlSelfRef.__PVT__excl_store_size = (7U & ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                               ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x45U, 3)
                                               : 0U));
    vlSelfRef.__PVT__wren_snpreqfifo = (((~ (IData)(vlSelfRef.__PVT__full_snpreqfifo)) 
                                         & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd)) 
                                        & ((IData)(vlSelfRef.__PVT__cmdis_req_ph3) 
                                           & (((((IData)(vlSelfRef.__PVT__req_is_anyrd_ph3) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_anywr_ph3)) 
                                                | (IData)(vlSelfRef.__PVT__req_is_writecmo_ph3)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.__PVT__req_atmo_ph3))) 
                                              | (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))));
    vlSelfRef.__PVT__new_atmo_state_req_ph3 = 0U;
    if (vlSelfRef.__PVT__req_is_atom_ph3) {
        vlSelfRef.__PVT__new_atmo_state_req_ph3 = 1U;
        if (vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_ph3) {
            vlSelfRef.__PVT__new_atmo_state_req_ph3 = 2U;
        }
    }
    vlSelfRef.__PVT__itis_stage2_atmo_ph3 = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_ph3) 
                                             | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ph3));
    vlSelfRef.__PVT__new_cache_st_ph3_req = VL_CONCAT_III(3,2,1, 
                                                          VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__new_cache_st_1_ph3_req)), 0U);
    vlSelfRef.__PVT__new_share_vect_ph3_req = vlSelfRef.__PVT__new_share_vect_req_m_ph3;
    vlSelfRef.__PVT__req_respcmdq_gated = ((((IData)(vlSelfRef.__PVT__room_atlst3_outcompfifo) 
                                             & (~ (IData)(vlSelfRef.__PVT__block_b2b_resp))) 
                                            & (~ (IData)(vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3))) 
                                           & (IData)(vlSelfRef.__PVT__req_respcmdq));
    vlSelfRef.__PVT__req_memrespcmdq_gated = ((((IData)(vlSelfRef.__PVT__room_atlst3_outcompfifo) 
                                                & (~ (IData)(vlSelfRef.__PVT__block_b2b_resp))) 
                                               & (~ (IData)(vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3))) 
                                              & (IData)(vlSelfRef.__PVT__req_memrespcmdq));
    vlSelfRef.__PVT__req_drespcmdq_gated = ((((IData)(vlSelfRef.__PVT__room_atlst3_outcompfifo) 
                                              & (~ (IData)(vlSelfRef.__PVT__block_b2b_resp))) 
                                             & (~ (IData)(vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3))) 
                                            & (IData)(vlSelfRef.__PVT__req_drespcmdq));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_stage2_atmo_complete_ph3), (IData)(vlSelfRef.__PVT__itis_stage2_atmo_ph3)))))) {
        vlSelfRef.__PVT__new_atmo_state_ph4_nxt = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_ph3)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_complete_ph3)
                                                     ? 3U
                                                     : (IData)(vlSelfRef.__PVT__atmo_state_ph3)));
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:4436: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.update_atmo_state_for_ongoing_rsp: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 4436, "");
    }
    VL_CONCAT_WIQ(89,32,57, __Vtemp_41, VL_EXTEND_II(32,26, 
                                                     VL_CONCAT_III(26,2,24, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_comp_slc_cnt_req_ph3), (IData)(vlSelfRef.__PVT__new_comp_cnt_req_ph3)), 
                                                                   VL_CONCAT_III(24,1,23, (IData)(vlSelfRef.__PVT__new_readreceipt_cnt_req_ph3), 
                                                                                VL_CONCAT_III(23,1,22, (IData)(vlSelfRef.__PVT__new_compack_cnt_req_ph3), 
                                                                                VL_EXTEND_II(22,16, 
                                                                                VL_CONCAT_III(16,1,15, 
                                                                                (1U 
                                                                                & (~ 
                                                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U))), 
                                                                                VL_CONCAT_III(15,1,14, (IData)(vlSelfRef.__PVT__new_dbid_cnt_req_ph3), 
                                                                                VL_CONCAT_III(14,2,12, (IData)(vlSelfRef.__PVT__new_compdbid_cnt_req_ph3), 0U)))))))), 
                  VL_CONCAT_QIQ(57,2,55, (IData)(vlSelfRef.__PVT__new_wrdata_cnt_req_ph3), 
                                VL_EXTEND_QQ(55,54, 
                                             VL_CONCAT_QII(54,32,22, 
                                                           VL_CONCAT_III(32,3,29, (IData)(vlSelfRef.__PVT__new_cache_st_ph3_req), 
                                                                         VL_CONCAT_III(29,7,22, (IData)(vlSelfRef.__PVT__new_ownerp_id_ph3_req), vlSelfRef.__PVT__new_share_vect_ph3_req)), 0U))));
    VL_CONCAT_WIW(91,2,89, __Vtemp_42, (IData)(vlSelfRef.__PVT__new_atmo_state_req_ph3), __Vtemp_41);
    VL_EXTEND_WW(96,91, __Vtemp_43, __Vtemp_42);
    VL_CONCAT_WWI(102,96,6, __Vtemp_44, __Vtemp_43, 
                  VL_EXTEND_II(6,1, (IData)(vlSelfRef.__PVT__new_mmemresp_cnt_req_ph3)));
    VL_EXTEND_WW(103,102, __Vtemp_45, __Vtemp_44);
    VL_ASSIGNSEL_WW(136,103,0U, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_45);
    VL_ASSIGNSEL_WQ(136,33,0x67U, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, 
                    VL_EXTEND_QI(33,1, (IData)(vlSelfRef.__PVT__new_compcmo_cnt_req_ph3)));
    vlSelfRef.__PVT__req_all_rsp = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__req_drespcmdq_gated), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__req_memrespcmdq_gated), (IData)(vlSelfRef.__PVT__req_respcmdq_gated)));
    VL_ASSIGNSEL_WI(136,26,0U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(26,10,16, VL_CONCAT_III(10,3,7, (IData)(vlSelfRef.__PVT__new_respfield_ic_src2or4_ph4_nxt), 
                                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__new_gotwrdata_earlier_ic_ph4_nxt), 
                                                                        VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__new_got_snpdata_earlier_ic_ph4_nxt), (IData)(vlSelfRef.__PVT__new_compfifo_index_ic_ph4_nxt)))), 
                                  VL_CONCAT_III(16,5,11, (IData)(vlSelfRef.__PVT__new_compfifo_index_ic_data_ph4_nxt), 
                                                VL_CONCAT_III(11,5,6, (IData)(vlSelfRef.__PVT__new_compfifo_index_mm_ph4_nxt), 
                                                              VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__new_snpresp_cnt_resp_ph4_nxt), (IData)(vlSelfRef.__PVT__new_mmemresp_cnt_resp_ph4_nxt))))));
    VL_ASSIGNSEL_WI(136,24,0x1aU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(24,22,2, vlSelfRef.__PVT__new_share_vect_ph3_rsp, 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_gotresp_earlier_ic_ph4_nxt), (IData)(vlSelfRef.__PVT__new_was_prelastresp_read_snp_ph4_nxt))));
    VL_ASSIGNSEL_WI(136,13,0x32U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(13,2,11, (IData)(vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt), 
                                  VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__new_gotptldata_earlier_ic_ph4_nxt), 
                                                VL_CONCAT_III(10,3,7, (IData)(vlSelfRef.__PVT__new_cache_st_ph3_rsp), (IData)(vlSelfRef.__PVT__new_ownerp_id_ph3_rsp)))));
    VL_ASSIGNSEL_WI(136,12,0x3fU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, vlSelfRef.__PVT__new_dbid_from_slavemem_ph4_nxt);
    VL_ASSIGNSEL_WI(136,15,0x4bU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(15,8,7, VL_CONCAT_III(8,4,4, 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph4_nxt), (IData)(vlSelfRef.__PVT__new_comp_slc_cnt_resp_ph4_nxt)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_comp_cnt_resp_ph4_nxt), (IData)(vlSelfRef.__PVT__new_readreceipt_cnt_resp_ph4_nxt))), 
                                                        VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__new_compack_cnt_resp_ph4_nxt), 
                                                                      VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__new_first_RespErr_ph4_nxt), (IData)(vlSelfRef.__PVT__new_first_resp_ph4_nxt)))), 
                                  VL_CONCAT_III(7,4,3, 
                                                VL_CONCAT_III(4,2,2, 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_pkt_already_forwarded_mem_ph4_nxt), (IData)(vlSelfRef.__PVT__new_pkt_already_forwarded_snp_ph4_nxt)), 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_last_read_snp_sent_ph4_nxt), (IData)(vlSelfRef.__PVT__new_got_compack_ph4_nxt))), 
                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__new_dbid_cnt_ph4_nxt), (IData)(vlSelfRef.__PVT__new_compdbid_cnt_ph4_nxt)))));
    VL_ASSIGNSEL_WI(136,7,0x5aU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(7,2,5, (IData)(vlSelfRef.__PVT__new_atmo_state_ph4_nxt), 
                                  VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__new_retry_pcrdtype_ph4_nxt), (IData)(vlSelfRef.__PVT__new_retry_pending_ph4_nxt))));
    VL_ASSIGNSEL_WI(136,8,0x61U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt), (IData)(vlSelfRef.__PVT__new_compcmo_cnt_resp_ph4_nxt)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_got_mem_data_earlier_ph4_nxt), (IData)(vlSelfRef.__PVT__was_prelastresp_write_comp_ph4_cmo_nxt))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_write_dbid_ph4_cmo_nxt), (IData)(vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph4_cmo_nxt)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph4_cmo_nxt), (IData)(vlSelfRef.__PVT__new_was_prelastresp_wr_uniq_ptl_ph4_nxt)))));
    VL_ASSIGNSEL_WI(136,15,0x69U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(15,8,7, VL_CONCAT_III(8,2,6, (IData)(vlSelfRef.__PVT__new_compcmo_resperr_ph4_nxt), 
                                                        VL_CONCAT_III(6,3,3, (IData)(vlSelfRef.__PVT__cmd_ph4_snp_resp_nxt), (IData)(vlSelfRef.__PVT__cmd_ph4_dat_resp_write_data_nxt))), 
                                  VL_CONCAT_III(7,4,3, 
                                                VL_CONCAT_III(4,2,2, 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__has_sent_compcmo_ph4_wrcmo_nxt), (IData)(vlSelfRef.__PVT__has_sent_comp_ph4_wrcmo_nxt)), 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph4_wrcmo_nxt), (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph4_wrcmo_nxt))), 
                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph4_wrcmo_nxt), (IData)(vlSelfRef.__PVT__new_comp_resperr_ph4_nxt)))));
    VL_ASSIGNSEL_WI(136,16,0x78U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__cmd_ph4_dat_opcode_nxt), (IData)(vlSelfRef.__PVT__new_dbid_from_slc_ph4_nxt)));
    vlSelfRef.__PVT__gnt_requests_rsp = 0U;
    vlSelfRef.__PVT__serv_history_rsp_nxt = vlSelfRef.__PVT__serv_history_rsp;
    if ((1U == (IData)(vlSelfRef.__PVT__serv_history_rsp))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 1U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 2U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 2U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 2U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 4U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 4U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 0U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 1U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__serv_history_rsp))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 2U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 4U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 4U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 0U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 1U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 1U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 1U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 2U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 2U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__serv_history_rsp))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 0U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 1U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 1U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 1U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 2U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 2U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 2U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 4U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 4U;
        }
    }
    VL_CONST_W_5X(160,__Vtemp_46,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_47, vlSelfRef.__PVT__status_field_common, 0U, 136);
    VL_AND_W(5, __Vtemp_48, __Vtemp_46, __Vtemp_47);
    VL_ASSIGNSEL_WW(4352,136,0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_48);
    VL_CONST_W_5X(160,__Vtemp_49,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_50, vlSelfRef.__PVT__status_field_common, 0U, 136);
    __Vtemp_51 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0U));
    VL_COND_WIWW(136, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_50);
    __Vtemp_53 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0U));
    VL_COND_WIWW(136, __Vtemp_54, __Vtemp_53, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_52);
    VL_AND_W(5, __Vtemp_55, __Vtemp_49, __Vtemp_54);
    VL_ASSIGNSEL_WW(4352,136,0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_55);
    VL_CONST_W_5X(160,__Vtemp_56,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_57, vlSelfRef.__PVT__status_field_common, 0x88U, 136);
    VL_AND_W(5, __Vtemp_58, __Vtemp_56, __Vtemp_57);
    VL_ASSIGNSEL_WW(4352,136,0x88U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_58);
    VL_CONST_W_5X(160,__Vtemp_59,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_60, vlSelfRef.__PVT__status_field_common, 0x88U, 136);
    __Vtemp_61 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 1U));
    VL_COND_WIWW(136, __Vtemp_62, __Vtemp_61, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_60);
    __Vtemp_63 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 1U));
    VL_COND_WIWW(136, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_62);
    VL_AND_W(5, __Vtemp_65, __Vtemp_59, __Vtemp_64);
    VL_ASSIGNSEL_WW(4352,136,0x88U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_65);
    VL_CONST_W_5X(160,__Vtemp_66,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_67, vlSelfRef.__PVT__status_field_common, 0x110U, 136);
    VL_AND_W(5, __Vtemp_68, __Vtemp_66, __Vtemp_67);
    VL_ASSIGNSEL_WW(4352,136,0x110U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_68);
    VL_CONST_W_5X(160,__Vtemp_69,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_70, vlSelfRef.__PVT__status_field_common, 0x110U, 136);
    __Vtemp_71 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 2U));
    VL_COND_WIWW(136, __Vtemp_72, __Vtemp_71, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_70);
    __Vtemp_73 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 2U));
    VL_COND_WIWW(136, __Vtemp_74, __Vtemp_73, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_72);
    VL_AND_W(5, __Vtemp_75, __Vtemp_69, __Vtemp_74);
    VL_ASSIGNSEL_WW(4352,136,0x110U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_75);
    VL_CONST_W_5X(160,__Vtemp_76,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_77, vlSelfRef.__PVT__status_field_common, 0x198U, 136);
    VL_AND_W(5, __Vtemp_78, __Vtemp_76, __Vtemp_77);
    VL_ASSIGNSEL_WW(4352,136,0x198U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_78);
    VL_CONST_W_5X(160,__Vtemp_79,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_80, vlSelfRef.__PVT__status_field_common, 0x198U, 136);
    __Vtemp_81 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 3U));
    VL_COND_WIWW(136, __Vtemp_82, __Vtemp_81, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_80);
    __Vtemp_83 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 3U));
    VL_COND_WIWW(136, __Vtemp_84, __Vtemp_83, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_82);
    VL_AND_W(5, __Vtemp_85, __Vtemp_79, __Vtemp_84);
    VL_ASSIGNSEL_WW(4352,136,0x198U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_85);
    VL_CONST_W_5X(160,__Vtemp_86,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_87, vlSelfRef.__PVT__status_field_common, 0x220U, 136);
    VL_AND_W(5, __Vtemp_88, __Vtemp_86, __Vtemp_87);
    VL_ASSIGNSEL_WW(4352,136,0x220U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_88);
    VL_CONST_W_5X(160,__Vtemp_89,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_90, vlSelfRef.__PVT__status_field_common, 0x220U, 136);
    __Vtemp_91 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 4U));
    VL_COND_WIWW(136, __Vtemp_92, __Vtemp_91, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_90);
    __Vtemp_93 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 4U));
    VL_COND_WIWW(136, __Vtemp_94, __Vtemp_93, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_92);
    VL_AND_W(5, __Vtemp_95, __Vtemp_89, __Vtemp_94);
    VL_ASSIGNSEL_WW(4352,136,0x220U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_95);
    VL_CONST_W_5X(160,__Vtemp_96,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_97, vlSelfRef.__PVT__status_field_common, 0x2a8U, 136);
    VL_AND_W(5, __Vtemp_98, __Vtemp_96, __Vtemp_97);
    VL_ASSIGNSEL_WW(4352,136,0x2a8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_98);
    VL_CONST_W_5X(160,__Vtemp_99,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_100, vlSelfRef.__PVT__status_field_common, 0x2a8U, 136);
    __Vtemp_101 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 5U));
    VL_COND_WIWW(136, __Vtemp_102, __Vtemp_101, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_100);
    __Vtemp_103 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 5U));
    VL_COND_WIWW(136, __Vtemp_104, __Vtemp_103, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_102);
    VL_AND_W(5, __Vtemp_105, __Vtemp_99, __Vtemp_104);
    VL_ASSIGNSEL_WW(4352,136,0x2a8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_105);
    VL_CONST_W_5X(160,__Vtemp_106,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_107, vlSelfRef.__PVT__status_field_common, 0x330U, 136);
    VL_AND_W(5, __Vtemp_108, __Vtemp_106, __Vtemp_107);
    VL_ASSIGNSEL_WW(4352,136,0x330U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_108);
    VL_CONST_W_5X(160,__Vtemp_109,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_110, vlSelfRef.__PVT__status_field_common, 0x330U, 136);
    __Vtemp_111 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 6U));
    VL_COND_WIWW(136, __Vtemp_112, __Vtemp_111, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_110);
    __Vtemp_113 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 6U));
    VL_COND_WIWW(136, __Vtemp_114, __Vtemp_113, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_112);
    VL_AND_W(5, __Vtemp_115, __Vtemp_109, __Vtemp_114);
    VL_ASSIGNSEL_WW(4352,136,0x330U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_115);
    VL_CONST_W_5X(160,__Vtemp_116,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_117, vlSelfRef.__PVT__status_field_common, 0x3b8U, 136);
    VL_AND_W(5, __Vtemp_118, __Vtemp_116, __Vtemp_117);
    VL_ASSIGNSEL_WW(4352,136,0x3b8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_118);
    VL_CONST_W_5X(160,__Vtemp_119,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_120, vlSelfRef.__PVT__status_field_common, 0x3b8U, 136);
    __Vtemp_121 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 7U));
    VL_COND_WIWW(136, __Vtemp_122, __Vtemp_121, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_120);
    __Vtemp_123 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 7U));
    VL_COND_WIWW(136, __Vtemp_124, __Vtemp_123, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_122);
    VL_AND_W(5, __Vtemp_125, __Vtemp_119, __Vtemp_124);
    VL_ASSIGNSEL_WW(4352,136,0x3b8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_125);
    VL_CONST_W_5X(160,__Vtemp_126,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_127, vlSelfRef.__PVT__status_field_common, 0x440U, 136);
    VL_AND_W(5, __Vtemp_128, __Vtemp_126, __Vtemp_127);
    VL_ASSIGNSEL_WW(4352,136,0x440U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_128);
    VL_CONST_W_5X(160,__Vtemp_129,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_130, vlSelfRef.__PVT__status_field_common, 0x440U, 136);
    __Vtemp_131 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 8U));
    VL_COND_WIWW(136, __Vtemp_132, __Vtemp_131, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_130);
    __Vtemp_133 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 8U));
    VL_COND_WIWW(136, __Vtemp_134, __Vtemp_133, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_132);
    VL_AND_W(5, __Vtemp_135, __Vtemp_129, __Vtemp_134);
    VL_ASSIGNSEL_WW(4352,136,0x440U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_135);
    VL_CONST_W_5X(160,__Vtemp_136,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_137, vlSelfRef.__PVT__status_field_common, 0x4c8U, 136);
    VL_AND_W(5, __Vtemp_138, __Vtemp_136, __Vtemp_137);
    VL_ASSIGNSEL_WW(4352,136,0x4c8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_138);
    VL_CONST_W_5X(160,__Vtemp_139,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_140, vlSelfRef.__PVT__status_field_common, 0x4c8U, 136);
    __Vtemp_141 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 9U));
    VL_COND_WIWW(136, __Vtemp_142, __Vtemp_141, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_140);
    __Vtemp_143 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 9U));
    VL_COND_WIWW(136, __Vtemp_144, __Vtemp_143, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_142);
    VL_AND_W(5, __Vtemp_145, __Vtemp_139, __Vtemp_144);
    VL_ASSIGNSEL_WW(4352,136,0x4c8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_145);
    VL_CONST_W_5X(160,__Vtemp_146,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_147, vlSelfRef.__PVT__status_field_common, 0x550U, 136);
    VL_AND_W(5, __Vtemp_148, __Vtemp_146, __Vtemp_147);
    VL_ASSIGNSEL_WW(4352,136,0x550U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_148);
    VL_CONST_W_5X(160,__Vtemp_149,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_150, vlSelfRef.__PVT__status_field_common, 0x550U, 136);
    __Vtemp_151 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xaU));
    VL_COND_WIWW(136, __Vtemp_152, __Vtemp_151, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_150);
    __Vtemp_153 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xaU));
    VL_COND_WIWW(136, __Vtemp_154, __Vtemp_153, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_152);
    VL_AND_W(5, __Vtemp_155, __Vtemp_149, __Vtemp_154);
    VL_ASSIGNSEL_WW(4352,136,0x550U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_155);
    VL_CONST_W_5X(160,__Vtemp_156,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_157, vlSelfRef.__PVT__status_field_common, 0x5d8U, 136);
    VL_AND_W(5, __Vtemp_158, __Vtemp_156, __Vtemp_157);
    VL_ASSIGNSEL_WW(4352,136,0x5d8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_158);
    VL_CONST_W_5X(160,__Vtemp_159,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_160, vlSelfRef.__PVT__status_field_common, 0x5d8U, 136);
    __Vtemp_161 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xbU));
    VL_COND_WIWW(136, __Vtemp_162, __Vtemp_161, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_160);
    __Vtemp_163 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xbU));
    VL_COND_WIWW(136, __Vtemp_164, __Vtemp_163, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_162);
    VL_AND_W(5, __Vtemp_165, __Vtemp_159, __Vtemp_164);
    VL_ASSIGNSEL_WW(4352,136,0x5d8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_165);
    VL_CONST_W_5X(160,__Vtemp_166,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_167, vlSelfRef.__PVT__status_field_common, 0x660U, 136);
    VL_AND_W(5, __Vtemp_168, __Vtemp_166, __Vtemp_167);
    VL_ASSIGNSEL_WW(4352,136,0x660U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_168);
    VL_CONST_W_5X(160,__Vtemp_169,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_170, vlSelfRef.__PVT__status_field_common, 0x660U, 136);
    __Vtemp_171 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xcU));
    VL_COND_WIWW(136, __Vtemp_172, __Vtemp_171, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_170);
    __Vtemp_173 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xcU));
    VL_COND_WIWW(136, __Vtemp_174, __Vtemp_173, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_172);
    VL_AND_W(5, __Vtemp_175, __Vtemp_169, __Vtemp_174);
    VL_ASSIGNSEL_WW(4352,136,0x660U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_175);
    VL_CONST_W_5X(160,__Vtemp_176,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_177, vlSelfRef.__PVT__status_field_common, 0x6e8U, 136);
    VL_AND_W(5, __Vtemp_178, __Vtemp_176, __Vtemp_177);
    VL_ASSIGNSEL_WW(4352,136,0x6e8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_178);
    VL_CONST_W_5X(160,__Vtemp_179,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_180, vlSelfRef.__PVT__status_field_common, 0x6e8U, 136);
    __Vtemp_181 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xdU));
    VL_COND_WIWW(136, __Vtemp_182, __Vtemp_181, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_180);
    __Vtemp_183 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xdU));
    VL_COND_WIWW(136, __Vtemp_184, __Vtemp_183, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_182);
    VL_AND_W(5, __Vtemp_185, __Vtemp_179, __Vtemp_184);
    VL_ASSIGNSEL_WW(4352,136,0x6e8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_185);
    VL_CONST_W_5X(160,__Vtemp_186,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_187, vlSelfRef.__PVT__status_field_common, 0x770U, 136);
    VL_AND_W(5, __Vtemp_188, __Vtemp_186, __Vtemp_187);
    VL_ASSIGNSEL_WW(4352,136,0x770U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_188);
    VL_CONST_W_5X(160,__Vtemp_189,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_190, vlSelfRef.__PVT__status_field_common, 0x770U, 136);
    __Vtemp_191 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xeU));
    VL_COND_WIWW(136, __Vtemp_192, __Vtemp_191, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_190);
    __Vtemp_193 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xeU));
    VL_COND_WIWW(136, __Vtemp_194, __Vtemp_193, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_192);
    VL_AND_W(5, __Vtemp_195, __Vtemp_189, __Vtemp_194);
    VL_ASSIGNSEL_WW(4352,136,0x770U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_195);
    VL_CONST_W_5X(160,__Vtemp_196,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_197, vlSelfRef.__PVT__status_field_common, 0x7f8U, 136);
    VL_AND_W(5, __Vtemp_198, __Vtemp_196, __Vtemp_197);
    VL_ASSIGNSEL_WW(4352,136,0x7f8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_198);
    VL_CONST_W_5X(160,__Vtemp_199,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_200, vlSelfRef.__PVT__status_field_common, 0x7f8U, 136);
    __Vtemp_201 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xfU));
    VL_COND_WIWW(136, __Vtemp_202, __Vtemp_201, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_200);
    __Vtemp_203 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xfU));
    VL_COND_WIWW(136, __Vtemp_204, __Vtemp_203, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_202);
    VL_AND_W(5, __Vtemp_205, __Vtemp_199, __Vtemp_204);
    VL_ASSIGNSEL_WW(4352,136,0x7f8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_205);
    VL_CONST_W_5X(160,__Vtemp_206,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_207, vlSelfRef.__PVT__status_field_common, 0x880U, 136);
    VL_AND_W(5, __Vtemp_208, __Vtemp_206, __Vtemp_207);
    VL_ASSIGNSEL_WW(4352,136,0x880U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_208);
    VL_CONST_W_5X(160,__Vtemp_209,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_210, vlSelfRef.__PVT__status_field_common, 0x880U, 136);
    __Vtemp_211 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x10U));
    VL_COND_WIWW(136, __Vtemp_212, __Vtemp_211, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_210);
    __Vtemp_213 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x10U));
    VL_COND_WIWW(136, __Vtemp_214, __Vtemp_213, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_212);
    VL_AND_W(5, __Vtemp_215, __Vtemp_209, __Vtemp_214);
    VL_ASSIGNSEL_WW(4352,136,0x880U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_215);
    VL_CONST_W_5X(160,__Vtemp_216,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_217, vlSelfRef.__PVT__status_field_common, 0x908U, 136);
    VL_AND_W(5, __Vtemp_218, __Vtemp_216, __Vtemp_217);
    VL_ASSIGNSEL_WW(4352,136,0x908U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_218);
    VL_CONST_W_5X(160,__Vtemp_219,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_220, vlSelfRef.__PVT__status_field_common, 0x908U, 136);
    __Vtemp_221 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x11U));
    VL_COND_WIWW(136, __Vtemp_222, __Vtemp_221, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_220);
    __Vtemp_223 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x11U));
    VL_COND_WIWW(136, __Vtemp_224, __Vtemp_223, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_222);
    VL_AND_W(5, __Vtemp_225, __Vtemp_219, __Vtemp_224);
    VL_ASSIGNSEL_WW(4352,136,0x908U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_225);
    VL_CONST_W_5X(160,__Vtemp_226,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_227, vlSelfRef.__PVT__status_field_common, 0x990U, 136);
    VL_AND_W(5, __Vtemp_228, __Vtemp_226, __Vtemp_227);
    VL_ASSIGNSEL_WW(4352,136,0x990U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_228);
    VL_CONST_W_5X(160,__Vtemp_229,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_230, vlSelfRef.__PVT__status_field_common, 0x990U, 136);
    __Vtemp_231 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x12U));
    VL_COND_WIWW(136, __Vtemp_232, __Vtemp_231, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_230);
    __Vtemp_233 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x12U));
    VL_COND_WIWW(136, __Vtemp_234, __Vtemp_233, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_232);
    VL_AND_W(5, __Vtemp_235, __Vtemp_229, __Vtemp_234);
    VL_ASSIGNSEL_WW(4352,136,0x990U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_235);
    VL_CONST_W_5X(160,__Vtemp_236,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_237, vlSelfRef.__PVT__status_field_common, 0xa18U, 136);
    VL_AND_W(5, __Vtemp_238, __Vtemp_236, __Vtemp_237);
    VL_ASSIGNSEL_WW(4352,136,0xa18U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_238);
    VL_CONST_W_5X(160,__Vtemp_239,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_240, vlSelfRef.__PVT__status_field_common, 0xa18U, 136);
    __Vtemp_241 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x13U));
    VL_COND_WIWW(136, __Vtemp_242, __Vtemp_241, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_240);
    __Vtemp_243 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x13U));
    VL_COND_WIWW(136, __Vtemp_244, __Vtemp_243, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_242);
    VL_AND_W(5, __Vtemp_245, __Vtemp_239, __Vtemp_244);
    VL_ASSIGNSEL_WW(4352,136,0xa18U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_245);
    VL_CONST_W_5X(160,__Vtemp_246,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_247, vlSelfRef.__PVT__status_field_common, 0xaa0U, 136);
    VL_AND_W(5, __Vtemp_248, __Vtemp_246, __Vtemp_247);
    VL_ASSIGNSEL_WW(4352,136,0xaa0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_248);
    VL_CONST_W_5X(160,__Vtemp_249,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_250, vlSelfRef.__PVT__status_field_common, 0xaa0U, 136);
    __Vtemp_251 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x14U));
    VL_COND_WIWW(136, __Vtemp_252, __Vtemp_251, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_250);
    __Vtemp_253 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x14U));
    VL_COND_WIWW(136, __Vtemp_254, __Vtemp_253, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_252);
    VL_AND_W(5, __Vtemp_255, __Vtemp_249, __Vtemp_254);
    VL_ASSIGNSEL_WW(4352,136,0xaa0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_255);
    VL_CONST_W_5X(160,__Vtemp_256,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_257, vlSelfRef.__PVT__status_field_common, 0xb28U, 136);
    VL_AND_W(5, __Vtemp_258, __Vtemp_256, __Vtemp_257);
    VL_ASSIGNSEL_WW(4352,136,0xb28U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_258);
    VL_CONST_W_5X(160,__Vtemp_259,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_260, vlSelfRef.__PVT__status_field_common, 0xb28U, 136);
    __Vtemp_261 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x15U));
    VL_COND_WIWW(136, __Vtemp_262, __Vtemp_261, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_260);
    __Vtemp_263 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x15U));
    VL_COND_WIWW(136, __Vtemp_264, __Vtemp_263, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_262);
    VL_AND_W(5, __Vtemp_265, __Vtemp_259, __Vtemp_264);
    VL_ASSIGNSEL_WW(4352,136,0xb28U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_265);
    VL_CONST_W_5X(160,__Vtemp_266,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_267, vlSelfRef.__PVT__status_field_common, 0xbb0U, 136);
    VL_AND_W(5, __Vtemp_268, __Vtemp_266, __Vtemp_267);
    VL_ASSIGNSEL_WW(4352,136,0xbb0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_268);
    VL_CONST_W_5X(160,__Vtemp_269,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_270, vlSelfRef.__PVT__status_field_common, 0xbb0U, 136);
    __Vtemp_271 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x16U));
    VL_COND_WIWW(136, __Vtemp_272, __Vtemp_271, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_270);
    __Vtemp_273 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x16U));
    VL_COND_WIWW(136, __Vtemp_274, __Vtemp_273, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_272);
    VL_AND_W(5, __Vtemp_275, __Vtemp_269, __Vtemp_274);
    VL_ASSIGNSEL_WW(4352,136,0xbb0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_275);
    VL_CONST_W_5X(160,__Vtemp_276,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_277, vlSelfRef.__PVT__status_field_common, 0xc38U, 136);
    VL_AND_W(5, __Vtemp_278, __Vtemp_276, __Vtemp_277);
    VL_ASSIGNSEL_WW(4352,136,0xc38U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_278);
    VL_CONST_W_5X(160,__Vtemp_279,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_280, vlSelfRef.__PVT__status_field_common, 0xc38U, 136);
    __Vtemp_281 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x17U));
    VL_COND_WIWW(136, __Vtemp_282, __Vtemp_281, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_280);
    __Vtemp_283 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x17U));
    VL_COND_WIWW(136, __Vtemp_284, __Vtemp_283, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_282);
    VL_AND_W(5, __Vtemp_285, __Vtemp_279, __Vtemp_284);
    VL_ASSIGNSEL_WW(4352,136,0xc38U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_285);
    VL_CONST_W_5X(160,__Vtemp_286,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_287, vlSelfRef.__PVT__status_field_common, 0xcc0U, 136);
    VL_AND_W(5, __Vtemp_288, __Vtemp_286, __Vtemp_287);
    VL_ASSIGNSEL_WW(4352,136,0xcc0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_288);
    VL_CONST_W_5X(160,__Vtemp_289,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_290, vlSelfRef.__PVT__status_field_common, 0xcc0U, 136);
    __Vtemp_291 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x18U));
    VL_COND_WIWW(136, __Vtemp_292, __Vtemp_291, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_290);
    __Vtemp_293 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x18U));
    VL_COND_WIWW(136, __Vtemp_294, __Vtemp_293, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_292);
    VL_AND_W(5, __Vtemp_295, __Vtemp_289, __Vtemp_294);
    VL_ASSIGNSEL_WW(4352,136,0xcc0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_295);
    VL_CONST_W_5X(160,__Vtemp_296,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_297, vlSelfRef.__PVT__status_field_common, 0xd48U, 136);
    VL_AND_W(5, __Vtemp_298, __Vtemp_296, __Vtemp_297);
    VL_ASSIGNSEL_WW(4352,136,0xd48U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_298);
    VL_CONST_W_5X(160,__Vtemp_299,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_300, vlSelfRef.__PVT__status_field_common, 0xd48U, 136);
    __Vtemp_301 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x19U));
    VL_COND_WIWW(136, __Vtemp_302, __Vtemp_301, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_300);
    __Vtemp_303 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x19U));
    VL_COND_WIWW(136, __Vtemp_304, __Vtemp_303, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_302);
    VL_AND_W(5, __Vtemp_305, __Vtemp_299, __Vtemp_304);
    VL_ASSIGNSEL_WW(4352,136,0xd48U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_305);
    VL_CONST_W_5X(160,__Vtemp_306,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_307, vlSelfRef.__PVT__status_field_common, 0xdd0U, 136);
    VL_AND_W(5, __Vtemp_308, __Vtemp_306, __Vtemp_307);
    VL_ASSIGNSEL_WW(4352,136,0xdd0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_308);
    VL_CONST_W_5X(160,__Vtemp_309,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_310, vlSelfRef.__PVT__status_field_common, 0xdd0U, 136);
    __Vtemp_311 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1aU));
    VL_COND_WIWW(136, __Vtemp_312, __Vtemp_311, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_310);
    __Vtemp_313 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1aU));
    VL_COND_WIWW(136, __Vtemp_314, __Vtemp_313, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_312);
    VL_AND_W(5, __Vtemp_315, __Vtemp_309, __Vtemp_314);
    VL_ASSIGNSEL_WW(4352,136,0xdd0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_315);
    VL_CONST_W_5X(160,__Vtemp_316,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_317, vlSelfRef.__PVT__status_field_common, 0xe58U, 136);
    VL_AND_W(5, __Vtemp_318, __Vtemp_316, __Vtemp_317);
    VL_ASSIGNSEL_WW(4352,136,0xe58U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_318);
    VL_CONST_W_5X(160,__Vtemp_319,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_320, vlSelfRef.__PVT__status_field_common, 0xe58U, 136);
    __Vtemp_321 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1bU));
    VL_COND_WIWW(136, __Vtemp_322, __Vtemp_321, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_320);
    __Vtemp_323 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1bU));
    VL_COND_WIWW(136, __Vtemp_324, __Vtemp_323, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_322);
    VL_AND_W(5, __Vtemp_325, __Vtemp_319, __Vtemp_324);
    VL_ASSIGNSEL_WW(4352,136,0xe58U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_325);
    VL_CONST_W_5X(160,__Vtemp_326,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_327, vlSelfRef.__PVT__status_field_common, 0xee0U, 136);
    VL_AND_W(5, __Vtemp_328, __Vtemp_326, __Vtemp_327);
    VL_ASSIGNSEL_WW(4352,136,0xee0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_328);
    VL_CONST_W_5X(160,__Vtemp_329,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_330, vlSelfRef.__PVT__status_field_common, 0xee0U, 136);
    __Vtemp_331 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1cU));
    VL_COND_WIWW(136, __Vtemp_332, __Vtemp_331, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_330);
    __Vtemp_333 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1cU));
    VL_COND_WIWW(136, __Vtemp_334, __Vtemp_333, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_332);
    VL_AND_W(5, __Vtemp_335, __Vtemp_329, __Vtemp_334);
    VL_ASSIGNSEL_WW(4352,136,0xee0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_335);
    VL_CONST_W_5X(160,__Vtemp_336,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_337, vlSelfRef.__PVT__status_field_common, 0xf68U, 136);
    VL_AND_W(5, __Vtemp_338, __Vtemp_336, __Vtemp_337);
    VL_ASSIGNSEL_WW(4352,136,0xf68U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_338);
    VL_CONST_W_5X(160,__Vtemp_339,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_340, vlSelfRef.__PVT__status_field_common, 0xf68U, 136);
    __Vtemp_341 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1dU));
    VL_COND_WIWW(136, __Vtemp_342, __Vtemp_341, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_340);
    __Vtemp_343 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1dU));
    VL_COND_WIWW(136, __Vtemp_344, __Vtemp_343, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_342);
    VL_AND_W(5, __Vtemp_345, __Vtemp_339, __Vtemp_344);
    VL_ASSIGNSEL_WW(4352,136,0xf68U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_345);
    VL_CONST_W_5X(160,__Vtemp_346,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_347, vlSelfRef.__PVT__status_field_common, 0xff0U, 136);
    VL_AND_W(5, __Vtemp_348, __Vtemp_346, __Vtemp_347);
    VL_ASSIGNSEL_WW(4352,136,0xff0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_348);
    VL_CONST_W_5X(160,__Vtemp_349,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_350, vlSelfRef.__PVT__status_field_common, 0xff0U, 136);
    __Vtemp_351 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1eU));
    VL_COND_WIWW(136, __Vtemp_352, __Vtemp_351, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_350);
    __Vtemp_353 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1eU));
    VL_COND_WIWW(136, __Vtemp_354, __Vtemp_353, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_352);
    VL_AND_W(5, __Vtemp_355, __Vtemp_349, __Vtemp_354);
    VL_ASSIGNSEL_WW(4352,136,0xff0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_355);
    VL_CONST_W_5X(160,__Vtemp_356,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_357, vlSelfRef.__PVT__status_field_common, 0x1078U, 136);
    VL_AND_W(5, __Vtemp_358, __Vtemp_356, __Vtemp_357);
    VL_ASSIGNSEL_WW(4352,136,0x1078U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_358);
    VL_CONST_W_5X(160,__Vtemp_359,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_360, vlSelfRef.__PVT__status_field_common, 0x1078U, 136);
    __Vtemp_361 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1fU));
    VL_COND_WIWW(136, __Vtemp_362, __Vtemp_361, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_360);
    __Vtemp_363 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1fU));
    VL_COND_WIWW(136, __Vtemp_364, __Vtemp_363, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_362);
    VL_AND_W(5, __Vtemp_365, __Vtemp_359, __Vtemp_364);
    VL_ASSIGNSEL_WW(4352,136,0x1078U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_365);
    vlSelfRef.__PVT__gnt_memrespcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_rsp), 1U));
    vlSelfRef.__PVT__gnt_drespcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_rsp), 2U));
    vlSelfRef.__PVT__gnt_respcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_rsp), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__gnt_memrespcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__gnt_drespcmdq;
    vlSelfRef.__PVT__cmdvalid_ph3_rsp_nxt = (((IData)(vlSelfRef.__PVT__gnt_respcmdq) 
                                              | (IData)(vlSelfRef.__PVT__gnt_memrespcmdq)) 
                                             | (IData)(vlSelfRef.__PVT__gnt_drespcmdq));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__gnt_respcmdq;
    vlSelfRef.__PVT__send_respcrdt_update = ((IData)(vlSelfRef.__PVT__gnt_respcmdq) 
                                             & (~ VL_BITSEL_IWII(74, vlSelfRef.__PVT__rddata_respcmdq, 0x49U)));
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__cm_cmd);
    vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 0U;
    vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 0U;
    if ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_drespcmdq), 
                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_memrespcmdq), (IData)(vlSelfRef.__PVT__gnt_respcmdq))))) {
        VL_EXTEND_WW(155,74, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__rddata_respcmdq);
        vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 0U;
        vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 1U;
    } else if ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_drespcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_memrespcmdq), (IData)(vlSelfRef.__PVT__gnt_respcmdq))))) {
        VL_EXTEND_WW(155,109, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__rddata_memrespcmdq_prepped);
        vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 1U;
        vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 1U;
    } else if ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_drespcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_memrespcmdq), (IData)(vlSelfRef.__PVT__gnt_respcmdq))))) {
        VL_EXTEND_WW(155,109, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__rddata_drespcmdq);
        vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 2U;
        vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 1U;
    }
    vlSelfRef.__PVT__any_resp_selected = (((IData)(vlSelfRef.__PVT__gnt_respcmdq) 
                                           | (IData)(vlSelfRef.__PVT__gnt_memrespcmdq)) 
                                          | (IData)(vlSelfRef.__PVT__gnt_drespcmdq));
    VL_CONST_W_3X(96,__Vtemp_366,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 155, __Vtemp_367, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, __Vtemp_366, __Vtemp_367);
    vlSelfRef.__PVT__sel_blkcnt_0 = ((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)));
    vlSelfRef.__PVT__sel_blkcnt_1 = (((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)));
    vlSelfRef.__PVT__sel_blkcnt_2 = ((((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2)));
    vlSelfRef.__PVT__sel_blkcnt_3 = (((((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3)));
    vlSelfRef.__PVT__sel_blkcnt_4 = ((((((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)) 
                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2)) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4)));
    vlSelfRef.__PVT__index_statusreg_ph3_nxt = (0x3fU 
                                                & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6));
    vlSelfRef.__PVT__last_resp_index_0_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_0)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_0)));
    vlSelfRef.__PVT__resp_block_cnt_0_nxt = vlSelfRef.__PVT__resp_block_cnt_0;
    vlSelfRef.__PVT__occupied_last_resp_index_0_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_0;
    if (vlSelfRef.__PVT__sel_blkcnt_0) {
        vlSelfRef.__PVT__resp_block_cnt_0_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_0_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_0) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_0)))) {
        vlSelfRef.__PVT__resp_block_cnt_0_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_0)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_0))) {
        vlSelfRef.__PVT__resp_block_cnt_0_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_0_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_1_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_1)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_1)));
    vlSelfRef.__PVT__resp_block_cnt_1_nxt = vlSelfRef.__PVT__resp_block_cnt_1;
    vlSelfRef.__PVT__occupied_last_resp_index_1_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_1;
    if (vlSelfRef.__PVT__sel_blkcnt_1) {
        vlSelfRef.__PVT__resp_block_cnt_1_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_1_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_1) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_1)))) {
        vlSelfRef.__PVT__resp_block_cnt_1_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_1)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_1))) {
        vlSelfRef.__PVT__resp_block_cnt_1_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_1_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_2_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_2)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_2)));
    vlSelfRef.__PVT__resp_block_cnt_2_nxt = vlSelfRef.__PVT__resp_block_cnt_2;
    vlSelfRef.__PVT__occupied_last_resp_index_2_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_2;
    if (vlSelfRef.__PVT__sel_blkcnt_2) {
        vlSelfRef.__PVT__resp_block_cnt_2_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_2_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_2) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_2)))) {
        vlSelfRef.__PVT__resp_block_cnt_2_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_2)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_2))) {
        vlSelfRef.__PVT__resp_block_cnt_2_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_2_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_3_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_3)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_3)));
    vlSelfRef.__PVT__resp_block_cnt_3_nxt = vlSelfRef.__PVT__resp_block_cnt_3;
    vlSelfRef.__PVT__occupied_last_resp_index_3_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_3;
    if (vlSelfRef.__PVT__sel_blkcnt_3) {
        vlSelfRef.__PVT__resp_block_cnt_3_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_3_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_3) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_3)))) {
        vlSelfRef.__PVT__resp_block_cnt_3_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_3)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_3))) {
        vlSelfRef.__PVT__resp_block_cnt_3_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_3_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_4_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_4)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_4)));
    vlSelfRef.__PVT__resp_block_cnt_4_nxt = vlSelfRef.__PVT__resp_block_cnt_4;
    vlSelfRef.__PVT__occupied_last_resp_index_4_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_4;
    if (vlSelfRef.__PVT__sel_blkcnt_4) {
        vlSelfRef.__PVT__resp_block_cnt_4_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_4_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_4) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_4)))) {
        vlSelfRef.__PVT__resp_block_cnt_4_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_4)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_4))) {
        vlSelfRef.__PVT__resp_block_cnt_4_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_4_nxt = 0U;
    }
}
