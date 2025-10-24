// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_snpproc_anyvc__pi45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_snpproc_anyvc__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__3(Vsig_topology_top_sig_cc_rx_snpproc_anyvc__pi45* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_snpproc_anyvc__pi45___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(152,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(152,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_CONST_W_1X(152,vlSelfRef.__Vdly__read_data_fifo_stored,0x00000000);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_CONST_W_5X(160,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_2, vlSelfRef.__PVT__read_data_fifo_stored, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__read_data_fifo_stored_req_s, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__req_or_snp_fifoout_stored = (1U 
                                                  & VL_BITSEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_stored, 0x97U));
    VL_CONST_W_4X(128,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_4, vlSelfRef.__PVT__read_data_fifo_stored, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__srcid_bit0_fifoout_stored = (1U 
                                                  & VL_BITSEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, 4U));
    vlSelfRef.__PVT__tgt_portid_fifoout_stored = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored)
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 4U, 3)
                                                      : 
                                                     VL_SEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, 0x6cU, 3)));
    vlSelfRef.__PVT__tgt_clusterid_fifoout_stored = 
        (0xffU & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored)
                   ? VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 7U, 8)
                   : VL_SEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, 0x6fU, 8)));
}
