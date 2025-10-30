// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsig_topology_top__Syms.h"


VL_ATTR_COLD void Vsig_topology_top___024root__trace_full_0_sub_4(Vsig_topology_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_full_0_sub_4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+42544,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+42545,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
    bufp->fullBit(oldp+42550,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullBit(oldp+42551,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__send_datacrdt_update));
    bufp->fullWData(oldp+42552,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s),680);
    bufp->fullBit(oldp+42574,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_req_crdt));
    bufp->fullBit(oldp+42575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+42576,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s),680);
    bufp->fullBit(oldp+42598,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__update_rsp_crdt));
    bufp->fullWData(oldp+42599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s),73);
    bufp->fullBit(oldp+42602,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_dat_crdt));
    bufp->fullBit(oldp+42603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3));
    bufp->fullWData(oldp+42604,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__slc_rspflit_s),73);
    bufp->fullBit(oldp+42607,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3)))));
    bufp->fullBit(oldp+42608,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff));
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
    bufp->fullWData(oldp+42609,(__Vtemp_1),512);
    bufp->fullCData(oldp+42625,((3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[1U] 
                                       >> 0x15U))),2);
    bufp->fullBit(oldp+42626,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff)))));
    bufp->fullBit(oldp+42627,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_reqflit_fifo));
    bufp->fullCData(oldp+42628,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cmdproc_st_nxt),2);
    bufp->fullBit(oldp+42629,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff));
    bufp->fullSData(oldp+42630,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_bit_available_nxt),16);
    bufp->fullCData(oldp+42631,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_selected_nxt),4);
    bufp->fullSData(oldp+42632,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_rd_txnid_buff),16);
    bufp->fullSData(oldp+42633,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[0]),12);
    bufp->fullSData(oldp+42634,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[1]),12);
    bufp->fullSData(oldp+42635,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[2]),12);
    bufp->fullSData(oldp+42636,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[3]),12);
    bufp->fullSData(oldp+42637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[4]),12);
    bufp->fullSData(oldp+42638,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[5]),12);
    bufp->fullSData(oldp+42639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[6]),12);
    bufp->fullSData(oldp+42640,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[7]),12);
    bufp->fullSData(oldp+42641,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[8]),12);
    bufp->fullSData(oldp+42642,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[9]),12);
    bufp->fullSData(oldp+42643,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[10]),12);
    bufp->fullSData(oldp+42644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[11]),12);
    bufp->fullSData(oldp+42645,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[12]),12);
    bufp->fullSData(oldp+42646,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[13]),12);
    bufp->fullSData(oldp+42647,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[14]),12);
    bufp->fullSData(oldp+42648,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[15]),12);
    bufp->fullCData(oldp+42649,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0U] 
                                         >> 0x1aU))),4);
    bufp->fullBit(oldp+42650,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__latch_txnid));
    bufp->fullBit(oldp+42651,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_addr_buff));
    bufp->fullSData(oldp+42652,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_bit_available_nxt),16);
    bufp->fullCData(oldp+42653,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_selected_nxt),4);
    bufp->fullBit(oldp+42654,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_zero_buff));
    bufp->fullSData(oldp+42655,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_zero_buffer_nxt),16);
    bufp->fullSData(oldp+42656,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_wr_addr_buff),16);
    bufp->fullQData(oldp+42657,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[0]),52);
    bufp->fullQData(oldp+42659,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[1]),52);
    bufp->fullQData(oldp+42661,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[2]),52);
    bufp->fullQData(oldp+42663,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[3]),52);
    bufp->fullQData(oldp+42665,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[4]),52);
    bufp->fullQData(oldp+42667,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[5]),52);
    bufp->fullQData(oldp+42669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[6]),52);
    bufp->fullQData(oldp+42671,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[7]),52);
    bufp->fullQData(oldp+42673,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[8]),52);
    bufp->fullQData(oldp+42675,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[9]),52);
    bufp->fullQData(oldp+42677,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[10]),52);
    bufp->fullQData(oldp+42679,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[11]),52);
    bufp->fullQData(oldp+42681,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[12]),52);
    bufp->fullQData(oldp+42683,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[13]),52);
    bufp->fullQData(oldp+42685,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[14]),52);
    bufp->fullQData(oldp+42687,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[15]),52);
    bufp->fullCData(oldp+42689,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[0]),4);
    bufp->fullCData(oldp+42690,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[1]),4);
    bufp->fullCData(oldp+42691,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[2]),4);
    bufp->fullCData(oldp+42692,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[3]),4);
    bufp->fullCData(oldp+42693,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[4]),4);
    bufp->fullCData(oldp+42694,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[5]),4);
    bufp->fullCData(oldp+42695,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[6]),4);
    bufp->fullCData(oldp+42696,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[7]),4);
    bufp->fullCData(oldp+42697,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[8]),4);
    bufp->fullCData(oldp+42698,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[9]),4);
    bufp->fullCData(oldp+42699,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[10]),4);
    bufp->fullCData(oldp+42700,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[11]),4);
    bufp->fullCData(oldp+42701,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[12]),4);
    bufp->fullCData(oldp+42702,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[13]),4);
    bufp->fullCData(oldp+42703,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[14]),4);
    bufp->fullCData(oldp+42704,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[15]),4);
    bufp->fullSData(oldp+42705,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[0]),12);
    bufp->fullSData(oldp+42706,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[1]),12);
    bufp->fullSData(oldp+42707,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[2]),12);
    bufp->fullSData(oldp+42708,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[3]),12);
    bufp->fullSData(oldp+42709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[4]),12);
    bufp->fullSData(oldp+42710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[5]),12);
    bufp->fullSData(oldp+42711,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[6]),12);
    bufp->fullSData(oldp+42712,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[7]),12);
    bufp->fullSData(oldp+42713,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[8]),12);
    bufp->fullSData(oldp+42714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[9]),12);
    bufp->fullSData(oldp+42715,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[10]),12);
    bufp->fullSData(oldp+42716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[11]),12);
    bufp->fullSData(oldp+42717,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[12]),12);
    bufp->fullSData(oldp+42718,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[13]),12);
    bufp->fullSData(oldp+42719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[14]),12);
    bufp->fullSData(oldp+42720,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[15]),12);
    bufp->fullSData(oldp+42721,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[0]),11);
    bufp->fullSData(oldp+42722,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[1]),11);
    bufp->fullSData(oldp+42723,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[2]),11);
    bufp->fullSData(oldp+42724,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[3]),11);
    bufp->fullSData(oldp+42725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[4]),11);
    bufp->fullSData(oldp+42726,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[5]),11);
    bufp->fullSData(oldp+42727,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[6]),11);
    bufp->fullSData(oldp+42728,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[7]),11);
    bufp->fullSData(oldp+42729,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[8]),11);
    bufp->fullSData(oldp+42730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[9]),11);
    bufp->fullSData(oldp+42731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[10]),11);
    bufp->fullSData(oldp+42732,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[11]),11);
    bufp->fullSData(oldp+42733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[12]),11);
    bufp->fullSData(oldp+42734,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[13]),11);
    bufp->fullSData(oldp+42735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[14]),11);
    bufp->fullSData(oldp+42736,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[15]),11);
    bufp->fullBit(oldp+42737,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[0]));
    bufp->fullBit(oldp+42738,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[1]));
    bufp->fullBit(oldp+42739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[2]));
    bufp->fullBit(oldp+42740,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[3]));
    bufp->fullBit(oldp+42741,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[4]));
    bufp->fullBit(oldp+42742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[5]));
    bufp->fullBit(oldp+42743,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[6]));
    bufp->fullBit(oldp+42744,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[7]));
    bufp->fullBit(oldp+42745,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[8]));
    bufp->fullBit(oldp+42746,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[9]));
    bufp->fullBit(oldp+42747,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[10]));
    bufp->fullBit(oldp+42748,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[11]));
    bufp->fullBit(oldp+42749,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[12]));
    bufp->fullBit(oldp+42750,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[13]));
    bufp->fullBit(oldp+42751,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[14]));
    bufp->fullBit(oldp+42752,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[15]));
    bufp->fullCData(oldp+42753,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[0]),4);
    bufp->fullCData(oldp+42754,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[1]),4);
    bufp->fullCData(oldp+42755,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[2]),4);
    bufp->fullCData(oldp+42756,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[3]),4);
    bufp->fullCData(oldp+42757,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[4]),4);
    bufp->fullCData(oldp+42758,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[5]),4);
    bufp->fullCData(oldp+42759,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[6]),4);
    bufp->fullCData(oldp+42760,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[7]),4);
    bufp->fullCData(oldp+42761,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[8]),4);
    bufp->fullCData(oldp+42762,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[9]),4);
    bufp->fullCData(oldp+42763,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[10]),4);
    bufp->fullCData(oldp+42764,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[11]),4);
    bufp->fullCData(oldp+42765,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[12]),4);
    bufp->fullCData(oldp+42766,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[13]),4);
    bufp->fullCData(oldp+42767,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[14]),4);
    bufp->fullCData(oldp+42768,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[15]),4);
    bufp->fullSData(oldp+42769,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_sent_data_bit_nxt),16);
    bufp->fullSData(oldp+42770,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_received_sn_comp_bit_nxt),16);
    bufp->fullBit(oldp+42771,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_comp_buff));
    bufp->fullBit(oldp+42772,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff_outstanding_reqf));
    bufp->fullBit(oldp+42773,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_reqf_buff));
    bufp->fullBit(oldp+42774,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_select_rd_reqf_pointer));
    bufp->fullWData(oldp+42775,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[0]),154);
    bufp->fullWData(oldp+42780,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[1]),154);
    bufp->fullWData(oldp+42785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[2]),154);
    bufp->fullWData(oldp+42790,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[3]),154);
    bufp->fullWData(oldp+42795,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[4]),154);
    bufp->fullWData(oldp+42800,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[5]),154);
    bufp->fullWData(oldp+42805,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[6]),154);
    bufp->fullWData(oldp+42810,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[7]),154);
    bufp->fullWData(oldp+42815,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[8]),154);
    bufp->fullWData(oldp+42820,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[9]),154);
    bufp->fullWData(oldp+42825,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[10]),154);
    bufp->fullWData(oldp+42830,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[11]),154);
    bufp->fullWData(oldp+42835,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[12]),154);
    bufp->fullWData(oldp+42840,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[13]),154);
    bufp->fullWData(oldp+42845,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[14]),154);
    bufp->fullWData(oldp+42850,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[15]),154);
    bufp->fullSData(oldp+42855,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_bit_available_nxt),16);
    bufp->fullWData(oldp+42856,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_s),151);
    bufp->fullSData(oldp+42861,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__txnid_from_cc),12);
    bufp->fullBit(oldp+42862,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__flit_dmt_en));
    bufp->fullBit(oldp+42863,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memwr_req));
    bufp->fullBit(oldp+42864,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memrd_req));
    bufp->fullBit(oldp+42865,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_data_buff));
    bufp->fullCData(oldp+42866,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[0]),4);
    bufp->fullCData(oldp+42867,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[1]),4);
    bufp->fullCData(oldp+42868,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[2]),4);
    bufp->fullCData(oldp+42869,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[3]),4);
    bufp->fullCData(oldp+42870,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[4]),4);
    bufp->fullCData(oldp+42871,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[5]),4);
    bufp->fullCData(oldp+42872,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[6]),4);
    bufp->fullCData(oldp+42873,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[7]),4);
    bufp->fullCData(oldp+42874,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[8]),4);
    bufp->fullCData(oldp+42875,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[9]),4);
    bufp->fullCData(oldp+42876,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[10]),4);
    bufp->fullCData(oldp+42877,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[11]),4);
    bufp->fullCData(oldp+42878,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[12]),4);
    bufp->fullCData(oldp+42879,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[13]),4);
    bufp->fullCData(oldp+42880,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[14]),4);
    bufp->fullCData(oldp+42881,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[15]),4);
    bufp->fullSData(oldp+42882,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_bit_nxt),16);
    bufp->fullWData(oldp+42883,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[0]),512);
    bufp->fullWData(oldp+42899,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[1]),512);
    bufp->fullWData(oldp+42915,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[2]),512);
    bufp->fullWData(oldp+42931,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[3]),512);
    bufp->fullWData(oldp+42947,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[4]),512);
    bufp->fullWData(oldp+42963,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[5]),512);
    bufp->fullWData(oldp+42979,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[6]),512);
    bufp->fullWData(oldp+42995,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[7]),512);
    bufp->fullWData(oldp+43011,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[8]),512);
    bufp->fullWData(oldp+43027,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[9]),512);
    bufp->fullWData(oldp+43043,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[10]),512);
    bufp->fullWData(oldp+43059,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[11]),512);
    bufp->fullWData(oldp+43075,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[12]),512);
    bufp->fullWData(oldp+43091,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[13]),512);
    bufp->fullWData(oldp+43107,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[14]),512);
    bufp->fullWData(oldp+43123,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[15]),512);
    bufp->fullQData(oldp+43139,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[0]),64);
    bufp->fullQData(oldp+43141,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[1]),64);
    bufp->fullQData(oldp+43143,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[2]),64);
    bufp->fullQData(oldp+43145,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[3]),64);
    bufp->fullQData(oldp+43147,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[4]),64);
    bufp->fullQData(oldp+43149,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[5]),64);
    bufp->fullQData(oldp+43151,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[6]),64);
    bufp->fullQData(oldp+43153,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[7]),64);
    bufp->fullQData(oldp+43155,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[8]),64);
    bufp->fullQData(oldp+43157,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[9]),64);
    bufp->fullQData(oldp+43159,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[10]),64);
    bufp->fullQData(oldp+43161,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[11]),64);
    bufp->fullQData(oldp+43163,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[12]),64);
    bufp->fullQData(oldp+43165,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[13]),64);
    bufp->fullQData(oldp+43167,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[14]),64);
    bufp->fullQData(oldp+43169,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[15]),64);
    bufp->fullBit(oldp+43171,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_data_index_buffer));
    bufp->fullBit(oldp+43172,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_dbid_buff));
    bufp->fullCData(oldp+43173,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[0U] 
                                         >> 0x1aU))),4);
    bufp->fullSData(oldp+43174,((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[2U] 
                                            << 0xaU) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U] 
                                              >> 0x16U)))),12);
    bufp->fullSData(oldp+43175,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_index_buffer_bit_nxt),16);
    bufp->fullSData(oldp+43176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[0]),12);
    bufp->fullSData(oldp+43177,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[1]),12);
    bufp->fullSData(oldp+43178,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[2]),12);
    bufp->fullSData(oldp+43179,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[3]),12);
    bufp->fullSData(oldp+43180,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[4]),12);
    bufp->fullSData(oldp+43181,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[5]),12);
    bufp->fullSData(oldp+43182,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[6]),12);
    bufp->fullSData(oldp+43183,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[7]),12);
    bufp->fullSData(oldp+43184,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[8]),12);
    bufp->fullSData(oldp+43185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[9]),12);
    bufp->fullSData(oldp+43186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[10]),12);
    bufp->fullSData(oldp+43187,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[11]),12);
    bufp->fullSData(oldp+43188,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[12]),12);
    bufp->fullSData(oldp+43189,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[13]),12);
    bufp->fullSData(oldp+43190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[14]),12);
    bufp->fullSData(oldp+43191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[15]),12);
    bufp->fullBit(oldp+43192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_buff));
    bufp->fullQData(oldp+43193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd),52);
    bufp->fullIData(oldp+43195,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cm_flit_addr_sliced_pm[0]),28);
    bufp->fullSData(oldp+43196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_rdretryack_bufv),16);
    bufp->fullSData(oldp+43197,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_wrretryack_bufv),16);
    bufp->fullBit(oldp+43198,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__got_retryackresp));
    bufp->fullSData(oldp+43199,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__retryack_buf_entry),15);
    bufp->fullSData(oldp+43200,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[0]),15);
    bufp->fullSData(oldp+43201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[1]),15);
    bufp->fullSData(oldp+43202,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[2]),15);
    bufp->fullSData(oldp+43203,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[3]),15);
    bufp->fullSData(oldp+43204,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[4]),15);
    bufp->fullSData(oldp+43205,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[5]),15);
    bufp->fullSData(oldp+43206,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[6]),15);
    bufp->fullSData(oldp+43207,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[7]),15);
    bufp->fullSData(oldp+43208,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[8]),15);
    bufp->fullSData(oldp+43209,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[9]),15);
    bufp->fullSData(oldp+43210,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[10]),15);
    bufp->fullSData(oldp+43211,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[11]),15);
    bufp->fullSData(oldp+43212,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[12]),15);
    bufp->fullSData(oldp+43213,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[13]),15);
    bufp->fullSData(oldp+43214,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[14]),15);
    bufp->fullSData(oldp+43215,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[15]),15);
    bufp->fullSData(oldp+43216,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[0]),15);
    bufp->fullSData(oldp+43217,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[1]),15);
    bufp->fullSData(oldp+43218,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[2]),15);
    bufp->fullSData(oldp+43219,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[3]),15);
    bufp->fullSData(oldp+43220,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[4]),15);
    bufp->fullSData(oldp+43221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[5]),15);
    bufp->fullSData(oldp+43222,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[6]),15);
    bufp->fullSData(oldp+43223,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[7]),15);
    bufp->fullSData(oldp+43224,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[8]),15);
    bufp->fullSData(oldp+43225,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[9]),15);
    bufp->fullSData(oldp+43226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[10]),15);
    bufp->fullSData(oldp+43227,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[11]),15);
    bufp->fullSData(oldp+43228,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[12]),15);
    bufp->fullSData(oldp+43229,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[13]),15);
    bufp->fullSData(oldp+43230,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[14]),15);
    bufp->fullSData(oldp+43231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[15]),15);
    bufp->fullSData(oldp+43232,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_bufv_nxt),16);
    bufp->fullSData(oldp+43233,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_bufv_nxt),16);
    bufp->fullBit(oldp+43234,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_pcredit_fifo));
    bufp->fullBit(oldp+43235,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_pcredit_fifo));
    bufp->fullBit(oldp+43236,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_outstand_req_cmo));
    bufp->fullBit(oldp+43237,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_slc_rspvalid));
    bufp->fullBit(oldp+43238,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_dbidresp));
    bufp->fullBit(oldp+43239,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_compdbidresp));
    bufp->fullBit(oldp+43240,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_late_comp_resp));
    bufp->fullSData(oldp+43241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_req_sent_nxt),16);
    bufp->fullBit(oldp+43242,((3U == (3U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U]))));
    bufp->fullCData(oldp+43243,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__wr_ptr_nxt),5);
    bufp->fullCData(oldp+43244,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__rd_ptr_nxt),5);
    bufp->fullCData(oldp+43245,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt),6);
    bufp->fullBit(oldp+43246,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43247,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43248,((2ULL < (0x3ffffffffULL 
                                       & (0x20ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt)))))));
    bufp->fullSData(oldp+43249,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[0]),15);
    bufp->fullSData(oldp+43250,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[1]),15);
    bufp->fullSData(oldp+43251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[2]),15);
    bufp->fullSData(oldp+43252,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[3]),15);
    bufp->fullSData(oldp+43253,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[4]),15);
    bufp->fullSData(oldp+43254,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[5]),15);
    bufp->fullSData(oldp+43255,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[6]),15);
    bufp->fullSData(oldp+43256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[7]),15);
    bufp->fullSData(oldp+43257,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[8]),15);
    bufp->fullSData(oldp+43258,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[9]),15);
    bufp->fullSData(oldp+43259,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[10]),15);
    bufp->fullSData(oldp+43260,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[11]),15);
    bufp->fullSData(oldp+43261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[12]),15);
    bufp->fullSData(oldp+43262,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[13]),15);
    bufp->fullSData(oldp+43263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[14]),15);
    bufp->fullSData(oldp+43264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[15]),15);
    bufp->fullSData(oldp+43265,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[16]),15);
    bufp->fullSData(oldp+43266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[17]),15);
    bufp->fullSData(oldp+43267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[18]),15);
    bufp->fullSData(oldp+43268,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[19]),15);
    bufp->fullSData(oldp+43269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[20]),15);
    bufp->fullSData(oldp+43270,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[21]),15);
    bufp->fullSData(oldp+43271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[22]),15);
    bufp->fullSData(oldp+43272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[23]),15);
    bufp->fullSData(oldp+43273,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[24]),15);
    bufp->fullSData(oldp+43274,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[25]),15);
    bufp->fullSData(oldp+43275,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[26]),15);
    bufp->fullSData(oldp+43276,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[27]),15);
    bufp->fullSData(oldp+43277,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[28]),15);
    bufp->fullSData(oldp+43278,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[29]),15);
    bufp->fullSData(oldp+43279,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[30]),15);
    bufp->fullSData(oldp+43280,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[31]),15);
    bufp->fullBit(oldp+43281,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt));
    bufp->fullCData(oldp+43282,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_dat__DOT__init_crdt_ctr_nxt),5);
    bufp->fullCData(oldp+43283,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_rsp__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+43284,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+43285,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+43286,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+43287,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+43288,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+43289,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+43290,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43291,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43292,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+43293,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),680);
    bufp->fullWData(oldp+43315,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),680);
    bufp->fullWData(oldp+43337,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),680);
    bufp->fullWData(oldp+43359,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),680);
    bufp->fullWData(oldp+43381,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),680);
    bufp->fullWData(oldp+43403,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),680);
    bufp->fullWData(oldp+43425,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),680);
    bufp->fullWData(oldp+43447,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),680);
    bufp->fullBit(oldp+43469,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+43470,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+43471,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+43472,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+43473,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+43474,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+43475,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43476,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43477,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+43478,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),151);
    bufp->fullWData(oldp+43483,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),151);
    bufp->fullWData(oldp+43488,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),151);
    bufp->fullWData(oldp+43493,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),151);
    bufp->fullWData(oldp+43498,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),151);
    bufp->fullWData(oldp+43503,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),151);
    bufp->fullWData(oldp+43508,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),151);
    bufp->fullWData(oldp+43513,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),151);
    bufp->fullBit(oldp+43518,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+43519,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+43520,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+43521,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+43522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+43523,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+43524,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43525,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43526,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+43527,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+43530,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+43533,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+43536,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullWData(oldp+43539,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
    bufp->fullWData(oldp+43542,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
    bufp->fullWData(oldp+43545,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
    bufp->fullWData(oldp+43548,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
    bufp->fullCData(oldp+43551,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+43552,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_req__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+43553,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullIData(oldp+43554,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dealloc_compfifo_vector_compdata),32);
    bufp->fullBit(oldp+43555,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_reqcmdq));
    bufp->fullBit(oldp+43556,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_respcmdq));
    bufp->fullWData(oldp+43557,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_respcmdq),74);
    bufp->fullWData(oldp+43560,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_memrespcmdq),109);
    bufp->fullBit(oldp+43564,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid));
    bufp->fullBit(oldp+43565,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_dataflit));
    bufp->fullIData(oldp+43566,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_outstand_prep),32);
    bufp->fullBit(oldp+43567,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_unused_compbuff_num));
    bufp->fullBit(oldp+43568,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st));
    bufp->fullBit(oldp+43569,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd));
    bufp->fullBit(oldp+43570,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__en_compbuf_2nd_for_snpdata));
    bufp->fullBit(oldp+43571,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__block_compbuf_available));
    bufp->fullBit(oldp+43572,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd))));
    bufp->fullBit(oldp+43573,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq));
    bufp->fullBit(oldp+43574,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_nodeid_valid));
    bufp->fullSData(oldp+43575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_full_node_id),11);
    bufp->fullSData(oldp+43576,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_rsp_dat_linear_srcid),11);
    bufp->fullSData(oldp+43577,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__xmt_snpreq_full_srcid),11);
    bufp->fullBit(oldp+43578,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_copyback_nocopyback));
    bufp->fullBit(oldp+43579,((7U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                              >> 0x11U)))));
    bufp->fullBit(oldp+43580,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_snprespdata));
    bufp->fullBit(oldp+43581,((4U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                              >> 0x11U)))));
    bufp->fullBit(oldp+43582,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_valid));
    bufp->fullCData(oldp+43583,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__sig_chi_crdt_update_datproc__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+43584,(((3U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                               | ((2U == (0x7fU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                        | ((0x26U == 
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                           | ((0x24U 
                                               == (0x7fU 
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
    bufp->fullBit(oldp+43585,(((0x15U == (0x7fU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                     | ((0x16U == (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                           | ((0x18U 
                                               == (0x7fU 
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
    bufp->fullBit(oldp+43586,((4U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                << 2U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+43587,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_nonsnpable));
    bufp->fullBit(oldp+43588,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable));
    bufp->fullBit(oldp+43589,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable));
    bufp->fullBit(oldp+43590,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_non_snpable));
    bufp->fullCData(oldp+43591,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__req_is_atmo),3);
    bufp->fullBit(oldp+43592,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_atomtxn));
    bufp->fullBit(oldp+43593,((((0x54U == (0x7fU & 
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
                                                   >> 0x1eU)))))))) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp))));
    bufp->fullBit(oldp+43594,(((0x54U == (0x7fU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                     | ((0x58U == (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                        | (0x5cU == 
                                           (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                              << 2U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                >> 0x1eU))))))))));
    bufp->fullIData(oldp+43595,((0xfffffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U])),28);
    bufp->fullSData(oldp+43596,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_addr_match_vec),16);
    bufp->fullCData(oldp+43597,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[0]),4);
    bufp->fullCData(oldp+43598,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[1]),4);
    bufp->fullCData(oldp+43599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[2]),4);
    bufp->fullCData(oldp+43600,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[3]),4);
    bufp->fullCData(oldp+43601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[4]),4);
    bufp->fullCData(oldp+43602,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[5]),4);
    bufp->fullCData(oldp+43603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[6]),4);
    bufp->fullCData(oldp+43604,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[7]),4);
    bufp->fullCData(oldp+43605,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[8]),4);
    bufp->fullCData(oldp+43606,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[9]),4);
    bufp->fullCData(oldp+43607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[10]),4);
    bufp->fullCData(oldp+43608,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[11]),4);
    bufp->fullCData(oldp+43609,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[12]),4);
    bufp->fullCData(oldp+43610,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[13]),4);
    bufp->fullCData(oldp+43611,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[14]),4);
    bufp->fullCData(oldp+43612,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[15]),4);
    bufp->fullBit(oldp+43613,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp));
    bufp->fullBit(oldp+43614,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wren_reqfifo));
    bufp->fullBit(oldp+43615,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__rden_reqfifo));
    bufp->fullWData(oldp+43616,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wrdata_reqfifo),151);
    bufp->fullWData(oldp+43621,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed),151);
    bufp->fullBit(oldp+43626,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict));
    bufp->fullWData(oldp+43627,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit),151);
    __Vtemp_3[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[0U];
    __Vtemp_3[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[1U];
    __Vtemp_3[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[2U];
    __Vtemp_3[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U];
    __Vtemp_3[4U] = (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable) 
                      << 0x18U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable) 
                                    << 0x17U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U]));
    bufp->fullWData(oldp+43632,(__Vtemp_3),153);
    bufp->fullBit(oldp+43637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__placeholder_state_n));
    bufp->fullCData(oldp+43638,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__wr_ptr_nxt),4);
    bufp->fullCData(oldp+43639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt),4);
    bufp->fullCData(oldp+43640,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt),5);
    bufp->fullBit(oldp+43641,((0x10U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43642,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43643,((2ULL < (0x3ffffffffULL 
                                       & (0x10ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+43644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[0]),151);
    bufp->fullWData(oldp+43649,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[1]),151);
    bufp->fullWData(oldp+43654,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[2]),151);
    bufp->fullWData(oldp+43659,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[3]),151);
    bufp->fullWData(oldp+43664,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[4]),151);
    bufp->fullWData(oldp+43669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[5]),151);
    bufp->fullWData(oldp+43674,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[6]),151);
    bufp->fullWData(oldp+43679,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[7]),151);
    bufp->fullWData(oldp+43684,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[8]),151);
    bufp->fullWData(oldp+43689,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[9]),151);
    bufp->fullWData(oldp+43694,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[10]),151);
    bufp->fullWData(oldp+43699,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[11]),151);
    bufp->fullWData(oldp+43704,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[12]),151);
    bufp->fullWData(oldp+43709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[13]),151);
    bufp->fullWData(oldp+43714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[14]),151);
    bufp->fullWData(oldp+43719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[15]),151);
    bufp->fullBit(oldp+43724,(((1U == (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                >> 6U))) 
                               | ((9U == (0x1fU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                   >> 6U))) 
                                  | ((2U == (0x1fU 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                >> 6U))) 
                                     | ((5U == (0x1fU 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                   >> 6U))) 
                                        | ((6U == (0x1fU 
                                                   & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                      >> 6U))) 
                                           | ((4U == 
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
    bufp->fullBit(oldp+43725,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3))));
    bufp->fullWData(oldp+43726,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT),73);
    bufp->fullCData(oldp+43729,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+43730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_2nd_compbuff_num));
    bufp->fullBit(oldp+43731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_1st_compbuff));
    bufp->fullBit(oldp+43732,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_2nd_compbuff));
    bufp->fullBit(oldp+43733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__swap_1st_and_2nd_compbuff));
    bufp->fullBit(oldp+43734,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__req_resp_compdata_nxt));
    bufp->fullIData(oldp+43735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_outstand_cmd_pre),32);
    bufp->fullBit(oldp+43736,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_memdata));
    bufp->fullBit(oldp+43737,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flag_memwr_allbe_zero_nxt));
    bufp->fullBit(oldp+43738,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__make_be_allzero_memwr));
    bufp->fullBit(oldp+43739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq_prep));
    bufp->fullBit(oldp+43740,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_collnreg_sending_ini_pre));
    bufp->fullBit(oldp+43741,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flittype_rdnosnp_l3));
    bufp->fullBit(oldp+43742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__xmt_datflit_resperr_nxt));
    bufp->fullBit(oldp+43743,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__compbuf_available));
    bufp->fullIData(oldp+43744,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+43745,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__outstand_prep_valid_nxt),32);
    bufp->fullWData(oldp+43746,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__wrdata_stat_common_ph3_rsp),136);
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
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[4U] 
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
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_14[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                            << 0x18U)));
    __Vtemp_14[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_14[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_14[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
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
                                        >> 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[4U] 
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
                                        << 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                        << 0x10U)));
    __Vtemp_14[0x1eU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                      >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                                 >> 0x10U)) 
                         | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                          >> 8U)) | 
                            (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                             << 0x18U)));
    __Vtemp_14[0x1fU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                                   << 0x18U)));
    __Vtemp_14[0x20U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                                   << 0x18U)));
    __Vtemp_14[0x21U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
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
                                        >> 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[4U] 
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
                                        << 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                        << 0x10U)));
    __Vtemp_14[0x2fU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                      >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                                 >> 0x10U)) 
                         | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                          >> 8U)) | 
                            (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                             << 0x18U)));
    __Vtemp_14[0x30U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                                   << 0x18U)));
    __Vtemp_14[0x31U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                                   << 0x18U)));
    __Vtemp_14[0x32U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
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
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[4U] 
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
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_17[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                            << 0x18U)));
    __Vtemp_17[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_17[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_17[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
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
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[4U] 
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
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_21[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                            << 0x18U)));
    __Vtemp_21[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_21[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_21[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
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
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[4U] 
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
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_25[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                            << 0x18U)));
    __Vtemp_25[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_25[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_25[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
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
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[4U] 
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
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_29[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                            << 0x18U)));
    __Vtemp_29[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_29[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_29[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
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
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[4U] 
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
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_33[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                            << 0x18U)));
    __Vtemp_33[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_33[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_33[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[4U] 
                                                   << 0x18U)));
    VL_CONCAT_WWW(4352,3808,544, __Vtemp_34, __Vtemp_30, __Vtemp_33);
    bufp->fullWData(oldp+43751,(__Vtemp_34),4352);
    bufp->fullCData(oldp+43887,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_ownerp_id_ph3_rsp),7);
    bufp->fullIData(oldp+43888,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_share_vect_rsp_m_ph3),22);
    bufp->fullCData(oldp+43889,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_inactive_st_nxt),2);
    bufp->fullSData(oldp+43890,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__inactive_ctr_nxt),16);
    bufp->fullCData(oldp+43891,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+43892,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__wr_ptr_nxt),5);
    bufp->fullCData(oldp+43893,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt),6);
    bufp->fullBit(oldp+43894,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43895,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+43896,((2ULL < (0x3ffffffffULL 
                                       & (0x20ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+43897,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[0]),74);
    bufp->fullWData(oldp+43900,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[1]),74);
    bufp->fullWData(oldp+43903,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[2]),74);
    bufp->fullWData(oldp+43906,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[3]),74);
    bufp->fullWData(oldp+43909,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[4]),74);
    bufp->fullWData(oldp+43912,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[5]),74);
    bufp->fullWData(oldp+43915,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[6]),74);
    bufp->fullWData(oldp+43918,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[7]),74);
    bufp->fullWData(oldp+43921,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[8]),74);
    bufp->fullWData(oldp+43924,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[9]),74);
    bufp->fullWData(oldp+43927,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[10]),74);
    bufp->fullWData(oldp+43930,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[11]),74);
    bufp->fullWData(oldp+43933,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[12]),74);
    bufp->fullWData(oldp+43936,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[13]),74);
    bufp->fullWData(oldp+43939,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[14]),74);
    bufp->fullWData(oldp+43942,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[15]),74);
    bufp->fullWData(oldp+43945,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[16]),74);
    bufp->fullWData(oldp+43948,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[17]),74);
    bufp->fullWData(oldp+43951,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[18]),74);
    bufp->fullWData(oldp+43954,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[19]),74);
    bufp->fullWData(oldp+43957,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[20]),74);
    bufp->fullWData(oldp+43960,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[21]),74);
    bufp->fullWData(oldp+43963,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[22]),74);
    bufp->fullWData(oldp+43966,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[23]),74);
    bufp->fullWData(oldp+43969,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[24]),74);
    bufp->fullWData(oldp+43972,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[25]),74);
    bufp->fullWData(oldp+43975,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[26]),74);
    bufp->fullWData(oldp+43978,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[27]),74);
    bufp->fullWData(oldp+43981,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[28]),74);
    bufp->fullWData(oldp+43984,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[29]),74);
    bufp->fullWData(oldp+43987,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[30]),74);
    bufp->fullWData(oldp+43990,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[31]),74);
    bufp->fullIData(oldp+43993,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo),32);
    bufp->fullIData(oldp+43994,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf),32);
    bufp->fullBit(oldp+43995,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo)));
    bufp->fullBit(oldp+43996,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf)));
    bufp->fullBit(oldp+43997,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xaU))));
    bufp->fullBit(oldp+43998,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xaU))));
    bufp->fullBit(oldp+43999,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xbU))));
    bufp->fullBit(oldp+44000,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xbU))));
    bufp->fullBit(oldp+44001,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xcU))));
    bufp->fullBit(oldp+44002,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xcU))));
    bufp->fullBit(oldp+44003,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xdU))));
    bufp->fullBit(oldp+44004,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xdU))));
    bufp->fullBit(oldp+44005,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xeU))));
    bufp->fullBit(oldp+44006,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xeU))));
    bufp->fullBit(oldp+44007,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xfU))));
    bufp->fullBit(oldp+44008,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xfU))));
    bufp->fullBit(oldp+44009,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x10U))));
    bufp->fullBit(oldp+44010,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x10U))));
    bufp->fullBit(oldp+44011,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x11U))));
    bufp->fullBit(oldp+44012,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x11U))));
    bufp->fullBit(oldp+44013,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x12U))));
    bufp->fullBit(oldp+44014,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x12U))));
    bufp->fullBit(oldp+44015,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x13U))));
    bufp->fullBit(oldp+44016,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x13U))));
    bufp->fullBit(oldp+44017,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 1U))));
    bufp->fullBit(oldp+44018,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 1U))));
    bufp->fullBit(oldp+44019,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x14U))));
    bufp->fullBit(oldp+44020,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x14U))));
    bufp->fullBit(oldp+44021,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x15U))));
    bufp->fullBit(oldp+44022,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x15U))));
    bufp->fullBit(oldp+44023,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x16U))));
    bufp->fullBit(oldp+44024,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x16U))));
    bufp->fullBit(oldp+44025,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x17U))));
    bufp->fullBit(oldp+44026,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x17U))));
    bufp->fullBit(oldp+44027,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x18U))));
    bufp->fullBit(oldp+44028,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x18U))));
    bufp->fullBit(oldp+44029,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x19U))));
    bufp->fullBit(oldp+44030,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x19U))));
    bufp->fullBit(oldp+44031,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+44032,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+44033,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+44034,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+44035,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+44036,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+44037,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+44038,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+44039,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 2U))));
    bufp->fullBit(oldp+44040,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 2U))));
    bufp->fullBit(oldp+44041,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+44042,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+44043,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                               >> 0x1fU)));
    bufp->fullBit(oldp+44044,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                               >> 0x1fU)));
    bufp->fullBit(oldp+44045,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 3U))));
    bufp->fullBit(oldp+44046,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 3U))));
    bufp->fullBit(oldp+44047,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 4U))));
    bufp->fullBit(oldp+44048,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 4U))));
    bufp->fullBit(oldp+44049,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 5U))));
    bufp->fullBit(oldp+44050,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 5U))));
    bufp->fullBit(oldp+44051,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 6U))));
    bufp->fullBit(oldp+44052,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 6U))));
    bufp->fullBit(oldp+44053,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 7U))));
    bufp->fullBit(oldp+44054,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 7U))));
    bufp->fullBit(oldp+44055,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 8U))));
    bufp->fullBit(oldp+44056,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 8U))));
    bufp->fullBit(oldp+44057,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 9U))));
    bufp->fullBit(oldp+44058,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 9U))));
    bufp->fullCData(oldp+44059,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_idx),5);
    bufp->fullBit(oldp+44060,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_node_id_found));
    bufp->fullIData(oldp+44061,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_vector),22);
    bufp->fullIData(oldp+44062,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_rsp_dat_nodeid_match_vector),22);
    bufp->fullIData(oldp+44063,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+44064,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+44065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+44066,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+44067,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+44068,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+44069,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+44070,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+44071,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+44072,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+44073,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+44074,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+44075,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
    bufp->fullWData(oldp+44097,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
    bufp->fullWData(oldp+44119,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
    bufp->fullWData(oldp+44141,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
    bufp->fullWData(oldp+44163,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),686);
    bufp->fullWData(oldp+44185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),686);
    bufp->fullWData(oldp+44207,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),686);
    bufp->fullWData(oldp+44229,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),686);
    bufp->fullBit(oldp+44251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+44252,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+44253,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+44254,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+44255,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+44256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+44257,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+44258,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+44259,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+44260,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+44263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+44266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+44269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullWData(oldp+44272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
    bufp->fullWData(oldp+44275,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
    bufp->fullWData(oldp+44278,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
    bufp->fullWData(oldp+44281,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
    bufp->fullBit(oldp+44284,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_txn_valid));
    bufp->fullBit(oldp+44285,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_init_valid));
    bufp->fullBit(oldp+44286,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_from_ap.ready));
    bufp->fullBit(oldp+44287,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__rden_dircache_nxt));
    bufp->fullBit(oldp+44288,((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
    bufp->fullSData(oldp+44289,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc),10);
    bufp->fullSData(oldp+44290,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector),16);
    bufp->fullBit(oldp+44291,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
    bufp->fullWData(oldp+44292,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44324,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullWData(oldp+44325,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT____Vcellinp__sig_sram_valid_tag_data__wrdata),69);
    bufp->fullBit(oldp+44328,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xaU))));
    bufp->fullWData(oldp+44329,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44361,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44362,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xbU))));
    bufp->fullWData(oldp+44363,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44395,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44396,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xcU))));
    bufp->fullWData(oldp+44397,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44429,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44430,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xdU))));
    bufp->fullWData(oldp+44431,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44463,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44464,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xeU))));
    bufp->fullWData(oldp+44465,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44497,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44498,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xfU))));
    bufp->fullWData(oldp+44499,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44531,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44532,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 1U))));
    bufp->fullWData(oldp+44533,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44565,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44566,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 2U))));
    bufp->fullWData(oldp+44567,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44600,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 3U))));
    bufp->fullWData(oldp+44601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44633,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44634,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 4U))));
    bufp->fullWData(oldp+44635,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44667,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44668,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 5U))));
    bufp->fullWData(oldp+44669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44701,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44702,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 6U))));
    bufp->fullWData(oldp+44703,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44736,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 7U))));
    bufp->fullWData(oldp+44737,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44769,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44770,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 8U))));
    bufp->fullWData(oldp+44771,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44803,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+44804,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 9U))));
    bufp->fullWData(oldp+44805,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+44837,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullSData(oldp+44838,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__cacheproc_state_nxt),13);
    bufp->fullSData(oldp+44839,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_one_nxt),16);
    bufp->fullBit(oldp+44840,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_cycle_nxt));
    bufp->fullCData(oldp+44841,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__count_evict_nxt),3);
    bufp->fullBit(oldp+44842,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_fetch_cohc_nxt));
    bufp->fullBit(oldp+44843,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__first_cycle_in_evictend_nxt));
    bufp->fullBit(oldp+44844,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_rden_cache));
    bufp->fullBit(oldp+44845,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated));
    bufp->fullBit(oldp+44846,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated));
    bufp->fullWData(oldp+44847,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc0),686);
    bufp->fullWData(oldp+44869,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc1),686);
    bufp->fullWData(oldp+44891,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc0_from_id_translator),680);
    bufp->fullWData(oldp+44913,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc1_from_id_translator),680);
    bufp->fullBit(oldp+44935,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled));
    bufp->fullBit(oldp+44936,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled));
    bufp->fullBit(oldp+44937,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive));
    bufp->fullBit(oldp+44938,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive_sync));
    bufp->fullBit(oldp+44939,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_reg));
    bufp->fullCData(oldp+44940,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                  << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                            << 1U))),4);
    bufp->fullBit(oldp+44941,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__inst_cc_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+44942,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+44943,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+44944,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_cl0_ic_clk__DOT__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__DOT__sig_src_sync1));
    bufp->fullWData(oldp+44945,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
    bufp->fullWData(oldp+44950,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s),680);
    __Vtemp_35[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[0U];
    __Vtemp_35[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[1U];
    __Vtemp_35[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[2U];
    __Vtemp_35[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[3U];
    __Vtemp_35[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[4U]);
    bufp->fullWData(oldp+44972,(__Vtemp_35),152);
    bufp->fullWData(oldp+44977,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrd_req_s),151);
    bufp->fullWData(oldp+44982,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memwr_req_s),151);
    bufp->fullSData(oldp+44987,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__tgt_pm_node_id),11);
    bufp->fullWData(oldp+44988,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0U]),151);
    bufp->fullWData(oldp+44993,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [1U]),151);
    bufp->fullWData(oldp+44998,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [2U]),151);
    bufp->fullWData(oldp+45003,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [3U]),151);
    bufp->fullWData(oldp+45008,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [4U]),151);
    bufp->fullWData(oldp+45013,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [5U]),151);
    bufp->fullWData(oldp+45018,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [6U]),151);
    bufp->fullWData(oldp+45023,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [7U]),151);
    bufp->fullWData(oldp+45028,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [8U]),151);
    bufp->fullWData(oldp+45033,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [9U]),151);
    bufp->fullWData(oldp+45038,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xaU]),151);
    bufp->fullWData(oldp+45043,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xbU]),151);
    bufp->fullWData(oldp+45048,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xcU]),151);
    bufp->fullWData(oldp+45053,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xdU]),151);
    bufp->fullWData(oldp+45058,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xeU]),151);
    bufp->fullWData(oldp+45063,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xfU]),151);
    bufp->fullWData(oldp+45068,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_reqcmdq),156);
    bufp->fullBit(oldp+45073,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm));
    bufp->fullBit(oldp+45074,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm));
    bufp->fullBit(oldp+45075,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                     & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))))));
    bufp->fullWData(oldp+45076,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[0]),156);
    bufp->fullWData(oldp+45081,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[1]),156);
    bufp->fullWData(oldp+45086,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[2]),156);
    bufp->fullWData(oldp+45091,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[3]),156);
    bufp->fullWData(oldp+45096,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[4]),156);
    bufp->fullWData(oldp+45101,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[5]),156);
    bufp->fullWData(oldp+45106,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[6]),156);
    bufp->fullWData(oldp+45111,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[7]),156);
    bufp->fullBit(oldp+45116,((8U > (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
    bufp->fullBit(oldp+45117,((8U <= (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
    bufp->fullBit(oldp+45118,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc0));
    bufp->fullBit(oldp+45119,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc1));
    bufp->fullBit(oldp+45120,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->fullBit(oldp+45121,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->fullBit(oldp+45122,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->fullBit(oldp+45123,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))))));
    bufp->fullBit(oldp+45124,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk));
    bufp->fullBit(oldp+45125,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))))));
    bufp->fullBit(oldp+45126,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk));
    bufp->fullCData(oldp+45127,(((8U & ((~ (((((0U 
                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                               | (0U 
                                                  != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
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
    bufp->fullCData(oldp+45128,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk) 
                                  << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk) 
                                            << 1U))),4);
    bufp->fullCData(oldp+45129,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_rx_intfc_gclk),4);
    bufp->fullCData(oldp+45130,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_tx_intfc_gclk),4);
    bufp->fullBit(oldp+45131,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__activate_cc_l3_or_mn));
    bufp->fullBit(oldp+45132,(((((((0U != (0x1ffU & 
                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc0
                                            [0U] >> 1U))) 
                                   | (0U != (0x1ffU 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc1
                                                [0U] 
                                                >> 1U)))) 
                                  | (0U != (0x1ffU 
                                            & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc0
                                               [0U] 
                                               >> 1U)))) 
                                 | (0U != (0x1ffU & 
                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc1
                                            [0U] >> 1U)))) 
                                | (0U != (0x1ffU & 
                                          (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc0
                                           [0U] >> 1U)))) 
                               | (0U != (0x1ffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc1
                                                   [0U] 
                                                   >> 1U))))));
    bufp->fullBit(oldp+45133,(((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc0_rx_hs.recv_req)) 
                                 | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc1_rx_hs.recv_req))) 
                                | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_req))) 
                               | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_req)))));
    bufp->fullBit(oldp+45134,((1U & ((~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                            | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                           | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))) 
                                     & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                            | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                           | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send))))))));
    bufp->fullBit(oldp+45135,((1U & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->fullBit(oldp+45136,((1U & (~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                           | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->fullBit(oldp+45137,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_RSPLCRDV));
    bufp->fullBit(oldp+45138,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->fullBit(oldp+45139,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+45140,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+45141,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullBit(oldp+45142,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update));
    bufp->fullCData(oldp+45143,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__credits_cnt_nxt),5);
    bufp->fullCData(oldp+45144,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+45145,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullBit(oldp+45146,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullCData(oldp+45147,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407)))))),5);
    bufp->fullBit(oldp+45148,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                               | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->fullBit(oldp+45149,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                               | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->fullSData(oldp+45150,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))),10);
    bufp->fullSData(oldp+45151,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))),10);
    bufp->fullBit(oldp+45152,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+45153,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))) 
                               | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))))));
    bufp->fullSData(oldp+45154,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))),10);
    bufp->fullSData(oldp+45155,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))),10);
    bufp->fullCData(oldp+45156,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+45157,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_1st) 
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
    bufp->fullWData(oldp+45158,(__Vtemp_37),152);
    bufp->fullBit(oldp+45163,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                      & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                         >> 7U)) | 
                                     ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                          >> 7U)) & 
                                      (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)))))));
    bufp->fullBit(oldp+45164,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                      & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))) 
                                     | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                            >> 7U)) 
                                        | ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                               >> 7U)) 
                                           & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm))))))));
    bufp->fullBit(oldp+45165,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update) 
                                  | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update)))));
    bufp->fullBit(oldp+45166,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update))));
    bufp->fullBit(oldp+45167,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc) 
                                  | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update)))));
    bufp->fullBit(oldp+45168,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update))));
    bufp->fullCData(oldp+45169,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_resp_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+45170,((1U & ((~ ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                         | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3reqflit_fifo_full) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cc_reqflit_valid_compdata)))) 
                                     | ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                        & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid)) 
                                           & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__available_credits))))))));
    bufp->fullCData(oldp+45171,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+45172,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                  == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc
                                                [vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__rd_ptr][2U] 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+45173,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                  == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__sel_winner_entry[2U] 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+45174,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                  == (0x3ffU & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmdvalid_evict)
                                                  ? 
                                                 vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__evict_req_s[2U]
                                                  : 
                                                 vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmd[2U]) 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+45175,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->fullSData(oldp+45176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2),11);
    bufp->fullBit(oldp+45177,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->fullSData(oldp+45178,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2),11);
    bufp->fullSData(oldp+45179,(((0x80U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req[4U])
                                  ? (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2)
                                  : (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2))),11);
    bufp->fullCData(oldp+45180,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated) 
                                  << 2U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_collnq_gated) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated)))),3);
    bufp->fullBit(oldp+45181,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_is_inactive_nxt));
    bufp->fullCData(oldp+45182,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                  << 3U) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                            << 1U))),4);
    bufp->fullBit(oldp+45183,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+45184,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+45185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+45186,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+45187,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+45188,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+45189,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+45190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+45191,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+45192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+45193,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullBit(oldp+45194,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+45195,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                       >> 3U)) != (1U 
                                                   & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                      >> 3U))) 
                               & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                  == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->fullBit(oldp+45196,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                               == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->fullBit(oldp+45197,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+45198,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                       >> 3U)) != (1U 
                                                   & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                      >> 3U))) 
                               & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                  == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->fullBit(oldp+45199,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                               == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->fullBit(oldp+45200,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullCData(oldp+45201,((3U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                        ? ((0x800000U 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U])
                                            ? 0U : 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                             << 0xfU) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                               >> 0x11U)))
                                        : ((0x800000U 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[4U])
                                            ? 0U : 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                             << 0x1cU) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                               >> 4U)))))),2);
    bufp->fullBit(oldp+45202,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__tgt_clusterid_fifoout)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__assert_req))));
    bufp->fullBit(oldp+45203,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[0U] 
                                         >> 4U) : (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                   >> 4U)))));
    bufp->fullCData(oldp+45204,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410)))))),5);
    bufp->fullBit(oldp+45205,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+45206,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+45207,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+45208,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+45209,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+45210,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->fullBit(oldp+45211,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->fullBit(oldp+45212,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->fullSData(oldp+45213,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                                [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                        >> 0x1aU))]),12);
    bufp->fullSData(oldp+45214,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                                [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                        >> 0x1aU))]),12);
    bufp->fullBit(oldp+45215,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                               & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                      >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU)))) 
                                  | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                     & (0x40U == (0x7c0U 
                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->fullBit(oldp+45216,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                               & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                      >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU)))) 
                                  | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                     & (0x40U == (0x7c0U 
                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->fullBit(oldp+45217,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullBit(oldp+45218,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullBit(oldp+45219,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                  & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                 << 6U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                   >> 0x1aU))) 
                                     == (0xfffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+45220,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullCData(oldp+45221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+45222,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+45223,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+45224,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->fullBit(oldp+45225,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->fullCData(oldp+45226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45227,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+45228,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->fullBit(oldp+45229,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->fullBit(oldp+45230,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->fullBit(oldp+45231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->fullBit(oldp+45232,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->fullCData(oldp+45233,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+45234,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+45235,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412)))))),5);
    bufp->fullBit(oldp+45236,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+45237,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+45238,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+45239,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+45240,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+45241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+45242,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullCData(oldp+45243,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45244,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45245,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45246,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullBit(oldp+45247,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+45248,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+45249,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+45250,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
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
    bufp->fullWData(oldp+45251,(__Vtemp_46),111);
    bufp->fullCData(oldp+45255,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                  << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE))),2);
    bufp->fullSData(oldp+45256,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                            >> 0x1aU))
                                  ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                 [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                   >> 0x1aU)] : 0U)),12);
    bufp->fullSData(oldp+45257,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                            >> 0x1aU))
                                  ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                 [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                   >> 0x1aU)] : 0U)),12);
    bufp->fullSData(oldp+45258,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                            ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                            : ((0x22U 
                                                >= 
                                                (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU)]
                                                : 0U)))),12);
    bufp->fullSData(oldp+45259,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                            ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                            : ((0x22U 
                                                >= 
                                                (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU)]
                                                : 0U)))),12);
    bufp->fullSData(oldp+45260,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                            ? ((0x22U 
                                                >= 
                                                (0x3fU 
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
    bufp->fullSData(oldp+45261,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                            ? ((0x22U 
                                                >= 
                                                (0x3fU 
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
    bufp->fullBit(oldp+45262,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__flitv_out_mux) 
                               | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__unused_signal) 
                                  | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__TX_DATFLITV_mux)))));
    bufp->fullBit(oldp+45263,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_addr_translator_0__DOT__addr_translator_enabled__DOT__unused_signal))));
    bufp->fullBit(oldp+45264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc0_dat_rsp_cntr));
    bufp->fullBit(oldp+45265,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc1_dat_rsp_cntr));
    bufp->fullSData(oldp+45266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_dat_idx_to_clr),12);
    bufp->fullSData(oldp+45267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_dat_idx_to_clr),12);
    bufp->fullCData(oldp+45268,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+45269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+45270,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+45271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+45272,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->fullBit(oldp+45273,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->fullBit(oldp+45274,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->fullBit(oldp+45275,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->fullBit(oldp+45276,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->fullCData(oldp+45277,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+45278,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+45279,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3425))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3425)))))),5);
    bufp->fullBit(oldp+45280,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+45281,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+45282,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+45283,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+45284,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+45285,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+45286,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullBit(oldp+45287,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+45288,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+45289,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+45290,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))),10);
    bufp->fullBit(oldp+45291,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.vld_send));
}
