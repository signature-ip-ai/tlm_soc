// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_txflit_mux__Fa1.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_7;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_11;
    VlWide<6>/*191:0*/ __Vtemp_12;
    VlWide<6>/*191:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<6>/*191:0*/ __Vtemp_15;
    VlWide<6>/*191:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_17;
    VlWide<6>/*191:0*/ __Vtemp_18;
    VlWide<6>/*191:0*/ __Vtemp_19;
    VlWide<6>/*191:0*/ __Vtemp_20;
    VlWide<6>/*191:0*/ __Vtemp_21;
    VlWide<6>/*191:0*/ __Vtemp_22;
    VlWide<6>/*191:0*/ __Vtemp_23;
    VlWide<6>/*191:0*/ __Vtemp_24;
    VlWide<6>/*191:0*/ __Vtemp_25;
    VlWide<6>/*191:0*/ __Vtemp_26;
    VlWide<6>/*191:0*/ __Vtemp_27;
    VlWide<6>/*191:0*/ __Vtemp_28;
    VlWide<6>/*191:0*/ __Vtemp_29;
    VlWide<6>/*191:0*/ __Vtemp_30;
    // Body
    VL_CONST_W_6X(192,__Vtemp_1,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_2, vlSelfRef.__PVT__flit_all_vc0, 0U, 161);
    VL_AND_W(6, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[0U], __Vtemp_3);
    VL_CONST_W_6X(192,__Vtemp_4,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc0, 0xa1U, 161);
    VL_AND_W(6, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[1U], __Vtemp_6);
    VL_CONST_W_6X(192,__Vtemp_7,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_8, vlSelfRef.__PVT__flit_all_vc0, 0x142U, 161);
    VL_AND_W(6, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[2U], __Vtemp_9);
    VL_CONST_W_6X(192,__Vtemp_10,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc0, 0x1e3U, 161);
    VL_AND_W(6, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[3U], __Vtemp_12);
    VL_CONST_W_6X(192,__Vtemp_13,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_14, vlSelfRef.__PVT__flit_all_vc0, 0x284U, 161);
    VL_AND_W(6, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[4U], __Vtemp_15);
    VL_CONST_W_6X(192,__Vtemp_16,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc0, 0x325U, 161);
    VL_AND_W(6, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[5U], __Vtemp_18);
    VL_CONST_W_6X(192,__Vtemp_19,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_20, vlSelfRef.__PVT__flit_all_vc0, 0x3c6U, 161);
    VL_AND_W(6, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[6U], __Vtemp_21);
    VL_CONST_W_6X(192,__Vtemp_22,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc0, 0x467U, 161);
    VL_AND_W(6, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[7U], __Vtemp_24);
    VL_CONST_W_6X(192,__Vtemp_25,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_26, vlSelfRef.__PVT__flit_all_vc0, 0x508U, 161);
    VL_AND_W(6, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[8U], __Vtemp_27);
    VL_CONST_W_6X(192,__Vtemp_28,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc0, 0x5a9U, 161);
    VL_AND_W(6, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc0[9U], __Vtemp_30);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__0(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__any_gnt_vc0 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0));
    vlSelfRef.__PVT__any_gnt_vc1 = (0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
    vlSelfRef.__PVT__gnt_vec_eithervc = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                         | (IData)(vlSelfRef.__PVT__gnt_vec_vc1));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__1(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_7;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_11;
    VlWide<6>/*191:0*/ __Vtemp_12;
    VlWide<6>/*191:0*/ __Vtemp_13;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<6>/*191:0*/ __Vtemp_15;
    VlWide<6>/*191:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_17;
    VlWide<6>/*191:0*/ __Vtemp_18;
    VlWide<6>/*191:0*/ __Vtemp_19;
    VlWide<6>/*191:0*/ __Vtemp_20;
    VlWide<6>/*191:0*/ __Vtemp_21;
    VlWide<6>/*191:0*/ __Vtemp_22;
    VlWide<6>/*191:0*/ __Vtemp_23;
    VlWide<6>/*191:0*/ __Vtemp_24;
    VlWide<6>/*191:0*/ __Vtemp_25;
    VlWide<6>/*191:0*/ __Vtemp_26;
    VlWide<6>/*191:0*/ __Vtemp_27;
    VlWide<6>/*191:0*/ __Vtemp_28;
    VlWide<6>/*191:0*/ __Vtemp_29;
    VlWide<6>/*191:0*/ __Vtemp_30;
    VlWide<6>/*191:0*/ __Vtemp_31;
    VlWide<6>/*191:0*/ __Vtemp_32;
    VlWide<6>/*191:0*/ __Vtemp_33;
    VlWide<6>/*191:0*/ __Vtemp_34;
    VlWide<6>/*191:0*/ __Vtemp_35;
    VlWide<6>/*191:0*/ __Vtemp_36;
    VlWide<6>/*191:0*/ __Vtemp_37;
    VlWide<6>/*191:0*/ __Vtemp_38;
    VlWide<6>/*191:0*/ __Vtemp_39;
    VlWide<6>/*191:0*/ __Vtemp_40;
    // Body
    VL_CONST_W_6X(192,__Vtemp_1,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_2, vlSelfRef.__PVT__flit_all_vc1, 0U, 161);
    VL_AND_W(6, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[0U], __Vtemp_3);
    VL_CONST_W_6X(192,__Vtemp_4,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_5, vlSelfRef.__PVT__flit_all_vc1, 0xa1U, 161);
    VL_AND_W(6, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[1U], __Vtemp_6);
    VL_CONST_W_6X(192,__Vtemp_7,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_8, vlSelfRef.__PVT__flit_all_vc1, 0x142U, 161);
    VL_AND_W(6, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[2U], __Vtemp_9);
    VL_CONST_W_6X(192,__Vtemp_10,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_11, vlSelfRef.__PVT__flit_all_vc1, 0x1e3U, 161);
    VL_AND_W(6, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[3U], __Vtemp_12);
    VL_CONST_W_6X(192,__Vtemp_13,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_14, vlSelfRef.__PVT__flit_all_vc1, 0x284U, 161);
    VL_AND_W(6, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[4U], __Vtemp_15);
    VL_CONST_W_6X(192,__Vtemp_16,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_17, vlSelfRef.__PVT__flit_all_vc1, 0x325U, 161);
    VL_AND_W(6, __Vtemp_18, __Vtemp_16, __Vtemp_17);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[5U], __Vtemp_18);
    VL_CONST_W_6X(192,__Vtemp_19,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_20, vlSelfRef.__PVT__flit_all_vc1, 0x3c6U, 161);
    VL_AND_W(6, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[6U], __Vtemp_21);
    VL_CONST_W_6X(192,__Vtemp_22,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_23, vlSelfRef.__PVT__flit_all_vc1, 0x467U, 161);
    VL_AND_W(6, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[7U], __Vtemp_24);
    VL_CONST_W_6X(192,__Vtemp_25,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_26, vlSelfRef.__PVT__flit_all_vc1, 0x508U, 161);
    VL_AND_W(6, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[8U], __Vtemp_27);
    VL_CONST_W_6X(192,__Vtemp_28,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(161, 1610, __Vtemp_29, vlSelfRef.__PVT__flit_all_vc1, 0x5a9U, 161);
    VL_AND_W(6, __Vtemp_30, __Vtemp_28, __Vtemp_29);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_vc1[9U], __Vtemp_30);
    VL_COND_WIWW(161, __Vtemp_31, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[0U], 
                 vlSelfRef.__PVT__flit_in_vc1[0U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [0U], __Vtemp_31);
    VL_COND_WIWW(161, __Vtemp_32, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[1U], 
                 vlSelfRef.__PVT__flit_in_vc1[1U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [1U], __Vtemp_32);
    VL_COND_WIWW(161, __Vtemp_33, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[2U], 
                 vlSelfRef.__PVT__flit_in_vc1[2U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [2U], __Vtemp_33);
    VL_COND_WIWW(161, __Vtemp_34, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[3U], 
                 vlSelfRef.__PVT__flit_in_vc1[3U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [3U], __Vtemp_34);
    VL_COND_WIWW(161, __Vtemp_35, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[4U], 
                 vlSelfRef.__PVT__flit_in_vc1[4U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [4U], __Vtemp_35);
    VL_COND_WIWW(161, __Vtemp_36, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[5U], 
                 vlSelfRef.__PVT__flit_in_vc1[5U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [5U], __Vtemp_36);
    VL_COND_WIWW(161, __Vtemp_37, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[6U], 
                 vlSelfRef.__PVT__flit_in_vc1[6U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [6U], __Vtemp_37);
    VL_COND_WIWW(161, __Vtemp_38, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[7U], 
                 vlSelfRef.__PVT__flit_in_vc1[7U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [7U], __Vtemp_38);
    VL_COND_WIWW(161, __Vtemp_39, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[8U], 
                 vlSelfRef.__PVT__flit_in_vc1[8U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [8U], __Vtemp_39);
    VL_COND_WIWW(161, __Vtemp_40, (IData)(vlSelfRef.__PVT__any_gnt_vc0), 
                 vlSelfRef.__PVT__flit_in_vc0[9U], 
                 vlSelfRef.__PVT__flit_in_vc1[9U]);
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_in_eithervc
                [9U], __Vtemp_40);
    VL_CONST_W_1X(161,vlSelfRef.__PVT__flit_out_nxt,0x00000000);
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 0U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [0U]);
    }
    vlSelfRef.__PVT__i = 1U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 1U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [1U]);
    }
    vlSelfRef.__PVT__i = 2U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 2U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [2U]);
    }
    vlSelfRef.__PVT__i = 3U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 3U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [3U]);
    }
    vlSelfRef.__PVT__i = 4U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 4U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [4U]);
    }
    vlSelfRef.__PVT__i = 5U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 5U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [5U]);
    }
    vlSelfRef.__PVT__i = 6U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 6U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [6U]);
    }
    vlSelfRef.__PVT__i = 7U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 7U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [7U]);
    }
    vlSelfRef.__PVT__i = 8U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 8U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [8U]);
    }
    vlSelfRef.__PVT__i = 9U;
    if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__gnt_vec_eithervc), 9U))) {
        VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_nxt, 
                    vlSelfRef.__PVT__flit_in_eithervc
                    [9U]);
    }
    vlSelfRef.__PVT__i = 0xaU;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__2(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_qual_valid_vc1 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc1) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc1));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__3(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_qual_valid_vc0 = ((IData)(vlSelfRef.__PVT__gnt_vec_vc0) 
                                           & (IData)(vlSelfRef.__PVT__valid_flit_vc0));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__4(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_txflit_mux_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flitv_out_nxt = ((0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc0)) 
                                      | (0U != (IData)(vlSelfRef.__PVT__gnt_qual_valid_vc1)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_txflit_mux__Fa1___ctor_var_reset(Vsig_topology_top_sig_cc_txflit_mux__Fa1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_txflit_mux__Fa1___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__gnt_vec_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6127171034593648077ull);
    vlSelf->__PVT__gnt_vec_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5389941327883996194ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_vc0, __VscopeHash, 10452376482605581112ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_vc1, __VscopeHash, 10132536508638841952ull);
    vlSelf->__PVT__valid_flit_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1515749341485313956ull);
    vlSelf->__PVT__valid_flit_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 529121438474376626ull);
    vlSelf->__PVT__flitv_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12967655514397149454ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out, __VscopeHash, 10954420838652254973ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_in_vc0[__Vi0], __VscopeHash, 14188575403587474835ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_in_vc1[__Vi0], __VscopeHash, 5104417528355624980ull);
    }
    vlSelf->__PVT__flitv_out_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982075515191814129ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_nxt, __VscopeHash, 6090622116806152946ull);
    vlSelf->__PVT__any_gnt_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10077656042255777723ull);
    vlSelf->__PVT__any_gnt_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10739718713938931448ull);
    vlSelf->__PVT__gnt_vec_eithervc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5350406549275838313ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_in_eithervc[__Vi0], __VscopeHash, 1416600860221975958ull);
    }
    vlSelf->__PVT__gnt_qual_valid_vc0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9787947058875563439ull);
    vlSelf->__PVT__gnt_qual_valid_vc1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11650860046468745833ull);
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->__Vdly__flitv_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17960856951583570690ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__Vdly__flit_out, __VscopeHash, 6285439179653308622ull);
}
