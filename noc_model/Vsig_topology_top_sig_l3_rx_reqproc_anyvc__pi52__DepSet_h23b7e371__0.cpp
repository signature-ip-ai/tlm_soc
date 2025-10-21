// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52.h"

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__2(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
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
    VL_CONST_W_4X(128,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_2, vlSelfRef.__PVT__read_data_fifo_stored, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__req_or_snp_fifoout_stored = (1U 
                                                  & VL_BITSEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_stored, 0x97U));
    VL_CONST_W_5X(160,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_4, vlSelfRef.__PVT__read_data_fifo_stored, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__read_data_fifo_stored_req_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__srcid_bit0_fifoout_stored = (1U 
                                                  & VL_BITSEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, 4U));
    vlSelfRef.__PVT__tgt_nodeid_fifoout_up_stored = 
        (3U & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored)
                ? 0U : VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 4U, 2)));
    vlSelfRef.__PVT__snp_multicast_fifoout_stored = 
        (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x93U));
    vlSelfRef.__PVT__tgt_portid_fifoout_stored = (7U 
                                                  & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored)
                                                      ? 
                                                     VL_EXTEND_II(3,2, 
                                                                  (3U 
                                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 4U, 2)))
                                                      : 
                                                     VL_SEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_stored_snp_s, 0x6cU, 3)));
    vlSelfRef.__PVT__tgt_clusterid_fifoout_stored = 
        (0xffU & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored)
                   ? VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 7U, 8)
                   : VL_SEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_stored, 0x77U, 8)));
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored), 
                                                   VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__myvc_value), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__snp_multicast_fifoout_stored), 0U)));
    VL_CONST_W_5X(160,__Vtemp_5,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_6, vlSelfRef.__PVT__read_data_fifo_stored, 0U, 151);
    VL_AND_W(5, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    VL_EXTEND_WW(155,151, __Vtemp_8, __Vtemp_7);
    VL_CONCAT_WQQ(124,62,62, __Vtemp_9, VL_CONCAT_QQI(62,52,10, 
                                                      (0xfffffffffffffULL 
                                                       & VL_SEL_QWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x48U, 52)), 
                                                      VL_CONCAT_III(10,3,7, 
                                                                    (7U 
                                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x45U, 3)), 
                                                                    (0x7fU 
                                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x3eU, 7)))), 
                  VL_CONCAT_QIQ(62,24,38, VL_CONCAT_III(24,12,12, 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x32U, 12)), 
                                                        VL_CONCAT_III(12,1,11, 
                                                                      (1U 
                                                                       & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x31U)), 
                                                                      (0x7ffU 
                                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x26U, 11)))), 
                                VL_CONCAT_QII(38,12,26, 
                                              (0xfffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x1aU, 12)), 
                                              VL_CONCAT_III(26,11,15, 
                                                            (0x7ffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0xfU, 11)), 
                                                            VL_CONCAT_III(15,8,7, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout_stored), 
                                                                          VL_CONCAT_III(7,3,4, (IData)(vlSelfRef.__PVT__tgt_portid_fifoout_stored), 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0U, 4))))))));
    VL_CONCAT_WIW(155,31,124, __Vtemp_10, VL_CONCAT_III(31,9,22, 
                                                        VL_CONCAT_III(9,5,4, 
                                                                      VL_EXTEND_II(5,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x96U))), 
                                                                      VL_CONCAT_III(4,2,2, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x94U, 2)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x93U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x92U))))), 
                                                        VL_CONCAT_III(22,9,13, 
                                                                      VL_CONCAT_III(9,8,1, 
                                                                                (0xffU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x8aU, 8)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x89U))), 
                                                                      VL_CONCAT_III(13,4,9, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x85U, 4)), 
                                                                                VL_CONCAT_III(9,4,5, 
                                                                                (0xfU 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x81U, 4)), 
                                                                                VL_CONCAT_III(5,3,2, 
                                                                                VL_CONCAT_III(3,2,1, 
                                                                                (3U 
                                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x7fU, 2)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x7eU))), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x7dU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_req_s, 0x7cU)))))))), __Vtemp_9);
    VL_COND_WIWW(155, vlSelfRef.__PVT__flit_out_pl, (IData)(vlSelfRef.__PVT__req_or_snp_fifoout_stored), __Vtemp_8, __Vtemp_10);
    VL_CONCAT_WIW(161,6,155, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pl);
}
