// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi62.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_data = 0U;
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    if ((0U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
             & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
        } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                     & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                    & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (vlSelfRef.__PVT__gnt_vc) {
            vlSelfRef.__PVT__send_data = 1U;
            vlSelfRef.__PVT__drive_end_flit = 1U;
            if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                 & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
            } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                         & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                        & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
            } else {
                vlSelfRef.__PVT__xmtstate_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__assert_req = 1U;
        }
    }
    vlSelfRef.__PVT__valid_flit_out = vlSelfRef.__PVT__send_data;
    vlSelfRef.__PVT__end_flit_out = vlSelfRef.__PVT__drive_end_flit;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 
                                                   ((IData)(vlSelfRef.__PVT__drive_end_flit)
                                                     ? 3U
                                                     : 2U));
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
    vlSelfRef.__PVT__stayin_network = ((IData)(vlSelfRef.__PVT__assert_req) 
                                       & (~ (IData)(vlSelfRef.__PVT__exit_network)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_data = 0U;
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    if ((0U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
             & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
        } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                     & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                    & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (vlSelfRef.__PVT__gnt_vc) {
            vlSelfRef.__PVT__send_data = 1U;
            vlSelfRef.__PVT__drive_end_flit = 1U;
            if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                 & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
            } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                         & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                        & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
            } else {
                vlSelfRef.__PVT__xmtstate_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__assert_req = 1U;
        }
    }
    vlSelfRef.__PVT__valid_flit_out = vlSelfRef.__PVT__send_data;
    vlSelfRef.__PVT__end_flit_out = vlSelfRef.__PVT__drive_end_flit;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 
                                                   ((IData)(vlSelfRef.__PVT__drive_end_flit)
                                                     ? 3U
                                                     : 2U));
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
    vlSelfRef.__PVT__stayin_network = ((IData)(vlSelfRef.__PVT__assert_req) 
                                       & (~ (IData)(vlSelfRef.__PVT__exit_network)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_data = 0U;
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    if ((0U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
             & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
        } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                     & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                    & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (vlSelfRef.__PVT__gnt_vc) {
            vlSelfRef.__PVT__send_data = 1U;
            vlSelfRef.__PVT__drive_end_flit = 1U;
            if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                 & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
            } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                         & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                        & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
            } else {
                vlSelfRef.__PVT__xmtstate_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__assert_req = 1U;
        }
    }
    vlSelfRef.__PVT__valid_flit_out = vlSelfRef.__PVT__send_data;
    vlSelfRef.__PVT__end_flit_out = vlSelfRef.__PVT__drive_end_flit;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 
                                                   ((IData)(vlSelfRef.__PVT__drive_end_flit)
                                                     ? 3U
                                                     : 2U));
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
    vlSelfRef.__PVT__stayin_network = ((IData)(vlSelfRef.__PVT__assert_req) 
                                       & (~ (IData)(vlSelfRef.__PVT__exit_network)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi47___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_data = 0U;
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    if ((0U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
             & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
        } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                     & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                    & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
            vlSelfRef.__PVT__assert_req = 1U;
            vlSelfRef.__PVT__xmtstate_nxt = 1U;
            vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
            VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__xmtstate))) {
        if (vlSelfRef.__PVT__gnt_vc) {
            vlSelfRef.__PVT__send_data = 1U;
            vlSelfRef.__PVT__drive_end_flit = 1U;
            if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                 & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
            } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                         & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                        & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                vlSelfRef.__PVT__assert_req = 1U;
                vlSelfRef.__PVT__xmtstate_nxt = 1U;
                vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__write_data_fifo);
            } else {
                vlSelfRef.__PVT__xmtstate_nxt = 0U;
            }
        } else {
            vlSelfRef.__PVT__assert_req = 1U;
        }
    }
    vlSelfRef.__PVT__valid_flit_out = vlSelfRef.__PVT__send_data;
    vlSelfRef.__PVT__end_flit_out = vlSelfRef.__PVT__drive_end_flit;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 
                                                   ((IData)(vlSelfRef.__PVT__drive_end_flit)
                                                     ? 3U
                                                     : 2U));
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
    vlSelfRef.__PVT__stayin_network = ((IData)(vlSelfRef.__PVT__assert_req) 
                                       & (~ (IData)(vlSelfRef.__PVT__exit_network)));
}
