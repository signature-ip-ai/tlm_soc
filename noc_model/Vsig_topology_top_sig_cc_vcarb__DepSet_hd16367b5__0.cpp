// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_vcarb.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__arbstate = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__Vdly__gnt_hist = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__arbstate = vlSelfRef.__PVT__arbstate_nxt;
        vlSelfRef.__Vdly__gnt_hist = vlSelfRef.__PVT__gnt_hist_nxt;
    } else {
        vlSelfRef.__Vdly__arbstate = 0U;
        vlSelfRef.__Vdly__gnt_hist = 4U;
    }
    vlSelfRef.__PVT__arbstate = vlSelfRef.__Vdly__arbstate;
    vlSelfRef.__PVT__gnt_hist = vlSelfRef.__Vdly__gnt_hist;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__arbstate = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__Vdly__gnt_hist = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__arbstate = vlSelfRef.__PVT__arbstate_nxt;
        vlSelfRef.__Vdly__gnt_hist = vlSelfRef.__PVT__gnt_hist_nxt;
    } else {
        vlSelfRef.__Vdly__arbstate = 0U;
        vlSelfRef.__Vdly__gnt_hist = 4U;
    }
    vlSelfRef.__PVT__arbstate = vlSelfRef.__Vdly__arbstate;
    vlSelfRef.__PVT__gnt_hist = vlSelfRef.__Vdly__gnt_hist;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__arbstate = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__Vdly__gnt_hist = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__arbstate = vlSelfRef.__PVT__arbstate_nxt;
        vlSelfRef.__Vdly__gnt_hist = vlSelfRef.__PVT__gnt_hist_nxt;
    } else {
        vlSelfRef.__Vdly__arbstate = 0U;
        vlSelfRef.__Vdly__gnt_hist = 4U;
    }
    vlSelfRef.__PVT__arbstate = vlSelfRef.__Vdly__arbstate;
    vlSelfRef.__PVT__gnt_hist = vlSelfRef.__Vdly__gnt_hist;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_vcarb___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0(Vsig_topology_top_sig_cc_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cc_vcarb___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__sig_cc_vcarb_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arbstate_nxt = vlSelfRef.__PVT__arbstate;
    vlSelfRef.__PVT__gnt_vec = 0U;
    vlSelfRef.__PVT__gnt_hist_nxt = vlSelfRef.__PVT__gnt_hist;
    if (vlSelfRef.__PVT__arbstate) {
        if (vlSelfRef.__PVT__arbstate) {
            if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
                if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
                    vlSelfRef.__PVT__gnt_vec = 1U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 1U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
                    vlSelfRef.__PVT__gnt_vec = 2U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 2U;
                    }
                } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
                    vlSelfRef.__PVT__gnt_vec = 4U;
                    if (vlSelfRef.__PVT__end_granted_agent) {
                        vlSelfRef.__PVT__arbstate_nxt = 0U;
                        vlSelfRef.__PVT__gnt_hist_nxt = 4U;
                    }
                }
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__gnt_hist))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 0U))) {
            vlSelfRef.__PVT__gnt_vec = 1U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 1U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 1U))) {
            vlSelfRef.__PVT__gnt_vec = 2U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 2U;
            }
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_vec), 2U))) {
            vlSelfRef.__PVT__gnt_vec = 4U;
            if (vlSelfRef.__PVT__end_granted_agent) {
                vlSelfRef.__PVT__arbstate_nxt = 1U;
                vlSelfRef.__PVT__gnt_hist_nxt = 4U;
            }
        }
    }
}
