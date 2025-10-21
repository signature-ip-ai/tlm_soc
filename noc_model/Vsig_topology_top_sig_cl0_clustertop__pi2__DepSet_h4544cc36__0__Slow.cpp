// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cl0_clustertop__pi2.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cl0_clustertop__pi2___ctor_var_reset(Vsig_topology_top_sig_cl0_clustertop__pi2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cl0_clustertop__pi2___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 786372171911065518ull);
    vlSelf->__PVT__rstb_ic_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263995885505281668ull);
    vlSelf->__PVT__cc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456575816747454447ull);
    vlSelf->__PVT__noc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673043559262949798ull);
    vlSelf->__PVT__cache_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8188872323422654686ull);
    vlSelf->__PVT__all_cache_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192120307074908864ull);
    vlSelf->__PVT__cc_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5685221864143250349ull);
    vlSelf->__PVT__cc_rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5136397695163461683ull);
    vlSelf->__PVT__p1_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 675192797827168932ull);
    vlSelf->__PVT__p1_rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7178592900044138210ull);
    vlSelf->__PVT__p1_TX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18437109366209676156ull);
    vlSelf->__PVT__p1_TX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147707438765082702ull);
    vlSelf->__PVT__p1_RX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16867980412649149070ull);
    vlSelf->__PVT__p1_RX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5469147540208248502ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__p1_RX_REQFLIT, __VscopeHash, 13430383410956249588ull);
    vlSelf->__PVT__p1_RX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14927272201362087293ull);
    vlSelf->__PVT__p1_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340528929746015951ull);
    vlSelf->__PVT__p1_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3652380003454387905ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__p1_RX_RSPFLIT, __VscopeHash, 3881878798822669950ull);
    vlSelf->__PVT__p1_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9726057939622955417ull);
    vlSelf->__PVT__p1_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17548023200826895416ull);
    vlSelf->__PVT__p1_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5034659511911616669ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__p1_RX_DATFLIT, __VscopeHash, 9328862993934172628ull);
    vlSelf->__PVT__p1_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441070940524633413ull);
    vlSelf->__PVT__p1_RX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1566491902129275809ull);
    vlSelf->__PVT__p1_RX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15517737430760305688ull);
    vlSelf->__PVT__p1_TX_SNPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9099822983102969630ull);
    vlSelf->__PVT__p1_TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1214271808103247808ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__p1_TX_SNPFLIT, __VscopeHash, 16499536333924171806ull);
    vlSelf->__PVT__p1_TX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12259515384118354146ull);
    vlSelf->__PVT__p1_TX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8968305482318306795ull);
    vlSelf->__PVT__p1_TX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8271982236932651824ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__p1_TX_RSPFLIT, __VscopeHash, 3971062207700308616ull);
    vlSelf->__PVT__p1_TX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3855154438450279216ull);
    vlSelf->__PVT__p1_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9708194411566136670ull);
    vlSelf->__PVT__p1_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3225432914592874171ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__p1_TX_DATFLIT, __VscopeHash, 6134168674117810855ull);
    vlSelf->__PVT__p1_TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7185965576073927757ull);
    vlSelf->__PVT__p1_TXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9444826384811273140ull);
    vlSelf->__PVT__p1_RXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2137275668017146531ull);
    vlSelf->__PVT__p1_SYSCOREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2754943785437919790ull);
    vlSelf->__PVT__p1_SYSCOACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11366645922971782156ull);
    vlSelf->__PVT__p1_reg_syscoh = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13325412918840444656ull);
    vlSelf->__PVT__p3_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432790991726601596ull);
    vlSelf->__PVT__p3_rstb_intfrx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8543768697204687523ull);
    vlSelf->__PVT__p3_RX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17645508534653044943ull);
    vlSelf->__PVT__p3_RX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5935327790224854858ull);
    vlSelf->__PVT__p3_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14702428807043290430ull);
    vlSelf->__PVT__p3_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10837349420719324419ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__p3_RX_RSPFLIT, __VscopeHash, 3556811682816747974ull);
    vlSelf->__PVT__p3_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13293472912652774044ull);
    vlSelf->__PVT__p3_RX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1836206608822995511ull);
    vlSelf->__PVT__p3_RX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9110021502188997082ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__p3_RX_DATFLIT, __VscopeHash, 302567432383504802ull);
    vlSelf->__PVT__p3_RX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8654570890626756967ull);
    vlSelf->__PVT__p3_TX_LINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 858883941423856990ull);
    vlSelf->__PVT__p3_TX_LINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1372961223103067886ull);
    vlSelf->__PVT__p3_TX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3818973334222117108ull);
    vlSelf->__PVT__p3_TX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12774963591340547853ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__p3_TX_REQFLIT, __VscopeHash, 9602981831142834912ull);
    vlSelf->__PVT__p3_TX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2728572787434043412ull);
    vlSelf->__PVT__p3_TX_DATFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13018150524550977444ull);
    vlSelf->__PVT__p3_TX_DATFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1633463731778315895ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__p3_TX_DATFLIT, __VscopeHash, 12326834360164472588ull);
    vlSelf->__PVT__p3_TX_DATLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12266091320474716058ull);
    vlSelf->__PVT__p3_TXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12052882676764871119ull);
    vlSelf->__PVT__p3_RXSACTIVE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17674048242579984347ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__COH_RNF_Exist = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6670122137102227417ull);
    vlSelf->__PVT__reg_cc_ctrl1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5747835356120788922ull);
    vlSelf->__PVT__mn_node_id = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6366623572454694384ull);
    VL_SCOPED_RAND_RESET_W(242, vlSelf->__PVT__COH_nodeid_all_rn, __VscopeHash, 12026750110535324694ull);
    vlSelf->__PVT__xy_coord_all_hn_f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9419461143915451259ull);
    vlSelf->__PVT__xy_coord_all_pm = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14093339878997901900ull);
    vlSelf->__PVT__cm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 14619223296438610351ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 7789085967633061188ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_hn_f = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10569734242115779178ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_hn_f = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4929601239921733728ull);
    vlSelf->__PVT__cm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16326596507192002194ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 15039959541587252906ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4362549229537796297ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 17603428951671837452ull);
    vlSelf->__PVT__o_rd_csr_clus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3789807585361712399ull);
    vlSelf->__PVT__i_rden_csr_top_or_clus = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13518255597322856622ull);
    vlSelf->__PVT__i_wren_csr_top_or_clus = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13088844985558224092ull);
    vlSelf->__PVT__i_clus_csr_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13912467078391920073ull);
    vlSelf->__PVT__i_clus_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12821293847808381848ull);
    vlSelf->__PVT__i_clus_csr_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14016373169784893269ull);
    vlSelf->__PVT__i_csr_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11503036126592524345ull);
    vlSelf->__PVT__i_csr_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 538105979227055007ull);
    vlSelf->__PVT__icx_txport_cfg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17133204946472840077ull);
}
