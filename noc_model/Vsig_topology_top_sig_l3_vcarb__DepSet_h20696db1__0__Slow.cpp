// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_vcarb.h"

VL_ATTR_COLD void Vsig_topology_top_sig_l3_vcarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__sig_l3_vcarb_0__0(Vsig_topology_top_sig_l3_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_l3_vcarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__sig_l3_vcarb_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_l3_vcarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__sig_l3_vcarb_0__0(Vsig_topology_top_sig_l3_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_l3_vcarb___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__sig_l3_vcarb_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_l3_vcarb___ctor_var_reset(Vsig_topology_top_sig_l3_vcarb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_l3_vcarb___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__req_vec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3671060821001920143ull);
    vlSelf->__PVT__end_granted_agent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16057977915810665545ull);
    vlSelf->__PVT__gnt_vec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13390058090934930815ull);
    vlSelf->__PVT__arbstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7319530966467615128ull);
    vlSelf->__PVT__arbstate_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1763586699322693789ull);
    vlSelf->__PVT__gnt_hist = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2580631661569452371ull);
    vlSelf->__PVT__gnt_hist_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12498383251067110318ull);
    vlSelf->__Vdly__arbstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7481372124911311414ull);
    vlSelf->__Vdly__gnt_hist = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2445759842871268767ull);
}
