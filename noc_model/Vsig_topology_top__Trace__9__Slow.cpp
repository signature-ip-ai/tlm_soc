// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsig_topology_top__Syms.h"


extern const VlWide<20>/*639:0*/ Vsig_topology_top__ConstPool__CONST_h3419a097_0;

VL_ATTR_COLD void Vsig_topology_top___024root__trace_full_0_sub_4(Vsig_topology_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_full_0_sub_4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<22>/*703:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<22>/*703:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<16>/*511:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<51>/*1631:0*/ __Vtemp_43;
    VlWide<17>/*543:0*/ __Vtemp_46;
    VlWide<68>/*2175:0*/ __Vtemp_47;
    VlWide<17>/*543:0*/ __Vtemp_50;
    VlWide<85>/*2719:0*/ __Vtemp_51;
    VlWide<17>/*543:0*/ __Vtemp_54;
    VlWide<102>/*3263:0*/ __Vtemp_55;
    VlWide<17>/*543:0*/ __Vtemp_58;
    VlWide<119>/*3807:0*/ __Vtemp_59;
    VlWide<17>/*543:0*/ __Vtemp_62;
    VlWide<136>/*4351:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<5>/*159:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_80;
    // Body
    bufp->fullBit(oldp+43665,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 7U))));
    bufp->fullIData(oldp+43666,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_121__DOT__i),32);
    bufp->fullBit(oldp+43667,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 8U))));
    bufp->fullIData(oldp+43668,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_122__DOT__i),32);
    bufp->fullBit(oldp+43669,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 9U))));
    bufp->fullIData(oldp+43670,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_123__DOT__i),32);
    bufp->fullBit(oldp+43671,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+43672,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_124__DOT__i),32);
    bufp->fullBit(oldp+43673,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+43674,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_125__DOT__i),32);
    bufp->fullBit(oldp+43675,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+43676,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_126__DOT__i),32);
    bufp->fullBit(oldp+43677,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+43678,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_127__DOT__i),32);
    bufp->fullBit(oldp+43679,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+43680,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_128__DOT__i),32);
    bufp->fullBit(oldp+43681,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+43682,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_129__DOT__i),32);
    bufp->fullBit(oldp+43683,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+43684,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_13__DOT__i),32);
    bufp->fullBit(oldp+43685,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+43686,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_130__DOT__i),32);
    bufp->fullBit(oldp+43687,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+43688,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_131__DOT__i),32);
    bufp->fullBit(oldp+43689,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+43690,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_132__DOT__i),32);
    bufp->fullBit(oldp+43691,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+43692,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_133__DOT__i),32);
    bufp->fullBit(oldp+43693,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+43694,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_134__DOT__i),32);
    bufp->fullBit(oldp+43695,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+43696,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_135__DOT__i),32);
    bufp->fullBit(oldp+43697,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+43698,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_136__DOT__i),32);
    bufp->fullBit(oldp+43699,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+43700,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_137__DOT__i),32);
    bufp->fullBit(oldp+43701,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+43702,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_138__DOT__i),32);
    bufp->fullBit(oldp+43703,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+43704,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_139__DOT__i),32);
    bufp->fullBit(oldp+43705,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+43706,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_14__DOT__i),32);
    bufp->fullBit(oldp+43707,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+43708,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_140__DOT__i),32);
    bufp->fullBit(oldp+43709,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+43710,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_141__DOT__i),32);
    bufp->fullBit(oldp+43711,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+43712,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_142__DOT__i),32);
    bufp->fullBit(oldp+43713,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+43714,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_143__DOT__i),32);
    bufp->fullBit(oldp+43715,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+43716,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_144__DOT__i),32);
    bufp->fullBit(oldp+43717,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+43718,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_145__DOT__i),32);
    bufp->fullBit(oldp+43719,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U])));
    bufp->fullIData(oldp+43720,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_146__DOT__i),32);
    bufp->fullBit(oldp+43721,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 1U))));
    bufp->fullIData(oldp+43722,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_147__DOT__i),32);
    bufp->fullBit(oldp+43723,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 2U))));
    bufp->fullIData(oldp+43724,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_148__DOT__i),32);
    bufp->fullBit(oldp+43725,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 3U))));
    bufp->fullIData(oldp+43726,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_149__DOT__i),32);
    bufp->fullBit(oldp+43727,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+43728,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_15__DOT__i),32);
    bufp->fullBit(oldp+43729,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 4U))));
    bufp->fullIData(oldp+43730,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_150__DOT__i),32);
    bufp->fullBit(oldp+43731,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 5U))));
    bufp->fullIData(oldp+43732,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_151__DOT__i),32);
    bufp->fullBit(oldp+43733,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 6U))));
    bufp->fullIData(oldp+43734,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_152__DOT__i),32);
    bufp->fullBit(oldp+43735,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 7U))));
    bufp->fullIData(oldp+43736,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_153__DOT__i),32);
    bufp->fullBit(oldp+43737,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 8U))));
    bufp->fullIData(oldp+43738,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_154__DOT__i),32);
    bufp->fullBit(oldp+43739,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 9U))));
    bufp->fullIData(oldp+43740,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_155__DOT__i),32);
    bufp->fullBit(oldp+43741,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+43742,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_156__DOT__i),32);
    bufp->fullBit(oldp+43743,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+43744,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_157__DOT__i),32);
    bufp->fullBit(oldp+43745,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+43746,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_158__DOT__i),32);
    bufp->fullBit(oldp+43747,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+43748,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_159__DOT__i),32);
    bufp->fullBit(oldp+43749,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+43750,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_16__DOT__i),32);
    bufp->fullBit(oldp+43751,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+43752,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_160__DOT__i),32);
    bufp->fullBit(oldp+43753,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+43754,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_161__DOT__i),32);
    bufp->fullBit(oldp+43755,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+43756,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_162__DOT__i),32);
    bufp->fullBit(oldp+43757,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+43758,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_163__DOT__i),32);
    bufp->fullBit(oldp+43759,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+43760,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_164__DOT__i),32);
    bufp->fullBit(oldp+43761,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+43762,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_165__DOT__i),32);
    bufp->fullBit(oldp+43763,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+43764,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_166__DOT__i),32);
    bufp->fullBit(oldp+43765,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+43766,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_167__DOT__i),32);
    bufp->fullBit(oldp+43767,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+43768,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_168__DOT__i),32);
    bufp->fullBit(oldp+43769,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+43770,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_169__DOT__i),32);
    bufp->fullBit(oldp+43771,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+43772,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_17__DOT__i),32);
    bufp->fullBit(oldp+43773,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+43774,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_170__DOT__i),32);
    bufp->fullBit(oldp+43775,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+43776,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_171__DOT__i),32);
    bufp->fullBit(oldp+43777,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+43778,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_172__DOT__i),32);
    bufp->fullBit(oldp+43779,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+43780,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_173__DOT__i),32);
    bufp->fullBit(oldp+43781,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+43782,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_174__DOT__i),32);
    bufp->fullBit(oldp+43783,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+43784,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_175__DOT__i),32);
    bufp->fullBit(oldp+43785,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+43786,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_176__DOT__i),32);
    bufp->fullBit(oldp+43787,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+43788,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_177__DOT__i),32);
    bufp->fullBit(oldp+43789,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U])));
    bufp->fullIData(oldp+43790,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_178__DOT__i),32);
    bufp->fullBit(oldp+43791,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 1U))));
    bufp->fullIData(oldp+43792,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_179__DOT__i),32);
    bufp->fullBit(oldp+43793,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U])));
    bufp->fullIData(oldp+43794,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_18__DOT__i),32);
    bufp->fullBit(oldp+43795,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 2U))));
    bufp->fullIData(oldp+43796,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_180__DOT__i),32);
    bufp->fullBit(oldp+43797,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 3U))));
    bufp->fullIData(oldp+43798,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_181__DOT__i),32);
    bufp->fullBit(oldp+43799,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 4U))));
    bufp->fullIData(oldp+43800,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_182__DOT__i),32);
    bufp->fullBit(oldp+43801,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 5U))));
    bufp->fullIData(oldp+43802,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_183__DOT__i),32);
    bufp->fullBit(oldp+43803,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 6U))));
    bufp->fullIData(oldp+43804,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_184__DOT__i),32);
    bufp->fullBit(oldp+43805,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 7U))));
    bufp->fullIData(oldp+43806,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_185__DOT__i),32);
    bufp->fullBit(oldp+43807,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 8U))));
    bufp->fullIData(oldp+43808,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_186__DOT__i),32);
    bufp->fullBit(oldp+43809,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 9U))));
    bufp->fullIData(oldp+43810,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_187__DOT__i),32);
    bufp->fullBit(oldp+43811,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+43812,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_188__DOT__i),32);
    bufp->fullBit(oldp+43813,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+43814,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_189__DOT__i),32);
    bufp->fullBit(oldp+43815,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 1U))));
    bufp->fullIData(oldp+43816,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_19__DOT__i),32);
    bufp->fullBit(oldp+43817,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+43818,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_190__DOT__i),32);
    bufp->fullBit(oldp+43819,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+43820,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_191__DOT__i),32);
    bufp->fullBit(oldp+43821,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+43822,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_192__DOT__i),32);
    bufp->fullBit(oldp+43823,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+43824,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_193__DOT__i),32);
    bufp->fullBit(oldp+43825,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+43826,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_194__DOT__i),32);
    bufp->fullBit(oldp+43827,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+43828,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_195__DOT__i),32);
    bufp->fullBit(oldp+43829,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+43830,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_196__DOT__i),32);
    bufp->fullBit(oldp+43831,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+43832,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_197__DOT__i),32);
    bufp->fullBit(oldp+43833,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+43834,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_198__DOT__i),32);
    bufp->fullBit(oldp+43835,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+43836,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_199__DOT__i),32);
    bufp->fullBit(oldp+43837,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+43838,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_2__DOT__i),32);
    bufp->fullBit(oldp+43839,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 2U))));
    bufp->fullIData(oldp+43840,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_20__DOT__i),32);
    bufp->fullBit(oldp+43841,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+43842,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_200__DOT__i),32);
    bufp->fullBit(oldp+43843,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+43844,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_201__DOT__i),32);
    bufp->fullBit(oldp+43845,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+43846,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_202__DOT__i),32);
    bufp->fullBit(oldp+43847,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+43848,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_203__DOT__i),32);
    bufp->fullBit(oldp+43849,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+43850,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_204__DOT__i),32);
    bufp->fullBit(oldp+43851,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+43852,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_205__DOT__i),32);
    bufp->fullBit(oldp+43853,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+43854,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_206__DOT__i),32);
    bufp->fullBit(oldp+43855,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+43856,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_207__DOT__i),32);
    bufp->fullBit(oldp+43857,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+43858,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_208__DOT__i),32);
    bufp->fullBit(oldp+43859,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+43860,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_209__DOT__i),32);
    bufp->fullBit(oldp+43861,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 3U))));
    bufp->fullIData(oldp+43862,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_21__DOT__i),32);
    bufp->fullBit(oldp+43863,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U])));
    bufp->fullIData(oldp+43864,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_210__DOT__i),32);
    bufp->fullBit(oldp+43865,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 1U))));
    bufp->fullIData(oldp+43866,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_211__DOT__i),32);
    bufp->fullBit(oldp+43867,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 2U))));
    bufp->fullIData(oldp+43868,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_212__DOT__i),32);
    bufp->fullBit(oldp+43869,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 3U))));
    bufp->fullIData(oldp+43870,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_213__DOT__i),32);
    bufp->fullBit(oldp+43871,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 4U))));
    bufp->fullIData(oldp+43872,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_214__DOT__i),32);
    bufp->fullBit(oldp+43873,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 5U))));
    bufp->fullIData(oldp+43874,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_215__DOT__i),32);
    bufp->fullBit(oldp+43875,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 6U))));
    bufp->fullIData(oldp+43876,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_216__DOT__i),32);
    bufp->fullBit(oldp+43877,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 7U))));
    bufp->fullIData(oldp+43878,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_217__DOT__i),32);
    bufp->fullBit(oldp+43879,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 8U))));
    bufp->fullIData(oldp+43880,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_218__DOT__i),32);
    bufp->fullBit(oldp+43881,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 9U))));
    bufp->fullIData(oldp+43882,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_219__DOT__i),32);
    bufp->fullBit(oldp+43883,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 4U))));
    bufp->fullIData(oldp+43884,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_22__DOT__i),32);
    bufp->fullBit(oldp+43885,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+43886,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_220__DOT__i),32);
    bufp->fullBit(oldp+43887,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+43888,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_221__DOT__i),32);
    bufp->fullBit(oldp+43889,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+43890,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_222__DOT__i),32);
    bufp->fullBit(oldp+43891,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+43892,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_223__DOT__i),32);
    bufp->fullBit(oldp+43893,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+43894,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_224__DOT__i),32);
    bufp->fullBit(oldp+43895,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+43896,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_225__DOT__i),32);
    bufp->fullBit(oldp+43897,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+43898,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_226__DOT__i),32);
    bufp->fullBit(oldp+43899,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+43900,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_227__DOT__i),32);
    bufp->fullBit(oldp+43901,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+43902,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_228__DOT__i),32);
    bufp->fullBit(oldp+43903,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+43904,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_229__DOT__i),32);
    bufp->fullBit(oldp+43905,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 5U))));
    bufp->fullIData(oldp+43906,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_23__DOT__i),32);
    bufp->fullBit(oldp+43907,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+43908,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_230__DOT__i),32);
    bufp->fullBit(oldp+43909,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+43910,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_231__DOT__i),32);
    bufp->fullBit(oldp+43911,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+43912,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_232__DOT__i),32);
    bufp->fullBit(oldp+43913,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+43914,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_233__DOT__i),32);
    bufp->fullBit(oldp+43915,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+43916,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_234__DOT__i),32);
    bufp->fullBit(oldp+43917,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+43918,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_235__DOT__i),32);
    bufp->fullBit(oldp+43919,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+43920,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_236__DOT__i),32);
    bufp->fullBit(oldp+43921,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+43922,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_237__DOT__i),32);
    bufp->fullBit(oldp+43923,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+43924,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_238__DOT__i),32);
    bufp->fullBit(oldp+43925,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+43926,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_239__DOT__i),32);
    bufp->fullBit(oldp+43927,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 6U))));
    bufp->fullIData(oldp+43928,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_24__DOT__i),32);
    bufp->fullBit(oldp+43929,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+43930,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_240__DOT__i),32);
    bufp->fullBit(oldp+43931,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+43932,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_241__DOT__i),32);
    bufp->fullBit(oldp+43933,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U])));
    bufp->fullIData(oldp+43934,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_242__DOT__i),32);
    bufp->fullBit(oldp+43935,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 1U))));
    bufp->fullIData(oldp+43936,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_243__DOT__i),32);
    bufp->fullBit(oldp+43937,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 2U))));
    bufp->fullIData(oldp+43938,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_244__DOT__i),32);
    bufp->fullBit(oldp+43939,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 3U))));
    bufp->fullIData(oldp+43940,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_245__DOT__i),32);
    bufp->fullBit(oldp+43941,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 4U))));
    bufp->fullIData(oldp+43942,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_246__DOT__i),32);
    bufp->fullBit(oldp+43943,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 5U))));
    bufp->fullIData(oldp+43944,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_247__DOT__i),32);
    bufp->fullBit(oldp+43945,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 6U))));
    bufp->fullIData(oldp+43946,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_248__DOT__i),32);
    bufp->fullBit(oldp+43947,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 7U))));
    bufp->fullIData(oldp+43948,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_249__DOT__i),32);
    bufp->fullBit(oldp+43949,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 7U))));
    bufp->fullIData(oldp+43950,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_25__DOT__i),32);
    bufp->fullBit(oldp+43951,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 8U))));
    bufp->fullIData(oldp+43952,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_250__DOT__i),32);
    bufp->fullBit(oldp+43953,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 9U))));
    bufp->fullIData(oldp+43954,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_251__DOT__i),32);
    bufp->fullBit(oldp+43955,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+43956,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_252__DOT__i),32);
    bufp->fullBit(oldp+43957,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+43958,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_253__DOT__i),32);
    bufp->fullBit(oldp+43959,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+43960,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_254__DOT__i),32);
    bufp->fullBit(oldp+43961,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+43962,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_255__DOT__i),32);
    bufp->fullBit(oldp+43963,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+43964,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_256__DOT__i),32);
    bufp->fullBit(oldp+43965,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 8U))));
    bufp->fullIData(oldp+43966,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_26__DOT__i),32);
    bufp->fullBit(oldp+43967,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 9U))));
    bufp->fullIData(oldp+43968,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_27__DOT__i),32);
    bufp->fullBit(oldp+43969,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+43970,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_28__DOT__i),32);
    bufp->fullBit(oldp+43971,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+43972,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_29__DOT__i),32);
    bufp->fullBit(oldp+43973,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+43974,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_3__DOT__i),32);
    bufp->fullBit(oldp+43975,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+43976,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_30__DOT__i),32);
    bufp->fullBit(oldp+43977,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+43978,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_31__DOT__i),32);
    bufp->fullBit(oldp+43979,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+43980,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_32__DOT__i),32);
    bufp->fullBit(oldp+43981,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+43982,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_33__DOT__i),32);
    bufp->fullBit(oldp+43983,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+43984,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_34__DOT__i),32);
    bufp->fullBit(oldp+43985,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+43986,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_35__DOT__i),32);
    bufp->fullBit(oldp+43987,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+43988,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_36__DOT__i),32);
    bufp->fullBit(oldp+43989,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+43990,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_37__DOT__i),32);
    bufp->fullBit(oldp+43991,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+43992,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_38__DOT__i),32);
    bufp->fullBit(oldp+43993,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+43994,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_39__DOT__i),32);
    bufp->fullBit(oldp+43995,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+43996,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_4__DOT__i),32);
    bufp->fullBit(oldp+43997,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+43998,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_40__DOT__i),32);
    bufp->fullBit(oldp+43999,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44000,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_41__DOT__i),32);
    bufp->fullBit(oldp+44001,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44002,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_42__DOT__i),32);
    bufp->fullBit(oldp+44003,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44004,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_43__DOT__i),32);
    bufp->fullBit(oldp+44005,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44006,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_44__DOT__i),32);
    bufp->fullBit(oldp+44007,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44008,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_45__DOT__i),32);
    bufp->fullBit(oldp+44009,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44010,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_46__DOT__i),32);
    bufp->fullBit(oldp+44011,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44012,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_47__DOT__i),32);
    bufp->fullBit(oldp+44013,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44014,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_48__DOT__i),32);
    bufp->fullBit(oldp+44015,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44016,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_49__DOT__i),32);
    bufp->fullBit(oldp+44017,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44018,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_5__DOT__i),32);
    bufp->fullBit(oldp+44019,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U])));
    bufp->fullIData(oldp+44020,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_50__DOT__i),32);
    bufp->fullBit(oldp+44021,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44022,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_51__DOT__i),32);
    bufp->fullBit(oldp+44023,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44024,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_52__DOT__i),32);
    bufp->fullBit(oldp+44025,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44026,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_53__DOT__i),32);
    bufp->fullBit(oldp+44027,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44028,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_54__DOT__i),32);
    bufp->fullBit(oldp+44029,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44030,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_55__DOT__i),32);
    bufp->fullBit(oldp+44031,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44032,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_56__DOT__i),32);
    bufp->fullBit(oldp+44033,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44034,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_57__DOT__i),32);
    bufp->fullBit(oldp+44035,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44036,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_58__DOT__i),32);
    bufp->fullBit(oldp+44037,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44038,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_59__DOT__i),32);
    bufp->fullBit(oldp+44039,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44040,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_6__DOT__i),32);
    bufp->fullBit(oldp+44041,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44042,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_60__DOT__i),32);
    bufp->fullBit(oldp+44043,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44044,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_61__DOT__i),32);
    bufp->fullBit(oldp+44045,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44046,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_62__DOT__i),32);
    bufp->fullBit(oldp+44047,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44048,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_63__DOT__i),32);
    bufp->fullBit(oldp+44049,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44050,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_64__DOT__i),32);
    bufp->fullBit(oldp+44051,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44052,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_65__DOT__i),32);
    bufp->fullBit(oldp+44053,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44054,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_66__DOT__i),32);
    bufp->fullBit(oldp+44055,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44056,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_67__DOT__i),32);
    bufp->fullBit(oldp+44057,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44058,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_68__DOT__i),32);
    bufp->fullBit(oldp+44059,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44060,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_69__DOT__i),32);
    bufp->fullBit(oldp+44061,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44062,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_7__DOT__i),32);
    bufp->fullBit(oldp+44063,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44064,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_70__DOT__i),32);
    bufp->fullBit(oldp+44065,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44066,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_71__DOT__i),32);
    bufp->fullBit(oldp+44067,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44068,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_72__DOT__i),32);
    bufp->fullBit(oldp+44069,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44070,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_73__DOT__i),32);
    bufp->fullBit(oldp+44071,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44072,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_74__DOT__i),32);
    bufp->fullBit(oldp+44073,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44074,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_75__DOT__i),32);
    bufp->fullBit(oldp+44075,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44076,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_76__DOT__i),32);
    bufp->fullBit(oldp+44077,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44078,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_77__DOT__i),32);
    bufp->fullBit(oldp+44079,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44080,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_78__DOT__i),32);
    bufp->fullBit(oldp+44081,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44082,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_79__DOT__i),32);
    bufp->fullBit(oldp+44083,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44084,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_8__DOT__i),32);
    bufp->fullBit(oldp+44085,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44086,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_80__DOT__i),32);
    bufp->fullBit(oldp+44087,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44088,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_81__DOT__i),32);
    bufp->fullBit(oldp+44089,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U])));
    bufp->fullIData(oldp+44090,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_82__DOT__i),32);
    bufp->fullBit(oldp+44091,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44092,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_83__DOT__i),32);
    bufp->fullBit(oldp+44093,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44094,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_84__DOT__i),32);
    bufp->fullBit(oldp+44095,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44096,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_85__DOT__i),32);
    bufp->fullBit(oldp+44097,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44098,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_86__DOT__i),32);
    bufp->fullBit(oldp+44099,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44100,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_87__DOT__i),32);
    bufp->fullBit(oldp+44101,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44102,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_88__DOT__i),32);
    bufp->fullBit(oldp+44103,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44104,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_89__DOT__i),32);
    bufp->fullBit(oldp+44105,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44106,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_9__DOT__i),32);
    bufp->fullBit(oldp+44107,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44108,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_90__DOT__i),32);
    bufp->fullBit(oldp+44109,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44110,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_91__DOT__i),32);
    bufp->fullBit(oldp+44111,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44112,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_92__DOT__i),32);
    bufp->fullBit(oldp+44113,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44114,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_93__DOT__i),32);
    bufp->fullBit(oldp+44115,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44116,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_94__DOT__i),32);
    bufp->fullBit(oldp+44117,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44118,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_95__DOT__i),32);
    bufp->fullBit(oldp+44119,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44120,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_96__DOT__i),32);
    bufp->fullBit(oldp+44121,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44122,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_97__DOT__i),32);
    bufp->fullBit(oldp+44123,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44124,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_98__DOT__i),32);
    bufp->fullBit(oldp+44125,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44126,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_99__DOT__i),32);
    bufp->fullBit(oldp+44127,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])));
    bufp->fullIData(oldp+44128,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored),32);
    bufp->fullIData(oldp+44129,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__i),32);
    bufp->fullBit(oldp+44130,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44131,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored),32);
    bufp->fullIData(oldp+44132,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__i),32);
    bufp->fullBit(oldp+44133,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44134,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored),32);
    bufp->fullIData(oldp+44135,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__i),32);
    bufp->fullBit(oldp+44136,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44137,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored),32);
    bufp->fullIData(oldp+44138,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__i),32);
    bufp->fullBit(oldp+44139,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44140,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored),32);
    bufp->fullIData(oldp+44141,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__i),32);
    bufp->fullBit(oldp+44142,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44143,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored),32);
    bufp->fullIData(oldp+44144,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__i),32);
    bufp->fullBit(oldp+44145,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44146,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored),32);
    bufp->fullIData(oldp+44147,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__i),32);
    bufp->fullBit(oldp+44148,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44149,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored),32);
    bufp->fullIData(oldp+44150,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__i),32);
    bufp->fullBit(oldp+44151,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44152,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored),32);
    bufp->fullIData(oldp+44153,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__i),32);
    bufp->fullBit(oldp+44154,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44155,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored),32);
    bufp->fullIData(oldp+44156,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__i),32);
    bufp->fullBit(oldp+44157,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44158,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored),32);
    bufp->fullIData(oldp+44159,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__i),32);
    bufp->fullBit(oldp+44160,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44161,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored),32);
    bufp->fullIData(oldp+44162,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__i),32);
    bufp->fullBit(oldp+44163,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44164,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored),32);
    bufp->fullIData(oldp+44165,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__i),32);
    bufp->fullBit(oldp+44166,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44167,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored),32);
    bufp->fullIData(oldp+44168,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__i),32);
    bufp->fullBit(oldp+44169,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44170,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored),32);
    bufp->fullIData(oldp+44171,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__i),32);
    bufp->fullBit(oldp+44172,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44173,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored),32);
    bufp->fullIData(oldp+44174,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__i),32);
    bufp->fullBit(oldp+44175,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44176,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored),32);
    bufp->fullIData(oldp+44177,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__i),32);
    bufp->fullBit(oldp+44178,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44179,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored),32);
    bufp->fullIData(oldp+44180,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__i),32);
    bufp->fullBit(oldp+44181,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44182,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored),32);
    bufp->fullIData(oldp+44183,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__i),32);
    bufp->fullBit(oldp+44184,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44185,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored),32);
    bufp->fullIData(oldp+44186,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__i),32);
    bufp->fullBit(oldp+44187,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44188,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored),32);
    bufp->fullIData(oldp+44189,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__i),32);
    bufp->fullBit(oldp+44190,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44191,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored),32);
    bufp->fullIData(oldp+44192,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__i),32);
    bufp->fullBit(oldp+44193,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44194,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored),32);
    bufp->fullIData(oldp+44195,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__i),32);
    bufp->fullBit(oldp+44196,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44197,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored),32);
    bufp->fullIData(oldp+44198,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__i),32);
    bufp->fullBit(oldp+44199,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44200,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored),32);
    bufp->fullIData(oldp+44201,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__i),32);
    bufp->fullBit(oldp+44202,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44203,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored),32);
    bufp->fullIData(oldp+44204,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__i),32);
    bufp->fullBit(oldp+44205,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44206,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored),32);
    bufp->fullIData(oldp+44207,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__i),32);
    bufp->fullBit(oldp+44208,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44209,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored),32);
    bufp->fullIData(oldp+44210,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__i),32);
    bufp->fullBit(oldp+44211,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44212,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored),32);
    bufp->fullIData(oldp+44213,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__i),32);
    bufp->fullBit(oldp+44214,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44215,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored),32);
    bufp->fullIData(oldp+44216,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__i),32);
    bufp->fullBit(oldp+44217,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44218,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored),32);
    bufp->fullIData(oldp+44219,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__i),32);
    bufp->fullBit(oldp+44220,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44221,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored),32);
    bufp->fullIData(oldp+44222,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__i),32);
    bufp->fullBit(oldp+44223,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44224,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored),32);
    bufp->fullIData(oldp+44225,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__i),32);
    bufp->fullBit(oldp+44226,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])));
    bufp->fullIData(oldp+44227,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored),32);
    bufp->fullIData(oldp+44228,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__i),32);
    bufp->fullBit(oldp+44229,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44230,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored),32);
    bufp->fullIData(oldp+44231,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__i),32);
    bufp->fullBit(oldp+44232,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44233,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored),32);
    bufp->fullIData(oldp+44234,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__i),32);
    bufp->fullBit(oldp+44235,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44236,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored),32);
    bufp->fullIData(oldp+44237,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__i),32);
    bufp->fullBit(oldp+44238,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44239,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored),32);
    bufp->fullIData(oldp+44240,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__i),32);
    bufp->fullBit(oldp+44241,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44242,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored),32);
    bufp->fullIData(oldp+44243,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__i),32);
    bufp->fullBit(oldp+44244,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44245,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored),32);
    bufp->fullIData(oldp+44246,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__i),32);
    bufp->fullBit(oldp+44247,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44248,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored),32);
    bufp->fullIData(oldp+44249,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__i),32);
    bufp->fullBit(oldp+44250,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44251,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored),32);
    bufp->fullIData(oldp+44252,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__i),32);
    bufp->fullBit(oldp+44253,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44254,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored),32);
    bufp->fullIData(oldp+44255,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__i),32);
    bufp->fullBit(oldp+44256,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44257,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored),32);
    bufp->fullIData(oldp+44258,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__i),32);
    bufp->fullBit(oldp+44259,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44260,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored),32);
    bufp->fullIData(oldp+44261,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__i),32);
    bufp->fullBit(oldp+44262,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44263,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored),32);
    bufp->fullIData(oldp+44264,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__i),32);
    bufp->fullBit(oldp+44265,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44266,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored),32);
    bufp->fullIData(oldp+44267,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__i),32);
    bufp->fullBit(oldp+44268,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44269,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored),32);
    bufp->fullIData(oldp+44270,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__i),32);
    bufp->fullBit(oldp+44271,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44272,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored),32);
    bufp->fullIData(oldp+44273,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__i),32);
    bufp->fullBit(oldp+44274,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44275,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored),32);
    bufp->fullIData(oldp+44276,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__i),32);
    bufp->fullBit(oldp+44277,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44278,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored),32);
    bufp->fullIData(oldp+44279,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__i),32);
    bufp->fullBit(oldp+44280,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44281,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored),32);
    bufp->fullIData(oldp+44282,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__i),32);
    bufp->fullBit(oldp+44283,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44284,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored),32);
    bufp->fullIData(oldp+44285,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__i),32);
    bufp->fullBit(oldp+44286,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44287,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored),32);
    bufp->fullIData(oldp+44288,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__i),32);
    bufp->fullBit(oldp+44289,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44290,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored),32);
    bufp->fullIData(oldp+44291,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__i),32);
    bufp->fullBit(oldp+44292,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44293,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored),32);
    bufp->fullIData(oldp+44294,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__i),32);
    bufp->fullBit(oldp+44295,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44296,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored),32);
    bufp->fullIData(oldp+44297,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__i),32);
    bufp->fullBit(oldp+44298,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44299,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored),32);
    bufp->fullIData(oldp+44300,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__i),32);
    bufp->fullBit(oldp+44301,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44302,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored),32);
    bufp->fullIData(oldp+44303,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__i),32);
    bufp->fullBit(oldp+44304,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44305,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored),32);
    bufp->fullIData(oldp+44306,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__i),32);
    bufp->fullBit(oldp+44307,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44308,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored),32);
    bufp->fullIData(oldp+44309,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__i),32);
    bufp->fullBit(oldp+44310,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44311,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored),32);
    bufp->fullIData(oldp+44312,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__i),32);
    bufp->fullBit(oldp+44313,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44314,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored),32);
    bufp->fullIData(oldp+44315,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__i),32);
    bufp->fullBit(oldp+44316,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44317,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored),32);
    bufp->fullIData(oldp+44318,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__i),32);
    bufp->fullBit(oldp+44319,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44320,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored),32);
    bufp->fullIData(oldp+44321,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__i),32);
    bufp->fullBit(oldp+44322,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44323,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored),32);
    bufp->fullIData(oldp+44324,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__i),32);
    bufp->fullBit(oldp+44325,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44326,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored),32);
    bufp->fullIData(oldp+44327,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__i),32);
    bufp->fullBit(oldp+44328,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44329,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored),32);
    bufp->fullIData(oldp+44330,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__i),32);
    bufp->fullBit(oldp+44331,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44332,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored),32);
    bufp->fullIData(oldp+44333,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__i),32);
    bufp->fullBit(oldp+44334,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])));
    bufp->fullIData(oldp+44335,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored),32);
    bufp->fullIData(oldp+44336,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__i),32);
    bufp->fullBit(oldp+44337,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44338,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored),32);
    bufp->fullIData(oldp+44339,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__i),32);
    bufp->fullBit(oldp+44340,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44341,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored),32);
    bufp->fullIData(oldp+44342,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__i),32);
    bufp->fullBit(oldp+44343,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44344,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored),32);
    bufp->fullIData(oldp+44345,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__i),32);
    bufp->fullBit(oldp+44346,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44347,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored),32);
    bufp->fullIData(oldp+44348,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__i),32);
    bufp->fullBit(oldp+44349,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44350,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored),32);
    bufp->fullIData(oldp+44351,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__i),32);
    bufp->fullBit(oldp+44352,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44353,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored),32);
    bufp->fullIData(oldp+44354,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__i),32);
    bufp->fullBit(oldp+44355,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44356,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored),32);
    bufp->fullIData(oldp+44357,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__i),32);
    bufp->fullBit(oldp+44358,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44359,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored),32);
    bufp->fullIData(oldp+44360,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__i),32);
    bufp->fullBit(oldp+44361,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44362,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored),32);
    bufp->fullIData(oldp+44363,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__i),32);
    bufp->fullBit(oldp+44364,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44365,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored),32);
    bufp->fullIData(oldp+44366,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__i),32);
    bufp->fullBit(oldp+44367,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44368,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored),32);
    bufp->fullIData(oldp+44369,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__i),32);
    bufp->fullBit(oldp+44370,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44371,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored),32);
    bufp->fullIData(oldp+44372,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__i),32);
    bufp->fullBit(oldp+44373,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44374,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored),32);
    bufp->fullIData(oldp+44375,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__i),32);
    bufp->fullBit(oldp+44376,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44377,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored),32);
    bufp->fullIData(oldp+44378,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__i),32);
    bufp->fullBit(oldp+44379,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44380,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored),32);
    bufp->fullIData(oldp+44381,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__i),32);
    bufp->fullBit(oldp+44382,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44383,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored),32);
    bufp->fullIData(oldp+44384,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__i),32);
    bufp->fullBit(oldp+44385,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44386,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored),32);
    bufp->fullIData(oldp+44387,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__i),32);
    bufp->fullBit(oldp+44388,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44389,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored),32);
    bufp->fullIData(oldp+44390,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__i),32);
    bufp->fullBit(oldp+44391,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44392,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored),32);
    bufp->fullIData(oldp+44393,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__i),32);
    bufp->fullBit(oldp+44394,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44395,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored),32);
    bufp->fullIData(oldp+44396,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__i),32);
    bufp->fullBit(oldp+44397,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44398,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored),32);
    bufp->fullIData(oldp+44399,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__i),32);
    bufp->fullBit(oldp+44400,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44401,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored),32);
    bufp->fullIData(oldp+44402,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__i),32);
    bufp->fullBit(oldp+44403,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44404,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored),32);
    bufp->fullIData(oldp+44405,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__i),32);
    bufp->fullBit(oldp+44406,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44407,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored),32);
    bufp->fullIData(oldp+44408,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__i),32);
    bufp->fullBit(oldp+44409,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44410,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored),32);
    bufp->fullIData(oldp+44411,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__i),32);
    bufp->fullBit(oldp+44412,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44413,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored),32);
    bufp->fullIData(oldp+44414,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__i),32);
    bufp->fullBit(oldp+44415,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44416,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored),32);
    bufp->fullIData(oldp+44417,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__i),32);
    bufp->fullBit(oldp+44418,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44419,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored),32);
    bufp->fullIData(oldp+44420,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__i),32);
    bufp->fullBit(oldp+44421,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44422,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored),32);
    bufp->fullIData(oldp+44423,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__i),32);
    bufp->fullBit(oldp+44424,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44425,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored),32);
    bufp->fullIData(oldp+44426,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__i),32);
    bufp->fullBit(oldp+44427,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44428,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored),32);
    bufp->fullIData(oldp+44429,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__i),32);
    bufp->fullBit(oldp+44430,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44431,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored),32);
    bufp->fullIData(oldp+44432,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__i),32);
    bufp->fullBit(oldp+44433,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44434,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored),32);
    bufp->fullIData(oldp+44435,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__i),32);
    bufp->fullBit(oldp+44436,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44437,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored),32);
    bufp->fullIData(oldp+44438,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__i),32);
    bufp->fullBit(oldp+44439,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])));
    bufp->fullIData(oldp+44440,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored),32);
    bufp->fullIData(oldp+44441,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__i),32);
    bufp->fullBit(oldp+44442,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44443,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored),32);
    bufp->fullIData(oldp+44444,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__i),32);
    bufp->fullBit(oldp+44445,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44446,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored),32);
    bufp->fullIData(oldp+44447,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__i),32);
    bufp->fullBit(oldp+44448,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44449,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored),32);
    bufp->fullIData(oldp+44450,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__i),32);
    bufp->fullBit(oldp+44451,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44452,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored),32);
    bufp->fullIData(oldp+44453,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__i),32);
    bufp->fullBit(oldp+44454,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44455,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored),32);
    bufp->fullIData(oldp+44456,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__i),32);
    bufp->fullBit(oldp+44457,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44458,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored),32);
    bufp->fullIData(oldp+44459,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__i),32);
    bufp->fullBit(oldp+44460,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44461,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored),32);
    bufp->fullIData(oldp+44462,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__i),32);
    bufp->fullBit(oldp+44463,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44464,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored),32);
    bufp->fullIData(oldp+44465,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__i),32);
    bufp->fullBit(oldp+44466,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44467,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored),32);
    bufp->fullIData(oldp+44468,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__i),32);
    bufp->fullBit(oldp+44469,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44470,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored),32);
    bufp->fullIData(oldp+44471,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__i),32);
    bufp->fullBit(oldp+44472,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44473,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored),32);
    bufp->fullIData(oldp+44474,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__i),32);
    bufp->fullBit(oldp+44475,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44476,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored),32);
    bufp->fullIData(oldp+44477,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__i),32);
    bufp->fullBit(oldp+44478,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44479,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored),32);
    bufp->fullIData(oldp+44480,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__i),32);
    bufp->fullBit(oldp+44481,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44482,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored),32);
    bufp->fullIData(oldp+44483,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__i),32);
    bufp->fullBit(oldp+44484,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44485,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored),32);
    bufp->fullIData(oldp+44486,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__i),32);
    bufp->fullBit(oldp+44487,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44488,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored),32);
    bufp->fullIData(oldp+44489,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__i),32);
    bufp->fullBit(oldp+44490,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44491,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored),32);
    bufp->fullIData(oldp+44492,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__i),32);
    bufp->fullBit(oldp+44493,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44494,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored),32);
    bufp->fullIData(oldp+44495,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__i),32);
    bufp->fullBit(oldp+44496,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44497,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored),32);
    bufp->fullIData(oldp+44498,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__i),32);
    bufp->fullBit(oldp+44499,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44500,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored),32);
    bufp->fullIData(oldp+44501,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__i),32);
    bufp->fullBit(oldp+44502,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44503,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored),32);
    bufp->fullIData(oldp+44504,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__i),32);
    bufp->fullBit(oldp+44505,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44506,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored),32);
    bufp->fullIData(oldp+44507,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__i),32);
    bufp->fullBit(oldp+44508,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44509,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored),32);
    bufp->fullIData(oldp+44510,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__i),32);
    bufp->fullBit(oldp+44511,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44512,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored),32);
    bufp->fullIData(oldp+44513,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__i),32);
    bufp->fullBit(oldp+44514,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44515,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored),32);
    bufp->fullIData(oldp+44516,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__i),32);
    bufp->fullBit(oldp+44517,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44518,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored),32);
    bufp->fullIData(oldp+44519,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__i),32);
    bufp->fullBit(oldp+44520,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44521,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored),32);
    bufp->fullIData(oldp+44522,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__i),32);
    bufp->fullBit(oldp+44523,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44524,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored),32);
    bufp->fullIData(oldp+44525,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__i),32);
    bufp->fullBit(oldp+44526,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44527,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored),32);
    bufp->fullIData(oldp+44528,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__i),32);
    bufp->fullBit(oldp+44529,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44530,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored),32);
    bufp->fullIData(oldp+44531,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__i),32);
    bufp->fullBit(oldp+44532,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44533,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored),32);
    bufp->fullIData(oldp+44534,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__i),32);
    bufp->fullBit(oldp+44535,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44536,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored),32);
    bufp->fullIData(oldp+44537,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__i),32);
    bufp->fullBit(oldp+44538,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44539,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored),32);
    bufp->fullIData(oldp+44540,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__i),32);
    bufp->fullBit(oldp+44541,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44542,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored),32);
    bufp->fullIData(oldp+44543,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__i),32);
    bufp->fullBit(oldp+44544,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44545,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored),32);
    bufp->fullIData(oldp+44546,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__i),32);
    bufp->fullBit(oldp+44547,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])));
    bufp->fullIData(oldp+44548,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored),32);
    bufp->fullIData(oldp+44549,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__i),32);
    bufp->fullBit(oldp+44550,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44551,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored),32);
    bufp->fullIData(oldp+44552,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__i),32);
    bufp->fullBit(oldp+44553,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44554,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored),32);
    bufp->fullIData(oldp+44555,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__i),32);
    bufp->fullBit(oldp+44556,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44557,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored),32);
    bufp->fullIData(oldp+44558,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__i),32);
    bufp->fullBit(oldp+44559,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44560,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored),32);
    bufp->fullIData(oldp+44561,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__i),32);
    bufp->fullBit(oldp+44562,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44563,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored),32);
    bufp->fullIData(oldp+44564,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__i),32);
    bufp->fullBit(oldp+44565,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44566,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored),32);
    bufp->fullIData(oldp+44567,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__i),32);
    bufp->fullBit(oldp+44568,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44569,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored),32);
    bufp->fullIData(oldp+44570,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__i),32);
    bufp->fullBit(oldp+44571,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44572,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored),32);
    bufp->fullIData(oldp+44573,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__i),32);
    bufp->fullBit(oldp+44574,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44575,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored),32);
    bufp->fullIData(oldp+44576,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__i),32);
    bufp->fullBit(oldp+44577,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44578,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored),32);
    bufp->fullIData(oldp+44579,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__i),32);
    bufp->fullBit(oldp+44580,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44581,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored),32);
    bufp->fullIData(oldp+44582,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__i),32);
    bufp->fullBit(oldp+44583,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44584,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored),32);
    bufp->fullIData(oldp+44585,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__i),32);
    bufp->fullBit(oldp+44586,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44587,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored),32);
    bufp->fullIData(oldp+44588,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__i),32);
    bufp->fullBit(oldp+44589,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44590,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored),32);
    bufp->fullIData(oldp+44591,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__i),32);
    bufp->fullBit(oldp+44592,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44593,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored),32);
    bufp->fullIData(oldp+44594,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__i),32);
    bufp->fullBit(oldp+44595,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44596,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored),32);
    bufp->fullIData(oldp+44597,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__i),32);
    bufp->fullBit(oldp+44598,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44599,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored),32);
    bufp->fullIData(oldp+44600,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__i),32);
    bufp->fullBit(oldp+44601,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44602,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored),32);
    bufp->fullIData(oldp+44603,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__i),32);
    bufp->fullBit(oldp+44604,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44605,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored),32);
    bufp->fullIData(oldp+44606,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__i),32);
    bufp->fullBit(oldp+44607,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44608,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored),32);
    bufp->fullIData(oldp+44609,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__i),32);
    bufp->fullBit(oldp+44610,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44611,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored),32);
    bufp->fullIData(oldp+44612,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__i),32);
    bufp->fullBit(oldp+44613,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44614,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored),32);
    bufp->fullIData(oldp+44615,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__i),32);
    bufp->fullBit(oldp+44616,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44617,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored),32);
    bufp->fullIData(oldp+44618,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__i),32);
    bufp->fullBit(oldp+44619,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44620,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored),32);
    bufp->fullIData(oldp+44621,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__i),32);
    bufp->fullBit(oldp+44622,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44623,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored),32);
    bufp->fullIData(oldp+44624,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__i),32);
    bufp->fullBit(oldp+44625,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44626,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored),32);
    bufp->fullIData(oldp+44627,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__i),32);
    bufp->fullBit(oldp+44628,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44629,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored),32);
    bufp->fullIData(oldp+44630,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__i),32);
    bufp->fullBit(oldp+44631,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44632,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored),32);
    bufp->fullIData(oldp+44633,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__i),32);
    bufp->fullBit(oldp+44634,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44635,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored),32);
    bufp->fullIData(oldp+44636,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__i),32);
    bufp->fullBit(oldp+44637,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44638,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored),32);
    bufp->fullIData(oldp+44639,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__i),32);
    bufp->fullBit(oldp+44640,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44641,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored),32);
    bufp->fullIData(oldp+44642,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__i),32);
    bufp->fullBit(oldp+44643,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44644,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored),32);
    bufp->fullIData(oldp+44645,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__i),32);
    bufp->fullBit(oldp+44646,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44647,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored),32);
    bufp->fullIData(oldp+44648,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__i),32);
    bufp->fullBit(oldp+44649,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44650,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored),32);
    bufp->fullIData(oldp+44651,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__i),32);
    bufp->fullBit(oldp+44652,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])));
    bufp->fullIData(oldp+44653,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored),32);
    bufp->fullIData(oldp+44654,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__i),32);
    bufp->fullBit(oldp+44655,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44656,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored),32);
    bufp->fullIData(oldp+44657,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__i),32);
    bufp->fullBit(oldp+44658,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44659,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored),32);
    bufp->fullIData(oldp+44660,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__i),32);
    bufp->fullBit(oldp+44661,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44662,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored),32);
    bufp->fullIData(oldp+44663,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__i),32);
    bufp->fullBit(oldp+44664,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44665,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored),32);
    bufp->fullIData(oldp+44666,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__i),32);
    bufp->fullBit(oldp+44667,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44668,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored),32);
    bufp->fullIData(oldp+44669,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__i),32);
    bufp->fullBit(oldp+44670,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44671,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored),32);
    bufp->fullIData(oldp+44672,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__i),32);
    bufp->fullBit(oldp+44673,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44674,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored),32);
    bufp->fullIData(oldp+44675,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__i),32);
    bufp->fullBit(oldp+44676,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])));
    bufp->fullIData(oldp+44677,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored),32);
    bufp->fullIData(oldp+44678,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__i),32);
    bufp->fullBit(oldp+44679,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44680,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored),32);
    bufp->fullIData(oldp+44681,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__i),32);
    bufp->fullBit(oldp+44682,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44683,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored),32);
    bufp->fullIData(oldp+44684,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__i),32);
    bufp->fullBit(oldp+44685,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44686,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored),32);
    bufp->fullIData(oldp+44687,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__i),32);
    bufp->fullBit(oldp+44688,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44689,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored),32);
    bufp->fullIData(oldp+44690,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__i),32);
    bufp->fullBit(oldp+44691,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44692,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored),32);
    bufp->fullIData(oldp+44693,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__i),32);
    bufp->fullBit(oldp+44694,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44695,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored),32);
    bufp->fullIData(oldp+44696,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__i),32);
    bufp->fullBit(oldp+44697,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44698,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored),32);
    bufp->fullIData(oldp+44699,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__i),32);
    bufp->fullBit(oldp+44700,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44701,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored),32);
    bufp->fullIData(oldp+44702,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__i),32);
    bufp->fullBit(oldp+44703,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44704,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored),32);
    bufp->fullIData(oldp+44705,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__i),32);
    bufp->fullBit(oldp+44706,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44707,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored),32);
    bufp->fullIData(oldp+44708,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__i),32);
    bufp->fullBit(oldp+44709,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44710,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored),32);
    bufp->fullIData(oldp+44711,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__i),32);
    bufp->fullBit(oldp+44712,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44713,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored),32);
    bufp->fullIData(oldp+44714,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__i),32);
    bufp->fullBit(oldp+44715,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44716,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored),32);
    bufp->fullIData(oldp+44717,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__i),32);
    bufp->fullBit(oldp+44718,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44719,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored),32);
    bufp->fullIData(oldp+44720,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__i),32);
    bufp->fullBit(oldp+44721,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44722,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored),32);
    bufp->fullIData(oldp+44723,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__i),32);
    bufp->fullBit(oldp+44724,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44725,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored),32);
    bufp->fullIData(oldp+44726,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__i),32);
    bufp->fullBit(oldp+44727,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44728,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored),32);
    bufp->fullIData(oldp+44729,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__i),32);
    bufp->fullBit(oldp+44730,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44731,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored),32);
    bufp->fullIData(oldp+44732,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__i),32);
    bufp->fullBit(oldp+44733,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44734,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored),32);
    bufp->fullIData(oldp+44735,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__i),32);
    bufp->fullBit(oldp+44736,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44737,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored),32);
    bufp->fullIData(oldp+44738,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__i),32);
    bufp->fullBit(oldp+44739,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44740,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored),32);
    bufp->fullIData(oldp+44741,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__i),32);
    bufp->fullBit(oldp+44742,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44743,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored),32);
    bufp->fullIData(oldp+44744,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__i),32);
    bufp->fullBit(oldp+44745,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44746,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored),32);
    bufp->fullIData(oldp+44747,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__i),32);
    bufp->fullBit(oldp+44748,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44749,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored),32);
    bufp->fullIData(oldp+44750,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__i),32);
    bufp->fullBit(oldp+44751,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44752,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored),32);
    bufp->fullIData(oldp+44753,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__i),32);
    bufp->fullBit(oldp+44754,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44755,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored),32);
    bufp->fullIData(oldp+44756,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__i),32);
    bufp->fullBit(oldp+44757,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44758,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored),32);
    bufp->fullIData(oldp+44759,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__i),32);
    bufp->fullBit(oldp+44760,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44761,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored),32);
    bufp->fullIData(oldp+44762,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__i),32);
    bufp->fullBit(oldp+44763,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44764,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored),32);
    bufp->fullIData(oldp+44765,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__i),32);
    bufp->fullBit(oldp+44766,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44767,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored),32);
    bufp->fullIData(oldp+44768,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__i),32);
    bufp->fullBit(oldp+44769,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44770,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored),32);
    bufp->fullIData(oldp+44771,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__i),32);
    bufp->fullBit(oldp+44772,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44773,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored),32);
    bufp->fullIData(oldp+44774,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__i),32);
    bufp->fullBit(oldp+44775,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44776,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored),32);
    bufp->fullIData(oldp+44777,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__i),32);
    bufp->fullBit(oldp+44778,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44779,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored),32);
    bufp->fullIData(oldp+44780,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__i),32);
    bufp->fullBit(oldp+44781,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])));
    bufp->fullIData(oldp+44782,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored),32);
    bufp->fullIData(oldp+44783,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__i),32);
    bufp->fullBit(oldp+44784,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44785,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored),32);
    bufp->fullIData(oldp+44786,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__i),32);
    bufp->fullBit(oldp+44787,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44788,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored),32);
    bufp->fullIData(oldp+44789,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__i),32);
    bufp->fullBit(oldp+44790,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44791,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored),32);
    bufp->fullIData(oldp+44792,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__i),32);
    bufp->fullBit(oldp+44793,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 4U))));
    bufp->fullIData(oldp+44794,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored),32);
    bufp->fullIData(oldp+44795,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__i),32);
    bufp->fullBit(oldp+44796,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 5U))));
    bufp->fullIData(oldp+44797,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored),32);
    bufp->fullIData(oldp+44798,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__i),32);
    bufp->fullBit(oldp+44799,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44800,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored),32);
    bufp->fullIData(oldp+44801,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__i),32);
    bufp->fullBit(oldp+44802,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 6U))));
    bufp->fullIData(oldp+44803,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored),32);
    bufp->fullIData(oldp+44804,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__i),32);
    bufp->fullBit(oldp+44805,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44806,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored),32);
    bufp->fullIData(oldp+44807,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__i),32);
    bufp->fullBit(oldp+44808,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44809,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored),32);
    bufp->fullIData(oldp+44810,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__i),32);
    bufp->fullBit(oldp+44811,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44812,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored),32);
    bufp->fullIData(oldp+44813,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__i),32);
    bufp->fullBit(oldp+44814,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44815,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored),32);
    bufp->fullIData(oldp+44816,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__i),32);
    bufp->fullBit(oldp+44817,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44818,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored),32);
    bufp->fullIData(oldp+44819,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__i),32);
    bufp->fullBit(oldp+44820,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44821,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored),32);
    bufp->fullIData(oldp+44822,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__i),32);
    bufp->fullBit(oldp+44823,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44824,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored),32);
    bufp->fullIData(oldp+44825,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__i),32);
    bufp->fullBit(oldp+44826,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44827,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored),32);
    bufp->fullIData(oldp+44828,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__i),32);
    bufp->fullBit(oldp+44829,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44830,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored),32);
    bufp->fullIData(oldp+44831,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__i),32);
    bufp->fullBit(oldp+44832,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44833,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored),32);
    bufp->fullIData(oldp+44834,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__i),32);
    bufp->fullBit(oldp+44835,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44836,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored),32);
    bufp->fullIData(oldp+44837,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__i),32);
    bufp->fullBit(oldp+44838,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44839,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored),32);
    bufp->fullIData(oldp+44840,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__i),32);
    bufp->fullBit(oldp+44841,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44842,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored),32);
    bufp->fullIData(oldp+44843,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__i),32);
    bufp->fullBit(oldp+44844,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44845,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored),32);
    bufp->fullIData(oldp+44846,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__i),32);
    bufp->fullBit(oldp+44847,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44848,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored),32);
    bufp->fullIData(oldp+44849,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__i),32);
    bufp->fullBit(oldp+44850,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44851,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored),32);
    bufp->fullIData(oldp+44852,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__i),32);
    bufp->fullBit(oldp+44853,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44854,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored),32);
    bufp->fullIData(oldp+44855,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__i),32);
    bufp->fullBit(oldp+44856,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44857,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored),32);
    bufp->fullIData(oldp+44858,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__i),32);
    bufp->fullBit(oldp+44859,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44860,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored),32);
    bufp->fullIData(oldp+44861,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__i),32);
    bufp->fullBit(oldp+44862,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44863,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored),32);
    bufp->fullIData(oldp+44864,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__i),32);
    bufp->fullBit(oldp+44865,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44866,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored),32);
    bufp->fullIData(oldp+44867,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__i),32);
    bufp->fullBit(oldp+44868,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44869,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored),32);
    bufp->fullIData(oldp+44870,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__i),32);
    bufp->fullBit(oldp+44871,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44872,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored),32);
    bufp->fullIData(oldp+44873,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__i),32);
    bufp->fullBit(oldp+44874,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44875,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored),32);
    bufp->fullIData(oldp+44876,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__i),32);
    bufp->fullBit(oldp+44877,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44878,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored),32);
    bufp->fullIData(oldp+44879,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__i),32);
    bufp->fullBit(oldp+44880,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44881,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored),32);
    bufp->fullIData(oldp+44882,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__i),32);
    bufp->fullBit(oldp+44883,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                               >> 0x1fU)));
    bufp->fullIData(oldp+44884,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored),32);
    bufp->fullIData(oldp+44885,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__i),32);
    bufp->fullBit(oldp+44886,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])));
    bufp->fullIData(oldp+44887,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored),32);
    bufp->fullIData(oldp+44888,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__i),32);
    bufp->fullBit(oldp+44889,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 1U))));
    bufp->fullIData(oldp+44890,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored),32);
    bufp->fullIData(oldp+44891,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__i),32);
    bufp->fullBit(oldp+44892,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 2U))));
    bufp->fullIData(oldp+44893,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored),32);
    bufp->fullIData(oldp+44894,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__i),32);
    bufp->fullBit(oldp+44895,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                     >> 3U))));
    bufp->fullIData(oldp+44896,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored),32);
    bufp->fullIData(oldp+44897,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__i),32);
    bufp->fullBit(oldp+44898,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44899,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_0__DOT__i),32);
    bufp->fullBit(oldp+44900,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x10U))));
    bufp->fullIData(oldp+44901,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_1__DOT__i),32);
    bufp->fullBit(oldp+44902,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+44903,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_10__DOT__i),32);
    bufp->fullBit(oldp+44904,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x1aU))));
    bufp->fullIData(oldp+44905,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_11__DOT__i),32);
    bufp->fullBit(oldp+44906,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x1bU))));
    bufp->fullIData(oldp+44907,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_12__DOT__i),32);
    bufp->fullBit(oldp+44908,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x1cU))));
    bufp->fullIData(oldp+44909,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_13__DOT__i),32);
    bufp->fullBit(oldp+44910,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x1dU))));
    bufp->fullIData(oldp+44911,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_14__DOT__i),32);
    bufp->fullBit(oldp+44912,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+44913,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_15__DOT__i),32);
    bufp->fullBit(oldp+44914,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x11U))));
    bufp->fullIData(oldp+44915,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_2__DOT__i),32);
    bufp->fullBit(oldp+44916,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x12U))));
    bufp->fullIData(oldp+44917,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_3__DOT__i),32);
    bufp->fullBit(oldp+44918,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x13U))));
    bufp->fullIData(oldp+44919,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_4__DOT__i),32);
    bufp->fullBit(oldp+44920,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x14U))));
    bufp->fullIData(oldp+44921,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_5__DOT__i),32);
    bufp->fullBit(oldp+44922,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44923,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_6__DOT__i),32);
    bufp->fullBit(oldp+44924,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x16U))));
    bufp->fullIData(oldp+44925,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_7__DOT__i),32);
    bufp->fullBit(oldp+44926,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44927,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_8__DOT__i),32);
    bufp->fullBit(oldp+44928,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44929,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_9__DOT__i),32);
    bufp->fullBit(oldp+44930,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 7U))));
    bufp->fullIData(oldp+44931,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_0__DOT__i),32);
    bufp->fullBit(oldp+44932,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 8U))));
    bufp->fullIData(oldp+44933,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_1__DOT__i),32);
    bufp->fullBit(oldp+44934,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 9U))));
    bufp->fullIData(oldp+44935,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_2__DOT__i),32);
    bufp->fullBit(oldp+44936,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0xaU))));
    bufp->fullIData(oldp+44937,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_3__DOT__i),32);
    bufp->fullBit(oldp+44938,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0xbU))));
    bufp->fullIData(oldp+44939,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_4__DOT__i),32);
    bufp->fullBit(oldp+44940,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0xcU))));
    bufp->fullIData(oldp+44941,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_5__DOT__i),32);
    bufp->fullBit(oldp+44942,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0xdU))));
    bufp->fullIData(oldp+44943,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_6__DOT__i),32);
    bufp->fullBit(oldp+44944,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0xeU))));
    bufp->fullIData(oldp+44945,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_7__DOT__i),32);
    bufp->fullBit(oldp+44946,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0xfU))));
    bufp->fullIData(oldp+44947,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_8__DOT__i),32);
    bufp->fullBit(oldp+44948,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0x15U))));
    bufp->fullIData(oldp+44949,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_slc_cache_flush_reg__DOT__i),32);
    bufp->fullBit(oldp+44950,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                     >> 0x17U))));
    bufp->fullIData(oldp+44951,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_ucie_topology_id_reg__DOT__i),32);
    bufp->fullBit(oldp+44952,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x93U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+44953,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_use_early_write__DOT__i),32);
    bufp->fullBit(oldp+44954,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync));
    bufp->fullBit(oldp+44955,(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_sync));
    bufp->fullBit(oldp+44956,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_sync)) 
                                     | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_sync) 
                                        | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync))))));
    bufp->fullBit(oldp+44957,((1U & (~ ((~ (IData)(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_sync)) 
                                        | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_sync) 
                                           | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync)))))));
    bufp->fullBit(oldp+44958,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_sync));
    bufp->fullBit(oldp+44959,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_qp_clk__DOT__sig_src_sync1));
    bufp->fullBit(oldp+44960,(vlSelfRef.sig_topology_top__DOT__inst_sync_cl0_p0_TXRXSACTIVE_qp_clk__DOT__sig_src_sync1));
    bufp->fullBit(oldp+44961,(vlSelfRef.sig_topology_top__DOT__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk__DOT__sig_src_sync1));
    bufp->fullBit(oldp+44962,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp));
    bufp->fullBit(oldp+44963,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat));
    bufp->fullWData(oldp+44964,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpreq_flit_from_id_translator),151);
    bufp->fullWData(oldp+44969,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__rsp_flit_from_id_translator),73);
    bufp->fullWData(oldp+44972,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator),680);
    bufp->fullWData(oldp+44994,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator),119);
    bufp->fullSData(oldp+44998,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__tx_actual_snp_txnid_to_rn),12);
    bufp->fullSData(oldp+44999,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_dat_dbid_to_rn),12);
    bufp->fullIData(oldp+45000,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__rsp_txnid_entry_match),32);
    bufp->fullIData(oldp+45001,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__dat_txnid_entry_match),32);
    bufp->fullSData(oldp+45002,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_rsp_dbid_to_rn),12);
    bufp->fullSData(oldp+45003,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[0]),12);
    bufp->fullSData(oldp+45004,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[1]),12);
    bufp->fullSData(oldp+45005,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[2]),12);
    bufp->fullSData(oldp+45006,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[3]),12);
    bufp->fullCData(oldp+45007,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__wren_id_buffer),4);
    bufp->fullBit(oldp+45008,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45009,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl),73);
    bufp->fullBit(oldp+45012,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45013,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl),680);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                ? (0xfffU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                       << 6U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                         >> 0x1aU)))
                                                : 0U))) 
                              << 0x1aU) | (QData)((IData)(
                                                          (0x3ffffffU 
                                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((0x3fffffffU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                     << 0x15U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                       >> 0xbU))))) 
                                << 5U) | (QData)((IData)(
                                                         ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                              >> 6U))
                                                           : 0U))))) 
                      << 6U) | (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                            ? 
                                                           (0xfffU 
                                                            & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                << 6U) 
                                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                                  >> 0x1aU)))
                                                            : 0U))) 
                                          << 0x1aU) 
                                         | (QData)((IData)(
                                                           (0x3ffffffU 
                                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))) 
                                        >> 0x20U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((0x3fffffffU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                     << 0x15U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                       >> 0xbU))))) 
                                << 5U) | (QData)((IData)(
                                                         ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                              >> 6U))
                                                           : 0U))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              (0x3fffffffU 
                                                               & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                                   << 0x15U) 
                                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                     >> 0xbU))))) 
                                              << 5U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                                 ? 
                                                                (0x1fU 
                                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                    >> 6U))
                                                                 : 0U)))) 
                                            >> 0x20U)) 
                                   << 6U));
    bufp->fullWData(oldp+45035,(__Vtemp_1),73);
    __Vtemp_4[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                ? (0xfU 
                                                   & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                      >> 0x11U))
                                                : 0U))) 
                              << 0x31U) | (((QData)((IData)(
                                                            (0x7ffU 
                                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                >> 6U)))) 
                                            << 0x26U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                                 ? 
                                                                (0xfffU 
                                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                     << 6U) 
                                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                                       >> 0x1aU)))
                                                                 : 0U))) 
                                               << 0x1aU) 
                                              | (QData)((IData)(
                                                                (0x3ffffffU 
                                                                 & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))));
    __Vtemp_4[1U] = ((0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                      << 0x15U) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U])) 
                     | (IData)(((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                       >> 0x11U))
                                                    : 0U))) 
                                  << 0x31U) | (((QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                    >> 6U)))) 
                                                << 0x26U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                                     ? 
                                                                    (0xfffU 
                                                                     & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                         << 6U) 
                                                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                                           >> 0x1aU)))
                                                                     : 0U))) 
                                                   << 0x1aU) 
                                                  | (QData)((IData)(
                                                                    (0x3ffffffU 
                                                                     & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])));
    __Vtemp_4[3U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])));
    __Vtemp_4[4U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])));
    __Vtemp_4[5U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])));
    __Vtemp_4[6U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])));
    __Vtemp_4[7U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])));
    __Vtemp_4[8U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])));
    __Vtemp_4[9U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                    >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])) 
                     | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                        << 0x15U) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])));
    __Vtemp_4[0xaU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])) 
                       | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])));
    __Vtemp_4[0xbU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])) 
                       | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])));
    __Vtemp_4[0xcU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])) 
                       | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])));
    __Vtemp_4[0xdU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])) 
                       | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])));
    __Vtemp_4[0xeU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])) 
                       | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])));
    __Vtemp_4[0xfU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])) 
                       | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])));
    __Vtemp_4[0x10U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])));
    __Vtemp_4[0x11U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])));
    __Vtemp_4[0x12U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])));
    __Vtemp_4[0x13U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])));
    __Vtemp_4[0x14U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])));
    __Vtemp_4[0x15U] = (0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                      >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x15U]));
    bufp->fullWData(oldp+45038,(__Vtemp_4),680);
    bufp->fullSData(oldp+45060,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__inactive_cntr_nxt),14);
    bufp->fullBit(oldp+45061,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__port_is_inactive_nxt));
    bufp->fullCData(oldp+45062,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                  ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                              >> 6U))
                                  : 0U)),5);
    bufp->fullCData(oldp+45063,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                             >> 0x11U))
                                  : 0U)),4);
    bufp->fullSData(oldp+45064,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullSData(oldp+45065,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullBit(oldp+45066,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullWData(oldp+45067,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__write_data_fifo),686);
    bufp->fullBit(oldp+45089,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullIData(oldp+45090,((0xfffffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[3U] 
                                              << 0xdU) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U] 
                                                >> 0x13U)))),20);
    __Vtemp_7[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[0U];
    __Vtemp_7[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[1U];
    __Vtemp_7[2U] = (0x7ffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U]);
    bufp->fullWData(oldp+45091,(__Vtemp_7),83);
    bufp->fullBit(oldp+45094,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45095,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45096,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45097,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45098,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45099,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45100,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45101,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
    bufp->fullWData(oldp+45123,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
    bufp->fullWData(oldp+45145,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
    bufp->fullWData(oldp+45167,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
    bufp->fullBit(oldp+45189,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+45190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+45191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45194,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45195,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45196,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45197,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45198,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+45201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+45204,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+45207,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullWData(oldp+45210,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__write_data_fifo_tx_snpreq),152);
    bufp->fullCData(oldp+45215,((7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hac6e8b95_0_71))))),3);
    bufp->fullBit(oldp+45216,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo));
    bufp->fullWData(oldp+45217,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__snprsp_flit_s),73);
    bufp->fullCData(oldp+45220,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullBit(oldp+45221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp));
    bufp->fullBit(oldp+45222,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat));
    bufp->fullWData(oldp+45223,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpreq_flit_from_id_translator),151);
    bufp->fullWData(oldp+45228,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__rsp_flit_from_id_translator),73);
    bufp->fullWData(oldp+45231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator),680);
    bufp->fullWData(oldp+45253,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator),119);
    bufp->fullSData(oldp+45257,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__tx_actual_snp_txnid_to_rn),12);
    bufp->fullSData(oldp+45258,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_dat_dbid_to_rn),12);
    bufp->fullIData(oldp+45259,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__rsp_txnid_entry_match),32);
    bufp->fullIData(oldp+45260,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__dat_txnid_entry_match),32);
    bufp->fullSData(oldp+45261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_rsp_dbid_to_rn),12);
    bufp->fullSData(oldp+45262,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[0]),12);
    bufp->fullSData(oldp+45263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[1]),12);
    bufp->fullSData(oldp+45264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[2]),12);
    bufp->fullSData(oldp+45265,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[3]),12);
    bufp->fullCData(oldp+45266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__wren_id_buffer),4);
    bufp->fullBit(oldp+45267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45268,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl),73);
    bufp->fullBit(oldp+45271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl),680);
    __Vtemp_8[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                ? (0xfffU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                       << 6U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                         >> 0x1aU)))
                                                : 0U))) 
                              << 0x1aU) | (QData)((IData)(
                                                          (0x3ffffffU 
                                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))));
    __Vtemp_8[1U] = (((IData)((((QData)((IData)((0x3fffffffU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                     << 0x15U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                       >> 0xbU))))) 
                                << 5U) | (QData)((IData)(
                                                         ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                              >> 6U))
                                                           : 0U))))) 
                      << 6U) | (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                            ? 
                                                           (0xfffU 
                                                            & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                << 6U) 
                                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                                  >> 0x1aU)))
                                                            : 0U))) 
                                          << 0x1aU) 
                                         | (QData)((IData)(
                                                           (0x3ffffffU 
                                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))) 
                                        >> 0x20U)));
    __Vtemp_8[2U] = (((IData)((((QData)((IData)((0x3fffffffU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                     << 0x15U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                       >> 0xbU))))) 
                                << 5U) | (QData)((IData)(
                                                         ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                              >> 6U))
                                                           : 0U))))) 
                      >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                              (0x3fffffffU 
                                                               & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                                   << 0x15U) 
                                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                     >> 0xbU))))) 
                                              << 5U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                                 ? 
                                                                (0x1fU 
                                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                    >> 6U))
                                                                 : 0U)))) 
                                            >> 0x20U)) 
                                   << 6U));
    bufp->fullWData(oldp+45294,(__Vtemp_8),73);
    __Vtemp_11[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                 ? 
                                                (0xfU 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                    >> 0x11U))
                                                 : 0U))) 
                               << 0x31U) | (((QData)((IData)(
                                                             (0x7ffU 
                                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                 >> 6U)))) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                                  ? 
                                                                 (0xfffU 
                                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                      << 6U) 
                                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                                        >> 0x1aU)))
                                                                  : 0U))) 
                                                << 0x1aU) 
                                               | (QData)((IData)(
                                                                 (0x3ffffffU 
                                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))));
    __Vtemp_11[1U] = ((0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                       << 0x15U) & 
                                      vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U])) 
                      | (IData)(((((QData)((IData)(
                                                   ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                        >> 0x11U))
                                                     : 0U))) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                     >> 6U)))) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                                      ? 
                                                                     (0xfffU 
                                                                      & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                          << 6U) 
                                                                         | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                                            >> 0x1aU)))
                                                                      : 0U))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (0x3ffffffU 
                                                                      & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))) 
                                 >> 0x20U)));
    __Vtemp_11[2U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])));
    __Vtemp_11[3U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])));
    __Vtemp_11[4U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])));
    __Vtemp_11[5U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])));
    __Vtemp_11[6U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])));
    __Vtemp_11[7U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])));
    __Vtemp_11[8U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])));
    __Vtemp_11[9U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])));
    __Vtemp_11[0xaU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])));
    __Vtemp_11[0xbU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])));
    __Vtemp_11[0xcU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])));
    __Vtemp_11[0xdU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])));
    __Vtemp_11[0xeU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])));
    __Vtemp_11[0xfU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])));
    __Vtemp_11[0x10U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])));
    __Vtemp_11[0x11U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])));
    __Vtemp_11[0x12U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])));
    __Vtemp_11[0x13U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])));
    __Vtemp_11[0x14U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])));
    __Vtemp_11[0x15U] = (0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x15U]));
    bufp->fullWData(oldp+45297,(__Vtemp_11),680);
    bufp->fullSData(oldp+45319,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__inactive_cntr_nxt),14);
    bufp->fullBit(oldp+45320,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__port_is_inactive_nxt));
    bufp->fullCData(oldp+45321,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                  ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                              >> 6U))
                                  : 0U)),5);
    bufp->fullCData(oldp+45322,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                             >> 0x11U))
                                  : 0U)),4);
    bufp->fullSData(oldp+45323,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullSData(oldp+45324,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullBit(oldp+45325,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullWData(oldp+45326,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__write_data_fifo),686);
    bufp->fullBit(oldp+45348,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullIData(oldp+45349,((0xfffffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[3U] 
                                              << 0xdU) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U] 
                                                >> 0x13U)))),20);
    __Vtemp_14[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[0U];
    __Vtemp_14[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[1U];
    __Vtemp_14[2U] = (0x7ffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U]);
    bufp->fullWData(oldp+45350,(__Vtemp_14),83);
    bufp->fullBit(oldp+45353,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45354,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45355,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45356,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45357,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45358,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45359,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45360,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
    bufp->fullWData(oldp+45382,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
    bufp->fullWData(oldp+45404,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
    bufp->fullWData(oldp+45426,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
    bufp->fullBit(oldp+45448,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+45449,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+45450,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45451,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45452,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45453,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45454,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45455,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45456,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45457,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+45460,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+45463,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+45466,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullWData(oldp+45469,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__write_data_fifo_tx_snpreq),152);
    bufp->fullCData(oldp+45474,((7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hac6e8b95_0_73))))),3);
    bufp->fullBit(oldp+45475,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo));
    bufp->fullWData(oldp+45476,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__snprsp_flit_s),73);
    bufp->fullCData(oldp+45479,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullBit(oldp+45480,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp));
    bufp->fullBit(oldp+45481,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat));
    bufp->fullBit(oldp+45482,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp));
    bufp->fullWData(oldp+45483,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__snpreq_flit_from_id_translator),151);
    bufp->fullWData(oldp+45488,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__req_flit_from_id_translator),151);
    bufp->fullSData(oldp+45493,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__tx_req_txnid_to_sn),12);
    bufp->fullQData(oldp+45494,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__wren_id_buffer),35);
    bufp->fullQData(oldp+45496,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__valid_buffer_nxt),35);
    bufp->fullBit(oldp+45498,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_translator_full_nxt));
    bufp->fullQData(oldp+45499,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__readnosnp_with_dmt_vec_nxt),35);
    bufp->fullWData(oldp+45501,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl),152);
    bufp->fullBit(oldp+45506,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl));
    bufp->fullBit(oldp+45507,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45508,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl),73);
    bufp->fullBit(oldp+45511,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45512,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl),680);
    __Vtemp_19[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                                 ? 
                                                (0xfffU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                     << 6U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U] 
                                                       >> 0x1aU)))
                                                 : 0U))) 
                               << 0x1aU) | (QData)((IData)(
                                                           (0x3ffffffU 
                                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U])))));
    __Vtemp_19[1U] = ((0xffffffc0U & ((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                         ? (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U] 
                                              << 2U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                >> 0x1eU)))
                                         : 0U) << 0x1eU) 
                                      | (0x3fffffc0U 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U]))) 
                      | (IData)(((((QData)((IData)(
                                                   ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                                     ? 
                                                    (0xfffU 
                                                     & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                         << 6U) 
                                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U] 
                                                           >> 0x1aU)))
                                                     : 0U))) 
                                   << 0x1aU) | (QData)((IData)(
                                                               (0x3ffffffU 
                                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U])))) 
                                 >> 0x20U)));
    __Vtemp_19[2U] = ((0xffffffe0U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U]) 
                      | (0x3fU & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                    ? (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                   >> 0x1eU)))
                                    : 0U) >> 2U)));
    __Vtemp_19[3U] = ((0x1fU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U]) 
                      | (0xffffffe0U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U]));
    __Vtemp_19[4U] = ((0x1fU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[4U]) 
                      | (0x7fffe0U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[4U]));
    bufp->fullWData(oldp+45534,(__Vtemp_19),151);
    __Vtemp_20[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                 ? 
                                                (0xfffU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                     << 6U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                       >> 0x1aU)))
                                                 : 0U))) 
                               << 0x1aU) | (QData)((IData)(
                                                           (0x3ffffffU 
                                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))));
    __Vtemp_20[1U] = (((IData)((((QData)((IData)((0x3fffffffU 
                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                      << 0x15U) 
                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                        >> 0xbU))))) 
                                 << 5U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                            ? 
                                                           (0x1fU 
                                                            & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                               >> 6U))
                                                            : 0U))))) 
                       << 6U) | (IData)(((((QData)((IData)(
                                                           ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                             ? 
                                                            (0xfffU 
                                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                 << 6U) 
                                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                                   >> 0x1aU)))
                                                             : 0U))) 
                                           << 0x1aU) 
                                          | (QData)((IData)(
                                                            (0x3ffffffU 
                                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))) 
                                         >> 0x20U)));
    __Vtemp_20[2U] = (((IData)((((QData)((IData)((0x3fffffffU 
                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                      << 0x15U) 
                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                        >> 0xbU))))) 
                                 << 5U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                            ? 
                                                           (0x1fU 
                                                            & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                               >> 6U))
                                                            : 0U))))) 
                       >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                               (0x3fffffffU 
                                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[2U] 
                                                                    << 0x15U) 
                                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                      >> 0xbU))))) 
                                               << 5U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                                     >> 6U))
                                                                  : 0U)))) 
                                             >> 0x20U)) 
                                    << 6U));
    bufp->fullWData(oldp+45539,(__Vtemp_20),73);
    __Vtemp_23[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                 ? 
                                                (0xfU 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                    >> 0x11U))
                                                 : 0U))) 
                               << 0x31U) | (((QData)((IData)(
                                                             (0x7ffU 
                                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                 >> 6U)))) 
                                             << 0x26U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                                  ? 
                                                                 (0xfffU 
                                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                      << 6U) 
                                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                                        >> 0x1aU)))
                                                                  : 0U))) 
                                                << 0x1aU) 
                                               | (QData)((IData)(
                                                                 (0x3ffffffU 
                                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))));
    __Vtemp_23[1U] = ((0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                       << 0x15U) & 
                                      vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U])) 
                      | (IData)(((((QData)((IData)(
                                                   ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                        >> 0x11U))
                                                     : 0U))) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                     >> 6U)))) 
                                                 << 0x26U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                                      ? 
                                                                     (0xfffU 
                                                                      & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                                          << 6U) 
                                                                         | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                                            >> 0x1aU)))
                                                                      : 0U))) 
                                                    << 0x1aU) 
                                                   | (QData)((IData)(
                                                                     (0x3ffffffU 
                                                                      & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))) 
                                 >> 0x20U)));
    __Vtemp_23[2U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])));
    __Vtemp_23[3U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])));
    __Vtemp_23[4U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])));
    __Vtemp_23[5U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])));
    __Vtemp_23[6U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])));
    __Vtemp_23[7U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])));
    __Vtemp_23[8U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])));
    __Vtemp_23[9U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                     >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])) 
                      | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                         << 0x15U) 
                                        & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])));
    __Vtemp_23[0xaU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])));
    __Vtemp_23[0xbU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])));
    __Vtemp_23[0xcU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])));
    __Vtemp_23[0xdU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])));
    __Vtemp_23[0xeU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])));
    __Vtemp_23[0xfU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])) 
                        | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])));
    __Vtemp_23[0x10U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])));
    __Vtemp_23[0x11U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])));
    __Vtemp_23[0x12U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])));
    __Vtemp_23[0x13U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])));
    __Vtemp_23[0x14U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])));
    __Vtemp_23[0x15U] = (0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                       >> 0xbU) & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x15U]));
    bufp->fullWData(oldp+45542,(__Vtemp_23),680);
    bufp->fullSData(oldp+45564,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__inactive_cntr_nxt),14);
    bufp->fullBit(oldp+45565,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__port_is_inactive_nxt));
    __Vtemp_26[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U];
    __Vtemp_26[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U];
    __Vtemp_26[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U];
    __Vtemp_26[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U];
    __Vtemp_26[4U] = (0x7fffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[4U]);
    bufp->fullWData(oldp+45566,(__Vtemp_26),151);
    __Vtemp_29[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U];
    __Vtemp_29[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U];
    __Vtemp_29[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U];
    __Vtemp_29[3U] = (0x7fffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U]);
    bufp->fullWData(oldp+45571,(__Vtemp_29),119);
    bufp->fullCData(oldp+45575,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                  ? (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U] 
                                               << 2U) 
                                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                 >> 0x1eU)))
                                  : 0U)),7);
    bufp->fullCData(oldp+45576,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                  ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                              >> 0x12U))
                                  : 0U)),5);
    bufp->fullCData(oldp+45577,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                  ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                              >> 6U))
                                  : 0U)),5);
    bufp->fullCData(oldp+45578,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                             >> 0x11U))
                                  : 0U)),4);
    bufp->fullSData(oldp+45579,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullSData(oldp+45580,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                  ? (0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U] 
                                               >> 0xfU))
                                  : 0U)),12);
    bufp->fullSData(oldp+45581,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullSData(oldp+45582,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                  ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                  >> 0x1aU)))
                                  : 0U)),12);
    bufp->fullCData(oldp+45583,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+45584,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+45585,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+45586,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45587,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45588,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45589,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45590,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45591,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45592,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45593,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
    bufp->fullWData(oldp+45615,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
    bufp->fullWData(oldp+45637,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
    bufp->fullWData(oldp+45659,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
    bufp->fullBit(oldp+45681,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+45682,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+45683,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45684,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45685,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45686,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45687,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45688,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45689,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45690,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+45693,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+45696,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+45699,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullBit(oldp+45702,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullWData(oldp+45703,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__write_data_fifo_tx_snpreq),152);
    bufp->fullCData(oldp+45708,((7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hac6e8b95_0_75))))),3);
    bufp->fullBit(oldp+45709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo));
    bufp->fullWData(oldp+45710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__snprsp_flit_s),73);
    bufp->fullBit(oldp+45713,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+45714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
    bufp->fullCData(oldp+45715,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+45716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+45717,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45718,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+45719,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+45720,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),152);
    bufp->fullWData(oldp+45725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),152);
    bufp->fullWData(oldp+45730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),152);
    bufp->fullWData(oldp+45735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),152);
    bufp->fullBit(oldp+45740,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__consumed_crdt));
    bufp->fullBit(oldp+45741,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
    bufp->fullBit(oldp+45747,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullBit(oldp+45748,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__send_datacrdt_update));
    bufp->fullWData(oldp+45749,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s),680);
    bufp->fullBit(oldp+45771,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_req_crdt));
    bufp->fullBit(oldp+45772,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__opened_fiforoom));
    bufp->fullWData(oldp+45773,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s),680);
    bufp->fullBit(oldp+45795,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__update_rsp_crdt));
    bufp->fullWData(oldp+45796,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s),73);
    bufp->fullBit(oldp+45799,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_dat_crdt));
    bufp->fullBit(oldp+45800,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3));
    bufp->fullWData(oldp+45801,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__slc_rspflit_s),73);
    bufp->fullBit(oldp+45804,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3)))));
    bufp->fullBit(oldp+45805,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff));
    __Vtemp_30[0U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[6U] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[5U] 
                                    >> 8U));
    __Vtemp_30[1U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[7U] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[6U] 
                                    >> 8U));
    __Vtemp_30[2U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[8U] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[7U] 
                                    >> 8U));
    __Vtemp_30[3U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[9U] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[8U] 
                                    >> 8U));
    __Vtemp_30[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xaU] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[9U] 
                                    >> 8U));
    __Vtemp_30[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xbU] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xaU] 
                                    >> 8U));
    __Vtemp_30[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xcU] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xbU] 
                                    >> 8U));
    __Vtemp_30[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xdU] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xcU] 
                                    >> 8U));
    __Vtemp_30[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xeU] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xdU] 
                                    >> 8U));
    __Vtemp_30[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xfU] 
                       << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xeU] 
                                    >> 8U));
    __Vtemp_30[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x10U] 
                         << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0xfU] 
                                      >> 8U));
    __Vtemp_30[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x11U] 
                         << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x10U] 
                                      >> 8U));
    __Vtemp_30[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x12U] 
                         << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x11U] 
                                      >> 8U));
    __Vtemp_30[0xdU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x13U] 
                         << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x12U] 
                                      >> 8U));
    __Vtemp_30[0xeU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x14U] 
                         << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x13U] 
                                      >> 8U));
    __Vtemp_30[0xfU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x15U] 
                         << 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0x14U] 
                                      >> 8U));
    bufp->fullWData(oldp+45806,(__Vtemp_30),512);
    bufp->fullCData(oldp+45822,((3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[1U] 
                                       >> 0x15U))),2);
    bufp->fullBit(oldp+45823,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff)))));
    bufp->fullBit(oldp+45824,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_reqflit_fifo));
    bufp->fullCData(oldp+45825,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cmdproc_st_nxt),2);
    bufp->fullBit(oldp+45826,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff));
    bufp->fullSData(oldp+45827,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_bit_available_nxt),16);
    bufp->fullCData(oldp+45828,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_selected_nxt),4);
    bufp->fullSData(oldp+45829,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_rd_txnid_buff),16);
    bufp->fullSData(oldp+45830,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[0]),12);
    bufp->fullSData(oldp+45831,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[1]),12);
    bufp->fullSData(oldp+45832,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[2]),12);
    bufp->fullSData(oldp+45833,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[3]),12);
    bufp->fullSData(oldp+45834,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[4]),12);
    bufp->fullSData(oldp+45835,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[5]),12);
    bufp->fullSData(oldp+45836,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[6]),12);
    bufp->fullSData(oldp+45837,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[7]),12);
    bufp->fullSData(oldp+45838,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[8]),12);
    bufp->fullSData(oldp+45839,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[9]),12);
    bufp->fullSData(oldp+45840,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[10]),12);
    bufp->fullSData(oldp+45841,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[11]),12);
    bufp->fullSData(oldp+45842,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[12]),12);
    bufp->fullSData(oldp+45843,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[13]),12);
    bufp->fullSData(oldp+45844,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[14]),12);
    bufp->fullSData(oldp+45845,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[15]),12);
    bufp->fullCData(oldp+45846,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0U] 
                                         >> 0x1aU))),4);
    bufp->fullBit(oldp+45847,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__latch_txnid));
    bufp->fullBit(oldp+45848,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_addr_buff));
    bufp->fullSData(oldp+45849,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_bit_available_nxt),16);
    bufp->fullCData(oldp+45850,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_selected_nxt),4);
    bufp->fullBit(oldp+45851,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_zero_buff));
    bufp->fullSData(oldp+45852,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_zero_buffer_nxt),16);
    bufp->fullSData(oldp+45853,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_wr_addr_buff),16);
    bufp->fullQData(oldp+45854,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[0]),52);
    bufp->fullQData(oldp+45856,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[1]),52);
    bufp->fullQData(oldp+45858,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[2]),52);
    bufp->fullQData(oldp+45860,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[3]),52);
    bufp->fullQData(oldp+45862,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[4]),52);
    bufp->fullQData(oldp+45864,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[5]),52);
    bufp->fullQData(oldp+45866,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[6]),52);
    bufp->fullQData(oldp+45868,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[7]),52);
    bufp->fullQData(oldp+45870,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[8]),52);
    bufp->fullQData(oldp+45872,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[9]),52);
    bufp->fullQData(oldp+45874,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[10]),52);
    bufp->fullQData(oldp+45876,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[11]),52);
    bufp->fullQData(oldp+45878,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[12]),52);
    bufp->fullQData(oldp+45880,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[13]),52);
    bufp->fullQData(oldp+45882,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[14]),52);
    bufp->fullQData(oldp+45884,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[15]),52);
    bufp->fullCData(oldp+45886,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[0]),4);
    bufp->fullCData(oldp+45887,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[1]),4);
    bufp->fullCData(oldp+45888,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[2]),4);
    bufp->fullCData(oldp+45889,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[3]),4);
    bufp->fullCData(oldp+45890,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[4]),4);
    bufp->fullCData(oldp+45891,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[5]),4);
    bufp->fullCData(oldp+45892,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[6]),4);
    bufp->fullCData(oldp+45893,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[7]),4);
    bufp->fullCData(oldp+45894,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[8]),4);
    bufp->fullCData(oldp+45895,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[9]),4);
    bufp->fullCData(oldp+45896,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[10]),4);
    bufp->fullCData(oldp+45897,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[11]),4);
    bufp->fullCData(oldp+45898,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[12]),4);
    bufp->fullCData(oldp+45899,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[13]),4);
    bufp->fullCData(oldp+45900,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[14]),4);
    bufp->fullCData(oldp+45901,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[15]),4);
    bufp->fullSData(oldp+45902,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[0]),12);
    bufp->fullSData(oldp+45903,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[1]),12);
    bufp->fullSData(oldp+45904,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[2]),12);
    bufp->fullSData(oldp+45905,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[3]),12);
    bufp->fullSData(oldp+45906,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[4]),12);
    bufp->fullSData(oldp+45907,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[5]),12);
    bufp->fullSData(oldp+45908,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[6]),12);
    bufp->fullSData(oldp+45909,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[7]),12);
    bufp->fullSData(oldp+45910,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[8]),12);
    bufp->fullSData(oldp+45911,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[9]),12);
    bufp->fullSData(oldp+45912,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[10]),12);
    bufp->fullSData(oldp+45913,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[11]),12);
    bufp->fullSData(oldp+45914,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[12]),12);
    bufp->fullSData(oldp+45915,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[13]),12);
    bufp->fullSData(oldp+45916,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[14]),12);
    bufp->fullSData(oldp+45917,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[15]),12);
    bufp->fullSData(oldp+45918,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[0]),11);
    bufp->fullSData(oldp+45919,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[1]),11);
    bufp->fullSData(oldp+45920,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[2]),11);
    bufp->fullSData(oldp+45921,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[3]),11);
    bufp->fullSData(oldp+45922,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[4]),11);
    bufp->fullSData(oldp+45923,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[5]),11);
    bufp->fullSData(oldp+45924,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[6]),11);
    bufp->fullSData(oldp+45925,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[7]),11);
    bufp->fullSData(oldp+45926,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[8]),11);
    bufp->fullSData(oldp+45927,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[9]),11);
    bufp->fullSData(oldp+45928,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[10]),11);
    bufp->fullSData(oldp+45929,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[11]),11);
    bufp->fullSData(oldp+45930,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[12]),11);
    bufp->fullSData(oldp+45931,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[13]),11);
    bufp->fullSData(oldp+45932,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[14]),11);
    bufp->fullSData(oldp+45933,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[15]),11);
    bufp->fullBit(oldp+45934,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[0]));
    bufp->fullBit(oldp+45935,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[1]));
    bufp->fullBit(oldp+45936,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[2]));
    bufp->fullBit(oldp+45937,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[3]));
    bufp->fullBit(oldp+45938,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[4]));
    bufp->fullBit(oldp+45939,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[5]));
    bufp->fullBit(oldp+45940,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[6]));
    bufp->fullBit(oldp+45941,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[7]));
    bufp->fullBit(oldp+45942,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[8]));
    bufp->fullBit(oldp+45943,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[9]));
    bufp->fullBit(oldp+45944,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[10]));
    bufp->fullBit(oldp+45945,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[11]));
    bufp->fullBit(oldp+45946,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[12]));
    bufp->fullBit(oldp+45947,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[13]));
    bufp->fullBit(oldp+45948,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[14]));
    bufp->fullBit(oldp+45949,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[15]));
    bufp->fullCData(oldp+45950,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[0]),4);
    bufp->fullCData(oldp+45951,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[1]),4);
    bufp->fullCData(oldp+45952,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[2]),4);
    bufp->fullCData(oldp+45953,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[3]),4);
    bufp->fullCData(oldp+45954,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[4]),4);
    bufp->fullCData(oldp+45955,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[5]),4);
    bufp->fullCData(oldp+45956,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[6]),4);
    bufp->fullCData(oldp+45957,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[7]),4);
    bufp->fullCData(oldp+45958,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[8]),4);
    bufp->fullCData(oldp+45959,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[9]),4);
    bufp->fullCData(oldp+45960,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[10]),4);
    bufp->fullCData(oldp+45961,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[11]),4);
    bufp->fullCData(oldp+45962,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[12]),4);
    bufp->fullCData(oldp+45963,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[13]),4);
    bufp->fullCData(oldp+45964,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[14]),4);
    bufp->fullCData(oldp+45965,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[15]),4);
    bufp->fullSData(oldp+45966,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_sent_data_bit_nxt),16);
    bufp->fullSData(oldp+45967,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_received_sn_comp_bit_nxt),16);
    bufp->fullBit(oldp+45968,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_comp_buff));
    bufp->fullBit(oldp+45969,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff_outstanding_reqf));
    bufp->fullBit(oldp+45970,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_reqf_buff));
    bufp->fullBit(oldp+45971,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_select_rd_reqf_pointer));
    bufp->fullWData(oldp+45972,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[0]),154);
    bufp->fullWData(oldp+45977,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[1]),154);
    bufp->fullWData(oldp+45982,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[2]),154);
    bufp->fullWData(oldp+45987,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[3]),154);
    bufp->fullWData(oldp+45992,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[4]),154);
    bufp->fullWData(oldp+45997,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[5]),154);
    bufp->fullWData(oldp+46002,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[6]),154);
    bufp->fullWData(oldp+46007,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[7]),154);
    bufp->fullWData(oldp+46012,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[8]),154);
    bufp->fullWData(oldp+46017,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[9]),154);
    bufp->fullWData(oldp+46022,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[10]),154);
    bufp->fullWData(oldp+46027,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[11]),154);
    bufp->fullWData(oldp+46032,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[12]),154);
    bufp->fullWData(oldp+46037,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[13]),154);
    bufp->fullWData(oldp+46042,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[14]),154);
    bufp->fullWData(oldp+46047,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[15]),154);
    bufp->fullSData(oldp+46052,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_bit_available_nxt),16);
    bufp->fullWData(oldp+46053,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_s),151);
    bufp->fullSData(oldp+46058,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__txnid_from_cc),12);
    bufp->fullBit(oldp+46059,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__flit_dmt_en));
    bufp->fullBit(oldp+46060,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memwr_req));
    bufp->fullBit(oldp+46061,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memrd_req));
    bufp->fullBit(oldp+46062,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_data_buff));
    bufp->fullCData(oldp+46063,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[0]),4);
    bufp->fullCData(oldp+46064,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[1]),4);
    bufp->fullCData(oldp+46065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[2]),4);
    bufp->fullCData(oldp+46066,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[3]),4);
    bufp->fullCData(oldp+46067,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[4]),4);
    bufp->fullCData(oldp+46068,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[5]),4);
    bufp->fullCData(oldp+46069,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[6]),4);
    bufp->fullCData(oldp+46070,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[7]),4);
    bufp->fullCData(oldp+46071,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[8]),4);
    bufp->fullCData(oldp+46072,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[9]),4);
    bufp->fullCData(oldp+46073,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[10]),4);
    bufp->fullCData(oldp+46074,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[11]),4);
    bufp->fullCData(oldp+46075,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[12]),4);
    bufp->fullCData(oldp+46076,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[13]),4);
    bufp->fullCData(oldp+46077,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[14]),4);
    bufp->fullCData(oldp+46078,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[15]),4);
    bufp->fullSData(oldp+46079,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_bit_nxt),16);
    bufp->fullWData(oldp+46080,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[0]),512);
    bufp->fullWData(oldp+46096,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[1]),512);
    bufp->fullWData(oldp+46112,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[2]),512);
    bufp->fullWData(oldp+46128,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[3]),512);
    bufp->fullWData(oldp+46144,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[4]),512);
    bufp->fullWData(oldp+46160,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[5]),512);
    bufp->fullWData(oldp+46176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[6]),512);
    bufp->fullWData(oldp+46192,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[7]),512);
    bufp->fullWData(oldp+46208,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[8]),512);
    bufp->fullWData(oldp+46224,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[9]),512);
    bufp->fullWData(oldp+46240,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[10]),512);
    bufp->fullWData(oldp+46256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[11]),512);
    bufp->fullWData(oldp+46272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[12]),512);
    bufp->fullWData(oldp+46288,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[13]),512);
    bufp->fullWData(oldp+46304,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[14]),512);
    bufp->fullWData(oldp+46320,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[15]),512);
    bufp->fullQData(oldp+46336,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[0]),64);
    bufp->fullQData(oldp+46338,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[1]),64);
    bufp->fullQData(oldp+46340,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[2]),64);
    bufp->fullQData(oldp+46342,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[3]),64);
    bufp->fullQData(oldp+46344,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[4]),64);
    bufp->fullQData(oldp+46346,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[5]),64);
    bufp->fullQData(oldp+46348,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[6]),64);
    bufp->fullQData(oldp+46350,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[7]),64);
    bufp->fullQData(oldp+46352,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[8]),64);
    bufp->fullQData(oldp+46354,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[9]),64);
    bufp->fullQData(oldp+46356,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[10]),64);
    bufp->fullQData(oldp+46358,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[11]),64);
    bufp->fullQData(oldp+46360,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[12]),64);
    bufp->fullQData(oldp+46362,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[13]),64);
    bufp->fullQData(oldp+46364,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[14]),64);
    bufp->fullQData(oldp+46366,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[15]),64);
    bufp->fullBit(oldp+46368,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_data_index_buffer));
    bufp->fullBit(oldp+46369,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_dbid_buff));
    bufp->fullCData(oldp+46370,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[0U] 
                                         >> 0x1aU))),4);
    bufp->fullSData(oldp+46371,((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[2U] 
                                            << 0xaU) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U] 
                                              >> 0x16U)))),12);
    bufp->fullSData(oldp+46372,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_index_buffer_bit_nxt),16);
    bufp->fullSData(oldp+46373,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[0]),12);
    bufp->fullSData(oldp+46374,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[1]),12);
    bufp->fullSData(oldp+46375,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[2]),12);
    bufp->fullSData(oldp+46376,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[3]),12);
    bufp->fullSData(oldp+46377,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[4]),12);
    bufp->fullSData(oldp+46378,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[5]),12);
    bufp->fullSData(oldp+46379,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[6]),12);
    bufp->fullSData(oldp+46380,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[7]),12);
    bufp->fullSData(oldp+46381,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[8]),12);
    bufp->fullSData(oldp+46382,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[9]),12);
    bufp->fullSData(oldp+46383,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[10]),12);
    bufp->fullSData(oldp+46384,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[11]),12);
    bufp->fullSData(oldp+46385,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[12]),12);
    bufp->fullSData(oldp+46386,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[13]),12);
    bufp->fullSData(oldp+46387,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[14]),12);
    bufp->fullSData(oldp+46388,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[15]),12);
    bufp->fullBit(oldp+46389,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_buff));
    bufp->fullQData(oldp+46390,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd),52);
    bufp->fullIData(oldp+46392,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cm_flit_addr_sliced_pm[0]),28);
    bufp->fullSData(oldp+46393,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_rdretryack_bufv),16);
    bufp->fullSData(oldp+46394,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_wrretryack_bufv),16);
    bufp->fullBit(oldp+46395,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__got_retryackresp));
    bufp->fullSData(oldp+46396,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__retryack_buf_entry),15);
    bufp->fullSData(oldp+46397,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[0]),15);
    bufp->fullSData(oldp+46398,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[1]),15);
    bufp->fullSData(oldp+46399,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[2]),15);
    bufp->fullSData(oldp+46400,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[3]),15);
    bufp->fullSData(oldp+46401,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[4]),15);
    bufp->fullSData(oldp+46402,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[5]),15);
    bufp->fullSData(oldp+46403,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[6]),15);
    bufp->fullSData(oldp+46404,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[7]),15);
    bufp->fullSData(oldp+46405,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[8]),15);
    bufp->fullSData(oldp+46406,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[9]),15);
    bufp->fullSData(oldp+46407,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[10]),15);
    bufp->fullSData(oldp+46408,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[11]),15);
    bufp->fullSData(oldp+46409,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[12]),15);
    bufp->fullSData(oldp+46410,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[13]),15);
    bufp->fullSData(oldp+46411,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[14]),15);
    bufp->fullSData(oldp+46412,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[15]),15);
    bufp->fullSData(oldp+46413,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[0]),15);
    bufp->fullSData(oldp+46414,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[1]),15);
    bufp->fullSData(oldp+46415,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[2]),15);
    bufp->fullSData(oldp+46416,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[3]),15);
    bufp->fullSData(oldp+46417,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[4]),15);
    bufp->fullSData(oldp+46418,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[5]),15);
    bufp->fullSData(oldp+46419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[6]),15);
    bufp->fullSData(oldp+46420,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[7]),15);
    bufp->fullSData(oldp+46421,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[8]),15);
    bufp->fullSData(oldp+46422,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[9]),15);
    bufp->fullSData(oldp+46423,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[10]),15);
    bufp->fullSData(oldp+46424,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[11]),15);
    bufp->fullSData(oldp+46425,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[12]),15);
    bufp->fullSData(oldp+46426,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[13]),15);
    bufp->fullSData(oldp+46427,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[14]),15);
    bufp->fullSData(oldp+46428,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[15]),15);
    bufp->fullSData(oldp+46429,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_bufv_nxt),16);
    bufp->fullSData(oldp+46430,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_bufv_nxt),16);
    bufp->fullBit(oldp+46431,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_pcredit_fifo));
    bufp->fullBit(oldp+46432,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_pcredit_fifo));
    bufp->fullBit(oldp+46433,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_outstand_req_cmo));
    bufp->fullBit(oldp+46434,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_slc_rspvalid));
    bufp->fullBit(oldp+46435,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_dbidresp));
    bufp->fullBit(oldp+46436,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_compdbidresp));
    bufp->fullBit(oldp+46437,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_late_comp_resp));
    bufp->fullSData(oldp+46438,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_req_sent_nxt),16);
    bufp->fullBit(oldp+46439,((3U == (3U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U]))));
    bufp->fullCData(oldp+46440,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__wr_ptr_nxt),5);
    bufp->fullCData(oldp+46441,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__rd_ptr_nxt),5);
    bufp->fullCData(oldp+46442,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt),6);
    bufp->fullBit(oldp+46443,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46444,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46445,((2ULL < (0x3ffffffffULL 
                                       & (0x20ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt)))))));
    bufp->fullSData(oldp+46446,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[0]),15);
    bufp->fullSData(oldp+46447,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[1]),15);
    bufp->fullSData(oldp+46448,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[2]),15);
    bufp->fullSData(oldp+46449,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[3]),15);
    bufp->fullSData(oldp+46450,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[4]),15);
    bufp->fullSData(oldp+46451,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[5]),15);
    bufp->fullSData(oldp+46452,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[6]),15);
    bufp->fullSData(oldp+46453,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[7]),15);
    bufp->fullSData(oldp+46454,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[8]),15);
    bufp->fullSData(oldp+46455,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[9]),15);
    bufp->fullSData(oldp+46456,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[10]),15);
    bufp->fullSData(oldp+46457,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[11]),15);
    bufp->fullSData(oldp+46458,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[12]),15);
    bufp->fullSData(oldp+46459,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[13]),15);
    bufp->fullSData(oldp+46460,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[14]),15);
    bufp->fullSData(oldp+46461,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[15]),15);
    bufp->fullSData(oldp+46462,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[16]),15);
    bufp->fullSData(oldp+46463,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[17]),15);
    bufp->fullSData(oldp+46464,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[18]),15);
    bufp->fullSData(oldp+46465,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[19]),15);
    bufp->fullSData(oldp+46466,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[20]),15);
    bufp->fullSData(oldp+46467,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[21]),15);
    bufp->fullSData(oldp+46468,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[22]),15);
    bufp->fullSData(oldp+46469,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[23]),15);
    bufp->fullSData(oldp+46470,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[24]),15);
    bufp->fullSData(oldp+46471,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[25]),15);
    bufp->fullSData(oldp+46472,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[26]),15);
    bufp->fullSData(oldp+46473,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[27]),15);
    bufp->fullSData(oldp+46474,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[28]),15);
    bufp->fullSData(oldp+46475,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[29]),15);
    bufp->fullSData(oldp+46476,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[30]),15);
    bufp->fullSData(oldp+46477,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[31]),15);
    bufp->fullBit(oldp+46478,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt));
    bufp->fullCData(oldp+46479,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_dat__DOT__init_crdt_ctr_nxt),5);
    bufp->fullCData(oldp+46480,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_rsp__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+46481,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+46482,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+46483,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+46484,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+46485,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+46486,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+46487,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46488,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46489,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+46490,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),680);
    bufp->fullWData(oldp+46512,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),680);
    bufp->fullWData(oldp+46534,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),680);
    bufp->fullWData(oldp+46556,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),680);
    bufp->fullWData(oldp+46578,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),680);
    bufp->fullWData(oldp+46600,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),680);
    bufp->fullWData(oldp+46622,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),680);
    bufp->fullWData(oldp+46644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),680);
    bufp->fullBit(oldp+46666,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+46667,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+46668,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+46669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+46670,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+46671,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+46672,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46673,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46674,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+46675,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),151);
    bufp->fullWData(oldp+46680,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),151);
    bufp->fullWData(oldp+46685,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),151);
    bufp->fullWData(oldp+46690,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),151);
    bufp->fullWData(oldp+46695,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),151);
    bufp->fullWData(oldp+46700,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),151);
    bufp->fullWData(oldp+46705,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),151);
    bufp->fullWData(oldp+46710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),151);
    bufp->fullBit(oldp+46715,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+46716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+46717,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+46718,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+46719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+46720,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+46721,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46722,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46723,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+46724,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+46727,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+46730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+46733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullWData(oldp+46736,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
    bufp->fullWData(oldp+46739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
    bufp->fullWData(oldp+46742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
    bufp->fullWData(oldp+46745,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
    bufp->fullCData(oldp+46748,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+46749,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_req__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+46750,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullIData(oldp+46751,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dealloc_compfifo_vector_compdata),32);
    bufp->fullBit(oldp+46752,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_reqcmdq));
    bufp->fullBit(oldp+46753,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_respcmdq));
    bufp->fullWData(oldp+46754,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_respcmdq),74);
    bufp->fullWData(oldp+46757,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_memrespcmdq),109);
    bufp->fullBit(oldp+46761,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid));
    bufp->fullBit(oldp+46762,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_dataflit));
    bufp->fullIData(oldp+46763,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_outstand_prep),32);
    bufp->fullBit(oldp+46764,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_unused_compbuff_num));
    bufp->fullBit(oldp+46765,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st));
    bufp->fullBit(oldp+46766,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd));
    bufp->fullBit(oldp+46767,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__en_compbuf_2nd_for_snpdata));
    bufp->fullBit(oldp+46768,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__block_compbuf_available));
    bufp->fullBit(oldp+46769,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd))));
    bufp->fullBit(oldp+46770,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq));
    bufp->fullBit(oldp+46771,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_nodeid_valid));
    bufp->fullSData(oldp+46772,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_full_node_id),11);
    bufp->fullSData(oldp+46773,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_rsp_dat_linear_srcid),11);
    bufp->fullSData(oldp+46774,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__xmt_snpreq_full_srcid),11);
    bufp->fullBit(oldp+46775,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_copyback_nocopyback));
    bufp->fullBit(oldp+46776,((7U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                              >> 0x11U)))));
    bufp->fullBit(oldp+46777,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_snprespdata));
    bufp->fullBit(oldp+46778,((4U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                              >> 0x11U)))));
    bufp->fullBit(oldp+46779,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_valid));
    bufp->fullCData(oldp+46780,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__sig_chi_crdt_update_datproc__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+46781,(((3U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                               | ((2U == (0x7fU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                      >> 0x1eU)))) 
                                  | ((1U == (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                     | ((7U == (0x7fU 
                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                      >> 0x1eU)))) 
                                        | ((0x26U == 
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                           | ((0x24U 
                                               == (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                              | ((0x25U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                                 | ((0x41U 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                            >> 0x1eU)))) 
                                                    | ((0x4cU 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                             << 2U) 
                                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                               >> 0x1eU)))) 
                                                       | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict)) 
                                                           & (0x42U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                   << 2U) 
                                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                     >> 0x1eU))))) 
                                                          | ((0xbU 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                   << 2U) 
                                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                     >> 0x1eU)))) 
                                                             | ((0xcU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                        >> 0x1eU)))) 
                                                                | ((0xdU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                         << 2U) 
                                                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                           >> 0x1eU)))) 
                                                                   | ((8U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                            << 2U) 
                                                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                              >> 0x1eU)))) 
                                                                      | ((9U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                               << 2U) 
                                                                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                                >> 0x1eU)))) 
                                                                         | (0xaU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                                                >> 0x1eU)))))))))))))))))))));
    bufp->fullBit(oldp+46782,(((0x15U == (0x7fU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                      >> 0x1eU)))) 
                               | (((0x42U == (0x7fU 
                                              & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU)))) 
                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict)) 
                                  | ((0x43U == (0x7fU 
                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                      >> 0x1eU)))) 
                                     | ((0x16U == (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                           | ((0x18U 
                                               == (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                              | ((0x19U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                                 | ((0x1aU 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                            >> 0x1eU)))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                            << 2U) 
                                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                              >> 0x1eU))))))))))))));
    bufp->fullBit(oldp+46783,((4U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                << 2U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+46784,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_nonsnpable));
    bufp->fullBit(oldp+46785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable));
    bufp->fullBit(oldp+46786,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable));
    bufp->fullBit(oldp+46787,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_non_snpable));
    bufp->fullCData(oldp+46788,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__req_is_atmo),3);
    bufp->fullBit(oldp+46789,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_atomtxn));
    bufp->fullBit(oldp+46790,((((0x54U == (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                | ((0x64U == (0x7fU 
                                              & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU)))) 
                                   | ((0x59U == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU)))) 
                                      | ((0x58U == 
                                          (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                               >> 0x1eU)))) 
                                         | (0x5cU == 
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))))))) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp))));
    bufp->fullBit(oldp+46791,(((0x54U == (0x7fU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                      >> 0x1eU)))) 
                               | ((0x64U == (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                  | ((0x59U == (0x7fU 
                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                      >> 0x1eU)))) 
                                     | ((0x58U == (0x7fU 
                                                   & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                         >> 0x1eU)))) 
                                        | (0x5cU == 
                                           (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                              << 2U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                >> 0x1eU))))))))));
    bufp->fullIData(oldp+46792,((0xfffffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U])),28);
    bufp->fullSData(oldp+46793,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_addr_match_vec),16);
    bufp->fullCData(oldp+46794,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[0]),4);
    bufp->fullCData(oldp+46795,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[1]),4);
    bufp->fullCData(oldp+46796,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[2]),4);
    bufp->fullCData(oldp+46797,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[3]),4);
    bufp->fullCData(oldp+46798,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[4]),4);
    bufp->fullCData(oldp+46799,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[5]),4);
    bufp->fullCData(oldp+46800,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[6]),4);
    bufp->fullCData(oldp+46801,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[7]),4);
    bufp->fullCData(oldp+46802,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[8]),4);
    bufp->fullCData(oldp+46803,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[9]),4);
    bufp->fullCData(oldp+46804,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[10]),4);
    bufp->fullCData(oldp+46805,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[11]),4);
    bufp->fullCData(oldp+46806,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[12]),4);
    bufp->fullCData(oldp+46807,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[13]),4);
    bufp->fullCData(oldp+46808,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[14]),4);
    bufp->fullCData(oldp+46809,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[15]),4);
    bufp->fullBit(oldp+46810,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp));
    bufp->fullBit(oldp+46811,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wren_reqfifo));
    bufp->fullBit(oldp+46812,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__rden_reqfifo));
    bufp->fullWData(oldp+46813,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wrdata_reqfifo),151);
    bufp->fullWData(oldp+46818,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed),151);
    bufp->fullBit(oldp+46823,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict));
    bufp->fullWData(oldp+46824,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit),151);
    __Vtemp_32[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[0U];
    __Vtemp_32[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[1U];
    __Vtemp_32[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[2U];
    __Vtemp_32[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U];
    __Vtemp_32[4U] = (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable) 
                       << 0x18U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable) 
                                     << 0x17U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U]));
    bufp->fullWData(oldp+46829,(__Vtemp_32),153);
    bufp->fullBit(oldp+46834,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__placeholder_state_n));
    bufp->fullCData(oldp+46835,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__wr_ptr_nxt),4);
    bufp->fullCData(oldp+46836,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt),4);
    bufp->fullCData(oldp+46837,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt),5);
    bufp->fullBit(oldp+46838,((0x10U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46839,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+46840,((2ULL < (0x3ffffffffULL 
                                       & (0x10ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+46841,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[0]),151);
    bufp->fullWData(oldp+46846,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[1]),151);
    bufp->fullWData(oldp+46851,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[2]),151);
    bufp->fullWData(oldp+46856,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[3]),151);
    bufp->fullWData(oldp+46861,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[4]),151);
    bufp->fullWData(oldp+46866,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[5]),151);
    bufp->fullWData(oldp+46871,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[6]),151);
    bufp->fullWData(oldp+46876,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[7]),151);
    bufp->fullWData(oldp+46881,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[8]),151);
    bufp->fullWData(oldp+46886,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[9]),151);
    bufp->fullWData(oldp+46891,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[10]),151);
    bufp->fullWData(oldp+46896,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[11]),151);
    bufp->fullWData(oldp+46901,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[12]),151);
    bufp->fullWData(oldp+46906,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[13]),151);
    bufp->fullWData(oldp+46911,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[14]),151);
    bufp->fullWData(oldp+46916,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[15]),151);
    bufp->fullBit(oldp+46921,(((1U == (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                >> 6U))) 
                               | ((9U == (0x1fU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                   >> 6U))) 
                                  | ((2U == (0x1fU 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                >> 6U))) 
                                     | ((5U == (0x1fU 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                   >> 6U))) 
                                        | ((6U == (0x1fU 
                                                   & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                      >> 6U))) 
                                           | ((4U == 
                                               (0x1fU 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                   >> 6U))) 
                                              | ((0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                      >> 6U))) 
                                                 | ((3U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                         >> 6U))) 
                                                    | ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                            >> 6U))) 
                                                       | (8U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                              >> 6U))))))))))))));
    bufp->fullBit(oldp+46922,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3))));
    bufp->fullWData(oldp+46923,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT),73);
    bufp->fullCData(oldp+46926,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+46927,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_2nd_compbuff_num));
    bufp->fullBit(oldp+46928,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_1st_compbuff));
    bufp->fullBit(oldp+46929,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_2nd_compbuff));
    bufp->fullBit(oldp+46930,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__swap_1st_and_2nd_compbuff));
    bufp->fullBit(oldp+46931,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__req_resp_compdata_nxt));
    bufp->fullIData(oldp+46932,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_outstand_cmd_pre),32);
    bufp->fullBit(oldp+46933,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_memdata));
    bufp->fullBit(oldp+46934,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flag_memwr_allbe_zero_nxt));
    bufp->fullBit(oldp+46935,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__make_be_allzero_memwr));
    bufp->fullBit(oldp+46936,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq_prep));
    bufp->fullBit(oldp+46937,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_collnreg_sending_ini_pre));
    bufp->fullBit(oldp+46938,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flittype_rdnosnp_l3));
    bufp->fullBit(oldp+46939,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__xmt_datflit_resperr_nxt));
    bufp->fullBit(oldp+46940,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__compbuf_available));
    bufp->fullIData(oldp+46941,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+46942,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__outstand_prep_valid_nxt),32);
    bufp->fullWData(oldp+46943,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__wrdata_stat_common_ph3_rsp),136);
    __Vtemp_43[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[0U];
    __Vtemp_43[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[1U];
    __Vtemp_43[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[2U];
    __Vtemp_43[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[3U];
    __Vtemp_43[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[0U] 
                       << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2855__03a2720__KET__[4U]);
    __Vtemp_43[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[0U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[1U] 
                                    << 8U));
    __Vtemp_43[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[1U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[2U] 
                                    << 8U));
    __Vtemp_43[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[2U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[3U] 
                                    << 8U));
    __Vtemp_43[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[0U] 
                       << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[3U] 
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[4U] 
                                                  << 8U)));
    __Vtemp_43[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[0U] 
                       >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[1U] 
                                    << 0x10U));
    __Vtemp_43[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[1U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[2U] 
                                      << 0x10U));
    __Vtemp_43[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[2U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[3U] 
                                      << 0x10U));
    __Vtemp_43[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[3U] 
                         >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_43[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                            << 0x18U)));
    __Vtemp_43[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_43[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_43[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[4U] 
                                                   << 0x18U)));
    __Vtemp_43[0x11U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[0U];
    __Vtemp_43[0x12U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[1U];
    __Vtemp_43[0x13U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[2U];
    __Vtemp_43[0x14U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[3U];
    __Vtemp_43[0x15U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[0U] 
                          << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3399__03a3264__KET__[4U]);
    __Vtemp_43[0x16U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[0U] 
                          >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[1U] 
                                       << 8U));
    __Vtemp_43[0x17U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[1U] 
                          >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[2U] 
                                       << 8U));
    __Vtemp_43[0x18U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[2U] 
                          >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[3U] 
                                       << 8U));
    __Vtemp_43[0x19U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[0U] 
                          << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[3U] 
                                        >> 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[4U] 
                                        << 8U)));
    __Vtemp_43[0x1aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[0U] 
                          >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[1U] 
                                       << 0x10U));
    __Vtemp_43[0x1bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[1U] 
                          >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[2U] 
                                       << 0x10U));
    __Vtemp_43[0x1cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[2U] 
                          >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[3U] 
                                       << 0x10U));
    __Vtemp_43[0x1dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[3U] 
                          >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                        << 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                        << 0x10U)));
    __Vtemp_43[0x1eU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                      >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                                 >> 0x10U)) 
                         | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                          >> 8U)) | 
                            (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                             << 0x18U)));
    __Vtemp_43[0x1fU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                                   << 0x18U)));
    __Vtemp_43[0x20U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                                   << 0x18U)));
    __Vtemp_43[0x21U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[4U] 
                                                   << 0x18U)));
    __Vtemp_43[0x22U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[0U];
    __Vtemp_43[0x23U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[1U];
    __Vtemp_43[0x24U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[2U];
    __Vtemp_43[0x25U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[3U];
    __Vtemp_43[0x26U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[0U] 
                          << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3943__03a3808__KET__[4U]);
    __Vtemp_43[0x27U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[0U] 
                          >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[1U] 
                                       << 8U));
    __Vtemp_43[0x28U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[1U] 
                          >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[2U] 
                                       << 8U));
    __Vtemp_43[0x29U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[2U] 
                          >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[3U] 
                                       << 8U));
    __Vtemp_43[0x2aU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[0U] 
                          << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[3U] 
                                        >> 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[4U] 
                                        << 8U)));
    __Vtemp_43[0x2bU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[0U] 
                          >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[1U] 
                                       << 0x10U));
    __Vtemp_43[0x2cU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[1U] 
                          >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[2U] 
                                       << 0x10U));
    __Vtemp_43[0x2dU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[2U] 
                          >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[3U] 
                                       << 0x10U));
    __Vtemp_43[0x2eU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[3U] 
                          >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                        << 0x18U) | 
                                       (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                        << 0x10U)));
    __Vtemp_43[0x2fU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                      >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                                 >> 0x10U)) 
                         | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                          >> 8U)) | 
                            (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                             << 0x18U)));
    __Vtemp_43[0x30U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                                   << 0x18U)));
    __Vtemp_43[0x31U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                                   << 0x18U)));
    __Vtemp_43[0x32U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[4U] 
                                                   << 0x18U)));
    __Vtemp_46[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[0U];
    __Vtemp_46[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[1U];
    __Vtemp_46[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[2U];
    __Vtemp_46[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[3U];
    __Vtemp_46[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[0U] 
                       << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2311__03a2176__KET__[4U]);
    __Vtemp_46[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[0U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[1U] 
                                    << 8U));
    __Vtemp_46[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[1U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[2U] 
                                    << 8U));
    __Vtemp_46[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[2U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[3U] 
                                    << 8U));
    __Vtemp_46[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[0U] 
                       << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[3U] 
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[4U] 
                                                  << 8U)));
    __Vtemp_46[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[0U] 
                       >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[1U] 
                                    << 0x10U));
    __Vtemp_46[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[1U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[2U] 
                                      << 0x10U));
    __Vtemp_46[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[2U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[3U] 
                                      << 0x10U));
    __Vtemp_46[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[3U] 
                         >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_46[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                            << 0x18U)));
    __Vtemp_46[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_46[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_46[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[4U] 
                                                   << 0x18U)));
    VL_CONCAT_WWW(2176,1632,544, __Vtemp_47, __Vtemp_43, __Vtemp_46);
    __Vtemp_50[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[0U];
    __Vtemp_50[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[1U];
    __Vtemp_50[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[2U];
    __Vtemp_50[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[3U];
    __Vtemp_50[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[0U] 
                       << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1767__03a1632__KET__[4U]);
    __Vtemp_50[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[0U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[1U] 
                                    << 8U));
    __Vtemp_50[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[1U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[2U] 
                                    << 8U));
    __Vtemp_50[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[2U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[3U] 
                                    << 8U));
    __Vtemp_50[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[0U] 
                       << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[3U] 
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[4U] 
                                                  << 8U)));
    __Vtemp_50[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[0U] 
                       >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[1U] 
                                    << 0x10U));
    __Vtemp_50[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[1U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[2U] 
                                      << 0x10U));
    __Vtemp_50[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[2U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[3U] 
                                      << 0x10U));
    __Vtemp_50[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[3U] 
                         >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_50[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                            << 0x18U)));
    __Vtemp_50[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_50[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_50[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[4U] 
                                                   << 0x18U)));
    VL_CONCAT_WWW(2720,2176,544, __Vtemp_51, __Vtemp_47, __Vtemp_50);
    __Vtemp_54[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[0U];
    __Vtemp_54[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[1U];
    __Vtemp_54[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[2U];
    __Vtemp_54[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[3U];
    __Vtemp_54[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[0U] 
                       << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1223__03a1088__KET__[4U]);
    __Vtemp_54[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[0U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[1U] 
                                    << 8U));
    __Vtemp_54[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[1U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[2U] 
                                    << 8U));
    __Vtemp_54[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[2U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[3U] 
                                    << 8U));
    __Vtemp_54[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[0U] 
                       << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[3U] 
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[4U] 
                                                  << 8U)));
    __Vtemp_54[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[0U] 
                       >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[1U] 
                                    << 0x10U));
    __Vtemp_54[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[1U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[2U] 
                                      << 0x10U));
    __Vtemp_54[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[2U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[3U] 
                                      << 0x10U));
    __Vtemp_54[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[3U] 
                         >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_54[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                            << 0x18U)));
    __Vtemp_54[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_54[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_54[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[4U] 
                                                   << 0x18U)));
    VL_CONCAT_WWW(3264,2720,544, __Vtemp_55, __Vtemp_51, __Vtemp_54);
    __Vtemp_58[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[0U];
    __Vtemp_58[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[1U];
    __Vtemp_58[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[2U];
    __Vtemp_58[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[3U];
    __Vtemp_58[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[0U] 
                       << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__679__03a544__KET__[4U]);
    __Vtemp_58[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[0U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[1U] 
                                    << 8U));
    __Vtemp_58[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[1U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[2U] 
                                    << 8U));
    __Vtemp_58[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[2U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[3U] 
                                    << 8U));
    __Vtemp_58[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[0U] 
                       << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[3U] 
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[4U] 
                                                  << 8U)));
    __Vtemp_58[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[0U] 
                       >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[1U] 
                                    << 0x10U));
    __Vtemp_58[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[1U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[2U] 
                                      << 0x10U));
    __Vtemp_58[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[2U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[3U] 
                                      << 0x10U));
    __Vtemp_58[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[3U] 
                         >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_58[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                            << 0x18U)));
    __Vtemp_58[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_58[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_58[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[4U] 
                                                   << 0x18U)));
    VL_CONCAT_WWW(3808,3264,544, __Vtemp_59, __Vtemp_55, __Vtemp_58);
    __Vtemp_62[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[0U];
    __Vtemp_62[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[1U];
    __Vtemp_62[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[2U];
    __Vtemp_62[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[3U];
    __Vtemp_62[4U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[0U] 
                       << 8U) | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__135__03a0__KET__[4U]);
    __Vtemp_62[5U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[0U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[1U] 
                                    << 8U));
    __Vtemp_62[6U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[1U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[2U] 
                                    << 8U));
    __Vtemp_62[7U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[2U] 
                       >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[3U] 
                                    << 8U));
    __Vtemp_62[8U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[0U] 
                       << 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[3U] 
                                     >> 0x18U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[4U] 
                                                  << 8U)));
    __Vtemp_62[9U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[0U] 
                       >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[1U] 
                                    << 0x10U));
    __Vtemp_62[0xaU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[1U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[2U] 
                                      << 0x10U));
    __Vtemp_62[0xbU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[2U] 
                         >> 0x10U) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[3U] 
                                      << 0x10U));
    __Vtemp_62[0xcU] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[3U] 
                         >> 0x10U) | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                       << 0x18U) | 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                       << 0x10U)));
    __Vtemp_62[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                     >> 8U)) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                                >> 0x10U)) 
                        | ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                         >> 8U)) | 
                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                            << 0x18U)));
    __Vtemp_62[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                  << 0x18U)));
    __Vtemp_62[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                    >> 8U)) | ((0xff0000U 
                                                & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                   >> 8U)) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                  << 0x18U)));
    __Vtemp_62[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                     >> 8U)) | ((0xff0000U 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                    >> 8U)) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[4U] 
                                                   << 0x18U)));
    VL_CONCAT_WWW(4352,3808,544, __Vtemp_63, __Vtemp_59, __Vtemp_62);
    bufp->fullWData(oldp+46948,(__Vtemp_63),4352);
    bufp->fullCData(oldp+47084,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_ownerp_id_ph3_rsp),7);
    bufp->fullIData(oldp+47085,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_share_vect_rsp_m_ph3),22);
    bufp->fullCData(oldp+47086,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_inactive_st_nxt),2);
    bufp->fullSData(oldp+47087,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__inactive_ctr_nxt),16);
    bufp->fullCData(oldp+47088,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+47089,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__wr_ptr_nxt),5);
    bufp->fullCData(oldp+47090,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt),6);
    bufp->fullBit(oldp+47091,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+47092,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+47093,((2ULL < (0x3ffffffffULL 
                                       & (0x20ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+47094,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[0]),74);
    bufp->fullWData(oldp+47097,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[1]),74);
    bufp->fullWData(oldp+47100,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[2]),74);
    bufp->fullWData(oldp+47103,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[3]),74);
    bufp->fullWData(oldp+47106,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[4]),74);
    bufp->fullWData(oldp+47109,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[5]),74);
    bufp->fullWData(oldp+47112,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[6]),74);
    bufp->fullWData(oldp+47115,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[7]),74);
    bufp->fullWData(oldp+47118,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[8]),74);
    bufp->fullWData(oldp+47121,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[9]),74);
    bufp->fullWData(oldp+47124,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[10]),74);
    bufp->fullWData(oldp+47127,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[11]),74);
    bufp->fullWData(oldp+47130,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[12]),74);
    bufp->fullWData(oldp+47133,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[13]),74);
    bufp->fullWData(oldp+47136,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[14]),74);
    bufp->fullWData(oldp+47139,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[15]),74);
    bufp->fullWData(oldp+47142,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[16]),74);
    bufp->fullWData(oldp+47145,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[17]),74);
    bufp->fullWData(oldp+47148,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[18]),74);
    bufp->fullWData(oldp+47151,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[19]),74);
    bufp->fullWData(oldp+47154,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[20]),74);
    bufp->fullWData(oldp+47157,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[21]),74);
    bufp->fullWData(oldp+47160,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[22]),74);
    bufp->fullWData(oldp+47163,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[23]),74);
    bufp->fullWData(oldp+47166,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[24]),74);
    bufp->fullWData(oldp+47169,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[25]),74);
    bufp->fullWData(oldp+47172,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[26]),74);
    bufp->fullWData(oldp+47175,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[27]),74);
    bufp->fullWData(oldp+47178,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[28]),74);
    bufp->fullWData(oldp+47181,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[29]),74);
    bufp->fullWData(oldp+47184,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[30]),74);
    bufp->fullWData(oldp+47187,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[31]),74);
    bufp->fullIData(oldp+47190,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo),32);
    bufp->fullIData(oldp+47191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf),32);
    bufp->fullBit(oldp+47192,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo)));
    bufp->fullBit(oldp+47193,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf)));
    bufp->fullBit(oldp+47194,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xaU))));
    bufp->fullBit(oldp+47195,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xaU))));
    bufp->fullBit(oldp+47196,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xbU))));
    bufp->fullBit(oldp+47197,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xbU))));
    bufp->fullBit(oldp+47198,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xcU))));
    bufp->fullBit(oldp+47199,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xcU))));
    bufp->fullBit(oldp+47200,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xdU))));
    bufp->fullBit(oldp+47201,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xdU))));
    bufp->fullBit(oldp+47202,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xeU))));
    bufp->fullBit(oldp+47203,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xeU))));
    bufp->fullBit(oldp+47204,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0xfU))));
    bufp->fullBit(oldp+47205,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0xfU))));
    bufp->fullBit(oldp+47206,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x10U))));
    bufp->fullBit(oldp+47207,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x10U))));
    bufp->fullBit(oldp+47208,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x11U))));
    bufp->fullBit(oldp+47209,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x11U))));
    bufp->fullBit(oldp+47210,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x12U))));
    bufp->fullBit(oldp+47211,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x12U))));
    bufp->fullBit(oldp+47212,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x13U))));
    bufp->fullBit(oldp+47213,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x13U))));
    bufp->fullBit(oldp+47214,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 1U))));
    bufp->fullBit(oldp+47215,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 1U))));
    bufp->fullBit(oldp+47216,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x14U))));
    bufp->fullBit(oldp+47217,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x14U))));
    bufp->fullBit(oldp+47218,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x15U))));
    bufp->fullBit(oldp+47219,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x15U))));
    bufp->fullBit(oldp+47220,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x16U))));
    bufp->fullBit(oldp+47221,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x16U))));
    bufp->fullBit(oldp+47222,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x17U))));
    bufp->fullBit(oldp+47223,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x17U))));
    bufp->fullBit(oldp+47224,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x18U))));
    bufp->fullBit(oldp+47225,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x18U))));
    bufp->fullBit(oldp+47226,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x19U))));
    bufp->fullBit(oldp+47227,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x19U))));
    bufp->fullBit(oldp+47228,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+47229,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1aU))));
    bufp->fullBit(oldp+47230,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+47231,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+47232,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+47233,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+47234,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+47235,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+47236,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 2U))));
    bufp->fullBit(oldp+47237,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 2U))));
    bufp->fullBit(oldp+47238,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+47239,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+47240,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                               >> 0x1fU)));
    bufp->fullBit(oldp+47241,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                               >> 0x1fU)));
    bufp->fullBit(oldp+47242,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 3U))));
    bufp->fullBit(oldp+47243,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 3U))));
    bufp->fullBit(oldp+47244,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 4U))));
    bufp->fullBit(oldp+47245,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 4U))));
    bufp->fullBit(oldp+47246,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 5U))));
    bufp->fullBit(oldp+47247,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 5U))));
    bufp->fullBit(oldp+47248,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 6U))));
    bufp->fullBit(oldp+47249,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 6U))));
    bufp->fullBit(oldp+47250,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 7U))));
    bufp->fullBit(oldp+47251,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 7U))));
    bufp->fullBit(oldp+47252,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 8U))));
    bufp->fullBit(oldp+47253,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 8U))));
    bufp->fullBit(oldp+47254,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                     >> 9U))));
    bufp->fullBit(oldp+47255,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                     >> 9U))));
    bufp->fullCData(oldp+47256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_idx),5);
    bufp->fullBit(oldp+47257,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_node_id_found));
    bufp->fullIData(oldp+47258,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_vector),22);
    bufp->fullIData(oldp+47259,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_rsp_dat_nodeid_match_vector),22);
    bufp->fullIData(oldp+47260,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+47261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+47262,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+47263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+47264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+47265,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+47266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+47267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+47268,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+47269,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+47270,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+47271,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+47272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
    bufp->fullWData(oldp+47294,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
    bufp->fullWData(oldp+47316,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
    bufp->fullWData(oldp+47338,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
    bufp->fullWData(oldp+47360,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),686);
    bufp->fullWData(oldp+47382,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),686);
    bufp->fullWData(oldp+47404,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),686);
    bufp->fullWData(oldp+47426,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),686);
    bufp->fullBit(oldp+47448,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__wren_flit_store_fifo));
    bufp->fullBit(oldp+47449,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo));
    bufp->fullBit(oldp+47450,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo_bypass));
    bufp->fullCData(oldp+47451,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
    bufp->fullCData(oldp+47452,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
    bufp->fullCData(oldp+47453,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
    bufp->fullBit(oldp+47454,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+47455,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+47456,((2ULL < (0x3ffffffffULL 
                                       & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullWData(oldp+47457,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
    bufp->fullWData(oldp+47460,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
    bufp->fullWData(oldp+47463,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
    bufp->fullWData(oldp+47466,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
    bufp->fullWData(oldp+47469,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
    bufp->fullWData(oldp+47472,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
    bufp->fullWData(oldp+47475,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
    bufp->fullWData(oldp+47478,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
    bufp->fullBit(oldp+47481,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_txn_valid));
    bufp->fullBit(oldp+47482,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_init_valid));
    bufp->fullBit(oldp+47483,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_from_ap.ready));
    bufp->fullBit(oldp+47484,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__rden_dircache_nxt));
    bufp->fullBit(oldp+47485,((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
    bufp->fullSData(oldp+47486,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc),10);
    bufp->fullSData(oldp+47487,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector),16);
    bufp->fullBit(oldp+47488,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
    bufp->fullWData(oldp+47489,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47521,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullWData(oldp+47522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT____Vcellinp__sig_sram_valid_tag_data__wrdata),69);
    bufp->fullBit(oldp+47525,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xaU))));
    bufp->fullWData(oldp+47526,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47558,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47559,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xbU))));
    bufp->fullWData(oldp+47560,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47592,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47593,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xcU))));
    bufp->fullWData(oldp+47594,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47626,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47627,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xdU))));
    bufp->fullWData(oldp+47628,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47660,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47661,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xeU))));
    bufp->fullWData(oldp+47662,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47694,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47695,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 0xfU))));
    bufp->fullWData(oldp+47696,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47728,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47729,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 1U))));
    bufp->fullWData(oldp+47730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47762,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47763,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 2U))));
    bufp->fullWData(oldp+47764,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47796,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47797,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 3U))));
    bufp->fullWData(oldp+47798,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47830,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47831,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 4U))));
    bufp->fullWData(oldp+47832,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47864,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47865,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 5U))));
    bufp->fullWData(oldp+47866,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47898,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47899,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 6U))));
    bufp->fullWData(oldp+47900,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47932,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47933,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 7U))));
    bufp->fullWData(oldp+47934,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+47966,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+47967,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 8U))));
    bufp->fullWData(oldp+47968,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+48000,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullBit(oldp+48001,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                     >> 9U))));
    bufp->fullWData(oldp+48002,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
    bufp->fullBit(oldp+48034,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
    bufp->fullSData(oldp+48035,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__cacheproc_state_nxt),13);
    bufp->fullSData(oldp+48036,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_one_nxt),16);
    bufp->fullBit(oldp+48037,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_cycle_nxt));
    bufp->fullCData(oldp+48038,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__count_evict_nxt),3);
    bufp->fullBit(oldp+48039,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_fetch_cohc_nxt));
    bufp->fullBit(oldp+48040,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__first_cycle_in_evictend_nxt));
    bufp->fullBit(oldp+48041,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_rden_cache));
    bufp->fullBit(oldp+48042,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated));
    bufp->fullBit(oldp+48043,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated));
    bufp->fullWData(oldp+48044,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc0),686);
    bufp->fullWData(oldp+48066,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc1),686);
    bufp->fullWData(oldp+48088,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc0_from_id_translator),680);
    bufp->fullWData(oldp+48110,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc1_from_id_translator),680);
    bufp->fullBit(oldp+48132,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled));
    bufp->fullBit(oldp+48133,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled));
    bufp->fullBit(oldp+48134,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive));
    bufp->fullBit(oldp+48135,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive_sync));
    bufp->fullBit(oldp+48136,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_reg));
    bufp->fullCData(oldp+48137,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                  << 3U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n)))),4);
    bufp->fullBit(oldp+48138,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__inst_cc_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48139,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48140,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48141,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48142,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_cl0_ic_clk__DOT__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__DOT__sig_src_sync1));
    bufp->fullWData(oldp+48143,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
    bufp->fullWData(oldp+48148,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s),680);
    __Vtemp_64[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[0U];
    __Vtemp_64[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[1U];
    __Vtemp_64[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[2U];
    __Vtemp_64[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[3U];
    __Vtemp_64[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[4U]);
    bufp->fullWData(oldp+48170,(__Vtemp_64),152);
    bufp->fullWData(oldp+48175,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrd_req_s),151);
    bufp->fullWData(oldp+48180,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memwr_req_s),151);
    bufp->fullSData(oldp+48185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__tgt_pm_node_id),11);
    bufp->fullWData(oldp+48186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0U]),151);
    bufp->fullWData(oldp+48191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [1U]),151);
    bufp->fullWData(oldp+48196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [2U]),151);
    bufp->fullWData(oldp+48201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [3U]),151);
    bufp->fullWData(oldp+48206,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [4U]),151);
    bufp->fullWData(oldp+48211,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [5U]),151);
    bufp->fullWData(oldp+48216,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [6U]),151);
    bufp->fullWData(oldp+48221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [7U]),151);
    bufp->fullWData(oldp+48226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [8U]),151);
    bufp->fullWData(oldp+48231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [9U]),151);
    bufp->fullWData(oldp+48236,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xaU]),151);
    bufp->fullWData(oldp+48241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xbU]),151);
    bufp->fullWData(oldp+48246,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xcU]),151);
    bufp->fullWData(oldp+48251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xdU]),151);
    bufp->fullWData(oldp+48256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xeU]),151);
    bufp->fullWData(oldp+48261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                [0xfU]),151);
    bufp->fullWData(oldp+48266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_reqcmdq),156);
    bufp->fullBit(oldp+48271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm));
    bufp->fullBit(oldp+48272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm));
    bufp->fullBit(oldp+48273,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                     & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))))));
    bufp->fullWData(oldp+48274,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[0]),156);
    bufp->fullWData(oldp+48279,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[1]),156);
    bufp->fullWData(oldp+48284,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[2]),156);
    bufp->fullWData(oldp+48289,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[3]),156);
    bufp->fullWData(oldp+48294,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[4]),156);
    bufp->fullWData(oldp+48299,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[5]),156);
    bufp->fullWData(oldp+48304,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[6]),156);
    bufp->fullWData(oldp+48309,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[7]),156);
    bufp->fullBit(oldp+48314,((8U > (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
    bufp->fullBit(oldp+48315,((8U <= (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
    bufp->fullBit(oldp+48316,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc0));
    bufp->fullBit(oldp+48317,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc1));
    bufp->fullBit(oldp+48318,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->fullBit(oldp+48319,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->fullBit(oldp+48320,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->fullBit(oldp+48321,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->fullBit(oldp+48322,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RXSACTIVE) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->fullBit(oldp+48323,(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->fullBit(oldp+48324,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))))));
    bufp->fullBit(oldp+48325,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk));
    bufp->fullBit(oldp+48326,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_tx_hs.req_send)) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_rsp_vc0_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_tx_hs.req_send))) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_rsp_vc1_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_tx_hs.req_send)))))));
    bufp->fullBit(oldp+48327,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_tx_activate_clk));
    bufp->fullBit(oldp+48328,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))))));
    bufp->fullBit(oldp+48329,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk));
    bufp->fullCData(oldp+48330,(((8U & ((~ (((((0U 
                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                               | (0U 
                                                  != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                              | (0U 
                                                 != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                            | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))) 
                                        << 3U)) | (
                                                   (2U 
                                                    & ((~ 
                                                        (((((0U 
                                                             != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                                            | (0U 
                                                               != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                                           | (0U 
                                                              != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                                          | (0U 
                                                             != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                                         | (0U 
                                                            != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (((((0U 
                                                              != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_tx_hs.req_send)) 
                                                             | (0U 
                                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_rsp_vc0_tx_hs.req_send))) 
                                                            | (0U 
                                                               != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_tx_hs.req_send))) 
                                                           | (0U 
                                                              != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_rsp_vc1_tx_hs.req_send))) 
                                                          | (0U 
                                                             != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_tx_hs.req_send)))))))),4);
    bufp->fullCData(oldp+48331,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk) 
                                  << 3U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_tx_activate_clk)))),4);
    bufp->fullCData(oldp+48332,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_rx_intfc_gclk),4);
    bufp->fullCData(oldp+48333,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_tx_intfc_gclk),4);
    bufp->fullBit(oldp+48334,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__activate_cc_l3_or_mn));
    bufp->fullBit(oldp+48335,(((((((0U != (0x1ffU & 
                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc0
                                            [0U] >> 1U))) 
                                   | (0U != (0x1ffU 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc1
                                                [0U] 
                                                >> 1U)))) 
                                  | (0U != (0x1ffU 
                                            & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc0
                                               [0U] 
                                               >> 1U)))) 
                                 | (0U != (0x1ffU & 
                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc1
                                            [0U] >> 1U)))) 
                                | (0U != (0x1ffU & 
                                          (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc0
                                           [0U] >> 1U)))) 
                               | (0U != (0x1ffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc1
                                                   [0U] 
                                                   >> 1U))))));
    bufp->fullBit(oldp+48336,(((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc0_rx_hs.recv_req)) 
                                 | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc1_rx_hs.recv_req))) 
                                | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_req))) 
                               | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_req)))));
    bufp->fullBit(oldp+48337,((1U & ((~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                            | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                           | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))) 
                                     & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                            | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                           | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send))))))));
    bufp->fullBit(oldp+48338,((1U & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->fullBit(oldp+48339,((1U & (~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                           | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->fullBit(oldp+48340,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_RSPLCRDV));
    bufp->fullBit(oldp+48341,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
                                >> 0x1cU) & (((0xfffffffU 
                                               & (IData)(
                                                         (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd 
                                                          >> 0x18U))) 
                                              >= (0xfffffffU 
                                                  & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_base_all_pm_0__DOT__data_stored)) 
                                             & ((0xfffffffU 
                                                 & (IData)(
                                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd 
                                                            >> 0x18U))) 
                                                < (0x1fffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffffffU 
                                                       & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored))))))));
    bufp->fullBit(oldp+48342,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+48343,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+48344,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullBit(oldp+48345,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update));
    bufp->fullCData(oldp+48346,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__credits_cnt_nxt),5);
    bufp->fullCData(oldp+48347,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__init_crdt_ctr_nxt),5);
    bufp->fullBit(oldp+48348,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullBit(oldp+48349,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullCData(oldp+48350,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407)))))),5);
    bufp->fullBit(oldp+48351,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                               | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->fullBit(oldp+48352,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                               | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->fullSData(oldp+48353,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))),10);
    bufp->fullSData(oldp+48354,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))),10);
    bufp->fullBit(oldp+48355,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+48356,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))) 
                               | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                                   & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))))));
    bufp->fullSData(oldp+48357,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))),10);
    bufp->fullSData(oldp+48358,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                           & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))),10);
    bufp->fullCData(oldp+48359,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+48360,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_1st) 
                               | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_2nd))));
    if (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__snp_tx_snpflitv) {
        __Vtemp_66[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[0U];
        __Vtemp_66[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[1U];
        __Vtemp_66[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[2U];
        __Vtemp_66[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[3U];
        __Vtemp_66[4U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__txflit_snpreq_memreq[4U];
    } else {
        __Vtemp_66[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[0U];
        __Vtemp_66[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[1U];
        __Vtemp_66[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[2U];
        __Vtemp_66[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[3U];
        __Vtemp_66[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT____VdfgRegularize_h6e4e874f_0_101[4U]);
    }
    bufp->fullWData(oldp+48361,(__Vtemp_66),152);
    bufp->fullBit(oldp+48366,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                      & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                         >> 7U)) | 
                                     ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                          >> 7U)) & 
                                      (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)))))));
    bufp->fullBit(oldp+48367,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                      & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))) 
                                     | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                            >> 7U)) 
                                        | ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                               >> 7U)) 
                                           & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm))))))));
    bufp->fullBit(oldp+48368,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update) 
                                  | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update)))));
    bufp->fullBit(oldp+48369,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update))));
    bufp->fullBit(oldp+48370,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc) 
                                  | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update)))));
    bufp->fullBit(oldp+48371,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update))));
    bufp->fullCData(oldp+48372,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_resp_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+48373,((1U & ((~ ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                         | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3reqflit_fifo_full) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cc_reqflit_valid_compdata)))) 
                                     | ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                        & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid)) 
                                           & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__available_credits))))))));
    bufp->fullCData(oldp+48374,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->fullBit(oldp+48375,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                  == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc
                                                [vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__rd_ptr][2U] 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+48376,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                  == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__sel_winner_entry[2U] 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+48377,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                  == (0x3ffU & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmdvalid_evict)
                                                  ? 
                                                 vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__evict_req_s[2U]
                                                  : 
                                                 vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmd[2U]) 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+48378,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
                                >> 0x1cU) & (((0xfffffffU 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                              >= (0xfffffffU 
                                                  & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_base_all_pm_0__DOT__data_stored)) 
                                             & ((0xfffffffU 
                                                 & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                                < (0x1fffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffffffU 
                                                       & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored))))))));
    bufp->fullSData(oldp+48379,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2),11);
    bufp->fullBit(oldp+48380,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored 
                                >> 0x1cU) & (((0xfffffffU 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                              >= (0xfffffffU 
                                                  & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_base_all_pm_0__DOT__data_stored)) 
                                             & ((0xfffffffU 
                                                 & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req_nxt[3U]) 
                                                < (0x1fffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xfffffffU 
                                                       & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored))))))));
    bufp->fullSData(oldp+48381,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2),11);
    bufp->fullSData(oldp+48382,(((0x80U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req[4U])
                                  ? (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2)
                                  : (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2))),11);
    bufp->fullCData(oldp+48383,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated) 
                                  << 2U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_collnq_gated) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated)))),3);
    bufp->fullBit(oldp+48384,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_is_inactive_nxt));
    bufp->fullCData(oldp+48385,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                  << 3U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n)))),4);
    bufp->fullBit(oldp+48386,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48387,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+48388,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+48389,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+48390,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+48391,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48392,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+48393,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+48394,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+48395,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+48396,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->fullBit(oldp+48397,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+48398,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+48399,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->fullBit(oldp+48400,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->fullBit(oldp+48401,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullBit(oldp+48402,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+48403,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                       >> 3U)) != (1U 
                                                   & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                      >> 3U))) 
                               & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                  == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->fullBit(oldp+48404,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                               == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->fullBit(oldp+48405,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                         >> 0xfU) : 
                                     ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo)
                                       ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                          [(7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                          >> 0xfU) : 
                                      (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                       >> 0xfU))))));
    bufp->fullBit(oldp+48406,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                       >> 3U)) != (1U 
                                                   & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                      >> 3U))) 
                               & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                  == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->fullBit(oldp+48407,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                               == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->fullBit(oldp+48408,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__send_working_update)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->fullCData(oldp+48409,((3U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                        ? ((0x800000U 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U])
                                            ? 0U : 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                             << 0xfU) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                               >> 0x11U)))
                                        : ((0x800000U 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[4U])
                                            ? 0U : 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                             << 0x1cU) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                               >> 4U)))))),2);
    bufp->fullBit(oldp+48410,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__tgt_clusterid_fifoout)) 
                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__assert_req))));
    bufp->fullBit(oldp+48411,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                      ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[0U] 
                                         >> 4U) : (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                   >> 4U)))));
    bufp->fullCData(oldp+48412,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410)))))),5);
    bufp->fullBit(oldp+48413,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+48414,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48415,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48416,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+48417,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+48418,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->fullBit(oldp+48419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->fullBit(oldp+48420,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->fullSData(oldp+48421,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                                [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                        >> 0x1aU))]),12);
    bufp->fullSData(oldp+48422,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                                [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                        >> 0x1aU))]),12);
    bufp->fullBit(oldp+48423,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                               & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                      >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU)))) 
                                  | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                     & (0x40U == (0x7c0U 
                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->fullBit(oldp+48424,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                               & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                      >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU)))) 
                                  | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                     & (0x40U == (0x7c0U 
                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->fullBit(oldp+48425,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullBit(oldp+48426,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullBit(oldp+48427,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                  & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                 << 6U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                   >> 0x1aU))) 
                                     == (0xfffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+48428,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullCData(oldp+48429,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48430,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48431,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+48432,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->fullBit(oldp+48433,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->fullCData(oldp+48434,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+48435,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+48436,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->fullBit(oldp+48437,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->fullBit(oldp+48438,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->fullBit(oldp+48439,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->fullBit(oldp+48440,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->fullCData(oldp+48441,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+48442,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+48443,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426)))))),5);
    bufp->fullBit(oldp+48444,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+48445,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48446,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48447,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+48448,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+48449,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+48450,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullCData(oldp+48451,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+48452,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+48453,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+48454,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullBit(oldp+48455,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+48456,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48457,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48458,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc1_rx_hs.recv_vld))),10);
    __Vtemp_75[0U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_TX_SNPLCRDV));
    __Vtemp_75[1U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                                    << 1U));
    __Vtemp_75[2U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                                    << 1U));
    __Vtemp_75[3U] = ((0xffffe000U & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp) 
                                       << 0xeU) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflitv_from_tx_top) 
                                                   << 0xdU))) 
                      | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                          >> 0x1fU) | (0x1ffeU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[3U] 
                                                  << 1U))));
    bufp->fullWData(oldp+48459,(__Vtemp_75),111);
    bufp->fullCData(oldp+48463,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                  << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RXSACTIVE))),2);
    bufp->fullCData(oldp+48464,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->fullBit(oldp+48465,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->fullBit(oldp+48466,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->fullSData(oldp+48467,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                                [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                        >> 0x1aU))]),12);
    bufp->fullSData(oldp+48468,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                                [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                        >> 0x1aU))]),12);
    bufp->fullBit(oldp+48469,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                               & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                      >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU)))) 
                                  | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                     & (0x40U == (0x7c0U 
                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->fullBit(oldp+48470,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                               & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                      >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU)))) 
                                  | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                     & (0x40U == (0x7c0U 
                                                  & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->fullBit(oldp+48471,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullBit(oldp+48472,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullBit(oldp+48473,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                  & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                 << 6U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                   >> 0x1aU))) 
                                     == (0xfffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+48474,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                               & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                  & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                >> 1U)) 
                                     == (0xfffU & (
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                    << 6U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                      >> 0x1aU))))))));
    bufp->fullCData(oldp+48475,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48476,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48477,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+48478,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->fullBit(oldp+48479,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->fullCData(oldp+48480,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->fullCData(oldp+48481,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+48482,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->fullBit(oldp+48483,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->fullBit(oldp+48484,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->fullBit(oldp+48485,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->fullBit(oldp+48486,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->fullCData(oldp+48487,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+48488,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+48489,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412)))))),5);
    bufp->fullBit(oldp+48490,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+48491,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48492,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48493,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+48494,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+48495,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+48496,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullCData(oldp+48497,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->fullBit(oldp+48498,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+48499,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->fullBit(oldp+48500,((2ULL < (0x3ffffffffULL 
                                       & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->fullBit(oldp+48501,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+48502,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48503,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48504,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))),10);
    __Vtemp_80[0U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_TX_SNPLCRDV));
    __Vtemp_80[1U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[0U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                                    << 1U));
    __Vtemp_80[2U] = ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[1U] 
                       >> 0x1fU) | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                                    << 1U));
    __Vtemp_80[3U] = ((0xffffe000U & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp) 
                                       << 0xeU) | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflitv_from_tx_top) 
                                                   << 0xdU))) 
                      | ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[2U] 
                          >> 0x1fU) | (0x1ffeU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpflit_from_tx_top[3U] 
                                                  << 1U))));
    bufp->fullWData(oldp+48505,(__Vtemp_80),111);
    bufp->fullCData(oldp+48509,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                  << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE))),2);
    bufp->fullSData(oldp+48510,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                            >> 0x1aU))
                                  ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                 [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                   >> 0x1aU)] : 0U)),12);
    bufp->fullSData(oldp+48511,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                            >> 0x1aU))
                                  ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                 [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                   >> 0x1aU)] : 0U)),12);
    bufp->fullSData(oldp+48512,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                            ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                            : ((0x22U 
                                                >= 
                                                (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU)]
                                                : 0U)))),12);
    bufp->fullSData(oldp+48513,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                            ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                << 6U) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                            : ((0x22U 
                                                >= 
                                                (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU)]
                                                : 0U)))),12);
    bufp->fullSData(oldp+48514,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                            ? ((0x22U 
                                                >= 
                                                (0x3fU 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                    >> 1U)))
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                               [(0x3fU 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                    >> 1U))]
                                                : 0U)
                                            : ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                << 0x1fU) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                                  >> 1U))))),12);
    bufp->fullSData(oldp+48515,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                            ? ((0x22U 
                                                >= 
                                                (0x3fU 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                    >> 1U)))
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                               [(0x3fU 
                                                 & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                    >> 1U))]
                                                : 0U)
                                            : ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                << 0x1fU) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                  >> 1U))))),12);
    bufp->fullBit(oldp+48516,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__flitv_out_mux) 
                               | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__unused_signal) 
                                  | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__TX_DATFLITV_mux)))));
    bufp->fullBit(oldp+48517,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_addr_translator_0__DOT__addr_translator_enabled__DOT__unused_signal))));
    bufp->fullBit(oldp+48518,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc0_dat_rsp_cntr));
    bufp->fullBit(oldp+48519,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc1_dat_rsp_cntr));
    bufp->fullSData(oldp+48520,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_dat_idx_to_clr),12);
    bufp->fullSData(oldp+48521,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_dat_idx_to_clr),12);
    bufp->fullCData(oldp+48522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48523,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48524,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->fullCData(oldp+48525,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->fullBit(oldp+48526,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->fullBit(oldp+48527,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->fullBit(oldp+48528,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                               & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                  & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->fullBit(oldp+48529,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->fullBit(oldp+48530,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->fullCData(oldp+48531,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+48532,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt),4);
    bufp->fullCData(oldp+48533,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439))
                                           ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              - (IData)(1U))
                                           : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                              + (1U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439)))))),5);
    bufp->fullBit(oldp+48534,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullBit(oldp+48535,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48536,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48537,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->fullCData(oldp+48538,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullCData(oldp+48539,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->fullBit(oldp+48540,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->fullBit(oldp+48541,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                               | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                   >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->fullBit(oldp+48542,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))) 
                               | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                         & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))))));
    bufp->fullSData(oldp+48543,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->fullSData(oldp+48544,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                 & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))),10);
    bufp->fullBit(oldp+48545,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.vld_send));
    bufp->fullBit(oldp+48546,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_tx_hs.vld_send));
}
