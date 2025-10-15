// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_txflit_mux__F2ae.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__F2ae___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__F2ae* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F2ae___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__any_gnt_vc1 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__gnt_vec_eithervc = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                         | (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__any_gnt_vc0 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__F2ae___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0__1(Vsig_topology_top_sig_cc_txflit_mux__F2ae* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F2ae___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_qual_valid_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc0));
    vlSelfRef.__PVT__gnt_qual_valid_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc1));
    vlSelfRef.__PVT__flitv_out_nxt = ((0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc0)) 
                                      | (0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc1)));
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h93aa258d_0;
extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_h1de318c0_0;

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__F2ae___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0__2(Vsig_topology_top_sig_cc_txflit_mux__F2ae* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F2ae___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_txflit_mux_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<22>/*703:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    VlWide<22>/*703:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    VlWide<22>/*703:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    VlWide<22>/*703:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    VlWide<22>/*703:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    VlWide<22>/*703:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    VlWide<22>/*703:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    VlWide<22>/*703:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    VlWide<22>/*703:0*/ __Vtemp_17;
    VlWide<22>/*703:0*/ __Vtemp_18;
    VlWide<22>/*703:0*/ __Vtemp_19;
    VlWide<22>/*703:0*/ __Vtemp_20;
    VlWide<22>/*703:0*/ __Vtemp_21;
    VlWide<22>/*703:0*/ __Vtemp_22;
    VlWide<22>/*703:0*/ __Vtemp_23;
    VlWide<22>/*703:0*/ __Vtemp_24;
    VlWide<22>/*703:0*/ __Vtemp_25;
    VlWide<22>/*703:0*/ __Vtemp_26;
    VlWide<22>/*703:0*/ __Vtemp_27;
    VlWide<22>/*703:0*/ __Vtemp_28;
    VlWide<22>/*703:0*/ __Vtemp_29;
    VlWide<22>/*703:0*/ __Vtemp_30;
    VlWide<22>/*703:0*/ __Vtemp_31;
    VlWide<22>/*703:0*/ __Vtemp_32;
    VlWide<22>/*703:0*/ __Vtemp_33;
    VlWide<22>/*703:0*/ __Vtemp_34;
    VlWide<22>/*703:0*/ __Vtemp_35;
    VlWide<22>/*703:0*/ __Vtemp_36;
    VlWide<22>/*703:0*/ __Vtemp_37;
    VlWide<22>/*703:0*/ __Vtemp_38;
    VlWide<22>/*703:0*/ __Vtemp_39;
    VlWide<22>/*703:0*/ __Vtemp_40;
    VlWide<22>/*703:0*/ __Vtemp_41;
    VlWide<22>/*703:0*/ __Vtemp_42;
    VlWide<22>/*703:0*/ __Vtemp_43;
    VlWide<22>/*703:0*/ __Vtemp_44;
    VlWide<22>/*703:0*/ __Vtemp_45;
    VlWide<22>/*703:0*/ __Vtemp_46;
    VlWide<22>/*703:0*/ __Vtemp_47;
    VlWide<22>/*703:0*/ __Vtemp_48;
    VlWide<22>/*703:0*/ __Vtemp_49;
    VlWide<22>/*703:0*/ __Vtemp_50;
    // Body
    VL_SEL_WWII(686, 6860, __Vtemp_1, vlSelfRef.__PVT__flit_all_vc0, 0U, 686);
    VL_AND_W(22, __Vtemp_2, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[0U], __Vtemp_2);
    VL_SEL_WWII(686, 6860, __Vtemp_3, vlSelfRef.__PVT__flit_all_vc0, 0x2aeU, 686);
    VL_AND_W(22, __Vtemp_4, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_3);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[1U], __Vtemp_4);
    VL_SEL_WWII(686, 6860, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc0, 0x55cU, 686);
    VL_AND_W(22, __Vtemp_6, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_5);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[2U], __Vtemp_6);
    VL_SEL_WWII(686, 6860, __Vtemp_7, vlSelfRef.__PVT__flit_all_vc0, 0x80aU, 686);
    VL_AND_W(22, __Vtemp_8, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_7);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[3U], __Vtemp_8);
    VL_SEL_WWII(686, 6860, __Vtemp_9, vlSelfRef.__PVT__flit_all_vc0, 0xab8U, 686);
    VL_AND_W(22, __Vtemp_10, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_9);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[4U], __Vtemp_10);
    VL_SEL_WWII(686, 6860, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc0, 0xd66U, 686);
    VL_AND_W(22, __Vtemp_12, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_11);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[5U], __Vtemp_12);
    VL_SEL_WWII(686, 6860, __Vtemp_13, vlSelfRef.__PVT__flit_all_vc0, 0x1014U, 686);
    VL_AND_W(22, __Vtemp_14, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_13);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[6U], __Vtemp_14);
    VL_SEL_WWII(686, 6860, __Vtemp_15, vlSelfRef.__PVT__flit_all_vc0, 0x12c2U, 686);
    VL_AND_W(22, __Vtemp_16, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_15);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[7U], __Vtemp_16);
    VL_SEL_WWII(686, 6860, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc0, 0x1570U, 686);
    VL_AND_W(22, __Vtemp_18, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_17);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[8U], __Vtemp_18);
    VL_SEL_WWII(686, 6860, __Vtemp_19, vlSelfRef.__PVT__flit_all_vc0, 0x181eU, 686);
    VL_AND_W(22, __Vtemp_20, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_19);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc0[9U], __Vtemp_20);
    VL_SEL_WWII(686, 6860, __Vtemp_21, vlSelfRef.__PVT__flit_all_vc1, 0U, 686);
    VL_AND_W(22, __Vtemp_22, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_21);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[0U], __Vtemp_22);
    VL_SEL_WWII(686, 6860, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc1, 0x2aeU, 686);
    VL_AND_W(22, __Vtemp_24, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_23);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[1U], __Vtemp_24);
    VL_SEL_WWII(686, 6860, __Vtemp_25, vlSelfRef.__PVT__flit_all_vc1, 0x55cU, 686);
    VL_AND_W(22, __Vtemp_26, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_25);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[2U], __Vtemp_26);
    VL_SEL_WWII(686, 6860, __Vtemp_27, vlSelfRef.__PVT__flit_all_vc1, 0x80aU, 686);
    VL_AND_W(22, __Vtemp_28, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_27);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[3U], __Vtemp_28);
    VL_SEL_WWII(686, 6860, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc1, 0xab8U, 686);
    VL_AND_W(22, __Vtemp_30, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_29);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[4U], __Vtemp_30);
    VL_SEL_WWII(686, 6860, __Vtemp_31, vlSelfRef.__PVT__flit_all_vc1, 0xd66U, 686);
    VL_AND_W(22, __Vtemp_32, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_31);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[5U], __Vtemp_32);
    VL_SEL_WWII(686, 6860, __Vtemp_33, vlSelfRef.__PVT__flit_all_vc1, 0x1014U, 686);
    VL_AND_W(22, __Vtemp_34, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_33);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[6U], __Vtemp_34);
    VL_SEL_WWII(686, 6860, __Vtemp_35, vlSelfRef.__PVT__flit_all_vc1, 0x12c2U, 686);
    VL_AND_W(22, __Vtemp_36, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_35);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[7U], __Vtemp_36);
    VL_SEL_WWII(686, 6860, __Vtemp_37, vlSelfRef.__PVT__flit_all_vc1, 0x1570U, 686);
    VL_AND_W(22, __Vtemp_38, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_37);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[8U], __Vtemp_38);
    VL_SEL_WWII(686, 6860, __Vtemp_39, vlSelfRef.__PVT__flit_all_vc1, 0x181eU, 686);
    VL_AND_W(22, __Vtemp_40, Vsig_topology_top__ConstPool__CONST_h93aa258d_0, __Vtemp_39);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_vc1[9U], __Vtemp_40);
    VL_COND_WIWW(686, __Vtemp_41, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[0U], 
                 vlSelfRef.__PVT__flit_in_vc1[0U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [0U], __Vtemp_41);
    VL_COND_WIWW(686, __Vtemp_42, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[1U], 
                 vlSelfRef.__PVT__flit_in_vc1[1U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [1U], __Vtemp_42);
    VL_COND_WIWW(686, __Vtemp_43, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[2U], 
                 vlSelfRef.__PVT__flit_in_vc1[2U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [2U], __Vtemp_43);
    VL_COND_WIWW(686, __Vtemp_44, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[3U], 
                 vlSelfRef.__PVT__flit_in_vc1[3U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [3U], __Vtemp_44);
    VL_COND_WIWW(686, __Vtemp_45, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[4U], 
                 vlSelfRef.__PVT__flit_in_vc1[4U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [4U], __Vtemp_45);
    VL_COND_WIWW(686, __Vtemp_46, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[5U], 
                 vlSelfRef.__PVT__flit_in_vc1[5U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [5U], __Vtemp_46);
    VL_COND_WIWW(686, __Vtemp_47, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[6U], 
                 vlSelfRef.__PVT__flit_in_vc1[6U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [6U], __Vtemp_47);
    VL_COND_WIWW(686, __Vtemp_48, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[7U], 
                 vlSelfRef.__PVT__flit_in_vc1[7U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [7U], __Vtemp_48);
    VL_COND_WIWW(686, __Vtemp_49, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[8U], 
                 vlSelfRef.__PVT__flit_in_vc1[8U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [8U], __Vtemp_49);
    VL_COND_WIWW(686, __Vtemp_50, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[9U], 
                 vlSelfRef.__PVT__flit_in_vc1[9U]);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_in_eithervc
                [9U], __Vtemp_50);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, Vsig_topology_top__ConstPool__CONST_h1de318c0_0);
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 0U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [0U]);
    }
    vlSelfRef.__PVT__i = 1U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 1U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [1U]);
    }
    vlSelfRef.__PVT__i = 2U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 2U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [2U]);
    }
    vlSelfRef.__PVT__i = 3U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 3U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [3U]);
    }
    vlSelfRef.__PVT__i = 4U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 4U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [4U]);
    }
    vlSelfRef.__PVT__i = 5U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 5U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [5U]);
    }
    vlSelfRef.__PVT__i = 6U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 6U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [6U]);
    }
    vlSelfRef.__PVT__i = 7U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 7U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [7U]);
    }
    vlSelfRef.__PVT__i = 8U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 8U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [8U]);
    }
    vlSelfRef.__PVT__i = 9U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 9U))) {
        VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [9U]);
    }
    vlSelfRef.__PVT__i = 0xaU;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__F2ae___ctor_var_reset(Vsig_topology_top_sig_cc_txflit_mux__F2ae* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__F2ae___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__gnt_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6127171034593648077ull);
    vlSelf->__PVT__gnt_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5389941327883996194ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_vc0, __VscopeHash, 10452376482605581112ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_vc1, __VscopeHash, 10132536508638841952ull);
    vlSelf->__PVT__valid_flit_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1515749341485313956ull);
    vlSelf->__PVT__valid_flit_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 529121438474376626ull);
    vlSelf->__PVT__flitv_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12967655514397149454ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out, __VscopeHash, 10954420838652254973ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_in_vc0[__Vi0], __VscopeHash, 14188575403587474835ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_in_vc1[__Vi0], __VscopeHash, 5104417528355624980ull);
    }
    vlSelf->__PVT__flitv_out_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982075515191814129ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_nxt, __VscopeHash, 6090622116806152946ull);
    vlSelf->__PVT__any_gnt_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10077656042255777723ull);
    vlSelf->__PVT__any_gnt_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10739718713938931448ull);
    vlSelf->__PVT__gnt_vec_eithervc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5350406549275838313ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_in_eithervc[__Vi0], __VscopeHash, 1416600860221975958ull);
    }
    vlSelf->__PVT__gnt_qual_valid_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9787947058875563439ull);
    vlSelf->__PVT__gnt_qual_valid_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11650860046468745833ull);
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->__Vdly__flitv_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17960856951583570690ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__Vdly__flit_out, __VscopeHash, 6285439179653308622ull);
}
