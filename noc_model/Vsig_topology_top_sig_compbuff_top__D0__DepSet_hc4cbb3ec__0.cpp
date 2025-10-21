// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_compbuff_top__D0.h"

VL_INLINE_OPT void Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__0(Vsig_topology_top_sig_compbuff_top__D0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_oct3 = (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__buff_avail, 0x18U, 8));
    vlSelfRef.__PVT__buff_avail_oct2 = (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__buff_avail, 0x10U, 8));
    vlSelfRef.__PVT__buff_avail_oct1 = (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__buff_avail, 8U, 8));
    vlSelfRef.__PVT__buff_avail_oct0 = (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__buff_avail, 0U, 8));
    vlSelfRef.__PVT__compbuf_available = (0U != vlSelfRef.__PVT__buff_avail);
    VL_ASSIGNSEL_WI(128,12,0U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [2U], VL_CONCAT_III(8,4,4, 
                                                      vlSelfRef.__PVT__valid_location
                                                      [1U], 
                                                      vlSelfRef.__PVT__valid_location
                                                      [0U])));
    VL_ASSIGNSEL_WI(128,12,0xcU, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [5U], VL_CONCAT_III(8,4,4, 
                                                      vlSelfRef.__PVT__valid_location
                                                      [4U], 
                                                      vlSelfRef.__PVT__valid_location
                                                      [3U])));
    VL_ASSIGNSEL_WI(128,12,0x18U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [8U], VL_CONCAT_III(8,4,4, 
                                                      vlSelfRef.__PVT__valid_location
                                                      [7U], 
                                                      vlSelfRef.__PVT__valid_location
                                                      [6U])));
    VL_ASSIGNSEL_WI(128,12,0x24U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0xbU], VL_CONCAT_III(8,4,4, 
                                                        vlSelfRef.__PVT__valid_location
                                                        [0xaU], 
                                                        vlSelfRef.__PVT__valid_location
                                                        [9U])));
    VL_ASSIGNSEL_WI(128,12,0x30U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0xeU], VL_CONCAT_III(8,4,4, 
                                                        vlSelfRef.__PVT__valid_location
                                                        [0xdU], 
                                                        vlSelfRef.__PVT__valid_location
                                                        [0xcU])));
    VL_ASSIGNSEL_WI(128,12,0x3cU, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0x11U], VL_CONCAT_III(8,4,4, 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x10U], 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0xfU])));
    VL_ASSIGNSEL_WI(128,12,0x48U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0x14U], VL_CONCAT_III(8,4,4, 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x13U], 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x12U])));
    VL_ASSIGNSEL_WI(128,12,0x54U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0x17U], VL_CONCAT_III(8,4,4, 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x16U], 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x15U])));
    VL_ASSIGNSEL_WI(128,12,0x60U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0x1aU], VL_CONCAT_III(8,4,4, 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x19U], 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x18U])));
    VL_ASSIGNSEL_WI(128,12,0x6cU, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(12,4,8, vlSelfRef.__PVT__valid_location
                                  [0x1dU], VL_CONCAT_III(8,4,4, 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x1cU], 
                                                         vlSelfRef.__PVT__valid_location
                                                         [0x1bU])));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.__PVT__valid_location_all, 
                    VL_CONCAT_III(8,4,4, vlSelfRef.__PVT__valid_location
                                  [0x1fU], vlSelfRef.__PVT__valid_location
                                  [0x1eU]));
    vlSelfRef.__PVT__buffavail_oct0 = (0U != (IData)(vlSelfRef.__PVT__buff_avail_oct0));
    vlSelfRef.__PVT__buffavail_oct1 = ((~ (IData)(vlSelfRef.__PVT__buffavail_oct0)) 
                                       & (0U != (IData)(vlSelfRef.__PVT__buff_avail_oct1)));
    vlSelfRef.__PVT__buffavail_oct2 = (((~ (IData)(vlSelfRef.__PVT__buffavail_oct0)) 
                                        & (~ (IData)(vlSelfRef.__PVT__buffavail_oct1))) 
                                       & (0U != (IData)(vlSelfRef.__PVT__buff_avail_oct2)));
    vlSelfRef.__PVT__buffavail_oct3 = ((((~ (IData)(vlSelfRef.__PVT__buffavail_oct0)) 
                                         & (~ (IData)(vlSelfRef.__PVT__buffavail_oct1))) 
                                        & (~ (IData)(vlSelfRef.__PVT__buffavail_oct2))) 
                                       & (0U != (IData)(vlSelfRef.__PVT__buff_avail_oct3)));
    vlSelfRef.__PVT__buffernum_available = 0x1fU;
    if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct3), (IData)(vlSelfRef.__PVT__buffavail_oct2)), 
                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct1), (IData)(vlSelfRef.__PVT__buffavail_oct0))))) {
        if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 0U))) {
            vlSelfRef.__PVT__buffernum_available = 0U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 1U))) {
            vlSelfRef.__PVT__buffernum_available = 1U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 2U))) {
            vlSelfRef.__PVT__buffernum_available = 2U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 3U))) {
            vlSelfRef.__PVT__buffernum_available = 3U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 4U))) {
            vlSelfRef.__PVT__buffernum_available = 4U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 5U))) {
            vlSelfRef.__PVT__buffernum_available = 5U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 6U))) {
            vlSelfRef.__PVT__buffernum_available = 6U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct0), 7U))) {
            vlSelfRef.__PVT__buffernum_available = 7U;
        }
    } else if ((2U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct3), (IData)(vlSelfRef.__PVT__buffavail_oct2)), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct1), (IData)(vlSelfRef.__PVT__buffavail_oct0))))) {
        if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 0U))) {
            vlSelfRef.__PVT__buffernum_available = 8U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 1U))) {
            vlSelfRef.__PVT__buffernum_available = 9U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 2U))) {
            vlSelfRef.__PVT__buffernum_available = 0xaU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 3U))) {
            vlSelfRef.__PVT__buffernum_available = 0xbU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 4U))) {
            vlSelfRef.__PVT__buffernum_available = 0xcU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 5U))) {
            vlSelfRef.__PVT__buffernum_available = 0xdU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 6U))) {
            vlSelfRef.__PVT__buffernum_available = 0xeU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct1), 7U))) {
            vlSelfRef.__PVT__buffernum_available = 0xfU;
        }
    } else if ((4U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct3), (IData)(vlSelfRef.__PVT__buffavail_oct2)), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct1), (IData)(vlSelfRef.__PVT__buffavail_oct0))))) {
        if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 0U))) {
            vlSelfRef.__PVT__buffernum_available = 0x10U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 1U))) {
            vlSelfRef.__PVT__buffernum_available = 0x11U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 2U))) {
            vlSelfRef.__PVT__buffernum_available = 0x12U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 3U))) {
            vlSelfRef.__PVT__buffernum_available = 0x13U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 4U))) {
            vlSelfRef.__PVT__buffernum_available = 0x14U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 5U))) {
            vlSelfRef.__PVT__buffernum_available = 0x15U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 6U))) {
            vlSelfRef.__PVT__buffernum_available = 0x16U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct2), 7U))) {
            vlSelfRef.__PVT__buffernum_available = 0x17U;
        }
    } else if ((8U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct3), (IData)(vlSelfRef.__PVT__buffavail_oct2)), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__buffavail_oct1), (IData)(vlSelfRef.__PVT__buffavail_oct0))))) {
        if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 0U))) {
            vlSelfRef.__PVT__buffernum_available = 0x18U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 1U))) {
            vlSelfRef.__PVT__buffernum_available = 0x19U;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 2U))) {
            vlSelfRef.__PVT__buffernum_available = 0x1aU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 3U))) {
            vlSelfRef.__PVT__buffernum_available = 0x1bU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 4U))) {
            vlSelfRef.__PVT__buffernum_available = 0x1cU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 5U))) {
            vlSelfRef.__PVT__buffernum_available = 0x1dU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 6U))) {
            vlSelfRef.__PVT__buffernum_available = 0x1eU;
        } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__buff_avail_oct3), 7U))) {
            vlSelfRef.__PVT__buffernum_available = 0x1fU;
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__3(Vsig_topology_top_sig_compbuff_top__D0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                vlSelfRef.__PVT__rddata_compfifo[0U]);
    vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
        [0U];
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0U];
    }
    vlSelfRef.__PVT__q = 1U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 1U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [1U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [1U];
    }
    vlSelfRef.__PVT__q = 2U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 2U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [2U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [2U];
    }
    vlSelfRef.__PVT__q = 3U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 3U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [3U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [3U];
    }
    vlSelfRef.__PVT__q = 4U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 4U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [4U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [4U];
    }
    vlSelfRef.__PVT__q = 5U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 5U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [5U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [5U];
    }
    vlSelfRef.__PVT__q = 6U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 6U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [6U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [6U];
    }
    vlSelfRef.__PVT__q = 7U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 7U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [7U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [7U];
    }
    vlSelfRef.__PVT__q = 8U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 8U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [8U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [8U];
    }
    vlSelfRef.__PVT__q = 9U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 9U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [9U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [9U];
    }
    vlSelfRef.__PVT__q = 0xaU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0xaU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xaU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0xaU];
    }
    vlSelfRef.__PVT__q = 0xbU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0xbU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xbU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0xbU];
    }
    vlSelfRef.__PVT__q = 0xcU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0xcU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xcU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0xcU];
    }
    vlSelfRef.__PVT__q = 0xdU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0xdU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xdU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0xdU];
    }
    vlSelfRef.__PVT__q = 0xeU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0xeU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xeU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0xeU];
    }
    vlSelfRef.__PVT__q = 0xfU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0xfU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xfU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0xfU];
    }
    vlSelfRef.__PVT__q = 0x10U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x10U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x10U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x10U];
    }
    vlSelfRef.__PVT__q = 0x11U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x11U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x11U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x11U];
    }
    vlSelfRef.__PVT__q = 0x12U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x12U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x12U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x12U];
    }
    vlSelfRef.__PVT__q = 0x13U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x13U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x13U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x13U];
    }
    vlSelfRef.__PVT__q = 0x14U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x14U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x14U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x14U];
    }
    vlSelfRef.__PVT__q = 0x15U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x15U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x15U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x15U];
    }
    vlSelfRef.__PVT__q = 0x16U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x16U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x16U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x16U];
    }
    vlSelfRef.__PVT__q = 0x17U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x17U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x17U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x17U];
    }
    vlSelfRef.__PVT__q = 0x18U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x18U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x18U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x18U];
    }
    vlSelfRef.__PVT__q = 0x19U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x19U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x19U]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x19U];
    }
    vlSelfRef.__PVT__q = 0x1aU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x1aU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1aU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x1aU];
    }
    vlSelfRef.__PVT__q = 0x1bU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x1bU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1bU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x1bU];
    }
    vlSelfRef.__PVT__q = 0x1cU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x1cU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1cU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x1cU];
    }
    vlSelfRef.__PVT__q = 0x1dU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x1dU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1dU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x1dU];
    }
    vlSelfRef.__PVT__q = 0x1eU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x1eU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1eU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x1eU];
    }
    vlSelfRef.__PVT__q = 0x1fU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_2nd, 0x1fU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1fU]);
        vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSelfRef.__PVT__rdbe_compfifo
            [0x1fU];
    }
    vlSelfRef.__PVT__q = 0x20U;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                vlSelfRef.__PVT__rddata_compfifo[0U]);
    vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
        [0U];
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 1U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [1U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [1U];
    }
    vlSelfRef.__PVT__p = 2U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 2U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [2U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [2U];
    }
    vlSelfRef.__PVT__p = 3U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 3U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [3U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [3U];
    }
    vlSelfRef.__PVT__p = 4U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 4U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [4U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [4U];
    }
    vlSelfRef.__PVT__p = 5U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 5U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [5U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [5U];
    }
    vlSelfRef.__PVT__p = 6U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 6U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [6U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [6U];
    }
    vlSelfRef.__PVT__p = 7U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 7U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [7U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [7U];
    }
    vlSelfRef.__PVT__p = 8U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 8U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [8U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [8U];
    }
    vlSelfRef.__PVT__p = 9U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 9U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [9U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [9U];
    }
    vlSelfRef.__PVT__p = 0xaU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0xaU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xaU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0xaU];
    }
    vlSelfRef.__PVT__p = 0xbU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0xbU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xbU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0xbU];
    }
    vlSelfRef.__PVT__p = 0xcU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0xcU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xcU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0xcU];
    }
    vlSelfRef.__PVT__p = 0xdU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0xdU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xdU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0xdU];
    }
    vlSelfRef.__PVT__p = 0xeU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0xeU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xeU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0xeU];
    }
    vlSelfRef.__PVT__p = 0xfU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0xfU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0xfU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0xfU];
    }
    vlSelfRef.__PVT__p = 0x10U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x10U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x10U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x10U];
    }
    vlSelfRef.__PVT__p = 0x11U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x11U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x11U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x11U];
    }
    vlSelfRef.__PVT__p = 0x12U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x12U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x12U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x12U];
    }
    vlSelfRef.__PVT__p = 0x13U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x13U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x13U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x13U];
    }
    vlSelfRef.__PVT__p = 0x14U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x14U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x14U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x14U];
    }
    vlSelfRef.__PVT__p = 0x15U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x15U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x15U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x15U];
    }
    vlSelfRef.__PVT__p = 0x16U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x16U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x16U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x16U];
    }
    vlSelfRef.__PVT__p = 0x17U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x17U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x17U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x17U];
    }
    vlSelfRef.__PVT__p = 0x18U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x18U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x18U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x18U];
    }
    vlSelfRef.__PVT__p = 0x19U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x19U))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x19U]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x19U];
    }
    vlSelfRef.__PVT__p = 0x1aU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x1aU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1aU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x1aU];
    }
    vlSelfRef.__PVT__p = 0x1bU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x1bU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1bU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x1bU];
    }
    vlSelfRef.__PVT__p = 0x1cU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x1cU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1cU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x1cU];
    }
    vlSelfRef.__PVT__p = 0x1dU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x1dU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1dU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x1dU];
    }
    vlSelfRef.__PVT__p = 0x1eU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x1eU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1eU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x1eU];
    }
    vlSelfRef.__PVT__p = 0x1fU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__rden_whichcompfifo_1st, 0x1fU))) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, 
                    vlSelfRef.__PVT__rddata_compfifo
                    [0x1fU]);
        vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSelfRef.__PVT__rdbe_compfifo
            [0x1fU];
    }
    vlSelfRef.__PVT__p = 0x20U;
}
