// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsig_topology_top__Syms.h"


void Vsig_topology_top___024root__trace_chg_0_sub_4(Vsig_topology_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_chg_0_sub_4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 42544);
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<51>/*1631:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_17;
    VlWide<68>/*2175:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<85>/*2719:0*/ __Vtemp_22;
    VlWide<17>/*543:0*/ __Vtemp_25;
    VlWide<102>/*3263:0*/ __Vtemp_26;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<119>/*3807:0*/ __Vtemp_30;
    VlWide<17>/*543:0*/ __Vtemp_33;
    VlWide<136>/*4351:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_46;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2aU]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
        bufp->chgBit(oldp+6,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom));
        bufp->chgBit(oldp+7,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__send_datacrdt_update));
        bufp->chgWData(oldp+8,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s),680);
        bufp->chgBit(oldp+30,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_req_crdt));
        bufp->chgBit(oldp+31,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+32,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s),680);
        bufp->chgBit(oldp+54,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__update_rsp_crdt));
        bufp->chgWData(oldp+55,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s),73);
        bufp->chgBit(oldp+58,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_dat_crdt));
        bufp->chgBit(oldp+59,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3));
        bufp->chgWData(oldp+60,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__slc_rspflit_s),73);
        bufp->chgBit(oldp+63,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3)))));
        bufp->chgBit(oldp+64,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff));
        __Vtemp_1[0U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[6U] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[5U] 
                                       >> 8U));
        __Vtemp_1[1U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[7U] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[6U] 
                                       >> 8U));
        __Vtemp_1[2U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[8U] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[7U] 
                                       >> 8U));
        __Vtemp_1[3U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[9U] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[8U] 
                                       >> 8U));
        __Vtemp_1[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xaU] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[9U] 
                                       >> 8U));
        __Vtemp_1[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xbU] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xaU] 
                                       >> 8U));
        __Vtemp_1[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xcU] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xbU] 
                                       >> 8U));
        __Vtemp_1[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xdU] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xcU] 
                                       >> 8U));
        __Vtemp_1[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xeU] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xdU] 
                                       >> 8U));
        __Vtemp_1[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xfU] 
                          << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xeU] 
                                       >> 8U));
        __Vtemp_1[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x10U] 
                            << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xfU] 
                                         >> 8U));
        __Vtemp_1[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x11U] 
                            << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x10U] 
                                         >> 8U));
        __Vtemp_1[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x12U] 
                            << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x11U] 
                                         >> 8U));
        __Vtemp_1[0xdU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x13U] 
                            << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x12U] 
                                         >> 8U));
        __Vtemp_1[0xeU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x14U] 
                            << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x13U] 
                                         >> 8U));
        __Vtemp_1[0xfU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x15U] 
                            << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x14U] 
                                         >> 8U));
        bufp->chgWData(oldp+65,(__Vtemp_1),512);
        bufp->chgCData(oldp+81,((3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[1U] 
                                       >> 0x15U))),2);
        bufp->chgBit(oldp+82,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff)))));
        bufp->chgBit(oldp+83,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_reqflit_fifo));
        bufp->chgCData(oldp+84,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cmdproc_st_nxt),2);
        bufp->chgBit(oldp+85,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff));
        bufp->chgSData(oldp+86,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_bit_available_nxt),16);
        bufp->chgCData(oldp+87,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_selected_nxt),4);
        bufp->chgSData(oldp+88,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_rd_txnid_buff),16);
        bufp->chgSData(oldp+89,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+90,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+91,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+92,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+93,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+94,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+95,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+96,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+97,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+98,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+99,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+100,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+101,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+102,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+103,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+104,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[15]),12);
        bufp->chgCData(oldp+105,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0U] 
                                          >> 0x1aU))),4);
        bufp->chgBit(oldp+106,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__latch_txnid));
        bufp->chgBit(oldp+107,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_addr_buff));
        bufp->chgSData(oldp+108,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_bit_available_nxt),16);
        bufp->chgCData(oldp+109,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_selected_nxt),4);
        bufp->chgBit(oldp+110,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_zero_buff));
        bufp->chgSData(oldp+111,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_zero_buffer_nxt),16);
        bufp->chgSData(oldp+112,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_wr_addr_buff),16);
        bufp->chgQData(oldp+113,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[0]),52);
        bufp->chgQData(oldp+115,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[1]),52);
        bufp->chgQData(oldp+117,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[2]),52);
        bufp->chgQData(oldp+119,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[3]),52);
        bufp->chgQData(oldp+121,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[4]),52);
        bufp->chgQData(oldp+123,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[5]),52);
        bufp->chgQData(oldp+125,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[6]),52);
        bufp->chgQData(oldp+127,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[7]),52);
        bufp->chgQData(oldp+129,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[8]),52);
        bufp->chgQData(oldp+131,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[9]),52);
        bufp->chgQData(oldp+133,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[10]),52);
        bufp->chgQData(oldp+135,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[11]),52);
        bufp->chgQData(oldp+137,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[12]),52);
        bufp->chgQData(oldp+139,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[13]),52);
        bufp->chgQData(oldp+141,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[14]),52);
        bufp->chgQData(oldp+143,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[15]),52);
        bufp->chgCData(oldp+145,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[0]),4);
        bufp->chgCData(oldp+146,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[1]),4);
        bufp->chgCData(oldp+147,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[2]),4);
        bufp->chgCData(oldp+148,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[3]),4);
        bufp->chgCData(oldp+149,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[4]),4);
        bufp->chgCData(oldp+150,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[5]),4);
        bufp->chgCData(oldp+151,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[6]),4);
        bufp->chgCData(oldp+152,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[7]),4);
        bufp->chgCData(oldp+153,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[8]),4);
        bufp->chgCData(oldp+154,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[9]),4);
        bufp->chgCData(oldp+155,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[10]),4);
        bufp->chgCData(oldp+156,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[11]),4);
        bufp->chgCData(oldp+157,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[12]),4);
        bufp->chgCData(oldp+158,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[13]),4);
        bufp->chgCData(oldp+159,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[14]),4);
        bufp->chgCData(oldp+160,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[15]),4);
        bufp->chgSData(oldp+161,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+162,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+163,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+164,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+165,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+166,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+167,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+168,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+169,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+170,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+171,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+172,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+173,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+174,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+175,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[15]),12);
        bufp->chgSData(oldp+177,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[0]),11);
        bufp->chgSData(oldp+178,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[1]),11);
        bufp->chgSData(oldp+179,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[2]),11);
        bufp->chgSData(oldp+180,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[3]),11);
        bufp->chgSData(oldp+181,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[4]),11);
        bufp->chgSData(oldp+182,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[5]),11);
        bufp->chgSData(oldp+183,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[6]),11);
        bufp->chgSData(oldp+184,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[7]),11);
        bufp->chgSData(oldp+185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[8]),11);
        bufp->chgSData(oldp+186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[9]),11);
        bufp->chgSData(oldp+187,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[10]),11);
        bufp->chgSData(oldp+188,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[11]),11);
        bufp->chgSData(oldp+189,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[12]),11);
        bufp->chgSData(oldp+190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[13]),11);
        bufp->chgSData(oldp+191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[14]),11);
        bufp->chgSData(oldp+192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[15]),11);
        bufp->chgBit(oldp+193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[0]));
        bufp->chgBit(oldp+194,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[1]));
        bufp->chgBit(oldp+195,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[2]));
        bufp->chgBit(oldp+196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[3]));
        bufp->chgBit(oldp+197,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[4]));
        bufp->chgBit(oldp+198,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[5]));
        bufp->chgBit(oldp+199,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[6]));
        bufp->chgBit(oldp+200,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[7]));
        bufp->chgBit(oldp+201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[8]));
        bufp->chgBit(oldp+202,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[9]));
        bufp->chgBit(oldp+203,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[10]));
        bufp->chgBit(oldp+204,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[11]));
        bufp->chgBit(oldp+205,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[12]));
        bufp->chgBit(oldp+206,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[13]));
        bufp->chgBit(oldp+207,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[14]));
        bufp->chgBit(oldp+208,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[15]));
        bufp->chgCData(oldp+209,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[0]),4);
        bufp->chgCData(oldp+210,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[1]),4);
        bufp->chgCData(oldp+211,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[2]),4);
        bufp->chgCData(oldp+212,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[3]),4);
        bufp->chgCData(oldp+213,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[4]),4);
        bufp->chgCData(oldp+214,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[5]),4);
        bufp->chgCData(oldp+215,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[6]),4);
        bufp->chgCData(oldp+216,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[7]),4);
        bufp->chgCData(oldp+217,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[8]),4);
        bufp->chgCData(oldp+218,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[9]),4);
        bufp->chgCData(oldp+219,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[10]),4);
        bufp->chgCData(oldp+220,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[11]),4);
        bufp->chgCData(oldp+221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[12]),4);
        bufp->chgCData(oldp+222,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[13]),4);
        bufp->chgCData(oldp+223,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[14]),4);
        bufp->chgCData(oldp+224,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[15]),4);
        bufp->chgSData(oldp+225,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_sent_data_bit_nxt),16);
        bufp->chgSData(oldp+226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_received_sn_comp_bit_nxt),16);
        bufp->chgBit(oldp+227,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_comp_buff));
        bufp->chgBit(oldp+228,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff_outstanding_reqf));
        bufp->chgBit(oldp+229,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_reqf_buff));
        bufp->chgBit(oldp+230,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_select_rd_reqf_pointer));
        bufp->chgWData(oldp+231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[0]),154);
        bufp->chgWData(oldp+236,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[1]),154);
        bufp->chgWData(oldp+241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[2]),154);
        bufp->chgWData(oldp+246,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[3]),154);
        bufp->chgWData(oldp+251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[4]),154);
        bufp->chgWData(oldp+256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[5]),154);
        bufp->chgWData(oldp+261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[6]),154);
        bufp->chgWData(oldp+266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[7]),154);
        bufp->chgWData(oldp+271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[8]),154);
        bufp->chgWData(oldp+276,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[9]),154);
        bufp->chgWData(oldp+281,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[10]),154);
        bufp->chgWData(oldp+286,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[11]),154);
        bufp->chgWData(oldp+291,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[12]),154);
        bufp->chgWData(oldp+296,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[13]),154);
        bufp->chgWData(oldp+301,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[14]),154);
        bufp->chgWData(oldp+306,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[15]),154);
        bufp->chgSData(oldp+311,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_bit_available_nxt),16);
        bufp->chgWData(oldp+312,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_s),151);
        bufp->chgSData(oldp+317,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__txnid_from_cc),12);
        bufp->chgBit(oldp+318,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__flit_dmt_en));
        bufp->chgBit(oldp+319,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memwr_req));
        bufp->chgBit(oldp+320,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memrd_req));
        bufp->chgBit(oldp+321,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_data_buff));
        bufp->chgCData(oldp+322,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[0]),4);
        bufp->chgCData(oldp+323,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[1]),4);
        bufp->chgCData(oldp+324,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[2]),4);
        bufp->chgCData(oldp+325,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[3]),4);
        bufp->chgCData(oldp+326,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[4]),4);
        bufp->chgCData(oldp+327,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[5]),4);
        bufp->chgCData(oldp+328,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[6]),4);
        bufp->chgCData(oldp+329,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[7]),4);
        bufp->chgCData(oldp+330,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[8]),4);
        bufp->chgCData(oldp+331,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[9]),4);
        bufp->chgCData(oldp+332,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[10]),4);
        bufp->chgCData(oldp+333,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[11]),4);
        bufp->chgCData(oldp+334,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[12]),4);
        bufp->chgCData(oldp+335,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[13]),4);
        bufp->chgCData(oldp+336,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[14]),4);
        bufp->chgCData(oldp+337,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[15]),4);
        bufp->chgSData(oldp+338,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_bit_nxt),16);
        bufp->chgWData(oldp+339,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[0]),512);
        bufp->chgWData(oldp+355,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[1]),512);
        bufp->chgWData(oldp+371,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[2]),512);
        bufp->chgWData(oldp+387,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[3]),512);
        bufp->chgWData(oldp+403,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[4]),512);
        bufp->chgWData(oldp+419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[5]),512);
        bufp->chgWData(oldp+435,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[6]),512);
        bufp->chgWData(oldp+451,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[7]),512);
        bufp->chgWData(oldp+467,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[8]),512);
        bufp->chgWData(oldp+483,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[9]),512);
        bufp->chgWData(oldp+499,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[10]),512);
        bufp->chgWData(oldp+515,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[11]),512);
        bufp->chgWData(oldp+531,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[12]),512);
        bufp->chgWData(oldp+547,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[13]),512);
        bufp->chgWData(oldp+563,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[14]),512);
        bufp->chgWData(oldp+579,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[15]),512);
        bufp->chgQData(oldp+595,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[0]),64);
        bufp->chgQData(oldp+597,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[1]),64);
        bufp->chgQData(oldp+599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[2]),64);
        bufp->chgQData(oldp+601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[3]),64);
        bufp->chgQData(oldp+603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[4]),64);
        bufp->chgQData(oldp+605,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[5]),64);
        bufp->chgQData(oldp+607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[6]),64);
        bufp->chgQData(oldp+609,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[7]),64);
        bufp->chgQData(oldp+611,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[8]),64);
        bufp->chgQData(oldp+613,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[9]),64);
        bufp->chgQData(oldp+615,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[10]),64);
        bufp->chgQData(oldp+617,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[11]),64);
        bufp->chgQData(oldp+619,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[12]),64);
        bufp->chgQData(oldp+621,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[13]),64);
        bufp->chgQData(oldp+623,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[14]),64);
        bufp->chgQData(oldp+625,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[15]),64);
        bufp->chgBit(oldp+627,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_data_index_buffer));
        bufp->chgBit(oldp+628,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_dbid_buff));
        bufp->chgCData(oldp+629,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[0U] 
                                          >> 0x1aU))),4);
        bufp->chgSData(oldp+630,((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[2U] 
                                             << 0xaU) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U] 
                                               >> 0x16U)))),12);
        bufp->chgSData(oldp+631,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_index_buffer_bit_nxt),16);
        bufp->chgSData(oldp+632,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+633,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+634,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+635,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+636,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+638,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+640,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+641,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+642,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+643,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+645,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+646,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+647,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[15]),12);
        bufp->chgBit(oldp+648,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_buff));
        bufp->chgQData(oldp+649,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd),52);
        bufp->chgIData(oldp+651,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cm_flit_addr_sliced_pm[0]),28);
        bufp->chgSData(oldp+652,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_rdretryack_bufv),16);
        bufp->chgSData(oldp+653,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_wrretryack_bufv),16);
        bufp->chgBit(oldp+654,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__got_retryackresp));
        bufp->chgSData(oldp+655,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__retryack_buf_entry),15);
        bufp->chgSData(oldp+656,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[0]),15);
        bufp->chgSData(oldp+657,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[1]),15);
        bufp->chgSData(oldp+658,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[2]),15);
        bufp->chgSData(oldp+659,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[3]),15);
        bufp->chgSData(oldp+660,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[4]),15);
        bufp->chgSData(oldp+661,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[5]),15);
        bufp->chgSData(oldp+662,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[6]),15);
        bufp->chgSData(oldp+663,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[7]),15);
        bufp->chgSData(oldp+664,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[8]),15);
        bufp->chgSData(oldp+665,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[9]),15);
        bufp->chgSData(oldp+666,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[10]),15);
        bufp->chgSData(oldp+667,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[11]),15);
        bufp->chgSData(oldp+668,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[12]),15);
        bufp->chgSData(oldp+669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[13]),15);
        bufp->chgSData(oldp+670,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[14]),15);
        bufp->chgSData(oldp+671,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[15]),15);
        bufp->chgSData(oldp+672,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[0]),15);
        bufp->chgSData(oldp+673,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[1]),15);
        bufp->chgSData(oldp+674,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[2]),15);
        bufp->chgSData(oldp+675,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[3]),15);
        bufp->chgSData(oldp+676,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[4]),15);
        bufp->chgSData(oldp+677,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[5]),15);
        bufp->chgSData(oldp+678,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[6]),15);
        bufp->chgSData(oldp+679,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[7]),15);
        bufp->chgSData(oldp+680,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[8]),15);
        bufp->chgSData(oldp+681,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[9]),15);
        bufp->chgSData(oldp+682,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[10]),15);
        bufp->chgSData(oldp+683,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[11]),15);
        bufp->chgSData(oldp+684,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[12]),15);
        bufp->chgSData(oldp+685,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[13]),15);
        bufp->chgSData(oldp+686,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[14]),15);
        bufp->chgSData(oldp+687,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[15]),15);
        bufp->chgSData(oldp+688,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_bufv_nxt),16);
        bufp->chgSData(oldp+689,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_bufv_nxt),16);
        bufp->chgBit(oldp+690,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_pcredit_fifo));
        bufp->chgBit(oldp+691,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_pcredit_fifo));
        bufp->chgBit(oldp+692,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_outstand_req_cmo));
        bufp->chgBit(oldp+693,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_slc_rspvalid));
        bufp->chgBit(oldp+694,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_dbidresp));
        bufp->chgBit(oldp+695,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_compdbidresp));
        bufp->chgBit(oldp+696,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_late_comp_resp));
        bufp->chgSData(oldp+697,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_req_sent_nxt),16);
        bufp->chgBit(oldp+698,((3U == (3U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U]))));
        bufp->chgCData(oldp+699,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__wr_ptr_nxt),5);
        bufp->chgCData(oldp+700,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__rd_ptr_nxt),5);
        bufp->chgCData(oldp+701,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt),6);
        bufp->chgBit(oldp+702,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+703,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+704,((2ULL < (0x3ffffffffULL 
                                        & (0x20ULL 
                                           - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt)))))));
        bufp->chgSData(oldp+705,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[0]),15);
        bufp->chgSData(oldp+706,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[1]),15);
        bufp->chgSData(oldp+707,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[2]),15);
        bufp->chgSData(oldp+708,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[3]),15);
        bufp->chgSData(oldp+709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[4]),15);
        bufp->chgSData(oldp+710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[5]),15);
        bufp->chgSData(oldp+711,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[6]),15);
        bufp->chgSData(oldp+712,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[7]),15);
        bufp->chgSData(oldp+713,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[8]),15);
        bufp->chgSData(oldp+714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[9]),15);
        bufp->chgSData(oldp+715,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[10]),15);
        bufp->chgSData(oldp+716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[11]),15);
        bufp->chgSData(oldp+717,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[12]),15);
        bufp->chgSData(oldp+718,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[13]),15);
        bufp->chgSData(oldp+719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[14]),15);
        bufp->chgSData(oldp+720,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[15]),15);
        bufp->chgSData(oldp+721,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[16]),15);
        bufp->chgSData(oldp+722,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[17]),15);
        bufp->chgSData(oldp+723,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[18]),15);
        bufp->chgSData(oldp+724,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[19]),15);
        bufp->chgSData(oldp+725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[20]),15);
        bufp->chgSData(oldp+726,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[21]),15);
        bufp->chgSData(oldp+727,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[22]),15);
        bufp->chgSData(oldp+728,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[23]),15);
        bufp->chgSData(oldp+729,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[24]),15);
        bufp->chgSData(oldp+730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[25]),15);
        bufp->chgSData(oldp+731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[26]),15);
        bufp->chgSData(oldp+732,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[27]),15);
        bufp->chgSData(oldp+733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[28]),15);
        bufp->chgSData(oldp+734,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[29]),15);
        bufp->chgSData(oldp+735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[30]),15);
        bufp->chgSData(oldp+736,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[31]),15);
        bufp->chgBit(oldp+737,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt));
        bufp->chgCData(oldp+738,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_dat__DOT__init_crdt_ctr_nxt),5);
        bufp->chgCData(oldp+739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_rsp__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+740,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+741,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+743,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+744,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+745,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+746,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+747,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+748,((2ULL < (0x3ffffffffULL 
                                        & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+749,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),680);
        bufp->chgWData(oldp+771,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),680);
        bufp->chgWData(oldp+793,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),680);
        bufp->chgWData(oldp+815,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),680);
        bufp->chgWData(oldp+837,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),680);
        bufp->chgWData(oldp+859,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),680);
        bufp->chgWData(oldp+881,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),680);
        bufp->chgWData(oldp+903,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),680);
        bufp->chgBit(oldp+925,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+926,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+927,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+928,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+929,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+930,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+931,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+932,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+933,((2ULL < (0x3ffffffffULL 
                                        & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+934,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),151);
        bufp->chgWData(oldp+939,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),151);
        bufp->chgWData(oldp+944,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),151);
        bufp->chgWData(oldp+949,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),151);
        bufp->chgWData(oldp+954,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),151);
        bufp->chgWData(oldp+959,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),151);
        bufp->chgWData(oldp+964,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),151);
        bufp->chgWData(oldp+969,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),151);
        bufp->chgBit(oldp+974,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+975,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+976,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+977,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+978,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+979,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+980,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+981,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+982,((2ULL < (0x3ffffffffULL 
                                        & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+983,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+986,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+989,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+992,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+995,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
        bufp->chgWData(oldp+998,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
        bufp->chgWData(oldp+1001,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
        bufp->chgWData(oldp+1004,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
        bufp->chgCData(oldp+1007,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+1008,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_req__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+1009,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgIData(oldp+1010,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dealloc_compfifo_vector_compdata),32);
        bufp->chgBit(oldp+1011,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_reqcmdq));
        bufp->chgBit(oldp+1012,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_respcmdq));
        bufp->chgWData(oldp+1013,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_respcmdq),74);
        bufp->chgWData(oldp+1016,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_memrespcmdq),109);
        bufp->chgBit(oldp+1020,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid));
        bufp->chgBit(oldp+1021,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_dataflit));
        bufp->chgIData(oldp+1022,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_outstand_prep),32);
        bufp->chgBit(oldp+1023,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_unused_compbuff_num));
        bufp->chgBit(oldp+1024,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st));
        bufp->chgBit(oldp+1025,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd));
        bufp->chgBit(oldp+1026,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__en_compbuf_2nd_for_snpdata));
        bufp->chgBit(oldp+1027,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__block_compbuf_available));
        bufp->chgBit(oldp+1028,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st) 
                                 | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd))));
        bufp->chgBit(oldp+1029,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq));
        bufp->chgBit(oldp+1030,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_nodeid_valid));
        bufp->chgSData(oldp+1031,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_full_node_id),11);
        bufp->chgSData(oldp+1032,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_rsp_dat_linear_srcid),11);
        bufp->chgSData(oldp+1033,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__xmt_snpreq_full_srcid),11);
        bufp->chgBit(oldp+1034,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_copyback_nocopyback));
        bufp->chgBit(oldp+1035,((7U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                                >> 0x11U)))));
        bufp->chgBit(oldp+1036,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_snprespdata));
        bufp->chgBit(oldp+1037,((4U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                                >> 0x11U)))));
        bufp->chgBit(oldp+1038,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_valid));
        bufp->chgCData(oldp+1039,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__sig_chi_crdt_update_datproc__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+1040,(((3U == (0x7fU & ((
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
        bufp->chgBit(oldp+1041,(((0x15U == (0x7fU & 
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
        bufp->chgBit(oldp+1042,((4U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU))))));
        bufp->chgBit(oldp+1043,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_nonsnpable));
        bufp->chgBit(oldp+1044,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable));
        bufp->chgBit(oldp+1045,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable));
        bufp->chgBit(oldp+1046,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_non_snpable));
        bufp->chgCData(oldp+1047,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__req_is_atmo),3);
        bufp->chgBit(oldp+1048,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_atomtxn));
        bufp->chgBit(oldp+1049,((((0x54U == (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
        bufp->chgBit(oldp+1050,(((0x54U == (0x7fU & 
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
                                                       >> 0x1eU))))))))));
        bufp->chgIData(oldp+1051,((0xfffffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U])),28);
        bufp->chgSData(oldp+1052,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_addr_match_vec),16);
        bufp->chgCData(oldp+1053,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[0]),4);
        bufp->chgCData(oldp+1054,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[1]),4);
        bufp->chgCData(oldp+1055,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[2]),4);
        bufp->chgCData(oldp+1056,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[3]),4);
        bufp->chgCData(oldp+1057,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[4]),4);
        bufp->chgCData(oldp+1058,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[5]),4);
        bufp->chgCData(oldp+1059,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[6]),4);
        bufp->chgCData(oldp+1060,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[7]),4);
        bufp->chgCData(oldp+1061,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[8]),4);
        bufp->chgCData(oldp+1062,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[9]),4);
        bufp->chgCData(oldp+1063,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[10]),4);
        bufp->chgCData(oldp+1064,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[11]),4);
        bufp->chgCData(oldp+1065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[12]),4);
        bufp->chgCData(oldp+1066,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[13]),4);
        bufp->chgCData(oldp+1067,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[14]),4);
        bufp->chgCData(oldp+1068,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[15]),4);
        bufp->chgBit(oldp+1069,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp));
        bufp->chgBit(oldp+1070,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wren_reqfifo));
        bufp->chgBit(oldp+1071,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__rden_reqfifo));
        bufp->chgWData(oldp+1072,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wrdata_reqfifo),151);
        bufp->chgWData(oldp+1077,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed),151);
        bufp->chgBit(oldp+1082,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict));
        bufp->chgWData(oldp+1083,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit),151);
        __Vtemp_3[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[0U];
        __Vtemp_3[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[1U];
        __Vtemp_3[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[2U];
        __Vtemp_3[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U];
        __Vtemp_3[4U] = (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable) 
                          << 0x18U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable) 
                                        << 0x17U) | 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U]));
        bufp->chgWData(oldp+1088,(__Vtemp_3),153);
        bufp->chgBit(oldp+1093,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__placeholder_state_n));
        bufp->chgCData(oldp+1094,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__wr_ptr_nxt),4);
        bufp->chgCData(oldp+1095,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt),4);
        bufp->chgCData(oldp+1096,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt),5);
        bufp->chgBit(oldp+1097,((0x10U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1098,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1099,((2ULL < (0x3ffffffffULL 
                                         & (0x10ULL 
                                            - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1100,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[0]),151);
        bufp->chgWData(oldp+1105,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[1]),151);
        bufp->chgWData(oldp+1110,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[2]),151);
        bufp->chgWData(oldp+1115,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[3]),151);
        bufp->chgWData(oldp+1120,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[4]),151);
        bufp->chgWData(oldp+1125,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[5]),151);
        bufp->chgWData(oldp+1130,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[6]),151);
        bufp->chgWData(oldp+1135,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[7]),151);
        bufp->chgWData(oldp+1140,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[8]),151);
        bufp->chgWData(oldp+1145,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[9]),151);
        bufp->chgWData(oldp+1150,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[10]),151);
        bufp->chgWData(oldp+1155,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[11]),151);
        bufp->chgWData(oldp+1160,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[12]),151);
        bufp->chgWData(oldp+1165,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[13]),151);
        bufp->chgWData(oldp+1170,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[14]),151);
        bufp->chgWData(oldp+1175,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[15]),151);
        bufp->chgBit(oldp+1180,(((1U == (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
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
        bufp->chgBit(oldp+1181,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom) 
                                 | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3))));
        bufp->chgWData(oldp+1182,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT),73);
        bufp->chgCData(oldp+1185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+1186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_2nd_compbuff_num));
        bufp->chgBit(oldp+1187,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_1st_compbuff));
        bufp->chgBit(oldp+1188,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_2nd_compbuff));
        bufp->chgBit(oldp+1189,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__swap_1st_and_2nd_compbuff));
        bufp->chgBit(oldp+1190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__req_resp_compdata_nxt));
        bufp->chgIData(oldp+1191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_outstand_cmd_pre),32);
        bufp->chgBit(oldp+1192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_memdata));
        bufp->chgBit(oldp+1193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flag_memwr_allbe_zero_nxt));
        bufp->chgBit(oldp+1194,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__make_be_allzero_memwr));
        bufp->chgBit(oldp+1195,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq_prep));
        bufp->chgBit(oldp+1196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_collnreg_sending_ini_pre));
        bufp->chgBit(oldp+1197,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flittype_rdnosnp_l3));
        bufp->chgBit(oldp+1198,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__xmt_datflit_resperr_nxt));
        bufp->chgBit(oldp+1199,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__compbuf_available));
        bufp->chgIData(oldp+1200,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__outstand_prep_valid_nxt),32);
        bufp->chgWData(oldp+1202,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__wrdata_stat_common_ph3_rsp),136);
        __Vtemp_14[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[0U];
        __Vtemp_14[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[1U];
        __Vtemp_14[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[2U];
        __Vtemp_14[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[3U];
        __Vtemp_14[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[4U]);
        __Vtemp_14[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[1U] 
                                        << 8U));
        __Vtemp_14[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[2U] 
                                        << 8U));
        __Vtemp_14[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[3U] 
                                        << 8U));
        __Vtemp_14[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[4U] 
                                           << 8U)));
        __Vtemp_14[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[1U] 
                                        << 0x10U));
        __Vtemp_14[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[2U] 
                                          << 0x10U));
        __Vtemp_14[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[3U] 
                                          << 0x10U));
        __Vtemp_14[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_14[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_14[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_14[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_14[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[4U] 
                                 << 0x18U)));
        __Vtemp_14[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[0U];
        __Vtemp_14[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[1U];
        __Vtemp_14[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[2U];
        __Vtemp_14[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[3U];
        __Vtemp_14[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[0U] 
                              << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[4U]);
        __Vtemp_14[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[0U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[1U] 
                                           << 8U));
        __Vtemp_14[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[1U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[2U] 
                                           << 8U));
        __Vtemp_14[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[2U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[3U] 
                                           << 8U));
        __Vtemp_14[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[0U] 
                              << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[3U] 
                                            >> 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[4U] 
                                              << 8U)));
        __Vtemp_14[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[0U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[1U] 
                                           << 0x10U));
        __Vtemp_14[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[1U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[2U] 
                                           << 0x10U));
        __Vtemp_14[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[2U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[3U] 
                                           << 0x10U));
        __Vtemp_14[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[3U] 
                              >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                            << 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                              << 0x10U)));
        __Vtemp_14[0x1eU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                          >> 8U)) | 
                              (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                               >> 0x10U)) | ((0xff0000U 
                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                                 >> 8U)) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                                << 0x18U)));
        __Vtemp_14[0x1fU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                 << 0x18U)));
        __Vtemp_14[0x20U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                 << 0x18U)));
        __Vtemp_14[0x21U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[4U] 
                                 << 0x18U)));
        __Vtemp_14[0x22U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[0U];
        __Vtemp_14[0x23U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[1U];
        __Vtemp_14[0x24U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[2U];
        __Vtemp_14[0x25U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[3U];
        __Vtemp_14[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[0U] 
                              << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[4U]);
        __Vtemp_14[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[0U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[1U] 
                                           << 8U));
        __Vtemp_14[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[1U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[2U] 
                                           << 8U));
        __Vtemp_14[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[2U] 
                              >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[3U] 
                                           << 8U));
        __Vtemp_14[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[0U] 
                              << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[3U] 
                                            >> 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[4U] 
                                              << 8U)));
        __Vtemp_14[0x2bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[0U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[1U] 
                                           << 0x10U));
        __Vtemp_14[0x2cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[1U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[2U] 
                                           << 0x10U));
        __Vtemp_14[0x2dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[2U] 
                              >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[3U] 
                                           << 0x10U));
        __Vtemp_14[0x2eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[3U] 
                              >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                            << 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                              << 0x10U)));
        __Vtemp_14[0x2fU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                          >> 8U)) | 
                              (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                               >> 0x10U)) | ((0xff0000U 
                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                                 >> 8U)) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                                << 0x18U)));
        __Vtemp_14[0x30U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                 << 0x18U)));
        __Vtemp_14[0x31U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                 << 0x18U)));
        __Vtemp_14[0x32U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[4U] 
                                 << 0x18U)));
        __Vtemp_17[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[0U];
        __Vtemp_17[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[1U];
        __Vtemp_17[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[2U];
        __Vtemp_17[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[3U];
        __Vtemp_17[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[4U]);
        __Vtemp_17[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[1U] 
                                        << 8U));
        __Vtemp_17[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[2U] 
                                        << 8U));
        __Vtemp_17[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[3U] 
                                        << 8U));
        __Vtemp_17[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[4U] 
                                           << 8U)));
        __Vtemp_17[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[1U] 
                                        << 0x10U));
        __Vtemp_17[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[2U] 
                                          << 0x10U));
        __Vtemp_17[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[3U] 
                                          << 0x10U));
        __Vtemp_17[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_17[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_17[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_17[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_17[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(2176,1632,544, __Vtemp_18, __Vtemp_14, __Vtemp_17);
        __Vtemp_21[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[0U];
        __Vtemp_21[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[1U];
        __Vtemp_21[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[2U];
        __Vtemp_21[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[3U];
        __Vtemp_21[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[4U]);
        __Vtemp_21[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[1U] 
                                        << 8U));
        __Vtemp_21[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[2U] 
                                        << 8U));
        __Vtemp_21[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[3U] 
                                        << 8U));
        __Vtemp_21[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[4U] 
                                           << 8U)));
        __Vtemp_21[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[1U] 
                                        << 0x10U));
        __Vtemp_21[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[2U] 
                                          << 0x10U));
        __Vtemp_21[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[3U] 
                                          << 0x10U));
        __Vtemp_21[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_21[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_21[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_21[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_21[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(2720,2176,544, __Vtemp_22, __Vtemp_18, __Vtemp_21);
        __Vtemp_25[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[0U];
        __Vtemp_25[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[1U];
        __Vtemp_25[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[2U];
        __Vtemp_25[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[3U];
        __Vtemp_25[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[4U]);
        __Vtemp_25[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[1U] 
                                        << 8U));
        __Vtemp_25[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[2U] 
                                        << 8U));
        __Vtemp_25[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[3U] 
                                        << 8U));
        __Vtemp_25[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[4U] 
                                           << 8U)));
        __Vtemp_25[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[1U] 
                                        << 0x10U));
        __Vtemp_25[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[2U] 
                                          << 0x10U));
        __Vtemp_25[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[3U] 
                                          << 0x10U));
        __Vtemp_25[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_25[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_25[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_25[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_25[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(3264,2720,544, __Vtemp_26, __Vtemp_22, __Vtemp_25);
        __Vtemp_29[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[0U];
        __Vtemp_29[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[1U];
        __Vtemp_29[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[2U];
        __Vtemp_29[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[3U];
        __Vtemp_29[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[4U]);
        __Vtemp_29[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[1U] 
                                        << 8U));
        __Vtemp_29[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[2U] 
                                        << 8U));
        __Vtemp_29[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[3U] 
                                        << 8U));
        __Vtemp_29[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[4U] 
                                           << 8U)));
        __Vtemp_29[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[1U] 
                                        << 0x10U));
        __Vtemp_29[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[2U] 
                                          << 0x10U));
        __Vtemp_29[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[3U] 
                                          << 0x10U));
        __Vtemp_29[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_29[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_29[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_29[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_29[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(3808,3264,544, __Vtemp_30, __Vtemp_26, __Vtemp_29);
        __Vtemp_33[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[0U];
        __Vtemp_33[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[1U];
        __Vtemp_33[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[2U];
        __Vtemp_33[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[3U];
        __Vtemp_33[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[0U] 
                           << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[4U]);
        __Vtemp_33[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[0U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[1U] 
                                        << 8U));
        __Vtemp_33[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[1U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[2U] 
                                        << 8U));
        __Vtemp_33[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[2U] 
                           >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[3U] 
                                        << 8U));
        __Vtemp_33[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[0U] 
                           << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[3U] 
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[4U] 
                                           << 8U)));
        __Vtemp_33[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[0U] 
                           >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[1U] 
                                        << 0x10U));
        __Vtemp_33[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[1U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[2U] 
                                          << 0x10U));
        __Vtemp_33[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[2U] 
                             >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[3U] 
                                          << 0x10U));
        __Vtemp_33[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[3U] 
                             >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_33[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_33[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_33[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_33[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(4352,3808,544, __Vtemp_34, __Vtemp_30, __Vtemp_33);
        bufp->chgWData(oldp+1207,(__Vtemp_34),4352);
        bufp->chgCData(oldp+1343,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_ownerp_id_ph3_rsp),7);
        bufp->chgIData(oldp+1344,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_share_vect_rsp_m_ph3),22);
        bufp->chgCData(oldp+1345,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_inactive_st_nxt),2);
        bufp->chgSData(oldp+1346,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__inactive_ctr_nxt),16);
        bufp->chgCData(oldp+1347,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+1348,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__wr_ptr_nxt),5);
        bufp->chgCData(oldp+1349,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt),6);
        bufp->chgBit(oldp+1350,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1351,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1352,((2ULL < (0x3ffffffffULL 
                                         & (0x20ULL 
                                            - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1353,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[0]),74);
        bufp->chgWData(oldp+1356,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[1]),74);
        bufp->chgWData(oldp+1359,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[2]),74);
        bufp->chgWData(oldp+1362,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[3]),74);
        bufp->chgWData(oldp+1365,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[4]),74);
        bufp->chgWData(oldp+1368,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[5]),74);
        bufp->chgWData(oldp+1371,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[6]),74);
        bufp->chgWData(oldp+1374,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[7]),74);
        bufp->chgWData(oldp+1377,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[8]),74);
        bufp->chgWData(oldp+1380,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[9]),74);
        bufp->chgWData(oldp+1383,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[10]),74);
        bufp->chgWData(oldp+1386,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[11]),74);
        bufp->chgWData(oldp+1389,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[12]),74);
        bufp->chgWData(oldp+1392,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[13]),74);
        bufp->chgWData(oldp+1395,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[14]),74);
        bufp->chgWData(oldp+1398,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[15]),74);
        bufp->chgWData(oldp+1401,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[16]),74);
        bufp->chgWData(oldp+1404,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[17]),74);
        bufp->chgWData(oldp+1407,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[18]),74);
        bufp->chgWData(oldp+1410,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[19]),74);
        bufp->chgWData(oldp+1413,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[20]),74);
        bufp->chgWData(oldp+1416,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[21]),74);
        bufp->chgWData(oldp+1419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[22]),74);
        bufp->chgWData(oldp+1422,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[23]),74);
        bufp->chgWData(oldp+1425,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[24]),74);
        bufp->chgWData(oldp+1428,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[25]),74);
        bufp->chgWData(oldp+1431,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[26]),74);
        bufp->chgWData(oldp+1434,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[27]),74);
        bufp->chgWData(oldp+1437,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[28]),74);
        bufp->chgWData(oldp+1440,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[29]),74);
        bufp->chgWData(oldp+1443,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[30]),74);
        bufp->chgWData(oldp+1446,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[31]),74);
        bufp->chgIData(oldp+1449,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo),32);
        bufp->chgIData(oldp+1450,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf),32);
        bufp->chgBit(oldp+1451,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo)));
        bufp->chgBit(oldp+1452,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf)));
        bufp->chgBit(oldp+1453,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1454,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1455,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1456,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1457,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1458,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1459,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1460,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1461,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1462,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1463,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1464,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1465,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1466,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1467,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1468,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1469,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1470,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1471,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1472,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1473,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 1U))));
        bufp->chgBit(oldp+1474,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 1U))));
        bufp->chgBit(oldp+1475,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1476,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1477,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1478,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1479,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1480,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1481,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1482,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1483,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1484,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1485,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1486,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1487,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1488,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1489,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1490,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1491,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1492,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1493,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1494,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1495,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 2U))));
        bufp->chgBit(oldp+1496,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 2U))));
        bufp->chgBit(oldp+1497,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1498,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1499,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1500,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1501,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 3U))));
        bufp->chgBit(oldp+1502,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 3U))));
        bufp->chgBit(oldp+1503,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 4U))));
        bufp->chgBit(oldp+1504,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 4U))));
        bufp->chgBit(oldp+1505,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 5U))));
        bufp->chgBit(oldp+1506,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 5U))));
        bufp->chgBit(oldp+1507,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 6U))));
        bufp->chgBit(oldp+1508,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 6U))));
        bufp->chgBit(oldp+1509,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 7U))));
        bufp->chgBit(oldp+1510,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 7U))));
        bufp->chgBit(oldp+1511,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 8U))));
        bufp->chgBit(oldp+1512,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 8U))));
        bufp->chgBit(oldp+1513,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 9U))));
        bufp->chgBit(oldp+1514,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 9U))));
        bufp->chgCData(oldp+1515,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_idx),5);
        bufp->chgBit(oldp+1516,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_node_id_found));
        bufp->chgIData(oldp+1517,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_vector),22);
        bufp->chgIData(oldp+1518,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_rsp_dat_nodeid_match_vector),22);
        bufp->chgIData(oldp+1519,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+1520,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+1521,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgBit(oldp+1522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1523,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1524,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1525,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+1526,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+1527,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+1528,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1529,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1530,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1531,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
        bufp->chgWData(oldp+1553,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
        bufp->chgWData(oldp+1575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
        bufp->chgWData(oldp+1597,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
        bufp->chgWData(oldp+1619,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),686);
        bufp->chgWData(oldp+1641,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),686);
        bufp->chgWData(oldp+1663,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),686);
        bufp->chgWData(oldp+1685,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),686);
        bufp->chgBit(oldp+1707,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1708,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+1711,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+1712,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+1713,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1714,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1715,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+1719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+1722,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+1725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+1728,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
        bufp->chgWData(oldp+1731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
        bufp->chgWData(oldp+1734,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
        bufp->chgWData(oldp+1737,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
        bufp->chgBit(oldp+1740,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_txn_valid));
        bufp->chgBit(oldp+1741,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_init_valid));
        bufp->chgBit(oldp+1742,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_from_ap.ready));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x31U]))) {
        bufp->chgBit(oldp+1743,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__rden_dircache_nxt));
        bufp->chgBit(oldp+1744,((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
        bufp->chgSData(oldp+1745,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc),10);
        bufp->chgSData(oldp+1746,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector),16);
        bufp->chgBit(oldp+1747,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
        bufp->chgWData(oldp+1748,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1780,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgWData(oldp+1781,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT____Vcellinp__sig_sram_valid_tag_data__wrdata),69);
        bufp->chgBit(oldp+1784,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xaU))));
        bufp->chgWData(oldp+1785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1817,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1818,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xbU))));
        bufp->chgWData(oldp+1819,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1851,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1852,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xcU))));
        bufp->chgWData(oldp+1853,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1885,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1886,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xdU))));
        bufp->chgWData(oldp+1887,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1919,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1920,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xeU))));
        bufp->chgWData(oldp+1921,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1953,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1954,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xfU))));
        bufp->chgWData(oldp+1955,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+1987,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+1988,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 1U))));
        bufp->chgWData(oldp+1989,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2021,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2022,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 2U))));
        bufp->chgWData(oldp+2023,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2055,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2056,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 3U))));
        bufp->chgWData(oldp+2057,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2089,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2090,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 4U))));
        bufp->chgWData(oldp+2091,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2123,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2124,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 5U))));
        bufp->chgWData(oldp+2125,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2157,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2158,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 6U))));
        bufp->chgWData(oldp+2159,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2192,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 7U))));
        bufp->chgWData(oldp+2193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2225,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2226,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 8U))));
        bufp->chgWData(oldp+2227,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2259,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+2260,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 9U))));
        bufp->chgWData(oldp+2261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+2293,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgSData(oldp+2294,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__cacheproc_state_nxt),13);
        bufp->chgSData(oldp+2295,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_one_nxt),16);
        bufp->chgBit(oldp+2296,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_cycle_nxt));
        bufp->chgCData(oldp+2297,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__count_evict_nxt),3);
        bufp->chgBit(oldp+2298,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_fetch_cohc_nxt));
        bufp->chgBit(oldp+2299,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__first_cycle_in_evictend_nxt));
        bufp->chgBit(oldp+2300,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_rden_cache));
        bufp->chgBit(oldp+2301,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated));
        bufp->chgBit(oldp+2302,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x32U]))) {
        bufp->chgWData(oldp+2303,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc0),686);
        bufp->chgWData(oldp+2325,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc1),686);
        bufp->chgWData(oldp+2347,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc0_from_id_translator),680);
        bufp->chgWData(oldp+2369,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc1_from_id_translator),680);
        bufp->chgBit(oldp+2391,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled));
        bufp->chgBit(oldp+2392,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x33U]))) {
        bufp->chgBit(oldp+2393,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive));
        bufp->chgBit(oldp+2394,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive_sync));
        bufp->chgBit(oldp+2395,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_reg));
        bufp->chgCData(oldp+2396,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                    << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                              << 1U))),4);
        bufp->chgBit(oldp+2397,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__inst_cc_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+2398,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+2399,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+2400,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_cl0_ic_clk__DOT__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__DOT__sig_src_sync1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x3eU]))) {
        bufp->chgWData(oldp+2401,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
        bufp->chgWData(oldp+2406,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s),680);
        __Vtemp_35[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[0U];
        __Vtemp_35[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[1U];
        __Vtemp_35[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[2U];
        __Vtemp_35[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[3U];
        __Vtemp_35[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[4U]);
        bufp->chgWData(oldp+2428,(__Vtemp_35),152);
        bufp->chgWData(oldp+2433,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrd_req_s),151);
        bufp->chgWData(oldp+2438,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memwr_req_s),151);
        bufp->chgSData(oldp+2443,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__tgt_pm_node_id),11);
        bufp->chgWData(oldp+2444,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0U]),151);
        bufp->chgWData(oldp+2449,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [1U]),151);
        bufp->chgWData(oldp+2454,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [2U]),151);
        bufp->chgWData(oldp+2459,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [3U]),151);
        bufp->chgWData(oldp+2464,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [4U]),151);
        bufp->chgWData(oldp+2469,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [5U]),151);
        bufp->chgWData(oldp+2474,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [6U]),151);
        bufp->chgWData(oldp+2479,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [7U]),151);
        bufp->chgWData(oldp+2484,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [8U]),151);
        bufp->chgWData(oldp+2489,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [9U]),151);
        bufp->chgWData(oldp+2494,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xaU]),151);
        bufp->chgWData(oldp+2499,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xbU]),151);
        bufp->chgWData(oldp+2504,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xcU]),151);
        bufp->chgWData(oldp+2509,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xdU]),151);
        bufp->chgWData(oldp+2514,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xeU]),151);
        bufp->chgWData(oldp+2519,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xfU]),151);
        bufp->chgWData(oldp+2524,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_reqcmdq),156);
        bufp->chgBit(oldp+2529,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm));
        bufp->chgBit(oldp+2530,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm));
        bufp->chgBit(oldp+2531,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                       & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))))));
        bufp->chgWData(oldp+2532,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[0]),156);
        bufp->chgWData(oldp+2537,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[1]),156);
        bufp->chgWData(oldp+2542,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[2]),156);
        bufp->chgWData(oldp+2547,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[3]),156);
        bufp->chgWData(oldp+2552,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[4]),156);
        bufp->chgWData(oldp+2557,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[5]),156);
        bufp->chgWData(oldp+2562,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[6]),156);
        bufp->chgWData(oldp+2567,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[7]),156);
        bufp->chgBit(oldp+2572,((8U > (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
        bufp->chgBit(oldp+2573,((8U <= (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
        bufp->chgBit(oldp+2574,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc0));
        bufp->chgBit(oldp+2575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc1));
    }
    bufp->chgBit(oldp+2576,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->chgBit(oldp+2577,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE) 
                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->chgBit(oldp+2578,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->chgBit(oldp+2579,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+2580,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk));
    bufp->chgBit(oldp+2581,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+2582,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk));
    bufp->chgCData(oldp+2583,(((8U & ((~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
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
    bufp->chgCData(oldp+2584,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk) 
                                << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk) 
                                          << 1U))),4);
    bufp->chgCData(oldp+2585,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_rx_intfc_gclk),4);
    bufp->chgCData(oldp+2586,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_tx_intfc_gclk),4);
    bufp->chgBit(oldp+2587,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__activate_cc_l3_or_mn));
    bufp->chgBit(oldp+2588,(((((((0U != (0x1ffU & (
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
    bufp->chgBit(oldp+2589,(((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc0_rx_hs.recv_req)) 
                               | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc1_rx_hs.recv_req))) 
                              | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_req))) 
                             | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_req)))));
    bufp->chgBit(oldp+2590,((1U & ((~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))) 
                                   & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send))))))));
    bufp->chgBit(oldp+2591,((1U & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                      | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->chgBit(oldp+2592,((1U & (~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                      | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->chgBit(oldp+2593,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_RSPLCRDV));
    bufp->chgBit(oldp+2594,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->chgBit(oldp+2595,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo_bypass)
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
    bufp->chgBit(oldp+2596,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo_bypass)
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
    bufp->chgBit(oldp+2597,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+2598,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update));
    bufp->chgCData(oldp+2599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__credits_cnt_nxt),5);
    bufp->chgCData(oldp+2600,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__init_crdt_ctr_nxt),5);
    bufp->chgBit(oldp+2601,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+2602,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgCData(oldp+2603,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407)))))),5);
    bufp->chgBit(oldp+2604,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->chgBit(oldp+2605,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->chgSData(oldp+2606,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))),10);
    bufp->chgSData(oldp+2607,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))),10);
    bufp->chgBit(oldp+2608,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+2609,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))))));
    bufp->chgSData(oldp+2610,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))),10);
    bufp->chgSData(oldp+2611,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))),10);
    bufp->chgCData(oldp+2612,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+2613,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_1st) 
                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_2nd))));
    if (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__snp_tx_snpflitv) {
        __Vtemp_37[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[0U];
        __Vtemp_37[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[1U];
        __Vtemp_37[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[2U];
        __Vtemp_37[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[3U];
        __Vtemp_37[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[4U];
    } else {
        __Vtemp_37[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[0U];
        __Vtemp_37[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[1U];
        __Vtemp_37[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[2U];
        __Vtemp_37[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[3U];
        __Vtemp_37[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[4U]);
    }
    bufp->chgWData(oldp+2614,(__Vtemp_37),152);
    bufp->chgBit(oldp+2619,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                       >> 7U)) | ((~ 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                                    >> 7U)) 
                                                  & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)))))));
    bufp->chgBit(oldp+2620,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                    & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))) 
                                   | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                       & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                          >> 7U)) | 
                                      ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                           >> 7U)) 
                                       & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm))))))));
    bufp->chgBit(oldp+2621,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update)))));
    bufp->chgBit(oldp+2622,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update))));
    bufp->chgBit(oldp+2623,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update)))));
    bufp->chgBit(oldp+2624,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update))));
    bufp->chgCData(oldp+2625,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_resp_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->chgBit(oldp+2626,((1U & ((~ ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                       | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3reqflit_fifo_full) 
                                          | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cc_reqflit_valid_compdata)))) 
                                   | ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                      & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid)) 
                                         & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__available_credits))))))));
    bufp->chgCData(oldp+2627,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->chgBit(oldp+2628,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc
                                              [vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__rd_ptr][2U] 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+2629,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__sel_winner_entry[2U] 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+2630,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmdvalid_evict)
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__evict_req_s[2U]
                                                : vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmd[2U]) 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+2631,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->chgSData(oldp+2632,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2),11);
    bufp->chgBit(oldp+2633,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->chgSData(oldp+2634,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2),11);
    bufp->chgSData(oldp+2635,(((0x80U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req[4U])
                                ? (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2)
                                : (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2))),11);
    bufp->chgCData(oldp+2636,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated) 
                                << 2U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_collnq_gated) 
                                           << 1U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated)))),3);
    bufp->chgBit(oldp+2637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_is_inactive_nxt));
    bufp->chgCData(oldp+2638,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                          << 1U))),4);
    bufp->chgBit(oldp+2639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+2640,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2641,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2642,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2643,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+2645,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2646,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2647,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+2648,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+2649,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+2650,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo_bypass)
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
    bufp->chgBit(oldp+2651,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                    >> 3U))) 
                             & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->chgBit(oldp+2652,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                             == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->chgBit(oldp+2653,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo_bypass)
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
    bufp->chgBit(oldp+2654,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                    >> 3U))) 
                             & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->chgBit(oldp+2655,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                             == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->chgBit(oldp+2656,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgCData(oldp+2657,((3U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
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
    bufp->chgBit(oldp+2658,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__tgt_clusterid_fifoout)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__assert_req))));
    bufp->chgBit(oldp+2659,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[0U] 
                                       >> 4U) : (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 4U)))));
    bufp->chgCData(oldp+2660,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410)))))),5);
    bufp->chgBit(oldp+2661,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+2662,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2663,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2664,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+2665,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+2666,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->chgBit(oldp+2667,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->chgBit(oldp+2668,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->chgSData(oldp+2669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgSData(oldp+2670,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgBit(oldp+2671,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+2672,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+2673,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+2674,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+2675,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                               << 6U) 
                                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))) 
                                   == (0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                 >> 1U)))))));
    bufp->chgBit(oldp+2676,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgCData(oldp+2677,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2678,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2679,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+2680,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->chgBit(oldp+2681,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->chgCData(oldp+2682,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->chgCData(oldp+2683,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+2684,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+2685,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+2686,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+2687,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+2688,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+2689,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2690,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2691,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412)))))),5);
    bufp->chgBit(oldp+2692,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+2693,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2694,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2695,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+2696,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+2697,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+2698,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgCData(oldp+2699,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->chgBit(oldp+2700,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+2701,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+2702,((2ULL < (0x3ffffffffULL 
                                     & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->chgBit(oldp+2703,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+2704,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2705,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2706,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))),10);
    __Vtemp_46[0U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_SNPLCRDV));
    __Vtemp_46[1U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                                    << 1U));
    __Vtemp_46[2U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                                    << 1U));
    __Vtemp_46[3U] = ((0xffffe000U & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp) 
                                       << 0xeU) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflitv_from_tx_top) 
                                                   << 0xdU))) 
                      | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                          >> 0x1fU) | (0x1ffeU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[3U] 
                                                  << 1U))));
    bufp->chgWData(oldp+2707,(__Vtemp_46),111);
    bufp->chgCData(oldp+2711,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE))),2);
    bufp->chgSData(oldp+2712,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                          >> 0x1aU))
                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                 >> 0x1aU)] : 0U)),12);
    bufp->chgSData(oldp+2713,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                          >> 0x1aU))
                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                 >> 0x1aU)] : 0U)),12);
    bufp->chgSData(oldp+2714,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
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
    bufp->chgSData(oldp+2715,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
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
    bufp->chgSData(oldp+2716,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
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
    bufp->chgSData(oldp+2717,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
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
    bufp->chgBit(oldp+2718,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__flitv_out_mux) 
                             | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__unused_signal) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__TX_DATFLITV_mux)))));
    bufp->chgBit(oldp+2719,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_addr_translator_0__DOT__addr_translator_enabled__DOT__unused_signal))));
    bufp->chgBit(oldp+2720,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc0_dat_rsp_cntr));
    bufp->chgBit(oldp+2721,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc1_dat_rsp_cntr));
    bufp->chgSData(oldp+2722,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_dat_idx_to_clr),12);
    bufp->chgSData(oldp+2723,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_dat_idx_to_clr),12);
    bufp->chgCData(oldp+2724,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2726,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+2727,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+2728,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+2729,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+2730,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+2731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+2732,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+2733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2734,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+2735,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3425))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3425)))))),5);
    bufp->chgBit(oldp+2736,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+2737,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2738,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2739,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+2740,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+2741,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+2742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgBit(oldp+2743,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+2744,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+2745,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+2746,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))),10);
    bufp->chgBit(oldp+2747,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.vld_send));
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
    while ((__Vilp1 <= 0x60U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
