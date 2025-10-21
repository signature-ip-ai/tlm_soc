// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_addr_translator.h"
#include "Vsig_topology_top_sig_id_translator_sn__I23_Tc.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__11(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__snpreq_flit_to_id_translator);
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x32U, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order 
        = (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x7fU, 2));
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn 
        = ((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x3eU, 7))) 
           & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x26U, 11)) 
              != (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0xfU, 11))));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr 
        = (0xfffffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x48U, 52));
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_order 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_apply_dmt_from_hn 
        = vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_addr 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__11(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__snpreq_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flit_to_id_translator);
    vlSelfRef.__PVT__snpreq_flitv_to_id_translator 
        = vlSelf->__PVT__sig_node_txtop_0->__PVT__snpreq_flitv_to_id_translator;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__snpreq_flit_to_id_translator);
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_v 
        = vlSelfRef.__PVT__snpreq_flitv_to_id_translator;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x32U, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order 
        = (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x7fU, 2));
    vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn 
        = ((4U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x3eU, 7))) 
           & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x26U, 11)) 
              != (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0xfU, 11))));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr 
        = (0xfffffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__id_translator_sn__DOT__req_flit_to_id_translator, 0x48U, 52));
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_returntxnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_returntxnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_txnid_from_hn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_txnid_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_order 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_order;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_apply_dmt_from_hn 
        = vlSelfRef.__PVT__id_translator_sn__DOT__tx_req_apply_dmt_from_hn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__tx_req_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__tx_req_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__i_tx_req_addr 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_addr_translator_0__i_tx_req_addr;
}
