// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_txflit_mux__F4f.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    // Body
    VL_CONST_W_3X(96,__Vtemp_1,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_2, vlSelfRef.__PVT__flit_all_vc0, 0U, 79);
    VL_AND_W(3, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[0U], __Vtemp_3);
    VL_CONST_W_3X(96,__Vtemp_4,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc0, 0x4fU, 79);
    VL_AND_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[1U], __Vtemp_6);
    VL_CONST_W_3X(96,__Vtemp_7,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_8, vlSelfRef.__PVT__flit_all_vc0, 0x9eU, 79);
    VL_AND_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[2U], __Vtemp_9);
    VL_CONST_W_3X(96,__Vtemp_10,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc0, 0xedU, 79);
    VL_AND_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[3U], __Vtemp_12);
    VL_CONST_W_3X(96,__Vtemp_13,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_14, vlSelfRef.__PVT__flit_all_vc0, 0x13cU, 79);
    VL_AND_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[4U], __Vtemp_15);
    VL_CONST_W_3X(96,__Vtemp_16,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc0, 0x18bU, 79);
    VL_AND_W(3, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[5U], __Vtemp_18);
    VL_CONST_W_3X(96,__Vtemp_19,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_20, vlSelfRef.__PVT__flit_all_vc0, 0x1daU, 79);
    VL_AND_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[6U], __Vtemp_21);
    VL_CONST_W_3X(96,__Vtemp_22,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc0, 0x229U, 79);
    VL_AND_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[7U], __Vtemp_24);
    VL_CONST_W_3X(96,__Vtemp_25,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_26, vlSelfRef.__PVT__flit_all_vc0, 0x278U, 79);
    VL_AND_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[8U], __Vtemp_27);
    VL_CONST_W_3X(96,__Vtemp_28,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc0, 0x2c7U, 79);
    VL_AND_W(3, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[9U], __Vtemp_30);
    VL_CONST_W_3X(96,__Vtemp_31,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_32, vlSelfRef.__PVT__flit_all_vc1, 0U, 79);
    VL_AND_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[0U], __Vtemp_33);
    VL_CONST_W_3X(96,__Vtemp_34,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_35, vlSelfRef.__PVT__flit_all_vc1, 0x4fU, 79);
    VL_AND_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[1U], __Vtemp_36);
    VL_CONST_W_3X(96,__Vtemp_37,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_38, vlSelfRef.__PVT__flit_all_vc1, 0x9eU, 79);
    VL_AND_W(3, __Vtemp_39, __Vtemp_37, __Vtemp_38);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[2U], __Vtemp_39);
    VL_CONST_W_3X(96,__Vtemp_40,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_41, vlSelfRef.__PVT__flit_all_vc1, 0xedU, 79);
    VL_AND_W(3, __Vtemp_42, __Vtemp_40, __Vtemp_41);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[3U], __Vtemp_42);
    VL_CONST_W_3X(96,__Vtemp_43,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_44, vlSelfRef.__PVT__flit_all_vc1, 0x13cU, 79);
    VL_AND_W(3, __Vtemp_45, __Vtemp_43, __Vtemp_44);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[4U], __Vtemp_45);
    VL_CONST_W_3X(96,__Vtemp_46,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_47, vlSelfRef.__PVT__flit_all_vc1, 0x18bU, 79);
    VL_AND_W(3, __Vtemp_48, __Vtemp_46, __Vtemp_47);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[5U], __Vtemp_48);
    VL_CONST_W_3X(96,__Vtemp_49,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_50, vlSelfRef.__PVT__flit_all_vc1, 0x1daU, 79);
    VL_AND_W(3, __Vtemp_51, __Vtemp_49, __Vtemp_50);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[6U], __Vtemp_51);
    VL_CONST_W_3X(96,__Vtemp_52,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_53, vlSelfRef.__PVT__flit_all_vc1, 0x229U, 79);
    VL_AND_W(3, __Vtemp_54, __Vtemp_52, __Vtemp_53);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[7U], __Vtemp_54);
    VL_CONST_W_3X(96,__Vtemp_55,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_56, vlSelfRef.__PVT__flit_all_vc1, 0x278U, 79);
    VL_AND_W(3, __Vtemp_57, __Vtemp_55, __Vtemp_56);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[8U], __Vtemp_57);
    VL_CONST_W_3X(96,__Vtemp_58,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_59, vlSelfRef.__PVT__flit_all_vc1, 0x2c7U, 79);
    VL_AND_W(3, __Vtemp_60, __Vtemp_58, __Vtemp_59);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[9U], __Vtemp_60);
    VL_COND_WIWW(79, __Vtemp_61, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[0U], 
                 vlSelfRef.__PVT__flit_in_vc1[0U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [0U], __Vtemp_61);
    VL_COND_WIWW(79, __Vtemp_62, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[1U], 
                 vlSelfRef.__PVT__flit_in_vc1[1U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [1U], __Vtemp_62);
    VL_COND_WIWW(79, __Vtemp_63, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[2U], 
                 vlSelfRef.__PVT__flit_in_vc1[2U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [2U], __Vtemp_63);
    VL_COND_WIWW(79, __Vtemp_64, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[3U], 
                 vlSelfRef.__PVT__flit_in_vc1[3U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [3U], __Vtemp_64);
    VL_COND_WIWW(79, __Vtemp_65, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[4U], 
                 vlSelfRef.__PVT__flit_in_vc1[4U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [4U], __Vtemp_65);
    VL_COND_WIWW(79, __Vtemp_66, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[5U], 
                 vlSelfRef.__PVT__flit_in_vc1[5U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [5U], __Vtemp_66);
    VL_COND_WIWW(79, __Vtemp_67, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[6U], 
                 vlSelfRef.__PVT__flit_in_vc1[6U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [6U], __Vtemp_67);
    VL_COND_WIWW(79, __Vtemp_68, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[7U], 
                 vlSelfRef.__PVT__flit_in_vc1[7U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [7U], __Vtemp_68);
    VL_COND_WIWW(79, __Vtemp_69, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[8U], 
                 vlSelfRef.__PVT__flit_in_vc1[8U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [8U], __Vtemp_69);
    VL_COND_WIWW(79, __Vtemp_70, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[9U], 
                 vlSelfRef.__PVT__flit_in_vc1[9U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [9U], __Vtemp_70);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__flit_out_nxt,0x00000000);
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 0U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [0U]);
    }
    vlSelfRef.__PVT__i = 1U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 1U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [1U]);
    }
    vlSelfRef.__PVT__i = 2U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 2U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [2U]);
    }
    vlSelfRef.__PVT__i = 3U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 3U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [3U]);
    }
    vlSelfRef.__PVT__i = 4U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 4U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [4U]);
    }
    vlSelfRef.__PVT__i = 5U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 5U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [5U]);
    }
    vlSelfRef.__PVT__i = 6U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 6U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [6U]);
    }
    vlSelfRef.__PVT__i = 7U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 7U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [7U]);
    }
    vlSelfRef.__PVT__i = 8U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 8U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [8U]);
    }
    vlSelfRef.__PVT__i = 9U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 9U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [9U]);
    }
    vlSelfRef.__PVT__i = 0xaU;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__any_gnt_vc1 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__gnt_qual_valid_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc1));
    vlSelfRef.__PVT__gnt_qual_valid_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc0));
    vlSelfRef.__PVT__gnt_vec_eithervc = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                         | (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__any_gnt_vc0 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0));
    vlSelfRef.__PVT__flitv_out_nxt = ((0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc0)) 
                                      | (0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc1)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    // Body
    VL_CONST_W_3X(96,__Vtemp_1,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_2, vlSelfRef.__PVT__flit_all_vc0, 0U, 79);
    VL_AND_W(3, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[0U], __Vtemp_3);
    VL_CONST_W_3X(96,__Vtemp_4,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc0, 0x4fU, 79);
    VL_AND_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[1U], __Vtemp_6);
    VL_CONST_W_3X(96,__Vtemp_7,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_8, vlSelfRef.__PVT__flit_all_vc0, 0x9eU, 79);
    VL_AND_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[2U], __Vtemp_9);
    VL_CONST_W_3X(96,__Vtemp_10,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc0, 0xedU, 79);
    VL_AND_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[3U], __Vtemp_12);
    VL_CONST_W_3X(96,__Vtemp_13,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_14, vlSelfRef.__PVT__flit_all_vc0, 0x13cU, 79);
    VL_AND_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[4U], __Vtemp_15);
    VL_CONST_W_3X(96,__Vtemp_16,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc0, 0x18bU, 79);
    VL_AND_W(3, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[5U], __Vtemp_18);
    VL_CONST_W_3X(96,__Vtemp_19,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_20, vlSelfRef.__PVT__flit_all_vc0, 0x1daU, 79);
    VL_AND_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[6U], __Vtemp_21);
    VL_CONST_W_3X(96,__Vtemp_22,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc0, 0x229U, 79);
    VL_AND_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[7U], __Vtemp_24);
    VL_CONST_W_3X(96,__Vtemp_25,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_26, vlSelfRef.__PVT__flit_all_vc0, 0x278U, 79);
    VL_AND_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[8U], __Vtemp_27);
    VL_CONST_W_3X(96,__Vtemp_28,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc0, 0x2c7U, 79);
    VL_AND_W(3, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[9U], __Vtemp_30);
    VL_CONST_W_3X(96,__Vtemp_31,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_32, vlSelfRef.__PVT__flit_all_vc1, 0U, 79);
    VL_AND_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[0U], __Vtemp_33);
    VL_CONST_W_3X(96,__Vtemp_34,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_35, vlSelfRef.__PVT__flit_all_vc1, 0x4fU, 79);
    VL_AND_W(3, __Vtemp_36, __Vtemp_34, __Vtemp_35);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[1U], __Vtemp_36);
    VL_CONST_W_3X(96,__Vtemp_37,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_38, vlSelfRef.__PVT__flit_all_vc1, 0x9eU, 79);
    VL_AND_W(3, __Vtemp_39, __Vtemp_37, __Vtemp_38);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[2U], __Vtemp_39);
    VL_CONST_W_3X(96,__Vtemp_40,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_41, vlSelfRef.__PVT__flit_all_vc1, 0xedU, 79);
    VL_AND_W(3, __Vtemp_42, __Vtemp_40, __Vtemp_41);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[3U], __Vtemp_42);
    VL_CONST_W_3X(96,__Vtemp_43,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_44, vlSelfRef.__PVT__flit_all_vc1, 0x13cU, 79);
    VL_AND_W(3, __Vtemp_45, __Vtemp_43, __Vtemp_44);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[4U], __Vtemp_45);
    VL_CONST_W_3X(96,__Vtemp_46,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_47, vlSelfRef.__PVT__flit_all_vc1, 0x18bU, 79);
    VL_AND_W(3, __Vtemp_48, __Vtemp_46, __Vtemp_47);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[5U], __Vtemp_48);
    VL_CONST_W_3X(96,__Vtemp_49,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_50, vlSelfRef.__PVT__flit_all_vc1, 0x1daU, 79);
    VL_AND_W(3, __Vtemp_51, __Vtemp_49, __Vtemp_50);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[6U], __Vtemp_51);
    VL_CONST_W_3X(96,__Vtemp_52,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_53, vlSelfRef.__PVT__flit_all_vc1, 0x229U, 79);
    VL_AND_W(3, __Vtemp_54, __Vtemp_52, __Vtemp_53);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[7U], __Vtemp_54);
    VL_CONST_W_3X(96,__Vtemp_55,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_56, vlSelfRef.__PVT__flit_all_vc1, 0x278U, 79);
    VL_AND_W(3, __Vtemp_57, __Vtemp_55, __Vtemp_56);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[8U], __Vtemp_57);
    VL_CONST_W_3X(96,__Vtemp_58,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_59, vlSelfRef.__PVT__flit_all_vc1, 0x2c7U, 79);
    VL_AND_W(3, __Vtemp_60, __Vtemp_58, __Vtemp_59);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[9U], __Vtemp_60);
    VL_COND_WIWW(79, __Vtemp_61, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[0U], 
                 vlSelfRef.__PVT__flit_in_vc1[0U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [0U], __Vtemp_61);
    VL_COND_WIWW(79, __Vtemp_62, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[1U], 
                 vlSelfRef.__PVT__flit_in_vc1[1U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [1U], __Vtemp_62);
    VL_COND_WIWW(79, __Vtemp_63, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[2U], 
                 vlSelfRef.__PVT__flit_in_vc1[2U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [2U], __Vtemp_63);
    VL_COND_WIWW(79, __Vtemp_64, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[3U], 
                 vlSelfRef.__PVT__flit_in_vc1[3U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [3U], __Vtemp_64);
    VL_COND_WIWW(79, __Vtemp_65, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[4U], 
                 vlSelfRef.__PVT__flit_in_vc1[4U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [4U], __Vtemp_65);
    VL_COND_WIWW(79, __Vtemp_66, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[5U], 
                 vlSelfRef.__PVT__flit_in_vc1[5U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [5U], __Vtemp_66);
    VL_COND_WIWW(79, __Vtemp_67, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[6U], 
                 vlSelfRef.__PVT__flit_in_vc1[6U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [6U], __Vtemp_67);
    VL_COND_WIWW(79, __Vtemp_68, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[7U], 
                 vlSelfRef.__PVT__flit_in_vc1[7U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [7U], __Vtemp_68);
    VL_COND_WIWW(79, __Vtemp_69, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[8U], 
                 vlSelfRef.__PVT__flit_in_vc1[8U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [8U], __Vtemp_69);
    VL_COND_WIWW(79, __Vtemp_70, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[9U], 
                 vlSelfRef.__PVT__flit_in_vc1[9U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [9U], __Vtemp_70);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__flit_out_nxt,0x00000000);
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 0U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [0U]);
    }
    vlSelfRef.__PVT__i = 1U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 1U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [1U]);
    }
    vlSelfRef.__PVT__i = 2U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 2U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [2U]);
    }
    vlSelfRef.__PVT__i = 3U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 3U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [3U]);
    }
    vlSelfRef.__PVT__i = 4U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 4U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [4U]);
    }
    vlSelfRef.__PVT__i = 5U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 5U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [5U]);
    }
    vlSelfRef.__PVT__i = 6U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 6U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [6U]);
    }
    vlSelfRef.__PVT__i = 7U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 7U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [7U]);
    }
    vlSelfRef.__PVT__i = 8U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 8U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [8U]);
    }
    vlSelfRef.__PVT__i = 9U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 9U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [9U]);
    }
    vlSelfRef.__PVT__i = 0xaU;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__Vdly__flit_out, vlSelfRef.__PVT__flit_out);
    vlSelfRef.__Vdly__flitv_out = vlSelfRef.__PVT__flitv_out;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__flitv_out = vlSelfRef.__PVT__flitv_out_nxt;
        VL_ASSIGN_W(79,vlSelfRef.__Vdly__flit_out, vlSelfRef.__PVT__flit_out_nxt);
    } else {
        vlSelfRef.__Vdly__flitv_out = 0U;
        VL_CONST_W_1X(79,vlSelfRef.__Vdly__flit_out,0x00000000);
    }
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out, vlSelfRef.__Vdly__flit_out);
    vlSelfRef.__PVT__flitv_out = vlSelfRef.__Vdly__flitv_out;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__any_gnt_vc1 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__gnt_qual_valid_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc1));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__1(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_qual_valid_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc0));
    vlSelfRef.__PVT__any_gnt_vc0 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__2(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_eithervc = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                         | (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__flitv_out_nxt = ((0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc0)) 
                                      | (0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc1)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__3(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    // Body
    VL_CONST_W_3X(96,__Vtemp_1,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_2, vlSelfRef.__PVT__flit_all_vc0, 0U, 79);
    VL_AND_W(3, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[0U], __Vtemp_3);
    VL_CONST_W_3X(96,__Vtemp_4,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc0, 0x4fU, 79);
    VL_AND_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[1U], __Vtemp_6);
    VL_CONST_W_3X(96,__Vtemp_7,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_8, vlSelfRef.__PVT__flit_all_vc0, 0x9eU, 79);
    VL_AND_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[2U], __Vtemp_9);
    VL_CONST_W_3X(96,__Vtemp_10,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc0, 0xedU, 79);
    VL_AND_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[3U], __Vtemp_12);
    VL_CONST_W_3X(96,__Vtemp_13,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_14, vlSelfRef.__PVT__flit_all_vc0, 0x13cU, 79);
    VL_AND_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[4U], __Vtemp_15);
    VL_CONST_W_3X(96,__Vtemp_16,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc0, 0x18bU, 79);
    VL_AND_W(3, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[5U], __Vtemp_18);
    VL_CONST_W_3X(96,__Vtemp_19,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_20, vlSelfRef.__PVT__flit_all_vc0, 0x1daU, 79);
    VL_AND_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[6U], __Vtemp_21);
    VL_CONST_W_3X(96,__Vtemp_22,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc0, 0x229U, 79);
    VL_AND_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[7U], __Vtemp_24);
    VL_CONST_W_3X(96,__Vtemp_25,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_26, vlSelfRef.__PVT__flit_all_vc0, 0x278U, 79);
    VL_AND_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[8U], __Vtemp_27);
    VL_CONST_W_3X(96,__Vtemp_28,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc0, 0x2c7U, 79);
    VL_AND_W(3, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc0[9U], __Vtemp_30);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__4(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    // Body
    VL_CONST_W_3X(96,__Vtemp_1,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_2, vlSelfRef.__PVT__flit_all_vc1, 0U, 79);
    VL_AND_W(3, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[0U], __Vtemp_3);
    VL_CONST_W_3X(96,__Vtemp_4,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc1, 0x4fU, 79);
    VL_AND_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[1U], __Vtemp_6);
    VL_CONST_W_3X(96,__Vtemp_7,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_8, vlSelfRef.__PVT__flit_all_vc1, 0x9eU, 79);
    VL_AND_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[2U], __Vtemp_9);
    VL_CONST_W_3X(96,__Vtemp_10,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc1, 0xedU, 79);
    VL_AND_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[3U], __Vtemp_12);
    VL_CONST_W_3X(96,__Vtemp_13,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_14, vlSelfRef.__PVT__flit_all_vc1, 0x13cU, 79);
    VL_AND_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[4U], __Vtemp_15);
    VL_CONST_W_3X(96,__Vtemp_16,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc1, 0x18bU, 79);
    VL_AND_W(3, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[5U], __Vtemp_18);
    VL_CONST_W_3X(96,__Vtemp_19,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_20, vlSelfRef.__PVT__flit_all_vc1, 0x1daU, 79);
    VL_AND_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[6U], __Vtemp_21);
    VL_CONST_W_3X(96,__Vtemp_22,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc1, 0x229U, 79);
    VL_AND_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[7U], __Vtemp_24);
    VL_CONST_W_3X(96,__Vtemp_25,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_26, vlSelfRef.__PVT__flit_all_vc1, 0x278U, 79);
    VL_AND_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[8U], __Vtemp_27);
    VL_CONST_W_3X(96,__Vtemp_28,0x00007fff,0xffffffff,0xffffffff);
    VL_SEL_WWII(79, 790, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc1, 0x2c7U, 79);
    VL_AND_W(3, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_vc1[9U], __Vtemp_30);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__5(Vsig_topology_top_sig_cc_txflit_mux__F4f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F4f___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_txflit_mux_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    VL_COND_WIWW(79, __Vtemp_1, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[0U], 
                 vlSelfRef.__PVT__flit_in_vc1[0U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [0U], __Vtemp_1);
    VL_COND_WIWW(79, __Vtemp_2, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[1U], 
                 vlSelfRef.__PVT__flit_in_vc1[1U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [1U], __Vtemp_2);
    VL_COND_WIWW(79, __Vtemp_3, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[2U], 
                 vlSelfRef.__PVT__flit_in_vc1[2U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [2U], __Vtemp_3);
    VL_COND_WIWW(79, __Vtemp_4, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[3U], 
                 vlSelfRef.__PVT__flit_in_vc1[3U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [3U], __Vtemp_4);
    VL_COND_WIWW(79, __Vtemp_5, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[4U], 
                 vlSelfRef.__PVT__flit_in_vc1[4U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [4U], __Vtemp_5);
    VL_COND_WIWW(79, __Vtemp_6, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[5U], 
                 vlSelfRef.__PVT__flit_in_vc1[5U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [5U], __Vtemp_6);
    VL_COND_WIWW(79, __Vtemp_7, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[6U], 
                 vlSelfRef.__PVT__flit_in_vc1[6U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [6U], __Vtemp_7);
    VL_COND_WIWW(79, __Vtemp_8, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[7U], 
                 vlSelfRef.__PVT__flit_in_vc1[7U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [7U], __Vtemp_8);
    VL_COND_WIWW(79, __Vtemp_9, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[8U], 
                 vlSelfRef.__PVT__flit_in_vc1[8U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [8U], __Vtemp_9);
    VL_COND_WIWW(79, __Vtemp_10, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[9U], 
                 vlSelfRef.__PVT__flit_in_vc1[9U]);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_in_eithervc
                [9U], __Vtemp_10);
    VL_CONST_W_1X(79,vlSelfRef.__PVT__flit_out_nxt,0x00000000);
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 0U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [0U]);
    }
    vlSelfRef.__PVT__i = 1U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 1U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [1U]);
    }
    vlSelfRef.__PVT__i = 2U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 2U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [2U]);
    }
    vlSelfRef.__PVT__i = 3U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 3U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [3U]);
    }
    vlSelfRef.__PVT__i = 4U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 4U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [4U]);
    }
    vlSelfRef.__PVT__i = 5U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 5U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [5U]);
    }
    vlSelfRef.__PVT__i = 6U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 6U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [6U]);
    }
    vlSelfRef.__PVT__i = 7U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 7U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [7U]);
    }
    vlSelfRef.__PVT__i = 8U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 8U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [8U]);
    }
    vlSelfRef.__PVT__i = 9U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 9U))) {
        VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [9U]);
    }
    vlSelfRef.__PVT__i = 0xaU;
}
