// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_tx_portarb.h"

VL_ATTR_COLD void Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_tx_portarb_vc1__0(Vsig_topology_top_sig_tx_portarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_tx_portarb_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual = (0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec)) 
                                            & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__end_req_vec))));
    vlSelfRef.__PVT__any_req_asserted = (0U != (IData)(vlSelfRef.__PVT__req_vec));
    vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
        vlSelfRef.__PVT__relative_req_vec = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? VL_CONCAT_III(10,1,9, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U)), 
                                                              (0x1ffU 
                                                               & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 1U, 9)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 
                                                 VL_CONCAT_III(10,2,8, 
                                                               (3U 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 2)), 
                                                               (0xffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 2U, 8)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 
                                                  VL_CONCAT_III(10,3,7, 
                                                                (7U 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 3)), 
                                                                (0x7fU 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 3U, 7)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 
                                                   VL_CONCAT_III(10,4,6, 
                                                                 (0xfU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 4)), 
                                                                 (0x3fU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 4U, 6)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 
                                                    VL_CONCAT_III(10,5,5, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 5)), 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 5U, 5)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 
                                                     VL_CONCAT_III(10,6,4, 
                                                                   (0x3fU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 6)), 
                                                                   (0xfU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 6U, 4)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 
                                                      VL_CONCAT_III(10,7,3, 
                                                                    (0x7fU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 7)), 
                                                                    (7U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 7U, 3)))
                                                       : 
                                                      VL_CONCAT_III(10,8,2, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 8)), 
                                                                    (3U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 8U, 2))))))))));
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = VL_CONCAT_III(10,9,1, 
                                                          (0x1ffU 
                                                           & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 9)), 
                                                          (1U 
                                                           & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 9U)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 1U) 
                           & (~ VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 2U) 
                     & (0U == (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 3U) 
                     & (0U == (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 4U) 
                     & (0U == (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 4)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 5U) 
                     & (0U == (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 6U) 
                     & (0U == (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 6)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 7U) 
                     & (0U == (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 7)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 8U) 
                     & (0U == (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 8)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 9U) 
                     & (0U == (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 9)))));
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec_nxt = vlSelfRef.__PVT__gnt_vec;
    vlSelfRef.__PVT__grant_posn_nxt = vlSelfRef.__PVT__grant_posn;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if (vlSelfRef.__PVT__end_req_qual) {
                vlSelfRef.__PVT__arbstate_nxt = 0U;
                if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 0x100U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 0x200U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 9U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0x10U : 
                                        ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                          ? 0x20U : 
                                         ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                           ? 0x40U : 
                                          ((4U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((5U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 3U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 5U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 0U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x10U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x20U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x40U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 5U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 6U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x20U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x40U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x80U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 5U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 6U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 7U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x40U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 6U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 7U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 9U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 3U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x80U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x100U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x200U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 7U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x100U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 0x200U
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 0x20U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 9U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 5U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x200U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? 2U : 
                                             ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                               ? 4U
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 0x40U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 9U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 6U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 0x80U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 7U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    }
                } else {
                    vlSelfRef.__PVT__gnt_vec_nxt = 0U;
                }
            }
        }
    } else if (((0U == (IData)(vlSelfRef.__PVT__gnt_vec)) 
                | (IData)(vlSelfRef.__PVT__end_req_qual))) {
        if (vlSelfRef.__PVT__any_req_asserted) {
            vlSelfRef.__PVT__arbstate_nxt = 1U;
        }
        if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x80U
                                                       : 0x100U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 6U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 7U
                                                          : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 4U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x100U
                                                       : 0x200U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 5U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 6U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 7U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 8U
                                                          : 9U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 8U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x200U
                                                       : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 7U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 8U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 9U
                                                          : 0U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x10U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x20U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x40U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 8U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 9U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 0U
                                                          : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x20U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x40U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 9U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 0U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 1U
                                                          : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x40U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x80U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x100U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 9U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 1U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 2U
                                                          : 3U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x80U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x100U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x200U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 1U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 2U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 3U
                                                          : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x100U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x200U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x10U
                                                       : 0x20U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 2U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 3U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 4U
                                                          : 5U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x200U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x10U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x20U
                                                       : 0x40U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 3U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 4U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 5U
                                                          : 6U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x20U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x40U
                                                       : 0x80U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 3U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 4U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 5U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 6U
                                                          : 7U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            }
        } else {
            vlSelfRef.__PVT__gnt_vec_nxt = 0U;
        }
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc0__0(Vsig_topology_top_sig_tx_portarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual = (0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec)) 
                                            & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__end_req_vec))));
    vlSelfRef.__PVT__any_req_asserted = (0U != (IData)(vlSelfRef.__PVT__req_vec));
    vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
        vlSelfRef.__PVT__relative_req_vec = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? VL_CONCAT_III(10,1,9, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U)), 
                                                              (0x1ffU 
                                                               & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 1U, 9)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 
                                                 VL_CONCAT_III(10,2,8, 
                                                               (3U 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 2)), 
                                                               (0xffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 2U, 8)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 
                                                  VL_CONCAT_III(10,3,7, 
                                                                (7U 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 3)), 
                                                                (0x7fU 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 3U, 7)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 
                                                   VL_CONCAT_III(10,4,6, 
                                                                 (0xfU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 4)), 
                                                                 (0x3fU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 4U, 6)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 
                                                    VL_CONCAT_III(10,5,5, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 5)), 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 5U, 5)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 
                                                     VL_CONCAT_III(10,6,4, 
                                                                   (0x3fU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 6)), 
                                                                   (0xfU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 6U, 4)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 
                                                      VL_CONCAT_III(10,7,3, 
                                                                    (0x7fU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 7)), 
                                                                    (7U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 7U, 3)))
                                                       : 
                                                      VL_CONCAT_III(10,8,2, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 8)), 
                                                                    (3U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 8U, 2))))))))));
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = VL_CONCAT_III(10,9,1, 
                                                          (0x1ffU 
                                                           & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 9)), 
                                                          (1U 
                                                           & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 9U)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 1U) 
                           & (~ VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 2U) 
                     & (0U == (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 3U) 
                     & (0U == (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 4U) 
                     & (0U == (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 4)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 5U) 
                     & (0U == (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 6U) 
                     & (0U == (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 6)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 7U) 
                     & (0U == (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 7)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 8U) 
                     & (0U == (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 8)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 9U) 
                     & (0U == (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 9)))));
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec_nxt = vlSelfRef.__PVT__gnt_vec;
    vlSelfRef.__PVT__grant_posn_nxt = vlSelfRef.__PVT__grant_posn;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if (vlSelfRef.__PVT__end_req_qual) {
                vlSelfRef.__PVT__arbstate_nxt = 0U;
                if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 0x100U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 0x200U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 9U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0x10U : 
                                        ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                          ? 0x20U : 
                                         ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                           ? 0x40U : 
                                          ((4U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((5U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 3U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 5U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 0U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x10U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x20U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x40U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 5U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 6U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x20U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x40U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x80U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 5U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 6U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 7U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x40U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 6U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 7U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 9U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 3U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x80U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x100U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x200U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 7U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x100U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 0x200U
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 0x20U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 9U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 5U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x200U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? 2U : 
                                             ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                               ? 4U
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 0x40U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 9U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 6U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 0x80U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 7U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    }
                } else {
                    vlSelfRef.__PVT__gnt_vec_nxt = 0U;
                }
            }
        }
    } else if (((0U == (IData)(vlSelfRef.__PVT__gnt_vec)) 
                | (IData)(vlSelfRef.__PVT__end_req_qual))) {
        if (vlSelfRef.__PVT__any_req_asserted) {
            vlSelfRef.__PVT__arbstate_nxt = 1U;
        }
        if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x80U
                                                       : 0x100U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 6U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 7U
                                                          : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 4U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x100U
                                                       : 0x200U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 5U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 6U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 7U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 8U
                                                          : 9U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 8U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x200U
                                                       : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 7U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 8U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 9U
                                                          : 0U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x10U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x20U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x40U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 8U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 9U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 0U
                                                          : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x20U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x40U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 9U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 0U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 1U
                                                          : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x40U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x80U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x100U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 9U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 1U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 2U
                                                          : 3U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x80U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x100U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x200U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 1U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 2U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 3U
                                                          : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x100U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x200U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x10U
                                                       : 0x20U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 2U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 3U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 4U
                                                          : 5U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x200U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x10U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x20U
                                                       : 0x40U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 3U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 4U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 5U
                                                          : 6U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x20U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x40U
                                                       : 0x80U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 3U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 4U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 5U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 6U
                                                          : 7U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            }
        } else {
            vlSelfRef.__PVT__gnt_vec_nxt = 0U;
        }
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc1__0(Vsig_topology_top_sig_tx_portarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual = (0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec)) 
                                            & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__end_req_vec))));
    vlSelfRef.__PVT__any_req_asserted = (0U != (IData)(vlSelfRef.__PVT__req_vec));
    vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
        vlSelfRef.__PVT__relative_req_vec = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? VL_CONCAT_III(10,1,9, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U)), 
                                                              (0x1ffU 
                                                               & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 1U, 9)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 
                                                 VL_CONCAT_III(10,2,8, 
                                                               (3U 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 2)), 
                                                               (0xffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 2U, 8)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 
                                                  VL_CONCAT_III(10,3,7, 
                                                                (7U 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 3)), 
                                                                (0x7fU 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 3U, 7)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 
                                                   VL_CONCAT_III(10,4,6, 
                                                                 (0xfU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 4)), 
                                                                 (0x3fU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 4U, 6)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 
                                                    VL_CONCAT_III(10,5,5, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 5)), 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 5U, 5)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 
                                                     VL_CONCAT_III(10,6,4, 
                                                                   (0x3fU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 6)), 
                                                                   (0xfU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 6U, 4)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 
                                                      VL_CONCAT_III(10,7,3, 
                                                                    (0x7fU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 7)), 
                                                                    (7U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 7U, 3)))
                                                       : 
                                                      VL_CONCAT_III(10,8,2, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 8)), 
                                                                    (3U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 8U, 2))))))))));
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = VL_CONCAT_III(10,9,1, 
                                                          (0x1ffU 
                                                           & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 9)), 
                                                          (1U 
                                                           & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 9U)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 1U) 
                           & (~ VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 2U) 
                     & (0U == (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 3U) 
                     & (0U == (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 4U) 
                     & (0U == (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 4)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 5U) 
                     & (0U == (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 6U) 
                     & (0U == (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 6)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 7U) 
                     & (0U == (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 7)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 8U) 
                     & (0U == (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 8)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 9U) 
                     & (0U == (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 9)))));
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec_nxt = vlSelfRef.__PVT__gnt_vec;
    vlSelfRef.__PVT__grant_posn_nxt = vlSelfRef.__PVT__grant_posn;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if (vlSelfRef.__PVT__end_req_qual) {
                vlSelfRef.__PVT__arbstate_nxt = 0U;
                if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 0x100U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 0x200U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 9U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0x10U : 
                                        ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                          ? 0x20U : 
                                         ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                           ? 0x40U : 
                                          ((4U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((5U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 3U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 5U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 0U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x10U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x20U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x40U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 5U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 6U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x20U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x40U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x80U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 5U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 6U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 7U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x40U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 6U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 7U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 9U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 3U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x80U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x100U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x200U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 7U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x100U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 0x200U
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 0x20U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 9U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 5U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x200U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? 2U : 
                                             ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                               ? 4U
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 0x40U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 9U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 6U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 0x80U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 7U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    }
                } else {
                    vlSelfRef.__PVT__gnt_vec_nxt = 0U;
                }
            }
        }
    } else if (((0U == (IData)(vlSelfRef.__PVT__gnt_vec)) 
                | (IData)(vlSelfRef.__PVT__end_req_qual))) {
        if (vlSelfRef.__PVT__any_req_asserted) {
            vlSelfRef.__PVT__arbstate_nxt = 1U;
        }
        if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x80U
                                                       : 0x100U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 6U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 7U
                                                          : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 4U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x100U
                                                       : 0x200U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 5U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 6U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 7U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 8U
                                                          : 9U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 8U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x200U
                                                       : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 7U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 8U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 9U
                                                          : 0U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x10U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x20U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x40U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 8U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 9U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 0U
                                                          : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x20U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x40U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 9U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 0U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 1U
                                                          : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x40U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x80U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x100U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 9U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 1U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 2U
                                                          : 3U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x80U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x100U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x200U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 1U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 2U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 3U
                                                          : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x100U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x200U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x10U
                                                       : 0x20U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 2U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 3U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 4U
                                                          : 5U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x200U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x10U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x20U
                                                       : 0x40U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 3U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 4U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 5U
                                                          : 6U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x20U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x40U
                                                       : 0x80U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 3U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 4U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 5U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 6U
                                                          : 7U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            }
        } else {
            vlSelfRef.__PVT__gnt_vec_nxt = 0U;
        }
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc0__0(Vsig_topology_top_sig_tx_portarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual = (0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec)) 
                                            & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__end_req_vec))));
    vlSelfRef.__PVT__any_req_asserted = (0U != (IData)(vlSelfRef.__PVT__req_vec));
    vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
        vlSelfRef.__PVT__relative_req_vec = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? VL_CONCAT_III(10,1,9, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U)), 
                                                              (0x1ffU 
                                                               & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 1U, 9)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 
                                                 VL_CONCAT_III(10,2,8, 
                                                               (3U 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 2)), 
                                                               (0xffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 2U, 8)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 
                                                  VL_CONCAT_III(10,3,7, 
                                                                (7U 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 3)), 
                                                                (0x7fU 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 3U, 7)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 
                                                   VL_CONCAT_III(10,4,6, 
                                                                 (0xfU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 4)), 
                                                                 (0x3fU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 4U, 6)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 
                                                    VL_CONCAT_III(10,5,5, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 5)), 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 5U, 5)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 
                                                     VL_CONCAT_III(10,6,4, 
                                                                   (0x3fU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 6)), 
                                                                   (0xfU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 6U, 4)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 
                                                      VL_CONCAT_III(10,7,3, 
                                                                    (0x7fU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 7)), 
                                                                    (7U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 7U, 3)))
                                                       : 
                                                      VL_CONCAT_III(10,8,2, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 8)), 
                                                                    (3U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 8U, 2))))))))));
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = VL_CONCAT_III(10,9,1, 
                                                          (0x1ffU 
                                                           & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 9)), 
                                                          (1U 
                                                           & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 9U)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 1U) 
                           & (~ VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 2U) 
                     & (0U == (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 3U) 
                     & (0U == (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 4U) 
                     & (0U == (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 4)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 5U) 
                     & (0U == (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 6U) 
                     & (0U == (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 6)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 7U) 
                     & (0U == (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 7)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 8U) 
                     & (0U == (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 8)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 9U) 
                     & (0U == (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 9)))));
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec_nxt = vlSelfRef.__PVT__gnt_vec;
    vlSelfRef.__PVT__grant_posn_nxt = vlSelfRef.__PVT__grant_posn;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if (vlSelfRef.__PVT__end_req_qual) {
                vlSelfRef.__PVT__arbstate_nxt = 0U;
                if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 0x100U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 0x200U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 9U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0x10U : 
                                        ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                          ? 0x20U : 
                                         ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                           ? 0x40U : 
                                          ((4U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((5U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 3U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 5U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 0U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x10U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x20U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x40U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 5U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 6U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x20U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x40U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x80U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 5U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 6U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 7U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x40U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 6U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 7U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 9U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 3U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x80U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x100U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x200U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 7U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x100U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 0x200U
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 0x20U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 9U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 5U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x200U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? 2U : 
                                             ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                               ? 4U
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 0x40U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 9U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 6U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 0x80U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 7U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    }
                } else {
                    vlSelfRef.__PVT__gnt_vec_nxt = 0U;
                }
            }
        }
    } else if (((0U == (IData)(vlSelfRef.__PVT__gnt_vec)) 
                | (IData)(vlSelfRef.__PVT__end_req_qual))) {
        if (vlSelfRef.__PVT__any_req_asserted) {
            vlSelfRef.__PVT__arbstate_nxt = 1U;
        }
        if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x80U
                                                       : 0x100U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 6U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 7U
                                                          : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 4U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x100U
                                                       : 0x200U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 5U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 6U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 7U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 8U
                                                          : 9U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 8U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x200U
                                                       : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 7U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 8U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 9U
                                                          : 0U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x10U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x20U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x40U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 8U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 9U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 0U
                                                          : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x20U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x40U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 9U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 0U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 1U
                                                          : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x40U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x80U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x100U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 9U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 1U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 2U
                                                          : 3U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x80U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x100U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x200U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 1U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 2U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 3U
                                                          : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x100U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x200U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x10U
                                                       : 0x20U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 2U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 3U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 4U
                                                          : 5U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x200U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x10U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x20U
                                                       : 0x40U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 3U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 4U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 5U
                                                          : 6U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x20U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x40U
                                                       : 0x80U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 3U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 4U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 5U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 6U
                                                          : 7U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            }
        } else {
            vlSelfRef.__PVT__gnt_vec_nxt = 0U;
        }
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc1__0(Vsig_topology_top_sig_tx_portarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_tx_portarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__sig_tx_portarb_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual = (0U != (VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__gnt_vec)) 
                                            & VL_EXTEND_II(32,10, (IData)(vlSelfRef.__PVT__end_req_vec))));
    vlSelfRef.__PVT__any_req_asserted = (0U != (IData)(vlSelfRef.__PVT__req_vec));
    vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
        vlSelfRef.__PVT__relative_req_vec = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? VL_CONCAT_III(10,1,9, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U)), 
                                                              (0x1ffU 
                                                               & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 1U, 9)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 
                                                 VL_CONCAT_III(10,2,8, 
                                                               (3U 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 2)), 
                                                               (0xffU 
                                                                & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 2U, 8)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 
                                                  VL_CONCAT_III(10,3,7, 
                                                                (7U 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 3)), 
                                                                (0x7fU 
                                                                 & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 3U, 7)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 
                                                   VL_CONCAT_III(10,4,6, 
                                                                 (0xfU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 4)), 
                                                                 (0x3fU 
                                                                  & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 4U, 6)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 
                                                    VL_CONCAT_III(10,5,5, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 5)), 
                                                                  (0x1fU 
                                                                   & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 5U, 5)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 
                                                     VL_CONCAT_III(10,6,4, 
                                                                   (0x3fU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 6)), 
                                                                   (0xfU 
                                                                    & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 6U, 4)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 
                                                      VL_CONCAT_III(10,7,3, 
                                                                    (0x7fU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 7)), 
                                                                    (7U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 7U, 3)))
                                                       : 
                                                      VL_CONCAT_III(10,8,2, 
                                                                    (0xffU 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 8)), 
                                                                    (3U 
                                                                     & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 8U, 2))))))))));
    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = VL_CONCAT_III(10,9,1, 
                                                          (0x1ffU 
                                                           & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 0U, 9)), 
                                                          (1U 
                                                           & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__req_vec), 9U)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
        vlSelfRef.__PVT__relative_req_vec = vlSelfRef.__PVT__req_vec;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (1U & (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 1U) 
                           & (~ VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 2U) 
                     & (0U == (3U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 3U) 
                     & (0U == (7U & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 4U) 
                     & (0U == (0xfU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 4)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 5U) 
                     & (0U == (0x1fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 6U) 
                     & (0U == (0x3fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 6)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 7U) 
                     & (0U == (0x7fU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 7)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 8U) 
                     & (0U == (0xffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 8)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rel_req_highest_priority, 
                    (VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 9U) 
                     & (0U == (0x1ffU & VL_SEL_IIII(10, (IData)(vlSelfRef.__PVT__relative_req_vec), 0U, 9)))));
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec_nxt = vlSelfRef.__PVT__gnt_vec;
    vlSelfRef.__PVT__grant_posn_nxt = vlSelfRef.__PVT__grant_posn;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if (vlSelfRef.__PVT__end_req_qual) {
                vlSelfRef.__PVT__arbstate_nxt = 0U;
                if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 0x100U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 0x200U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 2U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 9U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 0U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0x10U : 
                                        ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                          ? 0x20U : 
                                         ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                           ? 0x40U : 
                                          ((4U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((5U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 3U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 4U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 5U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 0U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 1U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x10U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x20U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x40U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 4U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 5U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 6U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 1U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 2U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x20U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x40U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x80U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 5U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 6U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 7U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 2U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 3U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x40U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x80U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x100U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 6U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 7U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 9U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 3U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 4U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x80U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                            ? 0x100U
                                            : ((2U 
                                                == (IData)(vlSelfRef.__PVT__grant_posn))
                                                ? 0x200U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 7U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 8U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 4U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 5U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x100U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 0x200U
                                             : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 0x20U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 8U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 9U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 5U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 6U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0x200U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__grant_posn))
                                              ? 2U : 
                                             ((3U == (IData)(vlSelfRef.__PVT__grant_posn))
                                               ? 4U
                                               : ((4U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 0x40U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 9U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 6U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 7U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    }
                } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__gnt_vec_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 1U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 0x80U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
                    }
                    if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                               | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                              | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                             | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                            | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                           | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                          | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                         | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                        vlSelfRef.__PVT__grant_posn_nxt 
                            = ((0U == (IData)(vlSelfRef.__PVT__grant_posn))
                                ? 0U : ((1U == (IData)(vlSelfRef.__PVT__grant_posn))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 7U)))))));
                    } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 8U;
                    } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                        vlSelfRef.__PVT__grant_posn_nxt = 9U;
                    }
                } else {
                    vlSelfRef.__PVT__gnt_vec_nxt = 0U;
                }
            }
        }
    } else if (((0U == (IData)(vlSelfRef.__PVT__gnt_vec)) 
                | (IData)(vlSelfRef.__PVT__end_req_qual))) {
        if (vlSelfRef.__PVT__any_req_asserted) {
            vlSelfRef.__PVT__arbstate_nxt = 1U;
        }
        if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 0U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 2U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 4U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 8U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x10U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x20U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x40U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x80U
                                                       : 0x100U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 3U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 6U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 7U
                                                          : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 1U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 4U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 8U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x10U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x20U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x40U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x80U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x100U
                                                       : 0x200U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 5U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 6U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 7U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 8U
                                                          : 9U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 0U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 2U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 8U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x10U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x20U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x40U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x80U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x100U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x200U
                                                       : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 5U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 7U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 8U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 9U
                                                          : 0U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 1U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 3U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x10U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x20U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x40U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x80U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x100U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x200U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 5U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 6U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 8U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 9U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 0U
                                                          : 1U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 2U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 4U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x20U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x40U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x80U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x100U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x200U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 6U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 7U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 9U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 0U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 1U
                                                          : 2U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 3U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 5U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x40U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x80U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x100U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0x200U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 4U
                                                       : 8U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x10U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 9U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 1U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 2U
                                                          : 3U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 4U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 6U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x80U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x100U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 0x200U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 2U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 4U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 8U
                                                       : 0x10U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x20U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 1U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 2U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 3U
                                                          : 4U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 5U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 7U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x100U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 0x200U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 4U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 8U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x10U
                                                       : 0x20U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x40U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 9U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 1U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 2U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 3U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 4U
                                                          : 5U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 6U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 8U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 0x200U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x10U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x20U
                                                       : 0x40U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x80U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 3U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 4U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 5U
                                                          : 6U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 7U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            }
        } else if ((1U & VL_BITSEL_IIII(10, (IData)(vlSelfRef.__PVT__rel_req_highest_priority), 9U))) {
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__gnt_vec_nxt = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__grant_posn))
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.__PVT__grant_posn))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__grant_posn))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 8U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 0x10U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 0x20U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 0x40U
                                                       : 0x80U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x100U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__gnt_vec_nxt = 0x200U;
            }
            if (((((((((0U == (IData)(vlSelfRef.__PVT__grant_posn)) 
                       | (1U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                      | (2U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                     | (3U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                    | (4U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                   | (5U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                  | (6U == (IData)(vlSelfRef.__PVT__grant_posn))) 
                 | (7U == (IData)(vlSelfRef.__PVT__grant_posn)))) {
                vlSelfRef.__PVT__grant_posn_nxt = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__grant_posn))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__grant_posn))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__grant_posn))
                                                      ? 2U
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.__PVT__grant_posn))
                                                       ? 3U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelfRef.__PVT__grant_posn))
                                                        ? 4U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelfRef.__PVT__grant_posn))
                                                         ? 5U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelfRef.__PVT__grant_posn))
                                                          ? 6U
                                                          : 7U)))))));
            } else if ((8U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 8U;
            } else if ((9U == (IData)(vlSelfRef.__PVT__grant_posn))) {
                vlSelfRef.__PVT__grant_posn_nxt = 9U;
            }
        } else {
            vlSelfRef.__PVT__gnt_vec_nxt = 0U;
        }
    }
}
