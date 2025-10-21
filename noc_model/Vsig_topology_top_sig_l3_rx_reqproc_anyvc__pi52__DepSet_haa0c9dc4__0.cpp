// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52.h"

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(152,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_hdr = 0U;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSelfRef.__PVT__gnt_vc) {
                vlSelfRef.__PVT__send_hdr = 1U;
                vlSelfRef.__PVT__drive_end_flit = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelfRef.__PVT__valid_flit_out = vlSelfRef.__PVT__send_hdr;
    vlSelfRef.__PVT__end_flit_out = vlSelfRef.__PVT__drive_end_flit;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    VL_COND_WIWW(152, vlSelfRef.__PVT__read_data_fifo_withbypass, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__read_data_fifo);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    VL_CONST_W_4X(128,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_2, vlSelfRef.__PVT__read_data_fifo_withbypass, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__read_data_fifo_withbypass_snp_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_5X(160,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_4, vlSelfRef.__PVT__read_data_fifo_withbypass, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__req_or_snp_fifoout = (1U & VL_BITSEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_withbypass, 0x97U));
    vlSelfRef.__PVT__srcid_bit0_fifoout_1stcycle = 
        (1U & VL_BITSEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_withbypass_snp_s, 4U));
    vlSelfRef.__PVT__snp_multicast_fifoout = (1U & 
                                              VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, 0x93U));
    vlSelfRef.__PVT__tgt_nodeid_fifoout_up_1stcycle 
        = (3U & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout)
                  ? 0U : VL_SEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_withbypass, 0x91U, 2)));
    vlSelfRef.__PVT__tgt_portid_fifoout_1stcycle = 
        (7U & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout)
                ? VL_EXTEND_II(3,2, (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, 4U, 2)))
                : VL_SEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_withbypass_snp_s, 0x6cU, 3)));
    vlSelfRef.__PVT__tgt_clusterid_fifoout_1stcycle 
        = (0xffU & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout)
                     ? VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, 7U, 8)
                     : VL_SEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_withbypass, 0x77U, 8)));
    vlSelfRef.__PVT__srcid_bit0_fifoout = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                            | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                            ? (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout_1stcycle)
                                            : (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout_stored));
    vlSelfRef.__PVT__tgt_nodeid_fifoout_up = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                               | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                               ? (IData)(vlSelfRef.__PVT__tgt_nodeid_fifoout_up_1stcycle)
                                               : (IData)(vlSelfRef.__PVT__tgt_nodeid_fifoout_up_stored));
    vlSelfRef.__PVT__tgt_portid_fifoout = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                            | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                            ? (IData)(vlSelfRef.__PVT__tgt_portid_fifoout_1stcycle)
                                            : (IData)(vlSelfRef.__PVT__tgt_portid_fifoout_stored));
    vlSelfRef.__PVT__tgt_clusterid_fifoout = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                               | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                               ? (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout_1stcycle)
                                               : (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout_stored));
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
    vlSelfRef.__PVT__stayin_network = ((IData)(vlSelfRef.__PVT__assert_req) 
                                       & (~ (IData)(vlSelfRef.__PVT__exit_network)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__2(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_south_xfirst_o;
    vlSelfRef.__PVT__req_vc = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__req_vc);
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__req_vc);
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__req_vc);
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__req_vc);
            }
        } else {
            VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_east_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_east_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_north_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_north_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
            VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_west_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_west_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_south_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_south_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(152,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_hdr = 0U;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSelfRef.__PVT__gnt_vc) {
                vlSelfRef.__PVT__send_hdr = 1U;
                vlSelfRef.__PVT__drive_end_flit = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(152,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelfRef.__PVT__valid_flit_out = vlSelfRef.__PVT__send_hdr;
    vlSelfRef.__PVT__end_flit_out = vlSelfRef.__PVT__drive_end_flit;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    VL_COND_WIWW(152, vlSelfRef.__PVT__read_data_fifo_withbypass, (IData)(vlSelfRef.__PVT__rden_storefifo_bypass), vlSelfRef.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__read_data_fifo);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__flit_store_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    VL_CONST_W_4X(128,__Vtemp_1,0x007fffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(119, 152, __Vtemp_2, vlSelfRef.__PVT__read_data_fifo_withbypass, 0U, 119);
    VL_AND_W(4, vlSelfRef.__PVT__read_data_fifo_withbypass_snp_s, __Vtemp_1, __Vtemp_2);
    VL_CONST_W_5X(160,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 152, __Vtemp_4, vlSelfRef.__PVT__read_data_fifo_withbypass, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__req_or_snp_fifoout = (1U & VL_BITSEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_withbypass, 0x97U));
    vlSelfRef.__PVT__srcid_bit0_fifoout_1stcycle = 
        (1U & VL_BITSEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_withbypass_snp_s, 4U));
    vlSelfRef.__PVT__snp_multicast_fifoout = (1U & 
                                              VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, 0x93U));
    vlSelfRef.__PVT__tgt_nodeid_fifoout_up_1stcycle 
        = (3U & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout)
                  ? 0U : VL_SEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_withbypass, 0x91U, 2)));
    vlSelfRef.__PVT__tgt_portid_fifoout_1stcycle = 
        (7U & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout)
                ? VL_EXTEND_II(3,2, (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, 4U, 2)))
                : VL_SEL_IWII(119, vlSelfRef.__PVT__read_data_fifo_withbypass_snp_s, 0x6cU, 3)));
    vlSelfRef.__PVT__tgt_clusterid_fifoout_1stcycle 
        = (0xffU & ((IData)(vlSelfRef.__PVT__req_or_snp_fifoout)
                     ? VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_withbypass_req_s, 7U, 8)
                     : VL_SEL_IWII(152, vlSelfRef.__PVT__read_data_fifo_withbypass, 0x77U, 8)));
    vlSelfRef.__PVT__srcid_bit0_fifoout = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                            | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                            ? (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout_1stcycle)
                                            : (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout_stored));
    vlSelfRef.__PVT__tgt_nodeid_fifoout_up = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                               | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                               ? (IData)(vlSelfRef.__PVT__tgt_nodeid_fifoout_up_1stcycle)
                                               : (IData)(vlSelfRef.__PVT__tgt_nodeid_fifoout_up_stored));
    vlSelfRef.__PVT__tgt_portid_fifoout = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                            | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                            ? (IData)(vlSelfRef.__PVT__tgt_portid_fifoout_1stcycle)
                                            : (IData)(vlSelfRef.__PVT__tgt_portid_fifoout_stored));
    vlSelfRef.__PVT__tgt_clusterid_fifoout = (((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                               | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass))
                                               ? (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout_1stcycle)
                                               : (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout_stored));
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
    vlSelfRef.__PVT__stayin_network = ((IData)(vlSelfRef.__PVT__assert_req) 
                                       & (~ (IData)(vlSelfRef.__PVT__exit_network)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__2(Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_reqproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy.__PVT__route_south_xfirst_o;
    vlSelfRef.__PVT__req_vc = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__req_vc);
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__req_vc);
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__req_vc);
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__req_vc);
            }
        } else {
            VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_east_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_east_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_north_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_north_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
            VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_west_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_west_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_south_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_south_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
        }
    }
}
