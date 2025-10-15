// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_balanced_routing = 0U;
    vlSelfRef.__PVT__timeout_mode = 0U;
    vlSelfRef.__PVT__recovery_mode = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__2(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = ((((IData)(vlSelfRef.__PVT__ic_RX_REQFLITPEND) 
                                          | (IData)(vlSelfRef.__PVT__ic_RX_RSPFLITPEND)) 
                                         | (IData)(vlSelfRef.__PVT__ic_RX_DATFLITPEND)) 
                                        | (IData)(vlSelfRef.__PVT__ic_RX_SNPFLITPEND));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__13(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out_rspf_vc0, (IData)(vlSelfRef.__PVT__metadata_out_rspf_vc0_tmp), vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out_rspf_vc1, (IData)(vlSelfRef.__PVT__metadata_out_rspf_vc1_tmp), vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out_datf_vc0, (IData)(vlSelfRef.__PVT__metadata_out_datf_vc0_tmp), vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out_datf_vc1, (IData)(vlSelfRef.__PVT__metadata_out_datf_vc1_tmp), vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_balanced_routing = 0U;
    vlSelfRef.__PVT__timeout_mode = 0U;
    vlSelfRef.__PVT__recovery_mode = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__2(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = ((((IData)(vlSelfRef.__PVT__ic_RX_REQFLITPEND) 
                                          | (IData)(vlSelfRef.__PVT__ic_RX_RSPFLITPEND)) 
                                         | (IData)(vlSelfRef.__PVT__ic_RX_DATFLITPEND)) 
                                        | (IData)(vlSelfRef.__PVT__ic_RX_SNPFLITPEND));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__13(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator, vlSelfRef.__PVT__flit_out_rspf_vc0_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out_rspf_vc0, (IData)(vlSelfRef.__PVT__metadata_out_rspf_vc0_tmp), vlSelfRef.__PVT__flit_out_rspf_vc0_from_id_translator);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator, vlSelfRef.__PVT__flit_out_rspf_vc1_to_id_translator);
    VL_ASSIGNSEL_WI(73,12,0x1aU, vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn);
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out_rspf_vc1, (IData)(vlSelfRef.__PVT__metadata_out_rspf_vc1_tmp), vlSelfRef.__PVT__flit_out_rspf_vc1_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__flit_out_datf_vc0_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator, vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out_datf_vc0, (IData)(vlSelfRef.__PVT__metadata_out_datf_vc0_tmp), vlSelfRef.__PVT__flit_out_datf_vc0_from_id_translator);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__flit_out_datf_vc1_to_id_translator);
    VL_ASSIGNSEL_WI(680,12,0x1aU, vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn);
    VL_ASSIGNSEL_WI(680,12,0x41U, vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator, vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out_datf_vc1, (IData)(vlSelfRef.__PVT__metadata_out_datf_vc1_tmp), vlSelfRef.__PVT__flit_out_datf_vc1_from_id_translator);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___ctor_var_reset(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970813291405437ull);
    vlSelf->__PVT__rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027660576638610361ull);
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__rx_ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14734729547715297656ull);
    vlSelf->__PVT__tx_ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314182055565024476ull);
    vlSelf->__PVT__rx_intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5657768447574710954ull);
    vlSelf->__PVT__tx_intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479686406378418957ull);
    vlSelf->__PVT__rx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7568623272905151952ull);
    vlSelf->__PVT__tx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209931857166942920ull);
    vlSelf->__PVT__rx_activate_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562813220007974936ull);
    vlSelf->__PVT__tx_activate_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1428466810526109246ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__myproc_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13274432713412293163ull);
    vlSelf->__PVT__mn_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6366623572454694384ull);
    vlSelf->__PVT__sysco_is_disabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4786428636997299290ull);
    vlSelf->__PVT__id_translator_hs_pending_txn_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9786047516829092547ull);
    vlSelf->__PVT__cm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 14619223296438610351ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 7789085967633061188ull);
    vlSelf->__PVT__xy_coord_all_hn_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9419461143915451259ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10569734242115779178ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4929601239921733728ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__noncm_homeaddr_base_all_hn_i, __VscopeHash, 5774525247165067667ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__noncm_homeaddr_limit_all_hn_i, __VscopeHash, 18196959966301009892ull);
    vlSelf->__PVT__xy_coord_all_hn_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6990528853360295797ull);
    vlSelf->__PVT__xy_coord_all_pm = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14093339878997901900ull);
    vlSelf->__PVT__cm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16326596507192002194ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 15039959541587252906ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4362549229537796297ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 17603428951671837452ull);
    vlSelf->__PVT__qos_override_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6335881680461040627ull);
    vlSelf->__PVT__qos_override_val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6466953120562445816ull);
    vlSelf->__PVT__ic_RX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592429441801268004ull);
    vlSelf->__PVT__ic_RX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10926843868711745075ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_REQFLIT, __VscopeHash, 10081777986980214128ull);
    vlSelf->__PVT__ic_RX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7784705244231261851ull);
    vlSelf->__PVT__ic_RX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4721516062163118000ull);
    vlSelf->__PVT__ic_RX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11171710941652216617ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__ic_RX_SNPFLIT, __VscopeHash, 5654856779067209852ull);
    vlSelf->__PVT__ic_RX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564341555754716050ull);
    vlSelf->__PVT__ic_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18123678973012384143ull);
    vlSelf->__PVT__ic_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408552711796289962ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_RX_RSPFLIT, __VscopeHash, 1354610994472511875ull);
    vlSelf->__PVT__ic_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4980050914503369147ull);
    vlSelf->__PVT__ic_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11842918978764936861ull);
    vlSelf->__PVT__ic_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16491006942135745796ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_RX_DATFLIT, __VscopeHash, 2011190906039008480ull);
    vlSelf->__PVT__ic_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3658967141809139587ull);
    vlSelf->__PVT__ic_RX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7171924022146679320ull);
    vlSelf->__PVT__ic_RX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2490056953492044266ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc0, __VscopeHash, 5627513096090483279ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__flit_out_rspf_vc0, __VscopeHash, 15115730508375395079ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc0, __VscopeHash, 16167855692546365320ull);
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_reqf_vc1, __VscopeHash, 1936265307465211183ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__PVT__flit_out_rspf_vc1, __VscopeHash, 17924978620067481116ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__PVT__flit_out_datf_vc1, __VscopeHash, 7139772207802805426ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc0, __VscopeHash, 2122902704796411884ull);
    VL_SCOPED_RAND_RESET_W(1610, vlSelf->__PVT__flit_all_req_vc1, __VscopeHash, 15524392444694250015ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc0, __VscopeHash, 5001631417125367275ull);
    VL_SCOPED_RAND_RESET_W(790, vlSelf->__PVT__flit_all_rsp_vc1, __VscopeHash, 12482377973635375604ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc0, __VscopeHash, 16163490529354362292ull);
    VL_SCOPED_RAND_RESET_W(6860, vlSelf->__PVT__flit_all_dat_vc1, __VscopeHash, 16006715428440085762ull);
    vlSelf->__PVT__ic_TX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871580351066470812ull);
    vlSelf->__PVT__ic_TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4109497001447517023ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_TX_REQFLIT, __VscopeHash, 569663838784936448ull);
    vlSelf->__PVT__ic_TX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18149747107335034857ull);
    vlSelf->__PVT__ic_TX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2271438628891321049ull);
    vlSelf->__PVT__ic_TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849754011617526692ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_TX_SNPFLIT, __VscopeHash, 10785170976365685348ull);
    vlSelf->__PVT__ic_TX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4400709601415914605ull);
    vlSelf->__PVT__ic_TX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2060896954836582492ull);
    vlSelf->__PVT__ic_TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6986194630684743894ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_TX_RSPFLIT, __VscopeHash, 16838131667686188585ull);
    vlSelf->__PVT__ic_TX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12927273387244497438ull);
    vlSelf->__PVT__ic_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102072163694598261ull);
    vlSelf->__PVT__ic_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17980292739927272412ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT, __VscopeHash, 11344885391285752503ull);
    vlSelf->__PVT__ic_TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5674497833994614527ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__portis_RN_or_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8163090187906755036ull);
    vlSelf->__PVT__ic_TXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14402484682683694775ull);
    vlSelf->__PVT__ic_RXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849932795827893202ull);
    vlSelf->__PVT__cc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456575816747454447ull);
    vlSelf->__PVT__all_cache_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192120307074908864ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310742148893260830ull);
    vlSelf->__PVT__ic_TX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405995942365889507ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__i_ucie_bridge_locations[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14939638592589144635ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_node_ids[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6025634249874724155ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18152667713515942132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 3856869148840372046ull);
    }
    vlSelf->__PVT__o_timeout_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7740206937123914527ull);
    vlSelf->__PVT__i_clear_timeout_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11306935004978713909ull);
    vlSelf->__PVT__o_timeout_recovery_successful = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130048337168507016ull);
    vlSelf->__PVT__i_clear_recovery_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1448590681538369443ull);
    vlSelf->__PVT__metadata_out_rspf_vc0_tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8009558131252264620ull);
    vlSelf->__PVT__metadata_out_rspf_vc1_tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17336583270668365342ull);
    vlSelf->__PVT__metadata_out_datf_vc0_tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 582354451058020590ull);
    vlSelf->__PVT__metadata_out_datf_vc1_tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8273890094308806607ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__flit_out_rspf_vc0_to_id_translator, __VscopeHash, 7985597941940913537ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__flit_out_rspf_vc1_to_id_translator, __VscopeHash, 18350968475829167417ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__flit_out_rspf_vc0_from_id_translator, __VscopeHash, 6355820317165955303ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__flit_out_rspf_vc1_from_id_translator, __VscopeHash, 10029683696753482703ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out_datf_vc0_to_id_translator, __VscopeHash, 6206868091127050272ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out_datf_vc1_to_id_translator, __VscopeHash, 10921233596414543842ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out_datf_vc0_from_id_translator, __VscopeHash, 10483906532687908477ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__flit_out_datf_vc1_from_id_translator, __VscopeHash, 11219794156634604613ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12364437059197336991ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2442109393445920530ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13803892076329687828ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16086952640368813078ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16724105472290879617ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7696150905062115265ull);
    vlSelf->__PVT__snpreq_flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6653768036596764987ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__snpreq_flit_to_id_translator, __VscopeHash, 13482283629500303700ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__snpreq_flit_from_id_translator, __VscopeHash, 17520739221770740768ull);
    vlSelf->__PVT__rsp_flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6935841997132875563ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rsp_flit_to_id_translator, __VscopeHash, 10661581656049496778ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rsp_flit_from_id_translator, __VscopeHash, 10049279408871534745ull);
    vlSelf->__PVT__dat_flitv_to_id_translator = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13185158726219803338ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__dat_flit_to_id_translator, __VscopeHash, 13998049040510675683ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__dat_flit_from_id_translator, __VscopeHash, 17165843179809650780ull);
    vlSelf->__PVT__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073664312429058754ull);
    vlSelf->__PVT__id_translator_hs_pending_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12924654799560797390ull);
    vlSelf->__PVT__id_translator_full_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777691839719015227ull);
    vlSelf->__PVT__credits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58441542743280763ull);
    vlSelf->__PVT__rx_req_port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321643654435963694ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__icx_exist_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7178889322011531642ull);
    vlSelf->__PVT__icx_exist_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 577472896178209734ull);
    vlSelf->__PVT__icx_exist_dat = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6017703924268166047ull);
    vlSelf->__PVT__timeout_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8127542659670534502ull);
    vlSelf->__PVT__recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15903710902454798535ull);
    vlSelf->__PVT__timeout_can_send_generated_dat_rsp_flit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7164197319557712313ull);
    vlSelf->__PVT__tx_dat_empty_flit_store_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1656549369031570387ull);
    vlSelf->__PVT__id_translator_req_snp_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6978048267312632202ull);
    vlSelf->__PVT__tx_sactive_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4931592092891841177ull);
    vlSelf->__PVT__tx_linkactivereq_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9148235374056479412ull);
    vlSelf->__PVT__tx_linkactiveack_to_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5587299232227822026ull);
    vlSelf->__PVT__snpflitpend_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12021376320592103940ull);
    vlSelf->__PVT__snpflitv_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16036833800681451837ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__snpflit_from_tx_top, __VscopeHash, 2620000917339338206ull);
    vlSelf->__PVT__snplcrdv_to_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3808609803510157858ull);
    vlSelf->__PVT__datflitpend_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12718552589997711309ull);
    vlSelf->__PVT__datflitv_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1735660858624399734ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__datflit_from_tx_top, __VscopeHash, 12483331854261252406ull);
    vlSelf->__PVT__datlcrdv_to_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3518532749523948633ull);
    vlSelf->__PVT__rspflitpend_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6093585641816191783ull);
    vlSelf->__PVT__rspflitv_from_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16525843741832024286ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rspflit_from_tx_top, __VscopeHash, 12515551270009201336ull);
    vlSelf->__PVT__rsplcrdv_to_tx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12957411918358299693ull);
    vlSelf->__PVT__rx_sactive_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15932217614260337988ull);
    vlSelf->__PVT__rx_linkactivereq_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5660288928446203995ull);
    vlSelf->__PVT__rx_linkactiveack_from_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4840803982115500634ull);
    vlSelf->__PVT__reqflitpend_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10072475489654899997ull);
    vlSelf->__PVT__reqflitv_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17812647038129520808ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__reqflit_to_rx_top, __VscopeHash, 4225043857486093044ull);
    vlSelf->__PVT__reqlcrdv_from_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5851584576159328422ull);
    vlSelf->__PVT__datflitpend_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11410150276244097119ull);
    vlSelf->__PVT__datflitv_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7779260976709021343ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__datflit_to_rx_top, __VscopeHash, 5703331095199607266ull);
    vlSelf->__PVT__datlcrdv_from_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16503601842672348132ull);
    vlSelf->__PVT__rspflitpend_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15657382743241490474ull);
    vlSelf->__PVT__rspflitv_to_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5422564666666907028ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rspflit_to_rx_top, __VscopeHash, 18185075114711294406ull);
    vlSelf->__PVT__rsplcrdv_from_rx_top = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11960194379410647756ull);
    vlSelf->__PVT__rden_snprsp_flit_fifo_tx_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7405587457092863059ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rddata_snprsp_flit_fifo_tx_snp, __VscopeHash, 5185148519681247711ull);
    vlSelf->__PVT__empty_snprsp_flit_fifo_tx_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13201661025019523298ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__Vcellout__sig_node_rxtop_0__flit_out_datf_vc1, __VscopeHash, 13104168035751037041ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1, __VscopeHash, 16719301883602162883ull);
    VL_SCOPED_RAND_RESET_W(686, vlSelf->__Vcellout__sig_node_rxtop_0__flit_out_datf_vc0, __VscopeHash, 5741294498370422771ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0, __VscopeHash, 16893079567901121804ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator, __VscopeHash, 18047704714898765220ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vcellout__sig_node_txtop_0__dat_flit_to_id_translator, __VscopeHash, 9333277908035407395ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator, __VscopeHash, 13715092498381311398ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator, __VscopeHash, 11534955874236498582ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator, __VscopeHash, 6363302287034104591ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator, __VscopeHash, 13520177291872976354ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, __VscopeHash, 17264454980808523608ull);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3868129166463211143ull);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1823311328055047610ull);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10673327306321427594ull);
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169686039065575805ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_dbid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2209410492755725662ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10652494765915306764ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5559771967297087286ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2844867871816260322ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_dbid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10800400669876128449ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1930758177832137814ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1150749813849584495ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18045908514533248762ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9684727176884898094ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13178176394526916704ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11132653449582905476ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12214606023576598800ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1470009078577353153ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13520724725994268401ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5969801898877079252ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4509728368844636440ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4233221919702999307ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3050178030119307127ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 213743070792178844ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16299985160106052342ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12164569662139820453ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5086120877842726326ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8303885096512945031ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1361812008061261051ull);
    vlSelf->__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14268150343717862251ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4579882850408825578ull);
}
