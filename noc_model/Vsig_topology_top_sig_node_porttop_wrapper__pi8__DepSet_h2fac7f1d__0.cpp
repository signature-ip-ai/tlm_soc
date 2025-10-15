// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi8.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactivereq_slv 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactiveack_slv 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxsactive_slv 
        = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatlcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrsplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnplcrdv_slv 
        = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh.__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__reset_n 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh.__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__syscoreq_slv 
        = vlSelfRef.__PVT__syscoreq;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflit_slv, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflitv_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflit_slv, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflitv_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflit_slv, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflitv_slv 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflitpend_slv 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__syscoack = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__syscoack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__syscoreq_mst;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 1U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn)))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend)) 
                   & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp))))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 0U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 0U;
        }
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflitv_mst;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflitpend_mst;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrsplcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflitv_mst;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflitpend_mst;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflitpend_mst;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflitv_mst;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflit_mst);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLITPEND;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl);
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, 0U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl, __Vtemp_1, __Vtemp_2);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl;
    VL_ASSIGN_W(108,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrsplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitpend_slv;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitv_slv;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflit_slv);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__9(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflitv_mst;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatflitpend_mst;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitv_to_hn;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflit_to_hn);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatflitpend_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrsplcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflitv_mst;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflit_mst);
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrspflitpend_mst;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitv_to_hn;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflit_to_hn);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrspflitpend_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqlcrdv_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflitpend_mst;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflitv_mst;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqflit_mst);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitpend_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflitv_to_hn;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqflit_to_hn);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLITPEND;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl);
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, 0U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl, __Vtemp_1, __Vtemp_2);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl;
    VL_ASSIGN_W(108,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrsplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitpend_slv;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitv_slv;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflit_slv);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__id_translator_hs_pending_txn_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_reqf_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state 
            = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt;
        vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl 
            = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt;
    } else {
        vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state = 0U;
        vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl = 0U;
    }
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state 
        = vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl 
        = vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__syscoack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__syscoack = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__syscoack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__syscoreq_mst;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh.__PVT__sig_dest;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 1U));
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 0U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__9(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__10(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__11(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__12(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__13(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__14(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__15(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__16(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 1U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn)))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend)) 
                   & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp))))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 0U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 0U;
        }
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__17(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__18(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__o_timeout_interrupt = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__o_timeout_interrupt;
    vlSelfRef.__PVT__o_timeout_recovery_successful 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__o_timeout_recovery_successful;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TXSACTIVE;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLITPEND;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLITPEND;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__tx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxreqlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxreqlcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxrsplcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxrsplcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxdatlcrdv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxdatlcrdv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactivereq_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactivereq_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactiveack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactiveack_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsactive_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsactive_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitpend_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitpend_to_pl;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflit_to_pl);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitpend_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitpend_to_pl;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflit_to_pl);
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 151, __Vtemp_2, vlSelfRef.__PVT__node_porttop_rn__DOT__ic_TX_SNPFLIT_w, 0U, 108);
    VL_AND_W(4, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl, __Vtemp_1, __Vtemp_2);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflitv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatflitv_to_pl;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitv_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrspflitv_to_pl;
    VL_ASSIGN_W(108,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflit_mst, vlSelfRef.__PVT__node_porttop_rn__DOT__txsnpflit_to_pl);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__19(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactiveack_mst;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txlinkactivereq_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactivereq_mst;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxlinkactiveack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__rxsactive_mst;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsactive_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatlcrdv_mst;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitpend_slv;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflitv_slv;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txdatflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrsplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitpend_slv;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflitv_slv;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txrspflit_slv);
    vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnplcrdv_mst;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitpend_slv;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflitv_slv;
    VL_ASSIGN_W(108,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn.__PVT__txsnpflit_slv);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txlinkactiveack_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxlinkactivereq_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__rxsactive_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txdatlcrdv_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txrsplcrdv_to_hn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__txsnplcrdv_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__20(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__21(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__22(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__23(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__24(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__25(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__26(Vsig_topology_top_sig_node_porttop_wrapper__pi8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn.__PVT__tx_activate_clk;
}
