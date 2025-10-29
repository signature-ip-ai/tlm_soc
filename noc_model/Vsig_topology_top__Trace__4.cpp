// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsig_topology_top__Syms.h"


void Vsig_topology_top___024root__trace_chg_0_sub_4(Vsig_topology_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_chg_0_sub_4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 42619);
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<51>/*1631:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<68>/*2175:0*/ __Vtemp_17;
    VlWide<17>/*543:0*/ __Vtemp_20;
    VlWide<85>/*2719:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<102>/*3263:0*/ __Vtemp_25;
    VlWide<17>/*543:0*/ __Vtemp_28;
    VlWide<119>/*3807:0*/ __Vtemp_29;
    VlWide<17>/*543:0*/ __Vtemp_32;
    VlWide<136>/*4351:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_45;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x28U]))) {
        bufp->chgCData(oldp+0,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0U] 
                                        >> 0x1aU))),4);
        bufp->chgBit(oldp+1,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__latch_txnid));
        bufp->chgBit(oldp+2,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_addr_buff));
        bufp->chgSData(oldp+3,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_bit_available_nxt),16);
        bufp->chgCData(oldp+4,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_selected_nxt),4);
        bufp->chgBit(oldp+5,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_zero_buff));
        bufp->chgSData(oldp+6,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_zero_buffer_nxt),16);
        bufp->chgSData(oldp+7,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_wr_addr_buff),16);
        bufp->chgQData(oldp+8,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[0]),52);
        bufp->chgQData(oldp+10,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[1]),52);
        bufp->chgQData(oldp+12,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[2]),52);
        bufp->chgQData(oldp+14,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[3]),52);
        bufp->chgQData(oldp+16,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[4]),52);
        bufp->chgQData(oldp+18,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[5]),52);
        bufp->chgQData(oldp+20,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[6]),52);
        bufp->chgQData(oldp+22,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[7]),52);
        bufp->chgQData(oldp+24,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[8]),52);
        bufp->chgQData(oldp+26,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[9]),52);
        bufp->chgQData(oldp+28,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[10]),52);
        bufp->chgQData(oldp+30,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[11]),52);
        bufp->chgQData(oldp+32,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[12]),52);
        bufp->chgQData(oldp+34,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[13]),52);
        bufp->chgQData(oldp+36,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[14]),52);
        bufp->chgQData(oldp+38,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[15]),52);
        bufp->chgCData(oldp+40,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[0]),4);
        bufp->chgCData(oldp+41,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[1]),4);
        bufp->chgCData(oldp+42,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[2]),4);
        bufp->chgCData(oldp+43,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[3]),4);
        bufp->chgCData(oldp+44,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[4]),4);
        bufp->chgCData(oldp+45,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[5]),4);
        bufp->chgCData(oldp+46,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[6]),4);
        bufp->chgCData(oldp+47,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[7]),4);
        bufp->chgCData(oldp+48,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[8]),4);
        bufp->chgCData(oldp+49,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[9]),4);
        bufp->chgCData(oldp+50,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[10]),4);
        bufp->chgCData(oldp+51,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[11]),4);
        bufp->chgCData(oldp+52,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[12]),4);
        bufp->chgCData(oldp+53,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[13]),4);
        bufp->chgCData(oldp+54,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[14]),4);
        bufp->chgCData(oldp+55,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[15]),4);
        bufp->chgSData(oldp+56,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+57,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+58,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+59,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+60,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+61,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+62,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+63,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+64,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+65,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+66,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+67,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+68,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+69,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+70,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+71,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[15]),12);
        bufp->chgSData(oldp+72,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[0]),11);
        bufp->chgSData(oldp+73,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[1]),11);
        bufp->chgSData(oldp+74,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[2]),11);
        bufp->chgSData(oldp+75,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[3]),11);
        bufp->chgSData(oldp+76,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[4]),11);
        bufp->chgSData(oldp+77,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[5]),11);
        bufp->chgSData(oldp+78,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[6]),11);
        bufp->chgSData(oldp+79,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[7]),11);
        bufp->chgSData(oldp+80,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[8]),11);
        bufp->chgSData(oldp+81,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[9]),11);
        bufp->chgSData(oldp+82,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[10]),11);
        bufp->chgSData(oldp+83,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[11]),11);
        bufp->chgSData(oldp+84,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[12]),11);
        bufp->chgSData(oldp+85,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[13]),11);
        bufp->chgSData(oldp+86,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[14]),11);
        bufp->chgSData(oldp+87,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[15]),11);
        bufp->chgBit(oldp+88,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[0]));
        bufp->chgBit(oldp+89,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[1]));
        bufp->chgBit(oldp+90,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[2]));
        bufp->chgBit(oldp+91,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[3]));
        bufp->chgBit(oldp+92,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[4]));
        bufp->chgBit(oldp+93,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[5]));
        bufp->chgBit(oldp+94,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[6]));
        bufp->chgBit(oldp+95,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[7]));
        bufp->chgBit(oldp+96,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[8]));
        bufp->chgBit(oldp+97,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[9]));
        bufp->chgBit(oldp+98,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[10]));
        bufp->chgBit(oldp+99,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[11]));
        bufp->chgBit(oldp+100,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[12]));
        bufp->chgBit(oldp+101,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[13]));
        bufp->chgBit(oldp+102,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[14]));
        bufp->chgBit(oldp+103,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[15]));
        bufp->chgCData(oldp+104,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[0]),4);
        bufp->chgCData(oldp+105,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[1]),4);
        bufp->chgCData(oldp+106,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[2]),4);
        bufp->chgCData(oldp+107,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[3]),4);
        bufp->chgCData(oldp+108,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[4]),4);
        bufp->chgCData(oldp+109,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[5]),4);
        bufp->chgCData(oldp+110,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[6]),4);
        bufp->chgCData(oldp+111,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[7]),4);
        bufp->chgCData(oldp+112,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[8]),4);
        bufp->chgCData(oldp+113,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[9]),4);
        bufp->chgCData(oldp+114,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[10]),4);
        bufp->chgCData(oldp+115,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[11]),4);
        bufp->chgCData(oldp+116,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[12]),4);
        bufp->chgCData(oldp+117,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[13]),4);
        bufp->chgCData(oldp+118,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[14]),4);
        bufp->chgCData(oldp+119,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[15]),4);
        bufp->chgSData(oldp+120,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_sent_data_bit_nxt),16);
        bufp->chgSData(oldp+121,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_received_sn_comp_bit_nxt),16);
        bufp->chgBit(oldp+122,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_comp_buff));
        bufp->chgBit(oldp+123,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff_outstanding_reqf));
        bufp->chgBit(oldp+124,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_reqf_buff));
        bufp->chgBit(oldp+125,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_select_rd_reqf_pointer));
        bufp->chgWData(oldp+126,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[0]),154);
        bufp->chgWData(oldp+131,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[1]),154);
        bufp->chgWData(oldp+136,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[2]),154);
        bufp->chgWData(oldp+141,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[3]),154);
        bufp->chgWData(oldp+146,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[4]),154);
        bufp->chgWData(oldp+151,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[5]),154);
        bufp->chgWData(oldp+156,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[6]),154);
        bufp->chgWData(oldp+161,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[7]),154);
        bufp->chgWData(oldp+166,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[8]),154);
        bufp->chgWData(oldp+171,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[9]),154);
        bufp->chgWData(oldp+176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[10]),154);
        bufp->chgWData(oldp+181,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[11]),154);
        bufp->chgWData(oldp+186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[12]),154);
        bufp->chgWData(oldp+191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[13]),154);
        bufp->chgWData(oldp+196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[14]),154);
        bufp->chgWData(oldp+201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[15]),154);
        bufp->chgSData(oldp+206,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_bit_available_nxt),16);
        bufp->chgWData(oldp+207,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_s),151);
        bufp->chgSData(oldp+212,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__txnid_from_cc),12);
        bufp->chgBit(oldp+213,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__flit_dmt_en));
        bufp->chgBit(oldp+214,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memwr_req));
        bufp->chgBit(oldp+215,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memrd_req));
        bufp->chgBit(oldp+216,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_data_buff));
        bufp->chgCData(oldp+217,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[0]),4);
        bufp->chgCData(oldp+218,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[1]),4);
        bufp->chgCData(oldp+219,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[2]),4);
        bufp->chgCData(oldp+220,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[3]),4);
        bufp->chgCData(oldp+221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[4]),4);
        bufp->chgCData(oldp+222,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[5]),4);
        bufp->chgCData(oldp+223,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[6]),4);
        bufp->chgCData(oldp+224,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[7]),4);
        bufp->chgCData(oldp+225,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[8]),4);
        bufp->chgCData(oldp+226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[9]),4);
        bufp->chgCData(oldp+227,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[10]),4);
        bufp->chgCData(oldp+228,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[11]),4);
        bufp->chgCData(oldp+229,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[12]),4);
        bufp->chgCData(oldp+230,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[13]),4);
        bufp->chgCData(oldp+231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[14]),4);
        bufp->chgCData(oldp+232,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[15]),4);
        bufp->chgSData(oldp+233,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_bit_nxt),16);
        bufp->chgWData(oldp+234,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[0]),512);
        bufp->chgWData(oldp+250,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[1]),512);
        bufp->chgWData(oldp+266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[2]),512);
        bufp->chgWData(oldp+282,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[3]),512);
        bufp->chgWData(oldp+298,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[4]),512);
        bufp->chgWData(oldp+314,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[5]),512);
        bufp->chgWData(oldp+330,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[6]),512);
        bufp->chgWData(oldp+346,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[7]),512);
        bufp->chgWData(oldp+362,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[8]),512);
        bufp->chgWData(oldp+378,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[9]),512);
        bufp->chgWData(oldp+394,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[10]),512);
        bufp->chgWData(oldp+410,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[11]),512);
        bufp->chgWData(oldp+426,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[12]),512);
        bufp->chgWData(oldp+442,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[13]),512);
        bufp->chgWData(oldp+458,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[14]),512);
        bufp->chgWData(oldp+474,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[15]),512);
        bufp->chgQData(oldp+490,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[0]),64);
        bufp->chgQData(oldp+492,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[1]),64);
        bufp->chgQData(oldp+494,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[2]),64);
        bufp->chgQData(oldp+496,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[3]),64);
        bufp->chgQData(oldp+498,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[4]),64);
        bufp->chgQData(oldp+500,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[5]),64);
        bufp->chgQData(oldp+502,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[6]),64);
        bufp->chgQData(oldp+504,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[7]),64);
        bufp->chgQData(oldp+506,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[8]),64);
        bufp->chgQData(oldp+508,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[9]),64);
        bufp->chgQData(oldp+510,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[10]),64);
        bufp->chgQData(oldp+512,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[11]),64);
        bufp->chgQData(oldp+514,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[12]),64);
        bufp->chgQData(oldp+516,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[13]),64);
        bufp->chgQData(oldp+518,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[14]),64);
        bufp->chgQData(oldp+520,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[15]),64);
        bufp->chgBit(oldp+522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_data_index_buffer));
        bufp->chgBit(oldp+523,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_dbid_buff));
        bufp->chgCData(oldp+524,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[0U] 
                                          >> 0x1aU))),4);
        bufp->chgSData(oldp+525,((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[2U] 
                                             << 0xaU) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U] 
                                               >> 0x16U)))),12);
        bufp->chgSData(oldp+526,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_index_buffer_bit_nxt),16);
        bufp->chgSData(oldp+527,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+528,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+529,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+530,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+531,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+532,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+533,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+534,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+535,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+536,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+537,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+538,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+539,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+540,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+541,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+542,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[15]),12);
        bufp->chgBit(oldp+543,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_buff));
        bufp->chgQData(oldp+544,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd),52);
        bufp->chgIData(oldp+546,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cm_flit_addr_sliced_pm[0]),28);
        bufp->chgSData(oldp+547,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_rdretryack_bufv),16);
        bufp->chgSData(oldp+548,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_wrretryack_bufv),16);
        bufp->chgBit(oldp+549,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__got_retryackresp));
        bufp->chgSData(oldp+550,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__retryack_buf_entry),15);
        bufp->chgSData(oldp+551,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[0]),15);
        bufp->chgSData(oldp+552,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[1]),15);
        bufp->chgSData(oldp+553,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[2]),15);
        bufp->chgSData(oldp+554,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[3]),15);
        bufp->chgSData(oldp+555,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[4]),15);
        bufp->chgSData(oldp+556,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[5]),15);
        bufp->chgSData(oldp+557,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[6]),15);
        bufp->chgSData(oldp+558,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[7]),15);
        bufp->chgSData(oldp+559,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[8]),15);
        bufp->chgSData(oldp+560,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[9]),15);
        bufp->chgSData(oldp+561,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[10]),15);
        bufp->chgSData(oldp+562,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[11]),15);
        bufp->chgSData(oldp+563,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[12]),15);
        bufp->chgSData(oldp+564,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[13]),15);
        bufp->chgSData(oldp+565,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[14]),15);
        bufp->chgSData(oldp+566,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[15]),15);
        bufp->chgSData(oldp+567,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[0]),15);
        bufp->chgSData(oldp+568,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[1]),15);
        bufp->chgSData(oldp+569,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[2]),15);
        bufp->chgSData(oldp+570,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[3]),15);
        bufp->chgSData(oldp+571,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[4]),15);
        bufp->chgSData(oldp+572,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[5]),15);
        bufp->chgSData(oldp+573,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[6]),15);
        bufp->chgSData(oldp+574,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[7]),15);
        bufp->chgSData(oldp+575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[8]),15);
        bufp->chgSData(oldp+576,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[9]),15);
        bufp->chgSData(oldp+577,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[10]),15);
        bufp->chgSData(oldp+578,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[11]),15);
        bufp->chgSData(oldp+579,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[12]),15);
        bufp->chgSData(oldp+580,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[13]),15);
        bufp->chgSData(oldp+581,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[14]),15);
        bufp->chgSData(oldp+582,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[15]),15);
        bufp->chgSData(oldp+583,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_bufv_nxt),16);
        bufp->chgSData(oldp+584,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_bufv_nxt),16);
        bufp->chgBit(oldp+585,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_pcredit_fifo));
        bufp->chgBit(oldp+586,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_pcredit_fifo));
        bufp->chgBit(oldp+587,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_outstand_req_cmo));
        bufp->chgBit(oldp+588,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_slc_rspvalid));
        bufp->chgBit(oldp+589,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_dbidresp));
        bufp->chgBit(oldp+590,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_compdbidresp));
        bufp->chgBit(oldp+591,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_late_comp_resp));
        bufp->chgSData(oldp+592,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_req_sent_nxt),16);
        bufp->chgBit(oldp+593,((3U == (3U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U]))));
        bufp->chgCData(oldp+594,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__wr_ptr_nxt),5);
        bufp->chgCData(oldp+595,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__rd_ptr_nxt),5);
        bufp->chgCData(oldp+596,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt),6);
        bufp->chgBit(oldp+597,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+598,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+599,((2ULL < (0x3ffffffffULL 
                                        & (0x20ULL 
                                           - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt)))))));
        bufp->chgSData(oldp+600,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[0]),15);
        bufp->chgSData(oldp+601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[1]),15);
        bufp->chgSData(oldp+602,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[2]),15);
        bufp->chgSData(oldp+603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[3]),15);
        bufp->chgSData(oldp+604,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[4]),15);
        bufp->chgSData(oldp+605,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[5]),15);
        bufp->chgSData(oldp+606,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[6]),15);
        bufp->chgSData(oldp+607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[7]),15);
        bufp->chgSData(oldp+608,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[8]),15);
        bufp->chgSData(oldp+609,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[9]),15);
        bufp->chgSData(oldp+610,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[10]),15);
        bufp->chgSData(oldp+611,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[11]),15);
        bufp->chgSData(oldp+612,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[12]),15);
        bufp->chgSData(oldp+613,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[13]),15);
        bufp->chgSData(oldp+614,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[14]),15);
        bufp->chgSData(oldp+615,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[15]),15);
        bufp->chgSData(oldp+616,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[16]),15);
        bufp->chgSData(oldp+617,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[17]),15);
        bufp->chgSData(oldp+618,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[18]),15);
        bufp->chgSData(oldp+619,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[19]),15);
        bufp->chgSData(oldp+620,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[20]),15);
        bufp->chgSData(oldp+621,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[21]),15);
        bufp->chgSData(oldp+622,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[22]),15);
        bufp->chgSData(oldp+623,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[23]),15);
        bufp->chgSData(oldp+624,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[24]),15);
        bufp->chgSData(oldp+625,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[25]),15);
        bufp->chgSData(oldp+626,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[26]),15);
        bufp->chgSData(oldp+627,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[27]),15);
        bufp->chgSData(oldp+628,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[28]),15);
        bufp->chgSData(oldp+629,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[29]),15);
        bufp->chgSData(oldp+630,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[30]),15);
        bufp->chgSData(oldp+631,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[31]),15);
        bufp->chgBit(oldp+632,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt));
        bufp->chgCData(oldp+633,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_dat__DOT__init_crdt_ctr_nxt),5);
        bufp->chgCData(oldp+634,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_rsp__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+635,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+636,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+638,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+640,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+641,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+642,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+643,((2ULL < (0x3ffffffffULL 
                                        & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),680);
        bufp->chgWData(oldp+666,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),680);
        bufp->chgWData(oldp+688,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),680);
        bufp->chgWData(oldp+710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),680);
        bufp->chgWData(oldp+732,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),680);
        bufp->chgWData(oldp+754,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),680);
        bufp->chgWData(oldp+776,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),680);
        bufp->chgWData(oldp+798,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),680);
        bufp->chgBit(oldp+820,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+821,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+822,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+823,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+824,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+825,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+826,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+827,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+828,((2ULL < (0x3ffffffffULL 
                                        & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+829,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),151);
        bufp->chgWData(oldp+834,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),151);
        bufp->chgWData(oldp+839,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),151);
        bufp->chgWData(oldp+844,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),151);
        bufp->chgWData(oldp+849,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),151);
        bufp->chgWData(oldp+854,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),151);
        bufp->chgWData(oldp+859,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),151);
        bufp->chgWData(oldp+864,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),151);
        bufp->chgBit(oldp+869,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+870,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+871,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+872,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+873,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+874,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+875,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+876,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+877,((2ULL < (0x3ffffffffULL 
                                        & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+878,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+881,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+884,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+887,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+890,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
        bufp->chgWData(oldp+893,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
        bufp->chgWData(oldp+896,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
        bufp->chgWData(oldp+899,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
        bufp->chgCData(oldp+902,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+903,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_req__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+904,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgIData(oldp+905,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dealloc_compfifo_vector_compdata),32);
        bufp->chgBit(oldp+906,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_reqcmdq));
        bufp->chgBit(oldp+907,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_respcmdq));
        bufp->chgWData(oldp+908,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_respcmdq),74);
        bufp->chgWData(oldp+911,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_memrespcmdq),109);
        bufp->chgBit(oldp+915,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid));
        bufp->chgBit(oldp+916,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_dataflit));
        bufp->chgIData(oldp+917,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_outstand_prep),32);
        bufp->chgBit(oldp+918,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_unused_compbuff_num));
        bufp->chgBit(oldp+919,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st));
        bufp->chgBit(oldp+920,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd));
        bufp->chgBit(oldp+921,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__en_compbuf_2nd_for_snpdata));
        bufp->chgBit(oldp+922,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__block_compbuf_available));
        bufp->chgBit(oldp+923,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd))));
        bufp->chgBit(oldp+924,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq));
        bufp->chgBit(oldp+925,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_nodeid_valid));
        bufp->chgSData(oldp+926,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_full_node_id),11);
        bufp->chgSData(oldp+927,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_rsp_dat_linear_srcid),11);
        bufp->chgSData(oldp+928,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__xmt_snpreq_full_srcid),11);
        bufp->chgBit(oldp+929,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_copyback_nocopyback));
        bufp->chgBit(oldp+930,((7U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+931,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_snprespdata));
        bufp->chgBit(oldp+932,((4U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+933,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_valid));
        bufp->chgCData(oldp+934,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__sig_chi_crdt_update_datproc__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+935,(((3U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU)))) 
                                | ((2U == (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                   | ((1U == (0x7fU 
                                              & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU)))) 
                                      | ((7U == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                         | ((0x26U 
                                             == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                            | ((0x24U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                               | ((0x25U 
                                                   == 
                                                   (0x7fU 
                                                    & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                          >> 0x1eU)))) 
                                                  | ((0x41U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                             >> 0x1eU)))) 
                                                     | ((0x4cU 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                              << 2U) 
                                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                >> 0x1eU)))) 
                                                        | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict)) 
                                                            & (0x42U 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                    << 2U) 
                                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                      >> 0x1eU))))) 
                                                           | ((0xbU 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                    << 2U) 
                                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                      >> 0x1eU)))) 
                                                              | ((0xcU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                       << 2U) 
                                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                         >> 0x1eU)))) 
                                                                 | ((0xdU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                          << 2U) 
                                                                         | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                            >> 0x1eU)))) 
                                                                    | ((8U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                             << 2U) 
                                                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                               >> 0x1eU)))) 
                                                                       | ((9U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                                << 2U) 
                                                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                                >> 0x1eU)))) 
                                                                          | (0xaU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                                >> 0x1eU)))))))))))))))))))));
        bufp->chgBit(oldp+936,(((0x15U == (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                | (((0x42U == (0x7fU 
                                               & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                     >> 0x1eU)))) 
                                    & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict)) 
                                   | ((0x43U == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                      | ((0x16U == 
                                          (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                            | ((0x18U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                               | ((0x19U 
                                                   == 
                                                   (0x7fU 
                                                    & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                        << 2U) 
                                                       | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                          >> 0x1eU)))) 
                                                  | ((0x1aU 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                             >> 0x1eU)))) 
                                                     | (0x1bU 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                             << 2U) 
                                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                               >> 0x1eU))))))))))))));
        bufp->chgBit(oldp+937,((4U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU))))));
        bufp->chgBit(oldp+938,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_nonsnpable));
        bufp->chgBit(oldp+939,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable));
        bufp->chgBit(oldp+940,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable));
        bufp->chgBit(oldp+941,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_non_snpable));
        bufp->chgCData(oldp+942,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__req_is_atmo),3);
        bufp->chgBit(oldp+943,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_atomtxn));
        bufp->chgBit(oldp+944,((((0x54U == (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                              << 2U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                >> 0x1eU)))) 
                                 | ((0x64U == (0x7fU 
                                               & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                     >> 0x1eU)))) 
                                    | ((0x59U == (0x7fU 
                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                        >> 0x1eU)))) 
                                       | ((0x58U == 
                                           (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                              << 2U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                >> 0x1eU)))) 
                                          | (0x5cU 
                                             == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))))))) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp))));
        bufp->chgBit(oldp+945,(((0x54U == (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                | ((0x64U == (0x7fU 
                                              & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU)))) 
                                   | ((0x59U == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                      | ((0x58U == 
                                          (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                         | (0x5cU == 
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU))))))))));
        bufp->chgIData(oldp+946,((0xfffffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U])),28);
        bufp->chgSData(oldp+947,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_addr_match_vec),16);
        bufp->chgCData(oldp+948,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[0]),4);
        bufp->chgCData(oldp+949,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[1]),4);
        bufp->chgCData(oldp+950,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[2]),4);
        bufp->chgCData(oldp+951,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[3]),4);
        bufp->chgCData(oldp+952,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[4]),4);
        bufp->chgCData(oldp+953,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[5]),4);
        bufp->chgCData(oldp+954,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[6]),4);
        bufp->chgCData(oldp+955,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[7]),4);
        bufp->chgCData(oldp+956,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[8]),4);
        bufp->chgCData(oldp+957,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[9]),4);
        bufp->chgCData(oldp+958,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[10]),4);
        bufp->chgCData(oldp+959,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[11]),4);
        bufp->chgCData(oldp+960,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[12]),4);
        bufp->chgCData(oldp+961,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[13]),4);
        bufp->chgCData(oldp+962,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[14]),4);
        bufp->chgCData(oldp+963,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[15]),4);
        bufp->chgBit(oldp+964,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp));
        bufp->chgBit(oldp+965,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wren_reqfifo));
        bufp->chgBit(oldp+966,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__rden_reqfifo));
        bufp->chgWData(oldp+967,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wrdata_reqfifo),151);
        bufp->chgWData(oldp+972,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed),151);
        bufp->chgBit(oldp+977,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict));
        bufp->chgWData(oldp+978,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit),151);
        __Vtemp_2[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[0U];
        __Vtemp_2[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[1U];
        __Vtemp_2[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[2U];
        __Vtemp_2[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U];
        __Vtemp_2[4U] = (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable) 
                          << 0x18U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable) 
                                        << 0x17U) | 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U]));
        bufp->chgWData(oldp+983,(__Vtemp_2),153);
        bufp->chgBit(oldp+988,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__placeholder_state_n));
        bufp->chgCData(oldp+989,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__wr_ptr_nxt),4);
        bufp->chgCData(oldp+990,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt),4);
        bufp->chgCData(oldp+991,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt),5);
        bufp->chgBit(oldp+992,((0x10U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+993,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+994,((2ULL < (0x3ffffffffULL 
                                        & (0x10ULL 
                                           - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+995,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[0]),151);
        bufp->chgWData(oldp+1000,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[1]),151);
        bufp->chgWData(oldp+1005,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[2]),151);
        bufp->chgWData(oldp+1010,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[3]),151);
        bufp->chgWData(oldp+1015,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[4]),151);
        bufp->chgWData(oldp+1020,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[5]),151);
        bufp->chgWData(oldp+1025,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[6]),151);
        bufp->chgWData(oldp+1030,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[7]),151);
        bufp->chgWData(oldp+1035,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[8]),151);
        bufp->chgWData(oldp+1040,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[9]),151);
        bufp->chgWData(oldp+1045,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[10]),151);
        bufp->chgWData(oldp+1050,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[11]),151);
        bufp->chgWData(oldp+1055,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[12]),151);
        bufp->chgWData(oldp+1060,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[13]),151);
        bufp->chgWData(oldp+1065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[14]),151);
        bufp->chgWData(oldp+1070,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[15]),151);
        bufp->chgBit(oldp+1075,(((1U == (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                  >> 6U))) 
                                 | ((9U == (0x1fU & 
                                            (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                             >> 6U))) 
                                    | ((2U == (0x1fU 
                                               & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                  >> 6U))) 
                                       | ((5U == (0x1fU 
                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                     >> 6U))) 
                                          | ((6U == 
                                              (0x1fU 
                                               & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                  >> 6U))) 
                                             | ((4U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                     >> 6U))) 
                                                | ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                        >> 6U))) 
                                                   | ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                           >> 6U))) 
                                                      | ((7U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                              >> 6U))) 
                                                         | (8U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                                >> 6U))))))))))))));
        bufp->chgBit(oldp+1076,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom) 
                                 | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3))));
        bufp->chgWData(oldp+1077,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT),73);
        bufp->chgCData(oldp+1080,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+1081,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_2nd_compbuff_num));
        bufp->chgBit(oldp+1082,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_1st_compbuff));
        bufp->chgBit(oldp+1083,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_2nd_compbuff));
        bufp->chgBit(oldp+1084,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__swap_1st_and_2nd_compbuff));
        bufp->chgBit(oldp+1085,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__req_resp_compdata_nxt));
        bufp->chgIData(oldp+1086,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_outstand_cmd_pre),32);
        bufp->chgBit(oldp+1087,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_memdata));
        bufp->chgBit(oldp+1088,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flag_memwr_allbe_zero_nxt));
        bufp->chgBit(oldp+1089,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__make_be_allzero_memwr));
        bufp->chgBit(oldp+1090,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq_prep));
        bufp->chgBit(oldp+1091,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_collnreg_sending_ini_pre));
        bufp->chgBit(oldp+1092,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flittype_rdnosnp_l3));
        bufp->chgBit(oldp+1093,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__xmt_datflit_resperr_nxt));
        bufp->chgBit(oldp+1094,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__compbuf_available));
        bufp->chgIData(oldp+1095,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1096,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__outstand_prep_valid_nxt),32);
        bufp->chgWData(oldp+1097,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__wrdata_stat_common_ph3_rsp),136);
        __Vtemp_13[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[0U];
        __Vtemp_13[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[1U];
        __Vtemp_13[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[2U];
        __Vtemp_13[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[3U];
        __Vtemp_13[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[4U]);
        __Vtemp_13[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[1U] 
                                        << 8U));
        __Vtemp_13[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[2U] 
                                        << 8U));
        __Vtemp_13[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[3U] 
                                        << 8U));
        __Vtemp_13[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[4U] 
                                           << 8U)));
        __Vtemp_13[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[1U] 
                                        << 0x10U));
        __Vtemp_13[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[2U] 
                                          << 0x10U));
        __Vtemp_13[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[3U] 
                                          << 0x10U));
        __Vtemp_13[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_13[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_13[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_13[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_13[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[4U] 
                                 << 0x18U)));
        __Vtemp_13[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[0U];
        __Vtemp_13[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[1U];
        __Vtemp_13[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[2U];
        __Vtemp_13[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[3U];
        __Vtemp_13[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[0U] 
                              << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[4U]);
        __Vtemp_13[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[0U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[1U] 
                                           << 8U));
        __Vtemp_13[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[1U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[2U] 
                                           << 8U));
        __Vtemp_13[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[2U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[3U] 
                                           << 8U));
        __Vtemp_13[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[0U] 
                              << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[3U] 
                                            >> 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[4U] 
                                              << 8U)));
        __Vtemp_13[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[0U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[1U] 
                                           << 0x10U));
        __Vtemp_13[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[1U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[2U] 
                                           << 0x10U));
        __Vtemp_13[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[2U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[3U] 
                                           << 0x10U));
        __Vtemp_13[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[3U] 
                              >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                            << 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                              << 0x10U)));
        __Vtemp_13[0x1eU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                          >> 8U)) | 
                              (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                               >> 0x10U)) | ((0xff0000U 
                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                                 >> 8U)) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                                << 0x18U)));
        __Vtemp_13[0x1fU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                 << 0x18U)));
        __Vtemp_13[0x20U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                 << 0x18U)));
        __Vtemp_13[0x21U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[4U] 
                                 << 0x18U)));
        __Vtemp_13[0x22U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[0U];
        __Vtemp_13[0x23U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[1U];
        __Vtemp_13[0x24U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[2U];
        __Vtemp_13[0x25U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[3U];
        __Vtemp_13[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[0U] 
                              << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[4U]);
        __Vtemp_13[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[0U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[1U] 
                                           << 8U));
        __Vtemp_13[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[1U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[2U] 
                                           << 8U));
        __Vtemp_13[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[2U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[3U] 
                                           << 8U));
        __Vtemp_13[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[0U] 
                              << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[3U] 
                                            >> 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[4U] 
                                              << 8U)));
        __Vtemp_13[0x2bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[0U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[1U] 
                                           << 0x10U));
        __Vtemp_13[0x2cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[1U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[2U] 
                                           << 0x10U));
        __Vtemp_13[0x2dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[2U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[3U] 
                                           << 0x10U));
        __Vtemp_13[0x2eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[3U] 
                              >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                            << 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                              << 0x10U)));
        __Vtemp_13[0x2fU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                          >> 8U)) | 
                              (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                               >> 0x10U)) | ((0xff0000U 
                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                                 >> 8U)) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                                << 0x18U)));
        __Vtemp_13[0x30U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                 << 0x18U)));
        __Vtemp_13[0x31U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                 << 0x18U)));
        __Vtemp_13[0x32U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[4U] 
                                 << 0x18U)));
        __Vtemp_16[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[0U];
        __Vtemp_16[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[1U];
        __Vtemp_16[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[2U];
        __Vtemp_16[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[3U];
        __Vtemp_16[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[4U]);
        __Vtemp_16[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[1U] 
                                        << 8U));
        __Vtemp_16[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[2U] 
                                        << 8U));
        __Vtemp_16[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[3U] 
                                        << 8U));
        __Vtemp_16[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[4U] 
                                           << 8U)));
        __Vtemp_16[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[1U] 
                                        << 0x10U));
        __Vtemp_16[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[2U] 
                                          << 0x10U));
        __Vtemp_16[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[3U] 
                                          << 0x10U));
        __Vtemp_16[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_16[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_16[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_16[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_16[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(2176,1632,544, __Vtemp_17, __Vtemp_13, __Vtemp_16);
        __Vtemp_20[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[0U];
        __Vtemp_20[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[1U];
        __Vtemp_20[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[2U];
        __Vtemp_20[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[3U];
        __Vtemp_20[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[4U]);
        __Vtemp_20[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[1U] 
                                        << 8U));
        __Vtemp_20[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[2U] 
                                        << 8U));
        __Vtemp_20[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[3U] 
                                        << 8U));
        __Vtemp_20[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[4U] 
                                           << 8U)));
        __Vtemp_20[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[1U] 
                                        << 0x10U));
        __Vtemp_20[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[2U] 
                                          << 0x10U));
        __Vtemp_20[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[3U] 
                                          << 0x10U));
        __Vtemp_20[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_20[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_20[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_20[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_20[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(2720,2176,544, __Vtemp_21, __Vtemp_17, __Vtemp_20);
        __Vtemp_24[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[0U];
        __Vtemp_24[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[1U];
        __Vtemp_24[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[2U];
        __Vtemp_24[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[3U];
        __Vtemp_24[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[4U]);
        __Vtemp_24[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[1U] 
                                        << 8U));
        __Vtemp_24[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[2U] 
                                        << 8U));
        __Vtemp_24[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[3U] 
                                        << 8U));
        __Vtemp_24[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[4U] 
                                           << 8U)));
        __Vtemp_24[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[1U] 
                                        << 0x10U));
        __Vtemp_24[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[2U] 
                                          << 0x10U));
        __Vtemp_24[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[3U] 
                                          << 0x10U));
        __Vtemp_24[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_24[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_24[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_24[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_24[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(3264,2720,544, __Vtemp_25, __Vtemp_21, __Vtemp_24);
        __Vtemp_28[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[0U];
        __Vtemp_28[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[1U];
        __Vtemp_28[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[2U];
        __Vtemp_28[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[3U];
        __Vtemp_28[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[4U]);
        __Vtemp_28[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[1U] 
                                        << 8U));
        __Vtemp_28[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[2U] 
                                        << 8U));
        __Vtemp_28[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[3U] 
                                        << 8U));
        __Vtemp_28[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[4U] 
                                           << 8U)));
        __Vtemp_28[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[1U] 
                                        << 0x10U));
        __Vtemp_28[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[2U] 
                                          << 0x10U));
        __Vtemp_28[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[3U] 
                                          << 0x10U));
        __Vtemp_28[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_28[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_28[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_28[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_28[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(3808,3264,544, __Vtemp_29, __Vtemp_25, __Vtemp_28);
        __Vtemp_32[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[0U];
        __Vtemp_32[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[1U];
        __Vtemp_32[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[2U];
        __Vtemp_32[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[3U];
        __Vtemp_32[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[4U]);
        __Vtemp_32[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[1U] 
                                        << 8U));
        __Vtemp_32[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[2U] 
                                        << 8U));
        __Vtemp_32[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[3U] 
                                        << 8U));
        __Vtemp_32[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[4U] 
                                           << 8U)));
        __Vtemp_32[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[1U] 
                                        << 0x10U));
        __Vtemp_32[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[2U] 
                                          << 0x10U));
        __Vtemp_32[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[3U] 
                                          << 0x10U));
        __Vtemp_32[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_32[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_32[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_32[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_32[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(4352,3808,544, __Vtemp_33, __Vtemp_29, __Vtemp_32);
        bufp->chgWData(oldp+1102,(__Vtemp_33),4352);
        bufp->chgCData(oldp+1238,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_ownerp_id_ph3_rsp),7);
        bufp->chgIData(oldp+1239,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_share_vect_rsp_m_ph3),22);
        bufp->chgCData(oldp+1240,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_inactive_st_nxt),2);
        bufp->chgSData(oldp+1241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__inactive_ctr_nxt),16);
        bufp->chgCData(oldp+1242,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+1243,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__wr_ptr_nxt),5);
        bufp->chgCData(oldp+1244,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt),6);
        bufp->chgBit(oldp+1245,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1246,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1247,((2ULL < (0x3ffffffffULL 
                                         & (0x20ULL 
                                            - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1248,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[0]),74);
        bufp->chgWData(oldp+1251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[1]),74);
        bufp->chgWData(oldp+1254,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[2]),74);
        bufp->chgWData(oldp+1257,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[3]),74);
        bufp->chgWData(oldp+1260,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[4]),74);
        bufp->chgWData(oldp+1263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[5]),74);
        bufp->chgWData(oldp+1266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[6]),74);
        bufp->chgWData(oldp+1269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[7]),74);
        bufp->chgWData(oldp+1272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[8]),74);
        bufp->chgWData(oldp+1275,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[9]),74);
        bufp->chgWData(oldp+1278,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[10]),74);
        bufp->chgWData(oldp+1281,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[11]),74);
        bufp->chgWData(oldp+1284,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[12]),74);
        bufp->chgWData(oldp+1287,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[13]),74);
        bufp->chgWData(oldp+1290,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[14]),74);
        bufp->chgWData(oldp+1293,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[15]),74);
        bufp->chgWData(oldp+1296,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[16]),74);
        bufp->chgWData(oldp+1299,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[17]),74);
        bufp->chgWData(oldp+1302,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[18]),74);
        bufp->chgWData(oldp+1305,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[19]),74);
        bufp->chgWData(oldp+1308,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[20]),74);
        bufp->chgWData(oldp+1311,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[21]),74);
        bufp->chgWData(oldp+1314,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[22]),74);
        bufp->chgWData(oldp+1317,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[23]),74);
        bufp->chgWData(oldp+1320,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[24]),74);
        bufp->chgWData(oldp+1323,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[25]),74);
        bufp->chgWData(oldp+1326,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[26]),74);
        bufp->chgWData(oldp+1329,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[27]),74);
        bufp->chgWData(oldp+1332,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[28]),74);
        bufp->chgWData(oldp+1335,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[29]),74);
        bufp->chgWData(oldp+1338,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[30]),74);
        bufp->chgWData(oldp+1341,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[31]),74);
        bufp->chgIData(oldp+1344,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo),32);
        bufp->chgIData(oldp+1345,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf),32);
        bufp->chgBit(oldp+1346,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo)));
        bufp->chgBit(oldp+1347,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf)));
        bufp->chgBit(oldp+1348,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1349,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1350,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1351,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1352,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1353,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1354,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1355,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1356,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1357,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1358,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1359,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1360,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1361,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1362,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1363,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1364,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1365,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1366,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1367,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1368,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 1U))));
        bufp->chgBit(oldp+1369,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 1U))));
        bufp->chgBit(oldp+1370,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1371,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1372,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1373,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1374,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1375,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1376,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1377,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1378,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1379,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1380,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1381,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1382,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1383,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1384,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1385,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1386,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1387,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1388,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1389,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1390,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 2U))));
        bufp->chgBit(oldp+1391,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 2U))));
        bufp->chgBit(oldp+1392,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1393,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1394,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1395,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1396,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 3U))));
        bufp->chgBit(oldp+1397,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 3U))));
        bufp->chgBit(oldp+1398,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 4U))));
        bufp->chgBit(oldp+1399,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 4U))));
        bufp->chgBit(oldp+1400,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 5U))));
        bufp->chgBit(oldp+1401,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 5U))));
        bufp->chgBit(oldp+1402,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 6U))));
        bufp->chgBit(oldp+1403,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 6U))));
        bufp->chgBit(oldp+1404,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 7U))));
        bufp->chgBit(oldp+1405,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 7U))));
        bufp->chgBit(oldp+1406,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 8U))));
        bufp->chgBit(oldp+1407,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 8U))));
        bufp->chgBit(oldp+1408,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 9U))));
        bufp->chgBit(oldp+1409,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 9U))));
        bufp->chgCData(oldp+1410,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_idx),5);
        bufp->chgBit(oldp+1411,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_node_id_found));
        bufp->chgIData(oldp+1412,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_vector),22);
        bufp->chgIData(oldp+1413,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_rsp_dat_nodeid_match_vector),22);
        bufp->chgIData(oldp+1414,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+1415,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+1416,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgBit(oldp+1417,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1418,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1420,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+1421,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+1422,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+1423,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1424,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1425,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1426,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
        bufp->chgWData(oldp+1448,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
        bufp->chgWData(oldp+1470,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
        bufp->chgWData(oldp+1492,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
        bufp->chgWData(oldp+1514,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),686);
        bufp->chgWData(oldp+1536,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),686);
        bufp->chgWData(oldp+1558,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),686);
        bufp->chgWData(oldp+1580,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),686);
        bufp->chgBit(oldp+1602,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1604,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1605,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+1606,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+1607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+1608,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1609,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1610,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1611,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+1614,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+1617,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+1620,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+1623,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
        bufp->chgWData(oldp+1626,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
        bufp->chgWData(oldp+1629,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
        bufp->chgWData(oldp+1632,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
        bufp->chgBit(oldp+1635,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_txn_valid));
        bufp->chgBit(oldp+1636,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_init_valid));
        bufp->chgBit(oldp+1637,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_from_ap.ready));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2fU]))) {
        bufp->chgBit(oldp+1638,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__rden_dircache_nxt));
        bufp->chgBit(oldp+1639,((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
        bufp->chgSData(oldp+1640,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc),10);
        bufp->chgSData(oldp+1641,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector),16);
        bufp->chgBit(oldp+1642,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
        bufp->chgWData(oldp+1643,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1675,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgWData(oldp+1676,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT____Vcellinp__sig_sram_valid_tag_data__wrdata),69);
        bufp->chgBit(oldp+1679,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xaU))));
        bufp->chgWData(oldp+1680,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1712,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1713,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xbU))));
        bufp->chgWData(oldp+1714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1746,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1747,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xcU))));
        bufp->chgWData(oldp+1748,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1780,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1781,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xdU))));
        bufp->chgWData(oldp+1782,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1814,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1815,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xeU))));
        bufp->chgWData(oldp+1816,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1848,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1849,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xfU))));
        bufp->chgWData(oldp+1850,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1882,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1883,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 1U))));
        bufp->chgWData(oldp+1884,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1916,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1917,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 2U))));
        bufp->chgWData(oldp+1918,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1950,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1951,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 3U))));
        bufp->chgWData(oldp+1952,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1984,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1985,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 4U))));
        bufp->chgWData(oldp+1986,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2018,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2019,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 5U))));
        bufp->chgWData(oldp+2020,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2052,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2053,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 6U))));
        bufp->chgWData(oldp+2054,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2086,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2087,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 7U))));
        bufp->chgWData(oldp+2088,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2120,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2121,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 8U))));
        bufp->chgWData(oldp+2122,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2154,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2155,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 9U))));
        bufp->chgWData(oldp+2156,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2188,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgSData(oldp+2189,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__cacheproc_state_nxt),13);
        bufp->chgSData(oldp+2190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_one_nxt),16);
        bufp->chgBit(oldp+2191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_cycle_nxt));
        bufp->chgCData(oldp+2192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__count_evict_nxt),3);
        bufp->chgBit(oldp+2193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_fetch_cohc_nxt));
        bufp->chgBit(oldp+2194,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__first_cycle_in_evictend_nxt));
        bufp->chgBit(oldp+2195,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_rden_cache));
        bufp->chgBit(oldp+2196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated));
        bufp->chgBit(oldp+2197,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x30U]))) {
        bufp->chgWData(oldp+2198,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc0),686);
        bufp->chgWData(oldp+2220,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc1),686);
        bufp->chgWData(oldp+2242,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc0_from_id_translator),680);
        bufp->chgWData(oldp+2264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc1_from_id_translator),680);
        bufp->chgBit(oldp+2286,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled));
        bufp->chgBit(oldp+2287,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x31U]))) {
        bufp->chgBit(oldp+2288,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive));
        bufp->chgBit(oldp+2289,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive_sync));
        bufp->chgBit(oldp+2290,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_reg));
        bufp->chgCData(oldp+2291,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                    << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                              << 1U))),4);
        bufp->chgBit(oldp+2292,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__inst_cc_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+2293,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+2294,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+2295,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_cl0_ic_clk__DOT__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__DOT__sig_src_sync1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x3cU]))) {
        bufp->chgWData(oldp+2296,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
        bufp->chgWData(oldp+2301,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s),680);
        __Vtemp_34[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[0U];
        __Vtemp_34[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[1U];
        __Vtemp_34[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[2U];
        __Vtemp_34[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[3U];
        __Vtemp_34[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[4U]);
        bufp->chgWData(oldp+2323,(__Vtemp_34),152);
        bufp->chgWData(oldp+2328,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrd_req_s),151);
        bufp->chgWData(oldp+2333,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memwr_req_s),151);
        bufp->chgSData(oldp+2338,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__tgt_pm_node_id),11);
        bufp->chgWData(oldp+2339,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0U]),151);
        bufp->chgWData(oldp+2344,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [1U]),151);
        bufp->chgWData(oldp+2349,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [2U]),151);
        bufp->chgWData(oldp+2354,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [3U]),151);
        bufp->chgWData(oldp+2359,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [4U]),151);
        bufp->chgWData(oldp+2364,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [5U]),151);
        bufp->chgWData(oldp+2369,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [6U]),151);
        bufp->chgWData(oldp+2374,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [7U]),151);
        bufp->chgWData(oldp+2379,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [8U]),151);
        bufp->chgWData(oldp+2384,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [9U]),151);
        bufp->chgWData(oldp+2389,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xaU]),151);
        bufp->chgWData(oldp+2394,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xbU]),151);
        bufp->chgWData(oldp+2399,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xcU]),151);
        bufp->chgWData(oldp+2404,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xdU]),151);
        bufp->chgWData(oldp+2409,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xeU]),151);
        bufp->chgWData(oldp+2414,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xfU]),151);
        bufp->chgWData(oldp+2419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_reqcmdq),156);
        bufp->chgBit(oldp+2424,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm));
        bufp->chgBit(oldp+2425,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm));
        bufp->chgBit(oldp+2426,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                       & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))))));
        bufp->chgWData(oldp+2427,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[0]),156);
        bufp->chgWData(oldp+2432,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[1]),156);
        bufp->chgWData(oldp+2437,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[2]),156);
        bufp->chgWData(oldp+2442,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[3]),156);
        bufp->chgWData(oldp+2447,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[4]),156);
        bufp->chgWData(oldp+2452,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[5]),156);
        bufp->chgWData(oldp+2457,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[6]),156);
        bufp->chgWData(oldp+2462,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[7]),156);
        bufp->chgBit(oldp+2467,((8U > (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
        bufp->chgBit(oldp+2468,((8U <= (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
        bufp->chgBit(oldp+2469,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc0));
        bufp->chgBit(oldp+2470,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc1));
    }
    bufp->chgBit(oldp+2471,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->chgBit(oldp+2472,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE) 
                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->chgBit(oldp+2473,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->chgBit(oldp+2474,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+2475,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk));
    bufp->chgBit(oldp+2476,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+2477,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk));
    bufp->chgCData(oldp+2478,(((8U & ((~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                            | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))) 
                                      << 3U)) | (2U 
                                                 & ((~ 
                                                     (((((0U 
                                                          != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                                         | (0U 
                                                            != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                                        | (0U 
                                                           != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                                       | (0U 
                                                          != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                                      | (0U 
                                                         != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))) 
                                                    << 1U)))),4);
    bufp->chgCData(oldp+2479,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk) 
                                << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk) 
                                          << 1U))),4);
    bufp->chgCData(oldp+2480,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_rx_intfc_gclk),4);
    bufp->chgCData(oldp+2481,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_tx_intfc_gclk),4);
    bufp->chgBit(oldp+2482,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__activate_cc_l3_or_mn));
    bufp->chgBit(oldp+2483,(((((((0U != (0x1ffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc0
                                                   [0U] 
                                                   >> 1U))) 
                                 | (0U != (0x1ffU & 
                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc1
                                            [0U] >> 1U)))) 
                                | (0U != (0x1ffU & 
                                          (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc0
                                           [0U] >> 1U)))) 
                               | (0U != (0x1ffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc1
                                                   [0U] 
                                                   >> 1U)))) 
                              | (0U != (0x1ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc0
                                                  [0U] 
                                                  >> 1U)))) 
                             | (0U != (0x1ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc1
                                                 [0U] 
                                                 >> 1U))))));
    bufp->chgBit(oldp+2484,(((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc0_rx_hs.recv_req)) 
                               | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc1_rx_hs.recv_req))) 
                              | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_req))) 
                             | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_req)))));
    bufp->chgBit(oldp+2485,((1U & ((~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))) 
                                   & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send))))))));
    bufp->chgBit(oldp+2486,((1U & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                      | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->chgBit(oldp+2487,((1U & (~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                      | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->chgBit(oldp+2488,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_RSPLCRDV));
    bufp->chgBit(oldp+2489,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
                              >> 0x1cU) & (((0xfffffffU 
                                             & (IData)(
                                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd 
                                                        >> 0x18U))) 
                                            >= (0xfffffffU 
                                                & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_base_all_pm_0__DOT__data_stored)) 
                                           & ((0xfffffffU 
                                               & (IData)(
                                                         (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd 
                                                          >> 0x18U))) 
                                              < (0x1fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xfffffffU 
                                                     & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored))))))));
    bufp->chgBit(oldp+2490,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+2491,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+2492,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+2493,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update));
    bufp->chgCData(oldp+2494,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__credits_cnt_nxt),5);
    bufp->chgCData(oldp+2495,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__init_crdt_ctr_nxt),5);
    bufp->chgBit(oldp+2496,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+2497,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgCData(oldp+2498,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407)))))),5);
    bufp->chgBit(oldp+2499,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->chgBit(oldp+2500,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->chgSData(oldp+2501,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))),10);
    bufp->chgSData(oldp+2502,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))),10);
    bufp->chgBit(oldp+2503,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+2504,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))))));
    bufp->chgSData(oldp+2505,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))),10);
    bufp->chgSData(oldp+2506,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))),10);
    bufp->chgCData(oldp+2507,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+2508,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_1st) 
                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_2nd))));
    if (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__snp_tx_snpflitv) {
        __Vtemp_36[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[0U];
        __Vtemp_36[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[1U];
        __Vtemp_36[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[2U];
        __Vtemp_36[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[3U];
        __Vtemp_36[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[4U];
    } else {
        __Vtemp_36[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[0U];
        __Vtemp_36[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[1U];
        __Vtemp_36[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[2U];
        __Vtemp_36[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[3U];
        __Vtemp_36[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[4U]);
    }
    bufp->chgWData(oldp+2509,(__Vtemp_36),152);
    bufp->chgBit(oldp+2514,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                       >> 7U)) | ((~ 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                                    >> 7U)) 
                                                  & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)))))));
    bufp->chgBit(oldp+2515,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                    & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))) 
                                   | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                       & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                          >> 7U)) | 
                                      ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                           >> 7U)) 
                                       & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm))))))));
    bufp->chgBit(oldp+2516,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update)))));
    bufp->chgBit(oldp+2517,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update))));
    bufp->chgBit(oldp+2518,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update)))));
    bufp->chgBit(oldp+2519,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update))));
    bufp->chgCData(oldp+2520,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_resp_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->chgBit(oldp+2521,((1U & ((~ ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                       | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3reqflit_fifo_full) 
                                          | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cc_reqflit_valid_compdata)))) 
                                   | ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                      & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid)) 
                                         & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__available_credits))))))));
    bufp->chgCData(oldp+2522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->chgBit(oldp+2523,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc
                                              [vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__rd_ptr][2U] 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+2524,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__sel_winner_entry[2U] 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+2525,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmdvalid_evict)
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__evict_req_s[2U]
                                                : vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmd[2U]) 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+2526,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
                              >> 0x1cU) & (((0xfffffffU 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                            >= (0xfffffffU 
                                                & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_base_all_pm_0__DOT__data_stored)) 
                                           & ((0xfffffffU 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                              < (0x1fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xfffffffU 
                                                     & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored))))))));
    bufp->chgSData(oldp+2527,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2),11);
    bufp->chgBit(oldp+2528,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored 
                              >> 0x1cU) & (((0xfffffffU 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                            >= (0xfffffffU 
                                                & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_base_all_pm_0__DOT__data_stored)) 
                                           & ((0xfffffffU 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                              < (0x1fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xfffffffU 
                                                     & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored))))))));
    bufp->chgSData(oldp+2529,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2),11);
    bufp->chgSData(oldp+2530,(((0x80U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req[4U])
                                ? (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2)
                                : (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2))),11);
    bufp->chgCData(oldp+2531,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated) 
                                << 2U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_collnq_gated) 
                                           << 1U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated)))),3);
    bufp->chgBit(oldp+2532,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_is_inactive_nxt));
    bufp->chgCData(oldp+2533,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                          << 1U))),4);
    bufp->chgBit(oldp+2534,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+2535,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2536,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2537,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2538,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2539,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+2540,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2541,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2542,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2543,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2544,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+2545,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+2546,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                    >> 3U))) 
                             & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->chgBit(oldp+2547,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                             == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->chgBit(oldp+2548,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+2549,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                    >> 3U))) 
                             & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->chgBit(oldp+2550,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                             == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->chgBit(oldp+2551,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgCData(oldp+2552,((3U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                      ? ((0x800000U 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U])
                                          ? 0U : ((
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                                   << 0xfU) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                                     >> 0x11U)))
                                      : ((0x800000U 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[4U])
                                          ? 0U : ((
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                   << 0x1cU) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                     >> 4U)))))),2);
    bufp->chgBit(oldp+2553,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__tgt_clusterid_fifoout)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__assert_req))));
    bufp->chgBit(oldp+2554,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[0U] 
                                       >> 4U) : (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 4U)))));
    bufp->chgCData(oldp+2555,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410)))))),5);
    bufp->chgBit(oldp+2556,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+2557,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2558,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2559,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+2560,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+2561,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->chgBit(oldp+2562,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->chgBit(oldp+2563,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->chgSData(oldp+2564,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgSData(oldp+2565,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgBit(oldp+2566,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+2567,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+2568,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+2569,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+2570,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                               << 6U) 
                                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))) 
                                   == (0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                 >> 1U)))))));
    bufp->chgBit(oldp+2571,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgCData(oldp+2572,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2573,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2574,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+2575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->chgBit(oldp+2576,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->chgCData(oldp+2577,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->chgCData(oldp+2578,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+2579,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+2580,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+2581,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+2582,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+2583,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+2584,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2585,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2586,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412)))))),5);
    bufp->chgBit(oldp+2587,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+2588,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2589,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2590,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+2591,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+2592,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+2593,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgCData(oldp+2594,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->chgBit(oldp+2595,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+2596,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+2597,((2ULL < (0x3ffffffffULL 
                                     & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->chgBit(oldp+2598,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+2599,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2600,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2601,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))),10);
    __Vtemp_45[0U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_SNPLCRDV));
    __Vtemp_45[1U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                                    << 1U));
    __Vtemp_45[2U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                                    << 1U));
    __Vtemp_45[3U] = ((0xffffe000U & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp) 
                                       << 0xeU) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflitv_from_tx_top) 
                                                   << 0xdU))) 
                      | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                          >> 0x1fU) | (0x1ffeU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[3U] 
                                                  << 1U))));
    bufp->chgWData(oldp+2602,(__Vtemp_45),111);
    bufp->chgCData(oldp+2606,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE))),2);
    bufp->chgSData(oldp+2607,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                          >> 0x1aU))
                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                 >> 0x1aU)] : 0U)),12);
    bufp->chgSData(oldp+2608,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                          >> 0x1aU))
                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                 >> 0x1aU)] : 0U)),12);
    bufp->chgSData(oldp+2609,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                          ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[1U] 
                                              << 6U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU))
                                          : ((0x22U 
                                              >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                              ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                             [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                               >> 0x1aU)]
                                              : 0U)))),12);
    bufp->chgSData(oldp+2610,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                          ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[1U] 
                                              << 6U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU))
                                          : ((0x22U 
                                              >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                              ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                             [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                               >> 0x1aU)]
                                              : 0U)))),12);
    bufp->chgSData(oldp+2611,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                          ? ((0x22U 
                                              >= (0x3fU 
                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                     >> 1U)))
                                              ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                             [(0x3fU 
                                               & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                  >> 1U))]
                                              : 0U)
                                          : ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              << 0x1fU) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U))))),12);
    bufp->chgSData(oldp+2612,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                          ? ((0x22U 
                                              >= (0x3fU 
                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                     >> 1U)))
                                              ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                             [(0x3fU 
                                               & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                  >> 1U))]
                                              : 0U)
                                          : ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                              << 0x1fU) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                >> 1U))))),12);
    bufp->chgBit(oldp+2613,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__flitv_out_mux) 
                             | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__unused_signal) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__TX_DATFLITV_mux)))));
    bufp->chgBit(oldp+2614,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_addr_translator_0__DOT__addr_translator_enabled__DOT__unused_signal))));
    bufp->chgBit(oldp+2615,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc0_dat_rsp_cntr));
    bufp->chgBit(oldp+2616,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc1_dat_rsp_cntr));
    bufp->chgSData(oldp+2617,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_dat_idx_to_clr),12);
    bufp->chgSData(oldp+2618,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_dat_idx_to_clr),12);
    bufp->chgCData(oldp+2619,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2620,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2621,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2622,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+2623,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+2624,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+2625,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+2626,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+2627,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+2628,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2629,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2630,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3425))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3425)))))),5);
    bufp->chgBit(oldp+2631,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+2632,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2633,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2634,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+2635,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+2636,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+2637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgBit(oldp+2638,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+2639,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2640,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2641,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))),10);
    bufp->chgBit(oldp+2642,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.vld_send));
}

void Vsig_topology_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_cleanup\n"); );
    // Init
    Vsig_topology_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsig_topology_top___024root*>(voidSelf);
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x5eU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
