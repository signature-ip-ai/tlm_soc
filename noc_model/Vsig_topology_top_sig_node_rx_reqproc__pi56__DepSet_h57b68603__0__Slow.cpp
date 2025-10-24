// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi56.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc__pi56___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xy_coord_hn_f[0U] = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelfRef.__PVT__nodeid_pm[0U] = vlSelfRef.__PVT__xy_coord_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_hn_f[0U] = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_base_hn_f[0U] = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__cm_activated_hn_f = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_hn_f[0U] = (0x1fffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_EXTEND_II(29,28, 
                                                                   (0xfffffffU 
                                                                    & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f, 0U, 28)))));
    vlSelfRef.__PVT__noncm_homeaddr_base_pm[0U] = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__noncm_activated_hn_f = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f, 0x1cU));
    vlSelfRef.__PVT__noncm_homeaddr_limit_hn_f[0U] 
        = (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                     (0xfffffffU 
                                                      & VL_SEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f, 0U, 28)))));
    vlSelfRef.__PVT__noncm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__noncm_homeaddr_limit_pm[0U] = 
        (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                   (0xfffffffU 
                                                    & VL_SEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_base_pm[0U] = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_pm[0U] = (0x1fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_EXTEND_II(29,28, 
                                                                 (0xfffffffU 
                                                                  & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_base_hn_f[0U];
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_base_hn_f
        [0U];
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_limit_hn_f[0U];
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_base_pm[0U];
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_hn_f
        [0U];
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_pm[0U];
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_base_pm[0U];
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_limit_pm[0U];
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc__pi56___ctor_var_reset(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__ic_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003866039300048377ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 970813291405437ull);
    vlSelf->__PVT__intfrx_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16373072684055786530ull);
    vlSelf->__PVT__rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027660576638610361ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__myproc_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13274432713412293163ull);
    vlSelf->__PVT__mn_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6366623572454694384ull);
    vlSelf->__PVT__cm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 14619223296438610351ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 7789085967633061188ull);
    vlSelf->__PVT__xy_coord_all_hn_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9419461143915451259ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10569734242115779178ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4929601239921733728ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__noncm_homeaddr_base_all_hn_i, __VscopeHash, 5774525247165067667ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__noncm_homeaddr_limit_all_hn_i, __VscopeHash, 18196959966301009892ull);
    vlSelf->__PVT__xy_coord_all_hn_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6990528853360295797ull);
    vlSelf->__PVT__xy_coord_all_pm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14093339878997901900ull);
    vlSelf->__PVT__cm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16326596507192002194ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 15039959541587252906ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4362549229537796297ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 17603428951671837452ull);
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
    VL_SCOPED_RAND_RESET_W(161, vlSelf->__PVT__flit_out_vc0, __VscopeHash, 3622398562474296952ull);
    vlSelf->__PVT__flit_out_vc1[0] = 0U;
    vlSelf->__PVT__flit_out_vc1[1] = 0U;
    vlSelf->__PVT__flit_out_vc1[2] = 0U;
    vlSelf->__PVT__flit_out_vc1[3] = 0U;
    vlSelf->__PVT__flit_out_vc1[4] = 0U;
    vlSelf->__PVT__flit_out_vc1[5] = 0U;
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__rcvr_can_send_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837892261923136218ull);
    vlSelf->__PVT__icx_exist = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8367053913676612596ull);
    vlSelf->__PVT__enable_balanced_routing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15479611087166412018ull);
    vlSelf->__PVT__reqcredits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12870763247134423314ull);
    vlSelf->__PVT__snpcredits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8565244997184682093ull);
    vlSelf->__PVT__rx_req_port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7321643654435963694ull);
    vlSelf->__PVT__portis_RN_or_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8163090187906755036ull);
    vlSelf->__PVT__i_timeout_or_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777484362480875309ull);
    vlSelf->__PVT__vc0_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9689974504983772801ull);
    vlSelf->__PVT__vc1_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14033321512137860868ull);
    vlSelf->__PVT__reqflit_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14185442601781850471ull);
    vlSelf->__PVT__reqflit_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5201373059736047364ull);
    vlSelf->__PVT__snpflit_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5730781300602453081ull);
    vlSelf->__PVT__snpflit_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5837136599792136689ull);
    vlSelf->__PVT__vc0_pend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13174936340522559535ull);
    vlSelf->__PVT__vc1_pend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12680673271675319043ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_reqflit_addr_sliced_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 2615479735683630008ull);
    }
    vlSelf->__PVT__cm_reqaddr_match_hn_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2073194623571600762ull);
    vlSelf->__PVT__cm_tgt_cluster_id_hn_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10259261406835593247ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_base_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 8134846061893802676ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_limit_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 11474508859152565254ull);
    }
    vlSelf->__PVT__cm_activated_hn_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6853623028038917531ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_base_sliced_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 9858163299378296849ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_limit_sliced_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 13982113572331940190ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__xy_coord_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6717354327164684927ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_reqflit_addr_sliced_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 15552294117473664409ull);
    }
    vlSelf->__PVT__noncm_reqaddr_match_hn_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1162217870078927007ull);
    vlSelf->__PVT__noncm_tgt_cluster_id_hn_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13888662402171458508ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_base_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16446704753562211686ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_limit_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 7143342179290750619ull);
    }
    vlSelf->__PVT__noncm_activated_hn_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7997582331447197957ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_base_sliced_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 7995942371242369549ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_limit_sliced_hn_f[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 8567161927345344311ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__noncm_flit_addr_sliced_hn_i[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 15893211673314984266ull);
    }
    vlSelf->__PVT__noncm_addr_match_hn_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3709463581659035568ull);
    vlSelf->__PVT__noncm_tgt_cluster_id_hn_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3850499723461958347ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_base_hn_i[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5602528638505475199ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_limit_hn_i[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 14619326670287968515ull);
    }
    vlSelf->__PVT__noncm_activated_hn_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12789459899312627977ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_base_sliced_hn_i[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 15784189005205503300ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_limit_sliced_hn_i[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 1072893869371999823ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__xy_coord_hn_i[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16817008854770252382ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_flit_addr_sliced_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5917875059357151425ull);
    }
    vlSelf->__PVT__cm_addr_match_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9274994138250664942ull);
    vlSelf->__PVT__cm_tgtid_pm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6147128358396001612ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_base_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 12692101677330705775ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_limit_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 17735155170828469581ull);
    }
    vlSelf->__PVT__cm_activated_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7746307622250343239ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_base_sliced_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18148095541045974775ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cm_homeaddr_limit_sliced_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 14997308441713714548ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__nodeid_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9615192789535012440ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_flit_addr_sliced_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 12410074179275294719ull);
    }
    vlSelf->__PVT__noncm_addr_match_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448483759362002529ull);
    vlSelf->__PVT__noncm_tgtid_pm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6960259229038707180ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_base_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16999465568878583337ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_limit_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 8778621161790776053ull);
    }
    vlSelf->__PVT__noncm_activated_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4947697557670439230ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_base_sliced_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4614785104305072709ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__noncm_homeaddr_limit_sliced_pm[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4709328469465250998ull);
    }
    vlSelf->__PVT__snpflit_tgtid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3162395160621786310ull);
    vlSelf->__PVT__tgtid_pm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9374241255691234388ull);
    vlSelf->__PVT__tgt_cluster_id_hn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1289611451225065188ull);
    vlSelf->__PVT__tgt_port_id_hn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9376095775448780371ull);
    vlSelf->__PVT__reqis_to_noncm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11547563838799027966ull);
    vlSelf->__PVT__noncm_addr_match_hn_i_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11256610729936081479ull);
    vlSelf->__PVT__noncm_addr_match_hn_f_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12152421307112581812ull);
    vlSelf->__PVT__noncm_addr_match_pm_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5284269479283128328ull);
    vlSelf->__PVT__rcv_buff_released_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6932248938443979625ull);
    vlSelf->__PVT__rcv_buff_released_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17651193454876933414ull);
    vlSelf->__PVT__send_working_update_gate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17390924149547216295ull);
    vlSelf->__PVT__enable_init_update_gate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4676391218000795803ull);
    vlSelf->__PVT__reqcredits_backto_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8283626316614493653ull);
    vlSelf->__PVT__snpcredits_backto_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8313896358121758742ull);
    vlSelf->__PVT__send_reqcredit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11577452182128937864ull);
    vlSelf->__PVT__send_snpcredit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14758094302926178023ull);
    vlSelf->__PVT__rcvd_reqlink_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418110478712826036ull);
    vlSelf->__PVT__rcvd_snplink_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5477773517198828123ull);
    vlSelf->__PVT__inactive_cntr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9603686313470315538ull);
    vlSelf->__PVT__inactive_cntr_nxt = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3010388850881891129ull);
    vlSelf->__PVT__port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5358130019534102335ull);
    vlSelf->__PVT__port_is_inactive_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17848955832646399442ull);
    vlSelf->__PVT__ic_RX_FLITV_is_vc0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349394018244799750ull);
    vlSelf->__PVT__ic_RX_FLITV_is_vc1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2483582584601230660ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_REQFLIT_s, __VscopeHash, 1812886886473180330ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_REQFLIT_modified, __VscopeHash, 16945153394434084872ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__ic_RX_SNPFLIT_s, __VscopeHash, 9475810009513821058ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__ic_RX_SNPFLIT_modified, __VscopeHash, 12351782847360174346ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__vc0_flit, __VscopeHash, 13402600674373676664ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__vc1_flit, __VscopeHash, 4192124226710667693ull);
    vlSelf->__PVT__rden_snp0_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2674465759546754646ull);
    vlSelf->__PVT__rden_snp1_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15935130530081573699ull);
    vlSelf->__PVT__rden_req0_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2885690342864599609ull);
    vlSelf->__PVT__rden_req1_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6050949015955008857ull);
    vlSelf->__PVT__empty_req0_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17504393003752268797ull);
    vlSelf->__PVT__empty_req1_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10615844342177085016ull);
    vlSelf->__PVT__empty_snp0_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5056641663939568400ull);
    vlSelf->__PVT__empty_snp1_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2496620959534007727ull);
    vlSelf->__PVT__full_req0_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1694558175223641742ull);
    vlSelf->__PVT__full_req1_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14764671961313833328ull);
    vlSelf->__PVT__full_snp0_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 314085756214482342ull);
    vlSelf->__PVT__full_snp1_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3116261595467040857ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__rddata_req0_fifo, __VscopeHash, 16149089170380413837ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__rddata_req1_fifo, __VscopeHash, 12110330406190444190ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__wrdata_req0_fifo, __VscopeHash, 6647257727794093404ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__wrdata_req1_fifo, __VscopeHash, 1227481145602345106ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__rddata_snp0_fifo, __VscopeHash, 13105467032211371462ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__rddata_snp1_fifo, __VscopeHash, 2640134952116063990ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__wrdata_snp0_fifo, __VscopeHash, 9694609587998801365ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__wrdata_snp1_fifo, __VscopeHash, 6351879616754902843ull);
    vlSelf->__PVT__ucie_sam_activated = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7038262109888111340ull);
    vlSelf->__PVT__ucie_addr_match_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7327281264344236176ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_sliced_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14433036143133693612ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_sliced_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 845801705858527489ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_flit_sliced_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7849992737603575085ull);
    }
    vlSelf->__PVT__ucie_tgtid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8828797769421887623ull);
    vlSelf->__PVT__p = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14074675935524643836ull);
    vlSelf->__PVT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8861071527689086543ull);
    vlSelf->__PVT__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16978132545290669629ull);
    vlSelf->__PVT__s = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16562859848569467201ull);
    vlSelf->__PVT__t = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12247454108283186160ull);
    vlSelf->__PVT__x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9409450202036847209ull);
    vlSelf->__PVT__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11123243248953317070ull);
    vlSelf->__PVT__icn_generated_tgtid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18446208889703200249ull);
    vlSelf->__PVT__reqcrdt_balnce_tobesent = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10844623684837512144ull);
    vlSelf->__PVT__reqcrdt_balnce_tobesent_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5773316893139342822ull);
    vlSelf->__PVT__snpcrdt_balnce_tobesent = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4187847964446707046ull);
    vlSelf->__PVT__snpcrdt_balnce_tobesent_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15904663742893198209ull);
    vlSelf->__PVT__crdt_balance_to_deactivate_link = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13051745309924181175ull);
    vlSelf->__PVT__crdt_balance_to_deactivate_link_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3642973881028721926ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdly__reqcrdt_balnce_tobesent = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5966625405277057190ull);
    vlSelf->__Vdly__crdt_balance_to_deactivate_link = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5641473467674498908ull);
    vlSelf->__Vdly__reqcredits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1670559284827748840ull);
    vlSelf->__Vdly__snpcrdt_balnce_tobesent = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7622459077825819578ull);
    vlSelf->__Vdly__snpcredits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6571164681630671541ull);
    vlSelf->__Vdly__inactive_cntr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14607590063487013733ull);
    vlSelf->__Vdly__port_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405471630199526216ull);
}
