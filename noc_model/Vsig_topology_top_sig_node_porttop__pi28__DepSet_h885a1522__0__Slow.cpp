// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_sn__I23_Tc.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__1(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_linkactivereq_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TX_LINKACTIVEREQ;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__PVT__tx_dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_txtop_0->__PVT__o_dat_empty_flit_store_fifo;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__rx_linkactiveack_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__credits_backto_full = vlSelf->__PVT__sig_node_rxtop_0->__PVT__credits_backto_full;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_TX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rx_req_port_is_inactive 
        = vlSelfRef.__PVT__rx_req_port_is_inactive;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RX_LINKACTIVEACK 
        = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__PVT__metadata_out_rspf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(79, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, 0x49U, 6));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__metadata_out_rspf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(79, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, 0x49U, 6));
    VL_CONST_W_3X(96,__Vtemp_3,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_4, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, __Vtemp_3, __Vtemp_4);
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_txnid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_txnid_from_sn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__1(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_linkactivereq_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_TX_LINKACTIVEREQ;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flit_to_id_translator);
    vlSelfRef.__PVT__dat_flitv_to_id_translator = vlSelf->__PVT__sig_node_txtop_0->__PVT__dat_flitv_to_id_translator;
    vlSelfRef.__PVT__tx_dat_empty_flit_store_fifo = vlSelf->__PVT__sig_node_txtop_0->__PVT__o_dat_empty_flit_store_fifo;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_hs_pending_txn;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_reqf_vc1);
    vlSelfRef.__PVT__rx_linkactiveack_from_rx_top = vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_RX_LINKACTIVEACK;
    vlSelfRef.__PVT__credits_backto_full = vlSelf->__PVT__sig_node_rxtop_0->__PVT__credits_backto_full;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_TX_LINKACTIVEREQ 
        = vlSelfRef.__PVT__tx_linkactivereq_from_tx_top;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__dat_flit_to_id_translator, vlSelfRef.__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator);
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rx_req_port_is_inactive 
        = vlSelfRef.__PVT__rx_req_port_is_inactive;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_RX_LINKACTIVEACK 
        = vlSelfRef.__PVT__rx_linkactiveack_from_rx_top;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__4(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, vlSelf->__PVT__sig_node_rxtop_0->__PVT__flit_out_rspf_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSelf->__PVT__sig_node_rxtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__PVT__metadata_out_rspf_vc0_tmp = (0x3fU 
                                                  & VL_SEL_IWII(79, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, 0x49U, 6));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_2, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__metadata_out_rspf_vc1_tmp = (0x3fU 
                                                  & VL_SEL_IWII(79, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, 0x49U, 6));
    VL_CONST_W_3X(96,__Vtemp_3,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 79, __Vtemp_4, vlSelfRef.__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, __Vtemp_3, __Vtemp_4);
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rden_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp;
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_opcode 
        = (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x26U, 5));
    vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_txnid_from_sn 
        = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator, 0x1aU, 12));
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc0_rx_rsp_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc0_rx_rsp_txnid_from_sn;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_opcode 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_opcode;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__vc1_rx_rsp_txnid_from_sn 
        = vlSelfRef.__Vcellinp__id_translator_sn__DOT__sig_id_translator_sn_0__vc1_rx_rsp_txnid_from_sn;
}
