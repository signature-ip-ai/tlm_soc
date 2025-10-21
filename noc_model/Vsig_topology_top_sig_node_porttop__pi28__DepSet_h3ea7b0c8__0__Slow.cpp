// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__datlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__rsplcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPLCRDV;
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__5(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_timeout_interrupt = 0U;
    vlSelfRef.__PVT__o_timeout_recovery_successful = 0U;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelfRef.__PVT__tx_sactive_from_tx_top;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    vlSelfRef.__PVT__tx_linkactiveack_to_tx_top = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelfRef.__PVT__snpflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSelfRef.__PVT__snpflitv_from_tx_top;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSelfRef.__PVT__snpflit_from_tx_top);
    vlSelfRef.__PVT__snplcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelfRef.__PVT__datflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelfRef.__PVT__datflitv_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__datflit_from_tx_top);
    vlSelfRef.__PVT__datlcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelfRef.__PVT__rspflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSelfRef.__PVT__rspflitv_from_tx_top;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSelfRef.__PVT__rspflit_from_tx_top);
    vlSelfRef.__PVT__rsplcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
    vlSelfRef.__PVT__rx_sactive_to_rx_top = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelfRef.__PVT__rx_linkactivereq_to_rx_top = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelfRef.__PVT__reqflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__reqflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__reqflit_to_rx_top, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelfRef.__PVT__reqlcrdv_from_rx_top;
    vlSelfRef.__PVT__rspflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelfRef.__PVT__rspflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rspflit_to_rx_top, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelfRef.__PVT__rsplcrdv_from_rx_top;
    vlSelfRef.__PVT__datflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelfRef.__PVT__datflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__datflit_to_rx_top, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelfRef.__PVT__datlcrdv_from_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__rx_sactive_to_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__tx_linkactiveack_to_tx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPLCRDV 
        = vlSelfRef.__PVT__snplcrdv_to_tx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATLCRDV 
        = vlSelfRef.__PVT__datlcrdv_to_tx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPLCRDV 
        = vlSelfRef.__PVT__rsplcrdv_to_tx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__rspflitpend_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__datflitpend_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__reqflitpend_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__rx_linkactivereq_to_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__rx_linkactivereq_to_rx_top;
    vlSelfRef.__PVT__tx_is_inactive = (1U & (~ ((((IData)(vlSelfRef.__PVT__ic_TX_SNPFLITV) 
                                                  | (IData)(vlSelfRef.__PVT__ic_TX_RSPFLITV)) 
                                                 | (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)) 
                                                | (IData)(vlSelfRef.__PVT__ic_TX_REQFLITV))));
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__reqflitv_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__datflitv_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__rspflitv_to_rx_top;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__datflit_to_rx_top);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__rspflit_to_rx_top);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__reqflit_to_rx_top);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__datlcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__rsplcrdv_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPLCRDV;
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__5(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_timeout_interrupt = 0U;
    vlSelfRef.__PVT__o_timeout_recovery_successful = 0U;
    vlSelfRef.__PVT__ic_TXSACTIVE = vlSelfRef.__PVT__tx_sactive_from_tx_top;
    vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    vlSelfRef.__PVT__tx_linkactiveack_to_tx_top = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelfRef.__PVT__snpflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSelfRef.__PVT__snpflitv_from_tx_top;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSelfRef.__PVT__snpflit_from_tx_top);
    vlSelfRef.__PVT__snplcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelfRef.__PVT__datflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelfRef.__PVT__datflitv_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__datflit_from_tx_top);
    vlSelfRef.__PVT__datlcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_DATLCRDV;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSelfRef.__PVT__rspflitpend_from_tx_top;
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSelfRef.__PVT__rspflitv_from_tx_top;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSelfRef.__PVT__rspflit_from_tx_top);
    vlSelfRef.__PVT__rsplcrdv_to_tx_top = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
    vlSelfRef.__PVT__rx_sactive_to_rx_top = vlSelfRef.__PVT__ic_RXSACTIVE;
    vlSelfRef.__PVT__rx_linkactivereq_to_rx_top = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelfRef.__PVT__reqflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__reqflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__reqflit_to_rx_top, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelfRef.__PVT__reqlcrdv_from_rx_top;
    vlSelfRef.__PVT__rspflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelfRef.__PVT__rspflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rspflit_to_rx_top, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelfRef.__PVT__rsplcrdv_from_rx_top;
    vlSelfRef.__PVT__datflitpend_to_rx_top = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelfRef.__PVT__datflitv_to_rx_top = vlSelfRef.__PVT__ic_RX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__datflit_to_rx_top, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelfRef.__PVT__datlcrdv_from_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RXSACTIVE 
        = vlSelfRef.__PVT__rx_sactive_to_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TX_LINKACTIVEACK 
        = vlSelfRef.__PVT__tx_linkactiveack_to_tx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPLCRDV 
        = vlSelfRef.__PVT__snplcrdv_to_tx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_DATLCRDV 
        = vlSelfRef.__PVT__datlcrdv_to_tx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_RSPLCRDV 
        = vlSelfRef.__PVT__rsplcrdv_to_tx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__rspflitpend_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__datflitpend_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__reqflitpend_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__rx_linkactivereq_to_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__rx_linkactivereq_to_rx_top;
    vlSelfRef.__PVT__tx_is_inactive = (1U & (~ ((((IData)(vlSelfRef.__PVT__ic_TX_SNPFLITV) 
                                                  | (IData)(vlSelfRef.__PVT__ic_TX_RSPFLITV)) 
                                                 | (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV)) 
                                                | (IData)(vlSelfRef.__PVT__ic_TX_REQFLITV))));
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__reqflitv_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__datflitv_to_rx_top;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__rspflitv_to_rx_top;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__datflit_to_rx_top);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__rspflit_to_rx_top);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__reqflit_to_rx_top);
}
