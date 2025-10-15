// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_linearize_nodeid.h"

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_snpreq_full_srcid = 0U;
    if ((((IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx) 
          < (IData)(vlSelfRef.__PVT__next_available_idx)) 
         & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                          [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx))
                             ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx)
                             : 0U)], 0xbU))) {
        vlSelfRef.__PVT__o_xmt_snpreq_full_srcid = 
            (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                  [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx))
                                     ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx)
                                     : 0U)], 0U, 11));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__1(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx 
        = (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_snpreq_linear_srcid), 0U, 5));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__2(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_snpreq_full_tgtid = 0U;
    if ((((IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx) 
          < (IData)(vlSelfRef.__PVT__next_available_idx)) 
         & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                          [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx))
                             ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx)
                             : 0U)], 0xbU))) {
        vlSelfRef.__PVT__o_xmt_snpreq_full_tgtid = 
            (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                  [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx))
                                     ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx)
                                     : 0U)], 0U, 11));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__3(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rcv_reqproc_linear_nodeid = 
        VL_EXTEND_II(11,5, (IData)(vlSelfRef.__PVT__rcv_reqproc_final_linear_rn_idx));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_reqproc_node_id_found = 0U;
    vlSelfRef.__PVT__rcv_reqproc_match_idx = 0U;
    if (vlSelfRef.__PVT__i_rcv_reqproc_nodeid_valid) {
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0U], 0xbU));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [1U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [1U], 0xbU));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [2U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [2U], 0xbU));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 3U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [3U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [3U], 0xbU));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 4U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [4U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [4U], 0xbU));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 5U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [5U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [5U], 0xbU));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 6U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [6U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [6U], 0xbU));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 7U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [7U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [7U], 0xbU));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 8U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [8U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [8U], 0xbU));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 9U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [9U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [9U], 0xbU));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xaU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xaU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xaU], 0xbU));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xbU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xbU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xbU], 0xbU));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xcU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xcU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xcU], 0xbU));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xdU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xdU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xdU], 0xbU));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xeU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xeU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xeU], 0xbU));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xfU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xfU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xfU], 0xbU));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x10U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x10U], 0xbU));
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x11U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x11U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x11U], 0xbU));
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x12U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x12U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x12U], 0xbU));
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x13U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x13U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x13U], 0xbU));
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x14U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x14U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x14U], 0xbU));
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x15U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x15U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x15U], 0xbU));
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x16U;
        if (VL_REDOR_I(vlSelfRef.__PVT__rcv_reqproc_match_vector)) {
            vlSelfRef.__PVT__rcv_reqproc_node_id_found = 1U;
            vlSelfRef.__Vfunc_find_first_set__0__bit_vector 
                = vlSelfRef.__PVT__rcv_reqproc_match_vector;
            vlSelf->__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0;
            {
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 1U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 1U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 2U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 2U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 3U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 3U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 4U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 4U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 4U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 5U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 5U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 5U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 6U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 6U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 6U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 7U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 7U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 7U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 8U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 8U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 8U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 9U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 9U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 9U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xaU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xaU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xaU;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xbU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xbU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xbU;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xcU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xcU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xcU;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xdU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xdU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xdU;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xeU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xeU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xeU;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xfU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xfU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xfU;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x10U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x10U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x10U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x11U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x11U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x11U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x12U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x12U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x12U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x13U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x13U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x13U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x14U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x14U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x14U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x15U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x15U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x15U;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0U;
                __Vlabel1: ;
            }
            vlSelfRef.__PVT__rcv_reqproc_match_idx 
                = vlSelfRef.__Vfunc_find_first_set__0__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__rcv_reqproc_match_vector = 0U;
    }
    vlSelfRef.__PVT__rcv_reqproc_final_linear_rn_idx 
        = ((IData)(vlSelfRef.__PVT__rcv_reqproc_node_id_found)
            ? (IData)(vlSelfRef.__PVT__rcv_reqproc_match_idx)
            : (IData)(vlSelfRef.__PVT__next_available_idx));
    vlSelfRef.__PVT__rcv_reqproc_perform_allocation 
        = (((IData)(vlSelfRef.__PVT__i_rcv_reqproc_nodeid_valid) 
            & (~ (IData)(vlSelfRef.__PVT__rcv_reqproc_node_id_found))) 
           & (0x16U > (IData)(vlSelfRef.__PVT__next_available_idx)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__1(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx 
        = (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_compdata_linear_nodeid), 0U, 5));
    vlSelfRef.__PVT__o_xmt_compdata_full_node_id = 0U;
    if (vlSelfRef.__PVT__i_xmt_compdata_nodeid_valid) {
        if ((((IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx) 
              < (IData)(vlSelfRef.__PVT__next_available_idx)) 
             & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                              [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx))
                                 ? (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx)
                                 : 0U)], 0xbU))) {
            vlSelfRef.__PVT__o_xmt_compdata_full_node_id 
                = (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                        [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx))
                                           ? (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx)
                                           : 0U)], 0U, 11));
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__2(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx 
        = (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_snpreq_linear_tgtid), 0U, 5));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__3(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx = 
        (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_resp_linear_nodeid), 0U, 5));
    vlSelfRef.__PVT__o_xmt_resp_full_node_id = 0U;
    if (vlSelfRef.__PVT__i_xmt_resp_nodeid_valid) {
        if ((((IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx) 
              < (IData)(vlSelfRef.__PVT__next_available_idx)) 
             & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                              [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx))
                                 ? (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx)
                                 : 0U)], 0xbU))) {
            vlSelfRef.__PVT__o_xmt_resp_full_node_id 
                = (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                        [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx))
                                           ? (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx)
                                           : 0U)], 0U, 11));
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__next_available_idx = vlSelfRef.__PVT__next_available_idx;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v0 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v1 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v2 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v3 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v4 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v5 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v6 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v7 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v8 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v9 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v10 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v11 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v12 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v13 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v14 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v15 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v16 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v17 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v18 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v19 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v20 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v21 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v22 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v23 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v24 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v25 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v26 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v27 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v28 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v29 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v30 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v31 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v32 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v33 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v34 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v35 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v36 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v37 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v38 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v39 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v40 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v41 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v42 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v43 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v44 = 0U;
    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v45 = 0U;
    if (vlSelfRef.__PVT__rst_n) {
        if (vlSelfRef.__PVT__rcv_reqproc_perform_allocation) {
            if ((0x16U > (IData)(vlSelfRef.__PVT__next_available_idx))) {
                vlSelfRef.__Vlvbound_h6b879fa4__0 = vlSelfRef.__PVT__i_rcv_reqproc_full_node_id;
                if (VL_LIKELY(((0x15U >= (IData)(vlSelfRef.__PVT__next_available_idx))))) {
                    vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v0 
                        = vlSelfRef.__Vlvbound_h6b879fa4__0;
                    vlSelfRef.__VdlyDim0__linear_rn_nodeid_lut__v0 
                        = vlSelfRef.__PVT__next_available_idx;
                    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v0 = 1U;
                }
                vlSelfRef.__Vlvbound_hb67d7372__0 = 1U;
                if (VL_LIKELY(((0x15U >= (IData)(vlSelfRef.__PVT__next_available_idx))))) {
                    vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v1 
                        = vlSelfRef.__Vlvbound_hb67d7372__0;
                    vlSelfRef.__VdlyDim0__linear_rn_nodeid_lut__v1 
                        = vlSelfRef.__PVT__next_available_idx;
                    vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v1 = 1U;
                }
                vlSelfRef.__Vdly__next_available_idx 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__next_available_idx)));
            }
        }
    } else {
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v2 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v2 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v3 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v3 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v4 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v4 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v5 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v5 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v6 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v6 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v7 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v7 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v8 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v8 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v9 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v9 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v10 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v10 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v11 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v11 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v12 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v12 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v13 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v13 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 6U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v14 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v14 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v15 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v15 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 7U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v16 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v16 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v17 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 8U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v18 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v18 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v19 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 9U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v20 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v20 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v21 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xaU;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v22 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v22 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v23 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xbU;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v24 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v24 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v25 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v26 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v26 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v27 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xdU;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v28 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v28 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v29 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xeU;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v30 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v30 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v31 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v31 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xfU;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v32 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v32 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v33 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v33 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v34 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v34 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v35 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v35 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x11U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v36 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v36 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v37 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v37 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x12U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v38 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v38 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v39 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v39 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x13U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v40 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v40 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v41 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v41 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x14U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v42 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v42 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v43 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v43 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x15U;
        vlSelfRef.__Vlvbound_h381e0c0f__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v44 
            = vlSelfRef.__Vlvbound_h381e0c0f__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v44 = 1U;
        vlSelfRef.__Vlvbound_hc860e4cb__0 = 0U;
        vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v45 
            = vlSelfRef.__Vlvbound_hc860e4cb__0;
        vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v45 = 1U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x16U;
        vlSelfRef.__Vdly__next_available_idx = 0U;
    }
    vlSelfRef.__PVT__next_available_idx = vlSelfRef.__Vdly__next_available_idx;
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v0) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [vlSelfRef.__VdlyDim0__linear_rn_nodeid_lut__v0], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v0);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v1) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [vlSelfRef.__VdlyDim0__linear_rn_nodeid_lut__v1], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v1);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v2) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v2);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v3) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v3);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v4) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [1U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v4);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v5) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [1U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v5);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v6) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [2U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v6);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v7) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [2U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v7);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v8) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [3U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v8);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v9) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [3U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v9);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v10) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [4U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v10);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v11) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [4U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v11);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v12) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [5U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v12);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v13) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [5U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v13);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v14) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [6U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v14);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v15) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [6U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v15);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v16) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [7U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v16);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v17) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [7U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v17);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v18) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [8U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v18);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v19) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [8U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v19);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v20) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [9U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v20);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v21) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [9U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v21);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v22) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xaU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v22);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v23) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xaU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v23);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v24) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xbU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v24);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v25) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xbU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v25);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v26) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xcU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v26);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v27) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xcU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v27);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v28) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xdU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v28);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v29) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xdU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v29);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v30) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xeU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v30);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v31) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xeU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v31);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v32) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xfU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v32);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v33) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0xfU], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v33);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v34) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x10U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v34);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v35) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x10U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v35);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v36) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x11U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v36);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v37) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x11U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v37);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v38) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x12U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v38);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v39) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x12U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v39);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v40) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x13U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v40);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v41) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x13U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v41);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v42) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x14U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v42);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v43) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x14U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v43);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v44) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x15U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v44);
    }
    if (vlSelfRef.__VdlySet__linear_rn_nodeid_lut__v45) {
        VL_ASSIGNSEL_II(12,11,0U, vlSelfRef.__PVT__linear_rn_nodeid_lut
                        [0x15U], vlSelfRef.__VdlyVal__linear_rn_nodeid_lut__v45);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_snpreq_full_srcid = 0U;
    if ((((IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx) 
          < (IData)(vlSelfRef.__PVT__next_available_idx)) 
         & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                          [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx))
                             ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx)
                             : 0U)], 0xbU))) {
        vlSelfRef.__PVT__o_xmt_snpreq_full_srcid = 
            (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                  [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx))
                                     ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx)
                                     : 0U)], 0U, 11));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__1(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_snpreq_full_tgtid = 0U;
    if ((((IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx) 
          < (IData)(vlSelfRef.__PVT__next_available_idx)) 
         & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                          [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx))
                             ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx)
                             : 0U)], 0xbU))) {
        vlSelfRef.__PVT__o_xmt_snpreq_full_tgtid = 
            (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                  [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx))
                                     ? (IData)(vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx)
                                     : 0U)], 0U, 11));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__2(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 1U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [1U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 2U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [2U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 3U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [3U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 4U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [4U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 5U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [5U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 6U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [6U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 7U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [7U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 8U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [8U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 9U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [9U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xaU;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0xaU], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xbU;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0xbU], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xcU;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0xcU], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xdU;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0xdU], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xeU;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0xeU], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xfU;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0xfU], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x10U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0x10U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x11U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0x11U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x12U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0x12U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x13U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0x13U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x14U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0x14U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x15U;
    vlSelfRef.__Vlvbound_h314b9366__0 = ((0x7ffU & 
                                          VL_SEL_IIII(12, 
                                                      vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                      [0x15U], 0U, 11)) 
                                         == (IData)(vlSelfRef.__PVT__i_rcv_rsp_dat_srcid));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector, vlSelfRef.__Vlvbound_h314b9366__0);
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x16U;
    vlSelfRef.__PVT__o_rcv_rsp_dat_linear_srcid = VL_EXTEND_II(11,5, 
                                                               ([&]() {
                vlSelfRef.__Vfunc_find_first_set__1__bit_vector 
                    = vlSelfRef.__PVT__rcv_rsp_dat_nodeid_match_vector;
                vlSelf->__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0;
                {
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 1U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 1U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 1U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 2U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 2U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 2U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 3U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 3U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 3U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 4U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 4U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 4U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 5U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 5U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 5U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 6U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 6U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 6U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 7U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 7U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 7U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 8U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 8U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 8U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 9U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 9U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 9U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0xaU;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0xaU))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0xaU;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0xbU;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0xbU))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0xbU;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0xcU;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0xcU))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0xcU;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0xdU;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0xdU))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0xdU;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0xeU;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0xeU))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0xeU;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0xfU;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0xfU))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0xfU;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x10U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0x10U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0x10U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x11U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0x11U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0x11U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x12U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0x12U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0x12U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x13U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0x13U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0x13U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x14U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0x14U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0x14U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x15U;
                    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__1__bit_vector, 0x15U))) {
                        vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0x15U;
                        goto __Vlabel2;
                    }
                    vlSelfRef.__Vfunc_find_first_set__1__unnamedblk1__DOT__i = 0x16U;
                    vlSelfRef.__Vfunc_find_first_set__1__Vfuncout = 0U;
                    __Vlabel2: ;
                }
            }(), (IData)(vlSelfRef.__Vfunc_find_first_set__1__Vfuncout)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__3(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_input_linear_src_idx 
        = (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_snpreq_linear_srcid), 0U, 5));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__4(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_reqproc_node_id_found = 0U;
    vlSelfRef.__PVT__rcv_reqproc_match_idx = 0U;
    if (vlSelfRef.__PVT__i_rcv_reqproc_nodeid_valid) {
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0U], 0xbU));
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 1U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [1U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [1U], 0xbU));
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 2U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [2U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [2U], 0xbU));
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 3U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [3U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [3U], 0xbU));
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 4U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [4U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [4U], 0xbU));
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 5U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [5U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [5U], 0xbU));
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 6U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [6U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [6U], 0xbU));
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 7U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [7U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [7U], 0xbU));
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 8U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [8U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [8U], 0xbU));
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 9U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [9U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [9U], 0xbU));
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xaU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xaU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xaU], 0xbU));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xbU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xbU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xbU], 0xbU));
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xcU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xcU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xcU], 0xbU));
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xdU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xdU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xdU], 0xbU));
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xeU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xeU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xeU], 0xbU));
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xfU;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0xfU], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0xfU], 0xbU));
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x10U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x10U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x10U], 0xbU));
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x11U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x11U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x11U], 0xbU));
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x12U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x12U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x12U], 0xbU));
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x13U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x13U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x13U], 0xbU));
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x14U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x14U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x14U], 0xbU));
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x15U;
        vlSelfRef.__Vlvbound_h096faaac__0 = (((0x7ffU 
                                               & VL_SEL_IIII(12, 
                                                             vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                             [0x15U], 0U, 11)) 
                                              == (IData)(vlSelfRef.__PVT__i_rcv_reqproc_full_node_id)) 
                                             & VL_BITSEL_IIII(12, 
                                                              vlSelfRef.__PVT__linear_rn_nodeid_lut
                                                              [0x15U], 0xbU));
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__rcv_reqproc_match_vector, vlSelfRef.__Vlvbound_h096faaac__0);
        vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x16U;
        if (VL_REDOR_I(vlSelfRef.__PVT__rcv_reqproc_match_vector)) {
            vlSelfRef.__PVT__rcv_reqproc_node_id_found = 1U;
            vlSelfRef.__Vfunc_find_first_set__0__bit_vector 
                = vlSelfRef.__PVT__rcv_reqproc_match_vector;
            vlSelf->__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0;
            {
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 1U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 1U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 2U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 2U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 3U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 3U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 4U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 4U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 4U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 5U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 5U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 5U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 6U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 6U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 6U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 7U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 7U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 7U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 8U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 8U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 8U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 9U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 9U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 9U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xaU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xaU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xaU;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xbU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xbU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xbU;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xcU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xcU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xcU;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xdU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xdU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xdU;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xeU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xeU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xeU;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0xfU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0xfU))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0xfU;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x10U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x10U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x10U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x11U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x11U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x11U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x12U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x12U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x12U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x13U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x13U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x13U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x14U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x14U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x14U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x15U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__Vfunc_find_first_set__0__bit_vector, 0x15U))) {
                    vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0x15U;
                    goto __Vlabel3;
                }
                vlSelfRef.__Vfunc_find_first_set__0__unnamedblk1__DOT__i = 0x16U;
                vlSelfRef.__Vfunc_find_first_set__0__Vfuncout = 0U;
                __Vlabel3: ;
            }
            vlSelfRef.__PVT__rcv_reqproc_match_idx 
                = vlSelfRef.__Vfunc_find_first_set__0__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__rcv_reqproc_match_vector = 0U;
    }
    vlSelfRef.__PVT__rcv_reqproc_perform_allocation 
        = (((IData)(vlSelfRef.__PVT__i_rcv_reqproc_nodeid_valid) 
            & (~ (IData)(vlSelfRef.__PVT__rcv_reqproc_node_id_found))) 
           & (0x16U > (IData)(vlSelfRef.__PVT__next_available_idx)));
    vlSelfRef.__PVT__rcv_reqproc_final_linear_rn_idx 
        = ((IData)(vlSelfRef.__PVT__rcv_reqproc_node_id_found)
            ? (IData)(vlSelfRef.__PVT__rcv_reqproc_match_idx)
            : (IData)(vlSelfRef.__PVT__next_available_idx));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__5(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx 
        = (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_compdata_linear_nodeid), 0U, 5));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__6(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_input_linear_tgt_idx 
        = (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_snpreq_linear_tgtid), 0U, 5));
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__7(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_compdata_full_node_id = 0U;
    if (vlSelfRef.__PVT__i_xmt_compdata_nodeid_valid) {
        if ((((IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx) 
              < (IData)(vlSelfRef.__PVT__next_available_idx)) 
             & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                              [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx))
                                 ? (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx)
                                 : 0U)], 0xbU))) {
            vlSelfRef.__PVT__o_xmt_compdata_full_node_id 
                = (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                        [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx))
                                           ? (IData)(vlSelfRef.__PVT__xmt_compdata_input_linear_rn_idx)
                                           : 0U)], 0U, 11));
        }
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__8(Vsig_topology_top_sig_linearize_nodeid* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_linearize_nodeid___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx = 
        (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__i_xmt_resp_linear_nodeid), 0U, 5));
    vlSelfRef.__PVT__o_xmt_resp_full_node_id = 0U;
    if (vlSelfRef.__PVT__i_xmt_resp_nodeid_valid) {
        if ((((IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx) 
              < (IData)(vlSelfRef.__PVT__next_available_idx)) 
             & VL_BITSEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                              [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx))
                                 ? (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx)
                                 : 0U)], 0xbU))) {
            vlSelfRef.__PVT__o_xmt_resp_full_node_id 
                = (0x7ffU & VL_SEL_IIII(12, vlSelfRef.__PVT__linear_rn_nodeid_lut
                                        [((0x15U >= (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx))
                                           ? (IData)(vlSelfRef.__PVT__xmt_resp_input_linear_rn_idx)
                                           : 0U)], 0U, 11));
        }
    }
}
