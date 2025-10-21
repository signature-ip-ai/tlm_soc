// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_l3_rx_datproc__pi41.h"

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__0(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__0(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__gnt_vc 
        = vlSelfRef.__PVT__gnt_vc1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__gnt_vc 
        = vlSelfRef.__PVT__gnt_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                           & (IData)(vlSelfRef.__PVT__flit_is_vc0));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                           & (IData)(vlSelfRef.__PVT__flit_is_vc1));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__2(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_flit_out_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__valid_flit_out;
    vlSelfRef.__PVT__end_flit_out_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__end_flit_out;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__flit_out);
    vlSelfRef.__PVT__send_working_update_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__send_working_update;
    vlSelfRef.__PVT__valid_flit_out_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__valid_flit_out;
    vlSelfRef.__PVT__end_flit_out_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__end_flit_out;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__flit_out);
    vlSelfRef.__PVT__send_working_update_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__send_working_update;
    vlSelfRef.__PVT__send_working_update = (((IData)(vlSelfRef.__PVT__send_working_update_vc1) 
                                             | (IData)(vlSelfRef.__PVT__send_working_update_vc0)) 
                                            | (0U != (IData)(vlSelfRef.__PVT__credits_cnt)));
    vlSelfRef.__PVT__credits_cnt_nxt = vlSelfRef.__PVT__credits_cnt;
    if (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update)))) 
               | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
              | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
             | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
            | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
           | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
          | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
         | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update)))))) {
        vlSelfRef.__PVT__credits_cnt_nxt = (0x1fU & 
                                            ((0U == 
                                              VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                              ? (IData)(vlSelfRef.__PVT__credits_cnt)
                                              : ((1U 
                                                  == 
                                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__credits_cnt) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__credits_cnt))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                    ? (IData)(vlSelfRef.__PVT__credits_cnt)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__credits_cnt))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                      ? (IData)(vlSelfRef.__PVT__credits_cnt)
                                                      : 
                                                     ((6U 
                                                       == 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.__PVT__credits_cnt))
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__credits_cnt))))))))));
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__send_working_update 
        = vlSelfRef.__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__3(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_LCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__drive_xLCRDV;
    vlSelfRef.__PVT__req_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__req_vc;
    vlSelfRef.__PVT__req_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__req_vc;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__2(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__0(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__gnt_vc 
        = vlSelfRef.__PVT__gnt_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__gnt_vc 
        = vlSelfRef.__PVT__gnt_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__2(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                           & (IData)(vlSelfRef.__PVT__flit_is_vc0));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                           & (IData)(vlSelfRef.__PVT__flit_is_vc1));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__3(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_flit_out_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__valid_flit_out;
    vlSelfRef.__PVT__end_flit_out_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__end_flit_out;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__flit_out);
    vlSelfRef.__PVT__send_working_update_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__4(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_vc0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0.__PVT__req_vc;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__5(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__valid_flit_out_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__valid_flit_out;
    vlSelfRef.__PVT__end_flit_out_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__end_flit_out;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__flit_out);
    vlSelfRef.__PVT__send_working_update_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__6(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_vc1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1.__PVT__req_vc;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__7(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__send_working_update = (((IData)(vlSelfRef.__PVT__send_working_update_vc1) 
                                             | (IData)(vlSelfRef.__PVT__send_working_update_vc0)) 
                                            | (0U != (IData)(vlSelfRef.__PVT__credits_cnt)));
    vlSelfRef.__PVT__credits_cnt_nxt = vlSelfRef.__PVT__credits_cnt;
    if (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update)))) 
               | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
              | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
             | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
            | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
           | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
          | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))) 
         | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update)))))) {
        vlSelfRef.__PVT__credits_cnt_nxt = (0x1fU & 
                                            ((0U == 
                                              VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                              ? (IData)(vlSelfRef.__PVT__credits_cnt)
                                              : ((1U 
                                                  == 
                                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__credits_cnt) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__credits_cnt))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                    ? (IData)(vlSelfRef.__PVT__credits_cnt)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__credits_cnt))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                      ? (IData)(vlSelfRef.__PVT__credits_cnt)
                                                      : 
                                                     ((6U 
                                                       == 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__send_working_update_vc1), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_working_update_vc0), (IData)(vlSelfRef.__PVT__send_working_update))))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelfRef.__PVT__credits_cnt))
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__credits_cnt))))))))));
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__send_working_update 
        = vlSelfRef.__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__8(Vsig_topology_top_sig_l3_rx_datproc__pi41* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_l3_rx_datproc__pi41___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_LCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_ic_crdt_update_0.__PVT__drive_xLCRDV;
}
