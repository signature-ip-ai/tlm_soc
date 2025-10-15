// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_rcv_respproc.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_respproc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__0(Vsig_topology_top_sig_chi_rcv_respproc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_respproc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__resp_src_l3 = vlSelfRef.__PVT__l3_rspvalid;
    vlSelfRef.__PVT__porthas_rspgnt_fromcc = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__l3_rspvalid)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_respproc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__1(Vsig_topology_top_sig_chi_rcv_respproc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_respproc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RX_RSPFLITV = ((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV) 
                                    | (IData)(vlSelfRef.__PVT__l3_rspvalid));
    VL_COND_WIWW(73, vlSelfRef.__PVT__RX_RSPFLIT, (IData)(vlSelfRef.__PVT__l3_rspvalid), vlSelfRef.__PVT__l3_rspflit, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGNSEL_WI(74,26,0U, vlSelfRef.__PVT__wrdata_respcmdfifo, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 4U, 11)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0U, 4)))));
    VL_ASSIGNSEL_WI(74,12,0x1aU, vlSelfRef.__PVT__wrdata_respcmdfifo, 
                    (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x1aU, 12)));
    VL_ASSIGNSEL_WI(74,16,0x26U, vlSelfRef.__PVT__wrdata_respcmdfifo, 
                    VL_CONCAT_III(16,6,10, VL_CONCAT_III(6,3,3, 
                                                         (7U 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x33U, 3)), 
                                                         (7U 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x30U, 3))), 
                                  VL_CONCAT_III(10,3,7, 
                                                (7U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x2dU, 3)), 
                                                VL_CONCAT_III(7,2,5, 
                                                              (3U 
                                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x2bU, 2)), 
                                                              (0x1fU 
                                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5))))));
    VL_ASSIGNSEL_WI(74,12,0x36U, vlSelfRef.__PVT__wrdata_respcmdfifo, 
                    (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x36U, 12)));
    VL_ASSIGNSEL_WI(74,8,0x42U, vlSelfRef.__PVT__wrdata_respcmdfifo, 
                    VL_CONCAT_III(8,1,7, (IData)(vlSelfRef.__PVT__resp_src_l3), 
                                  VL_CONCAT_III(7,1,6, 
                                                (1U 
                                                 & VL_BITSEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x48U)), 
                                                VL_CONCAT_III(6,2,4, 
                                                              (3U 
                                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x46U, 2)), 
                                                              (0xfU 
                                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x42U, 4))))));
    vlSelfRef.__PVT__respis_anylegal_opcode = (((((
                                                   (((((1U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5))) 
                                                       | (9U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                      | (2U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                     | (5U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                    | (6U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                   | (4U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                  | (0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                 | (3U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                                | (7U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5)))) 
                                               | (8U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__RX_RSPFLIT, 0x26U, 5))));
    vlSelfRef.__PVT__wren_respcmdfifo = ((IData)(vlSelfRef.__PVT__RX_RSPFLITV) 
                                         & (IData)(vlSelfRef.__PVT__respis_anylegal_opcode));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_respproc___ctor_var_reset(Vsig_topology_top_sig_chi_rcv_respproc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_respproc___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__ic_RX_RSPFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18123678973012384143ull);
    vlSelf->__PVT__ic_RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408552711796289962ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__ic_RX_RSPFLIT, __VscopeHash, 1354610994472511875ull);
    vlSelf->__PVT__ic_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4980050914503369147ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__send_respcrdt_update_cohc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4980263148403496985ull);
    vlSelf->__PVT__wren_respcmdfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3810146697432004077ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__wrdata_respcmdfifo, __VscopeHash, 335688821806493792ull);
    vlSelf->__PVT__l3_rspvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17693132866999472368ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__l3_rspflit, __VscopeHash, 1662627214675102205ull);
    vlSelf->__PVT__porthas_rspgnt_fromcc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13920214279695019476ull);
    vlSelf->__PVT__respis_anylegal_opcode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304141874943753465ull);
    vlSelf->__PVT__drive_xLCRDV_resp_cohc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1057032435027588454ull);
    vlSelf->__PVT__drive_xLCRDV_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1069279966457483980ull);
    vlSelf->__PVT__RX_RSPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5442896156846886670ull);
    vlSelf->__PVT__resp_src_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18376738570986470846ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__RX_RSPFLIT, __VscopeHash, 13046302647788783213ull);
    vlSelf->__Vdly__ic_RX_RSPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11234016020410359680ull);
}
