// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vsig_topology_top__Syms.h"


extern const VlWide<20>/*639:0*/ Vsig_topology_top__ConstPool__CONST_h3419a097_0;

void Vsig_topology_top___024root__trace_chg_0_sub_4(Vsig_topology_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_chg_0_sub_4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 43665);
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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+0,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                    >> 7U))));
        bufp->chgIData(oldp+1,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_121__DOT__i),32);
        bufp->chgBit(oldp+2,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                    >> 8U))));
        bufp->chgIData(oldp+3,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_122__DOT__i),32);
        bufp->chgBit(oldp+4,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                    >> 9U))));
        bufp->chgIData(oldp+5,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_123__DOT__i),32);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                    >> 0xaU))));
        bufp->chgIData(oldp+7,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_124__DOT__i),32);
        bufp->chgBit(oldp+8,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                    >> 0xbU))));
        bufp->chgIData(oldp+9,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_125__DOT__i),32);
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xcU))));
        bufp->chgIData(oldp+11,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_126__DOT__i),32);
        bufp->chgBit(oldp+12,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+13,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_127__DOT__i),32);
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+15,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_128__DOT__i),32);
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+17,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_129__DOT__i),32);
        bufp->chgBit(oldp+18,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+19,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_13__DOT__i),32);
        bufp->chgBit(oldp+20,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x10U))));
        bufp->chgIData(oldp+21,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_130__DOT__i),32);
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x11U))));
        bufp->chgIData(oldp+23,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_131__DOT__i),32);
        bufp->chgBit(oldp+24,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x12U))));
        bufp->chgIData(oldp+25,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_132__DOT__i),32);
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x13U))));
        bufp->chgIData(oldp+27,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_133__DOT__i),32);
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x14U))));
        bufp->chgIData(oldp+29,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_134__DOT__i),32);
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x15U))));
        bufp->chgIData(oldp+31,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_135__DOT__i),32);
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x16U))));
        bufp->chgIData(oldp+33,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_136__DOT__i),32);
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x17U))));
        bufp->chgIData(oldp+35,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_137__DOT__i),32);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x18U))));
        bufp->chgIData(oldp+37,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_138__DOT__i),32);
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x19U))));
        bufp->chgIData(oldp+39,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_139__DOT__i),32);
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1cU))));
        bufp->chgIData(oldp+41,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_14__DOT__i),32);
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1aU))));
        bufp->chgIData(oldp+43,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_140__DOT__i),32);
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1bU))));
        bufp->chgIData(oldp+45,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_141__DOT__i),32);
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1cU))));
        bufp->chgIData(oldp+47,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_142__DOT__i),32);
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1dU))));
        bufp->chgIData(oldp+49,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_143__DOT__i),32);
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+51,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_144__DOT__i),32);
        bufp->chgBit(oldp+52,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x74U] 
                               >> 0x1fU)));
        bufp->chgIData(oldp+53,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_145__DOT__i),32);
        bufp->chgBit(oldp+54,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U])));
        bufp->chgIData(oldp+55,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_146__DOT__i),32);
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 1U))));
        bufp->chgIData(oldp+57,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_147__DOT__i),32);
        bufp->chgBit(oldp+58,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 2U))));
        bufp->chgIData(oldp+59,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_148__DOT__i),32);
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 3U))));
        bufp->chgIData(oldp+61,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_149__DOT__i),32);
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1dU))));
        bufp->chgIData(oldp+63,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_15__DOT__i),32);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 4U))));
        bufp->chgIData(oldp+65,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_150__DOT__i),32);
        bufp->chgBit(oldp+66,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 5U))));
        bufp->chgIData(oldp+67,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_151__DOT__i),32);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 6U))));
        bufp->chgIData(oldp+69,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_152__DOT__i),32);
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 7U))));
        bufp->chgIData(oldp+71,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_153__DOT__i),32);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 8U))));
        bufp->chgIData(oldp+73,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_154__DOT__i),32);
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 9U))));
        bufp->chgIData(oldp+75,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_155__DOT__i),32);
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+77,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_156__DOT__i),32);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xbU))));
        bufp->chgIData(oldp+79,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_157__DOT__i),32);
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xcU))));
        bufp->chgIData(oldp+81,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_158__DOT__i),32);
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xdU))));
        bufp->chgIData(oldp+83,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_159__DOT__i),32);
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+85,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_16__DOT__i),32);
        bufp->chgBit(oldp+86,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+87,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_160__DOT__i),32);
        bufp->chgBit(oldp+88,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0xfU))));
        bufp->chgIData(oldp+89,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_161__DOT__i),32);
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x10U))));
        bufp->chgIData(oldp+91,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_162__DOT__i),32);
        bufp->chgBit(oldp+92,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x11U))));
        bufp->chgIData(oldp+93,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_163__DOT__i),32);
        bufp->chgBit(oldp+94,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x12U))));
        bufp->chgIData(oldp+95,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_164__DOT__i),32);
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x13U))));
        bufp->chgIData(oldp+97,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_165__DOT__i),32);
        bufp->chgBit(oldp+98,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                     >> 0x14U))));
        bufp->chgIData(oldp+99,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_166__DOT__i),32);
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+101,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_167__DOT__i),32);
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+103,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_168__DOT__i),32);
        bufp->chgBit(oldp+104,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+105,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_169__DOT__i),32);
        bufp->chgBit(oldp+106,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+107,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_17__DOT__i),32);
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+109,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_170__DOT__i),32);
        bufp->chgBit(oldp+110,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+111,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_171__DOT__i),32);
        bufp->chgBit(oldp+112,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+113,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_172__DOT__i),32);
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+115,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_173__DOT__i),32);
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+117,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_174__DOT__i),32);
        bufp->chgBit(oldp+118,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+119,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_175__DOT__i),32);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+121,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_176__DOT__i),32);
        bufp->chgBit(oldp+122,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x75U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+123,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_177__DOT__i),32);
        bufp->chgBit(oldp+124,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U])));
        bufp->chgIData(oldp+125,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_178__DOT__i),32);
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 1U))));
        bufp->chgIData(oldp+127,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_179__DOT__i),32);
        bufp->chgBit(oldp+128,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U])));
        bufp->chgIData(oldp+129,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_18__DOT__i),32);
        bufp->chgBit(oldp+130,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 2U))));
        bufp->chgIData(oldp+131,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_180__DOT__i),32);
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 3U))));
        bufp->chgIData(oldp+133,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_181__DOT__i),32);
        bufp->chgBit(oldp+134,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 4U))));
        bufp->chgIData(oldp+135,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_182__DOT__i),32);
        bufp->chgBit(oldp+136,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 5U))));
        bufp->chgIData(oldp+137,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_183__DOT__i),32);
        bufp->chgBit(oldp+138,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 6U))));
        bufp->chgIData(oldp+139,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_184__DOT__i),32);
        bufp->chgBit(oldp+140,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 7U))));
        bufp->chgIData(oldp+141,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_185__DOT__i),32);
        bufp->chgBit(oldp+142,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 8U))));
        bufp->chgIData(oldp+143,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_186__DOT__i),32);
        bufp->chgBit(oldp+144,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 9U))));
        bufp->chgIData(oldp+145,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_187__DOT__i),32);
        bufp->chgBit(oldp+146,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+147,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_188__DOT__i),32);
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+149,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_189__DOT__i),32);
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 1U))));
        bufp->chgIData(oldp+151,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_19__DOT__i),32);
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+153,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_190__DOT__i),32);
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+155,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_191__DOT__i),32);
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+157,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_192__DOT__i),32);
        bufp->chgBit(oldp+158,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+159,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_193__DOT__i),32);
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+161,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_194__DOT__i),32);
        bufp->chgBit(oldp+162,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+163,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_195__DOT__i),32);
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+165,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_196__DOT__i),32);
        bufp->chgBit(oldp+166,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+167,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_197__DOT__i),32);
        bufp->chgBit(oldp+168,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+169,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_198__DOT__i),32);
        bufp->chgBit(oldp+170,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+171,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_199__DOT__i),32);
        bufp->chgBit(oldp+172,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+173,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_2__DOT__i),32);
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 2U))));
        bufp->chgIData(oldp+175,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_20__DOT__i),32);
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+177,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_200__DOT__i),32);
        bufp->chgBit(oldp+178,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+179,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_201__DOT__i),32);
        bufp->chgBit(oldp+180,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+181,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_202__DOT__i),32);
        bufp->chgBit(oldp+182,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+183,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_203__DOT__i),32);
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+185,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_204__DOT__i),32);
        bufp->chgBit(oldp+186,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+187,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_205__DOT__i),32);
        bufp->chgBit(oldp+188,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+189,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_206__DOT__i),32);
        bufp->chgBit(oldp+190,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+191,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_207__DOT__i),32);
        bufp->chgBit(oldp+192,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+193,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_208__DOT__i),32);
        bufp->chgBit(oldp+194,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x76U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+195,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_209__DOT__i),32);
        bufp->chgBit(oldp+196,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 3U))));
        bufp->chgIData(oldp+197,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_21__DOT__i),32);
        bufp->chgBit(oldp+198,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U])));
        bufp->chgIData(oldp+199,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_210__DOT__i),32);
        bufp->chgBit(oldp+200,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 1U))));
        bufp->chgIData(oldp+201,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_211__DOT__i),32);
        bufp->chgBit(oldp+202,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 2U))));
        bufp->chgIData(oldp+203,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_212__DOT__i),32);
        bufp->chgBit(oldp+204,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 3U))));
        bufp->chgIData(oldp+205,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_213__DOT__i),32);
        bufp->chgBit(oldp+206,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 4U))));
        bufp->chgIData(oldp+207,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_214__DOT__i),32);
        bufp->chgBit(oldp+208,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 5U))));
        bufp->chgIData(oldp+209,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_215__DOT__i),32);
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 6U))));
        bufp->chgIData(oldp+211,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_216__DOT__i),32);
        bufp->chgBit(oldp+212,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 7U))));
        bufp->chgIData(oldp+213,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_217__DOT__i),32);
        bufp->chgBit(oldp+214,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 8U))));
        bufp->chgIData(oldp+215,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_218__DOT__i),32);
        bufp->chgBit(oldp+216,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 9U))));
        bufp->chgIData(oldp+217,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_219__DOT__i),32);
        bufp->chgBit(oldp+218,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 4U))));
        bufp->chgIData(oldp+219,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_22__DOT__i),32);
        bufp->chgBit(oldp+220,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+221,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_220__DOT__i),32);
        bufp->chgBit(oldp+222,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+223,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_221__DOT__i),32);
        bufp->chgBit(oldp+224,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+225,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_222__DOT__i),32);
        bufp->chgBit(oldp+226,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+227,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_223__DOT__i),32);
        bufp->chgBit(oldp+228,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+229,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_224__DOT__i),32);
        bufp->chgBit(oldp+230,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+231,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_225__DOT__i),32);
        bufp->chgBit(oldp+232,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+233,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_226__DOT__i),32);
        bufp->chgBit(oldp+234,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+235,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_227__DOT__i),32);
        bufp->chgBit(oldp+236,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+237,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_228__DOT__i),32);
        bufp->chgBit(oldp+238,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+239,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_229__DOT__i),32);
        bufp->chgBit(oldp+240,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 5U))));
        bufp->chgIData(oldp+241,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_23__DOT__i),32);
        bufp->chgBit(oldp+242,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+243,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_230__DOT__i),32);
        bufp->chgBit(oldp+244,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+245,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_231__DOT__i),32);
        bufp->chgBit(oldp+246,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+247,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_232__DOT__i),32);
        bufp->chgBit(oldp+248,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+249,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_233__DOT__i),32);
        bufp->chgBit(oldp+250,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+251,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_234__DOT__i),32);
        bufp->chgBit(oldp+252,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+253,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_235__DOT__i),32);
        bufp->chgBit(oldp+254,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+255,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_236__DOT__i),32);
        bufp->chgBit(oldp+256,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+257,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_237__DOT__i),32);
        bufp->chgBit(oldp+258,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+259,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_238__DOT__i),32);
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+261,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_239__DOT__i),32);
        bufp->chgBit(oldp+262,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 6U))));
        bufp->chgIData(oldp+263,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_24__DOT__i),32);
        bufp->chgBit(oldp+264,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+265,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_240__DOT__i),32);
        bufp->chgBit(oldp+266,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x77U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+267,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_241__DOT__i),32);
        bufp->chgBit(oldp+268,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U])));
        bufp->chgIData(oldp+269,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_242__DOT__i),32);
        bufp->chgBit(oldp+270,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 1U))));
        bufp->chgIData(oldp+271,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_243__DOT__i),32);
        bufp->chgBit(oldp+272,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 2U))));
        bufp->chgIData(oldp+273,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_244__DOT__i),32);
        bufp->chgBit(oldp+274,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 3U))));
        bufp->chgIData(oldp+275,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_245__DOT__i),32);
        bufp->chgBit(oldp+276,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 4U))));
        bufp->chgIData(oldp+277,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_246__DOT__i),32);
        bufp->chgBit(oldp+278,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 5U))));
        bufp->chgIData(oldp+279,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_247__DOT__i),32);
        bufp->chgBit(oldp+280,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 6U))));
        bufp->chgIData(oldp+281,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_248__DOT__i),32);
        bufp->chgBit(oldp+282,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 7U))));
        bufp->chgIData(oldp+283,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_249__DOT__i),32);
        bufp->chgBit(oldp+284,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 7U))));
        bufp->chgIData(oldp+285,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_25__DOT__i),32);
        bufp->chgBit(oldp+286,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 8U))));
        bufp->chgIData(oldp+287,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_250__DOT__i),32);
        bufp->chgBit(oldp+288,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 9U))));
        bufp->chgIData(oldp+289,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_251__DOT__i),32);
        bufp->chgBit(oldp+290,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+291,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_252__DOT__i),32);
        bufp->chgBit(oldp+292,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+293,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_253__DOT__i),32);
        bufp->chgBit(oldp+294,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+295,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_254__DOT__i),32);
        bufp->chgBit(oldp+296,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+297,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_255__DOT__i),32);
        bufp->chgBit(oldp+298,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+299,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_256__DOT__i),32);
        bufp->chgBit(oldp+300,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 8U))));
        bufp->chgIData(oldp+301,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_26__DOT__i),32);
        bufp->chgBit(oldp+302,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 9U))));
        bufp->chgIData(oldp+303,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_27__DOT__i),32);
        bufp->chgBit(oldp+304,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+305,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_28__DOT__i),32);
        bufp->chgBit(oldp+306,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+307,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_29__DOT__i),32);
        bufp->chgBit(oldp+308,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+309,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_3__DOT__i),32);
        bufp->chgBit(oldp+310,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+311,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_30__DOT__i),32);
        bufp->chgBit(oldp+312,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+313,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_31__DOT__i),32);
        bufp->chgBit(oldp+314,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+315,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_32__DOT__i),32);
        bufp->chgBit(oldp+316,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+317,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_33__DOT__i),32);
        bufp->chgBit(oldp+318,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+319,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_34__DOT__i),32);
        bufp->chgBit(oldp+320,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+321,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_35__DOT__i),32);
        bufp->chgBit(oldp+322,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+323,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_36__DOT__i),32);
        bufp->chgBit(oldp+324,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+325,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_37__DOT__i),32);
        bufp->chgBit(oldp+326,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+327,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_38__DOT__i),32);
        bufp->chgBit(oldp+328,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+329,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_39__DOT__i),32);
        bufp->chgBit(oldp+330,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+331,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_4__DOT__i),32);
        bufp->chgBit(oldp+332,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+333,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_40__DOT__i),32);
        bufp->chgBit(oldp+334,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+335,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_41__DOT__i),32);
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+337,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_42__DOT__i),32);
        bufp->chgBit(oldp+338,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+339,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_43__DOT__i),32);
        bufp->chgBit(oldp+340,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+341,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_44__DOT__i),32);
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+343,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_45__DOT__i),32);
        bufp->chgBit(oldp+344,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+345,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_46__DOT__i),32);
        bufp->chgBit(oldp+346,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+347,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_47__DOT__i),32);
        bufp->chgBit(oldp+348,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+349,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_48__DOT__i),32);
        bufp->chgBit(oldp+350,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x71U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+351,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_49__DOT__i),32);
        bufp->chgBit(oldp+352,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+353,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_5__DOT__i),32);
        bufp->chgBit(oldp+354,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U])));
        bufp->chgIData(oldp+355,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_50__DOT__i),32);
        bufp->chgBit(oldp+356,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 1U))));
        bufp->chgIData(oldp+357,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_51__DOT__i),32);
        bufp->chgBit(oldp+358,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 2U))));
        bufp->chgIData(oldp+359,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_52__DOT__i),32);
        bufp->chgBit(oldp+360,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 3U))));
        bufp->chgIData(oldp+361,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_53__DOT__i),32);
        bufp->chgBit(oldp+362,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 4U))));
        bufp->chgIData(oldp+363,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_54__DOT__i),32);
        bufp->chgBit(oldp+364,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 5U))));
        bufp->chgIData(oldp+365,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_55__DOT__i),32);
        bufp->chgBit(oldp+366,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 6U))));
        bufp->chgIData(oldp+367,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_56__DOT__i),32);
        bufp->chgBit(oldp+368,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 7U))));
        bufp->chgIData(oldp+369,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_57__DOT__i),32);
        bufp->chgBit(oldp+370,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 8U))));
        bufp->chgIData(oldp+371,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_58__DOT__i),32);
        bufp->chgBit(oldp+372,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 9U))));
        bufp->chgIData(oldp+373,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_59__DOT__i),32);
        bufp->chgBit(oldp+374,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+375,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_6__DOT__i),32);
        bufp->chgBit(oldp+376,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+377,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_60__DOT__i),32);
        bufp->chgBit(oldp+378,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+379,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_61__DOT__i),32);
        bufp->chgBit(oldp+380,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+381,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_62__DOT__i),32);
        bufp->chgBit(oldp+382,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+383,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_63__DOT__i),32);
        bufp->chgBit(oldp+384,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+385,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_64__DOT__i),32);
        bufp->chgBit(oldp+386,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+387,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_65__DOT__i),32);
        bufp->chgBit(oldp+388,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+389,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_66__DOT__i),32);
        bufp->chgBit(oldp+390,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+391,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_67__DOT__i),32);
        bufp->chgBit(oldp+392,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+393,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_68__DOT__i),32);
        bufp->chgBit(oldp+394,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+395,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_69__DOT__i),32);
        bufp->chgBit(oldp+396,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+397,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_7__DOT__i),32);
        bufp->chgBit(oldp+398,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+399,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_70__DOT__i),32);
        bufp->chgBit(oldp+400,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+401,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_71__DOT__i),32);
        bufp->chgBit(oldp+402,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+403,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_72__DOT__i),32);
        bufp->chgBit(oldp+404,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+405,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_73__DOT__i),32);
        bufp->chgBit(oldp+406,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+407,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_74__DOT__i),32);
        bufp->chgBit(oldp+408,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+409,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_75__DOT__i),32);
        bufp->chgBit(oldp+410,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+411,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_76__DOT__i),32);
        bufp->chgBit(oldp+412,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+413,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_77__DOT__i),32);
        bufp->chgBit(oldp+414,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+415,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_78__DOT__i),32);
        bufp->chgBit(oldp+416,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+417,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_79__DOT__i),32);
        bufp->chgBit(oldp+418,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+419,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_8__DOT__i),32);
        bufp->chgBit(oldp+420,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+421,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_80__DOT__i),32);
        bufp->chgBit(oldp+422,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x72U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+423,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_81__DOT__i),32);
        bufp->chgBit(oldp+424,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U])));
        bufp->chgIData(oldp+425,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_82__DOT__i),32);
        bufp->chgBit(oldp+426,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 1U))));
        bufp->chgIData(oldp+427,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_83__DOT__i),32);
        bufp->chgBit(oldp+428,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 2U))));
        bufp->chgIData(oldp+429,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_84__DOT__i),32);
        bufp->chgBit(oldp+430,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 3U))));
        bufp->chgIData(oldp+431,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_85__DOT__i),32);
        bufp->chgBit(oldp+432,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 4U))));
        bufp->chgIData(oldp+433,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_86__DOT__i),32);
        bufp->chgBit(oldp+434,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 5U))));
        bufp->chgIData(oldp+435,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_87__DOT__i),32);
        bufp->chgBit(oldp+436,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 6U))));
        bufp->chgIData(oldp+437,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_88__DOT__i),32);
        bufp->chgBit(oldp+438,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 7U))));
        bufp->chgIData(oldp+439,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_89__DOT__i),32);
        bufp->chgBit(oldp+440,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x70U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+441,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_9__DOT__i),32);
        bufp->chgBit(oldp+442,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 8U))));
        bufp->chgIData(oldp+443,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_90__DOT__i),32);
        bufp->chgBit(oldp+444,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 9U))));
        bufp->chgIData(oldp+445,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_91__DOT__i),32);
        bufp->chgBit(oldp+446,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+447,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_92__DOT__i),32);
        bufp->chgBit(oldp+448,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+449,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_93__DOT__i),32);
        bufp->chgBit(oldp+450,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+451,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_94__DOT__i),32);
        bufp->chgBit(oldp+452,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+453,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_95__DOT__i),32);
        bufp->chgBit(oldp+454,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+455,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_96__DOT__i),32);
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+457,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_97__DOT__i),32);
        bufp->chgBit(oldp+458,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+459,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_98__DOT__i),32);
        bufp->chgBit(oldp+460,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x73U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+461,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_99__DOT__i),32);
        bufp->chgBit(oldp+462,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U])));
        bufp->chgIData(oldp+463,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__data_stored),32);
        bufp->chgIData(oldp+464,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_0__DOT__i),32);
        bufp->chgBit(oldp+465,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 1U))));
        bufp->chgIData(oldp+466,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__data_stored),32);
        bufp->chgIData(oldp+467,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_1__DOT__i),32);
        bufp->chgBit(oldp+468,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+469,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__data_stored),32);
        bufp->chgIData(oldp+470,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_10__DOT__i),32);
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 4U))));
        bufp->chgIData(oldp+472,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__data_stored),32);
        bufp->chgIData(oldp+473,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_100__DOT__i),32);
        bufp->chgBit(oldp+474,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 5U))));
        bufp->chgIData(oldp+475,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__data_stored),32);
        bufp->chgIData(oldp+476,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_101__DOT__i),32);
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 6U))));
        bufp->chgIData(oldp+478,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__data_stored),32);
        bufp->chgIData(oldp+479,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_102__DOT__i),32);
        bufp->chgBit(oldp+480,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 7U))));
        bufp->chgIData(oldp+481,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__data_stored),32);
        bufp->chgIData(oldp+482,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_103__DOT__i),32);
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 8U))));
        bufp->chgIData(oldp+484,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__data_stored),32);
        bufp->chgIData(oldp+485,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_104__DOT__i),32);
        bufp->chgBit(oldp+486,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 9U))));
        bufp->chgIData(oldp+487,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__data_stored),32);
        bufp->chgIData(oldp+488,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_105__DOT__i),32);
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+490,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__data_stored),32);
        bufp->chgIData(oldp+491,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_106__DOT__i),32);
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+493,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__data_stored),32);
        bufp->chgIData(oldp+494,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_107__DOT__i),32);
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+496,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__data_stored),32);
        bufp->chgIData(oldp+497,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_108__DOT__i),32);
        bufp->chgBit(oldp+498,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+499,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__data_stored),32);
        bufp->chgIData(oldp+500,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_109__DOT__i),32);
        bufp->chgBit(oldp+501,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+502,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__data_stored),32);
        bufp->chgIData(oldp+503,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_11__DOT__i),32);
        bufp->chgBit(oldp+504,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+505,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__data_stored),32);
        bufp->chgIData(oldp+506,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_110__DOT__i),32);
        bufp->chgBit(oldp+507,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+508,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__data_stored),32);
        bufp->chgIData(oldp+509,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_111__DOT__i),32);
        bufp->chgBit(oldp+510,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+511,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__data_stored),32);
        bufp->chgIData(oldp+512,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_112__DOT__i),32);
        bufp->chgBit(oldp+513,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+514,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__data_stored),32);
        bufp->chgIData(oldp+515,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_113__DOT__i),32);
        bufp->chgBit(oldp+516,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+517,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__data_stored),32);
        bufp->chgIData(oldp+518,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_114__DOT__i),32);
        bufp->chgBit(oldp+519,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+520,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__data_stored),32);
        bufp->chgIData(oldp+521,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_115__DOT__i),32);
        bufp->chgBit(oldp+522,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+523,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__data_stored),32);
        bufp->chgIData(oldp+524,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_116__DOT__i),32);
        bufp->chgBit(oldp+525,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+526,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__data_stored),32);
        bufp->chgIData(oldp+527,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_117__DOT__i),32);
        bufp->chgBit(oldp+528,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+529,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__data_stored),32);
        bufp->chgIData(oldp+530,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_118__DOT__i),32);
        bufp->chgBit(oldp+531,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+532,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__data_stored),32);
        bufp->chgIData(oldp+533,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_119__DOT__i),32);
        bufp->chgBit(oldp+534,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+535,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__data_stored),32);
        bufp->chgIData(oldp+536,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_12__DOT__i),32);
        bufp->chgBit(oldp+537,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+538,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__data_stored),32);
        bufp->chgIData(oldp+539,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_120__DOT__i),32);
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+541,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__data_stored),32);
        bufp->chgIData(oldp+542,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_121__DOT__i),32);
        bufp->chgBit(oldp+543,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+544,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__data_stored),32);
        bufp->chgIData(oldp+545,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_122__DOT__i),32);
        bufp->chgBit(oldp+546,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+547,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__data_stored),32);
        bufp->chgIData(oldp+548,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_123__DOT__i),32);
        bufp->chgBit(oldp+549,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+550,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__data_stored),32);
        bufp->chgIData(oldp+551,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_124__DOT__i),32);
        bufp->chgBit(oldp+552,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+553,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__data_stored),32);
        bufp->chgIData(oldp+554,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_125__DOT__i),32);
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+556,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__data_stored),32);
        bufp->chgIData(oldp+557,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_126__DOT__i),32);
        bufp->chgBit(oldp+558,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+559,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__data_stored),32);
        bufp->chgIData(oldp+560,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_127__DOT__i),32);
        bufp->chgBit(oldp+561,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U])));
        bufp->chgIData(oldp+562,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__data_stored),32);
        bufp->chgIData(oldp+563,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_128__DOT__i),32);
        bufp->chgBit(oldp+564,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 1U))));
        bufp->chgIData(oldp+565,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__data_stored),32);
        bufp->chgIData(oldp+566,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_129__DOT__i),32);
        bufp->chgBit(oldp+567,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+568,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__data_stored),32);
        bufp->chgIData(oldp+569,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_13__DOT__i),32);
        bufp->chgBit(oldp+570,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 2U))));
        bufp->chgIData(oldp+571,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__data_stored),32);
        bufp->chgIData(oldp+572,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_130__DOT__i),32);
        bufp->chgBit(oldp+573,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 3U))));
        bufp->chgIData(oldp+574,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__data_stored),32);
        bufp->chgIData(oldp+575,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_131__DOT__i),32);
        bufp->chgBit(oldp+576,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 4U))));
        bufp->chgIData(oldp+577,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__data_stored),32);
        bufp->chgIData(oldp+578,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_132__DOT__i),32);
        bufp->chgBit(oldp+579,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 5U))));
        bufp->chgIData(oldp+580,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__data_stored),32);
        bufp->chgIData(oldp+581,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_133__DOT__i),32);
        bufp->chgBit(oldp+582,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 6U))));
        bufp->chgIData(oldp+583,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__data_stored),32);
        bufp->chgIData(oldp+584,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_134__DOT__i),32);
        bufp->chgBit(oldp+585,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 7U))));
        bufp->chgIData(oldp+586,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__data_stored),32);
        bufp->chgIData(oldp+587,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_135__DOT__i),32);
        bufp->chgBit(oldp+588,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 8U))));
        bufp->chgIData(oldp+589,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__data_stored),32);
        bufp->chgIData(oldp+590,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_136__DOT__i),32);
        bufp->chgBit(oldp+591,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 9U))));
        bufp->chgIData(oldp+592,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__data_stored),32);
        bufp->chgIData(oldp+593,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_137__DOT__i),32);
        bufp->chgBit(oldp+594,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+595,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__data_stored),32);
        bufp->chgIData(oldp+596,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_138__DOT__i),32);
        bufp->chgBit(oldp+597,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+598,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__data_stored),32);
        bufp->chgIData(oldp+599,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_139__DOT__i),32);
        bufp->chgBit(oldp+600,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+601,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__data_stored),32);
        bufp->chgIData(oldp+602,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_14__DOT__i),32);
        bufp->chgBit(oldp+603,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+604,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__data_stored),32);
        bufp->chgIData(oldp+605,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_140__DOT__i),32);
        bufp->chgBit(oldp+606,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+607,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__data_stored),32);
        bufp->chgIData(oldp+608,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_141__DOT__i),32);
        bufp->chgBit(oldp+609,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+610,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__data_stored),32);
        bufp->chgIData(oldp+611,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_142__DOT__i),32);
        bufp->chgBit(oldp+612,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+613,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__data_stored),32);
        bufp->chgIData(oldp+614,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_143__DOT__i),32);
        bufp->chgBit(oldp+615,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+616,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__data_stored),32);
        bufp->chgIData(oldp+617,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_144__DOT__i),32);
        bufp->chgBit(oldp+618,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+619,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__data_stored),32);
        bufp->chgIData(oldp+620,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_145__DOT__i),32);
        bufp->chgBit(oldp+621,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+622,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__data_stored),32);
        bufp->chgIData(oldp+623,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_146__DOT__i),32);
        bufp->chgBit(oldp+624,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+625,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__data_stored),32);
        bufp->chgIData(oldp+626,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_147__DOT__i),32);
        bufp->chgBit(oldp+627,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+628,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__data_stored),32);
        bufp->chgIData(oldp+629,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_148__DOT__i),32);
        bufp->chgBit(oldp+630,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+631,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__data_stored),32);
        bufp->chgIData(oldp+632,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_149__DOT__i),32);
        bufp->chgBit(oldp+633,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+634,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__data_stored),32);
        bufp->chgIData(oldp+635,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_15__DOT__i),32);
        bufp->chgBit(oldp+636,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+637,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__data_stored),32);
        bufp->chgIData(oldp+638,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_150__DOT__i),32);
        bufp->chgBit(oldp+639,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+640,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__data_stored),32);
        bufp->chgIData(oldp+641,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_151__DOT__i),32);
        bufp->chgBit(oldp+642,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+643,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__data_stored),32);
        bufp->chgIData(oldp+644,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_152__DOT__i),32);
        bufp->chgBit(oldp+645,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+646,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__data_stored),32);
        bufp->chgIData(oldp+647,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_153__DOT__i),32);
        bufp->chgBit(oldp+648,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+649,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__data_stored),32);
        bufp->chgIData(oldp+650,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_154__DOT__i),32);
        bufp->chgBit(oldp+651,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+652,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__data_stored),32);
        bufp->chgIData(oldp+653,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_155__DOT__i),32);
        bufp->chgBit(oldp+654,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+655,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__data_stored),32);
        bufp->chgIData(oldp+656,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_156__DOT__i),32);
        bufp->chgBit(oldp+657,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+658,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__data_stored),32);
        bufp->chgIData(oldp+659,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_157__DOT__i),32);
        bufp->chgBit(oldp+660,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+661,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__data_stored),32);
        bufp->chgIData(oldp+662,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_158__DOT__i),32);
        bufp->chgBit(oldp+663,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[4U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+664,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__data_stored),32);
        bufp->chgIData(oldp+665,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_159__DOT__i),32);
        bufp->chgBit(oldp+666,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+667,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__data_stored),32);
        bufp->chgIData(oldp+668,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_16__DOT__i),32);
        bufp->chgBit(oldp+669,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U])));
        bufp->chgIData(oldp+670,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__data_stored),32);
        bufp->chgIData(oldp+671,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_160__DOT__i),32);
        bufp->chgBit(oldp+672,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 1U))));
        bufp->chgIData(oldp+673,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__data_stored),32);
        bufp->chgIData(oldp+674,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_161__DOT__i),32);
        bufp->chgBit(oldp+675,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 2U))));
        bufp->chgIData(oldp+676,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__data_stored),32);
        bufp->chgIData(oldp+677,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_162__DOT__i),32);
        bufp->chgBit(oldp+678,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 3U))));
        bufp->chgIData(oldp+679,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__data_stored),32);
        bufp->chgIData(oldp+680,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_163__DOT__i),32);
        bufp->chgBit(oldp+681,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 4U))));
        bufp->chgIData(oldp+682,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__data_stored),32);
        bufp->chgIData(oldp+683,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_164__DOT__i),32);
        bufp->chgBit(oldp+684,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 5U))));
        bufp->chgIData(oldp+685,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__data_stored),32);
        bufp->chgIData(oldp+686,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_165__DOT__i),32);
        bufp->chgBit(oldp+687,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 6U))));
        bufp->chgIData(oldp+688,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__data_stored),32);
        bufp->chgIData(oldp+689,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_166__DOT__i),32);
        bufp->chgBit(oldp+690,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 7U))));
        bufp->chgIData(oldp+691,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__data_stored),32);
        bufp->chgIData(oldp+692,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_167__DOT__i),32);
        bufp->chgBit(oldp+693,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 8U))));
        bufp->chgIData(oldp+694,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__data_stored),32);
        bufp->chgIData(oldp+695,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_168__DOT__i),32);
        bufp->chgBit(oldp+696,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 9U))));
        bufp->chgIData(oldp+697,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__data_stored),32);
        bufp->chgIData(oldp+698,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_169__DOT__i),32);
        bufp->chgBit(oldp+699,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+700,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__data_stored),32);
        bufp->chgIData(oldp+701,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_17__DOT__i),32);
        bufp->chgBit(oldp+702,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+703,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__data_stored),32);
        bufp->chgIData(oldp+704,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_170__DOT__i),32);
        bufp->chgBit(oldp+705,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+706,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__data_stored),32);
        bufp->chgIData(oldp+707,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_171__DOT__i),32);
        bufp->chgBit(oldp+708,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+709,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__data_stored),32);
        bufp->chgIData(oldp+710,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_172__DOT__i),32);
        bufp->chgBit(oldp+711,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+712,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__data_stored),32);
        bufp->chgIData(oldp+713,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_173__DOT__i),32);
        bufp->chgBit(oldp+714,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+715,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__data_stored),32);
        bufp->chgIData(oldp+716,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_174__DOT__i),32);
        bufp->chgBit(oldp+717,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+718,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__data_stored),32);
        bufp->chgIData(oldp+719,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_175__DOT__i),32);
        bufp->chgBit(oldp+720,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+721,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__data_stored),32);
        bufp->chgIData(oldp+722,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_176__DOT__i),32);
        bufp->chgBit(oldp+723,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+724,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__data_stored),32);
        bufp->chgIData(oldp+725,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_177__DOT__i),32);
        bufp->chgBit(oldp+726,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+727,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__data_stored),32);
        bufp->chgIData(oldp+728,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_178__DOT__i),32);
        bufp->chgBit(oldp+729,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+730,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__data_stored),32);
        bufp->chgIData(oldp+731,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_179__DOT__i),32);
        bufp->chgBit(oldp+732,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+733,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__data_stored),32);
        bufp->chgIData(oldp+734,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_18__DOT__i),32);
        bufp->chgBit(oldp+735,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+736,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__data_stored),32);
        bufp->chgIData(oldp+737,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_180__DOT__i),32);
        bufp->chgBit(oldp+738,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+739,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__data_stored),32);
        bufp->chgIData(oldp+740,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_181__DOT__i),32);
        bufp->chgBit(oldp+741,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+742,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__data_stored),32);
        bufp->chgIData(oldp+743,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_182__DOT__i),32);
        bufp->chgBit(oldp+744,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+745,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__data_stored),32);
        bufp->chgIData(oldp+746,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_183__DOT__i),32);
        bufp->chgBit(oldp+747,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+748,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__data_stored),32);
        bufp->chgIData(oldp+749,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_184__DOT__i),32);
        bufp->chgBit(oldp+750,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+751,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__data_stored),32);
        bufp->chgIData(oldp+752,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_185__DOT__i),32);
        bufp->chgBit(oldp+753,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+754,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__data_stored),32);
        bufp->chgIData(oldp+755,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_186__DOT__i),32);
        bufp->chgBit(oldp+756,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+757,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__data_stored),32);
        bufp->chgIData(oldp+758,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_187__DOT__i),32);
        bufp->chgBit(oldp+759,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+760,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__data_stored),32);
        bufp->chgIData(oldp+761,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_188__DOT__i),32);
        bufp->chgBit(oldp+762,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+763,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__data_stored),32);
        bufp->chgIData(oldp+764,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_189__DOT__i),32);
        bufp->chgBit(oldp+765,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+766,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__data_stored),32);
        bufp->chgIData(oldp+767,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_19__DOT__i),32);
        bufp->chgBit(oldp+768,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+769,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__data_stored),32);
        bufp->chgIData(oldp+770,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_190__DOT__i),32);
        bufp->chgBit(oldp+771,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[5U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+772,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__data_stored),32);
        bufp->chgIData(oldp+773,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_191__DOT__i),32);
        bufp->chgBit(oldp+774,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U])));
        bufp->chgIData(oldp+775,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__data_stored),32);
        bufp->chgIData(oldp+776,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_192__DOT__i),32);
        bufp->chgBit(oldp+777,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 1U))));
        bufp->chgIData(oldp+778,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__data_stored),32);
        bufp->chgIData(oldp+779,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_193__DOT__i),32);
        bufp->chgBit(oldp+780,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 2U))));
        bufp->chgIData(oldp+781,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__data_stored),32);
        bufp->chgIData(oldp+782,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_194__DOT__i),32);
        bufp->chgBit(oldp+783,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 3U))));
        bufp->chgIData(oldp+784,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__data_stored),32);
        bufp->chgIData(oldp+785,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_195__DOT__i),32);
        bufp->chgBit(oldp+786,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 4U))));
        bufp->chgIData(oldp+787,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__data_stored),32);
        bufp->chgIData(oldp+788,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_196__DOT__i),32);
        bufp->chgBit(oldp+789,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 5U))));
        bufp->chgIData(oldp+790,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__data_stored),32);
        bufp->chgIData(oldp+791,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_197__DOT__i),32);
        bufp->chgBit(oldp+792,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 6U))));
        bufp->chgIData(oldp+793,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__data_stored),32);
        bufp->chgIData(oldp+794,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_198__DOT__i),32);
        bufp->chgBit(oldp+795,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 7U))));
        bufp->chgIData(oldp+796,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__data_stored),32);
        bufp->chgIData(oldp+797,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_199__DOT__i),32);
        bufp->chgBit(oldp+798,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 2U))));
        bufp->chgIData(oldp+799,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__data_stored),32);
        bufp->chgIData(oldp+800,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_2__DOT__i),32);
        bufp->chgBit(oldp+801,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+802,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__data_stored),32);
        bufp->chgIData(oldp+803,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_20__DOT__i),32);
        bufp->chgBit(oldp+804,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 8U))));
        bufp->chgIData(oldp+805,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__data_stored),32);
        bufp->chgIData(oldp+806,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_200__DOT__i),32);
        bufp->chgBit(oldp+807,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 9U))));
        bufp->chgIData(oldp+808,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__data_stored),32);
        bufp->chgIData(oldp+809,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_201__DOT__i),32);
        bufp->chgBit(oldp+810,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+811,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__data_stored),32);
        bufp->chgIData(oldp+812,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_202__DOT__i),32);
        bufp->chgBit(oldp+813,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+814,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__data_stored),32);
        bufp->chgIData(oldp+815,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_203__DOT__i),32);
        bufp->chgBit(oldp+816,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+817,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__data_stored),32);
        bufp->chgIData(oldp+818,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_204__DOT__i),32);
        bufp->chgBit(oldp+819,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+820,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__data_stored),32);
        bufp->chgIData(oldp+821,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_205__DOT__i),32);
        bufp->chgBit(oldp+822,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+823,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__data_stored),32);
        bufp->chgIData(oldp+824,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_206__DOT__i),32);
        bufp->chgBit(oldp+825,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+826,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__data_stored),32);
        bufp->chgIData(oldp+827,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_207__DOT__i),32);
        bufp->chgBit(oldp+828,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+829,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__data_stored),32);
        bufp->chgIData(oldp+830,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_208__DOT__i),32);
        bufp->chgBit(oldp+831,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+832,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__data_stored),32);
        bufp->chgIData(oldp+833,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_209__DOT__i),32);
        bufp->chgBit(oldp+834,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+835,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__data_stored),32);
        bufp->chgIData(oldp+836,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_21__DOT__i),32);
        bufp->chgBit(oldp+837,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+838,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__data_stored),32);
        bufp->chgIData(oldp+839,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_210__DOT__i),32);
        bufp->chgBit(oldp+840,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+841,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__data_stored),32);
        bufp->chgIData(oldp+842,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_211__DOT__i),32);
        bufp->chgBit(oldp+843,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+844,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__data_stored),32);
        bufp->chgIData(oldp+845,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_212__DOT__i),32);
        bufp->chgBit(oldp+846,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+847,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__data_stored),32);
        bufp->chgIData(oldp+848,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_213__DOT__i),32);
        bufp->chgBit(oldp+849,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+850,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__data_stored),32);
        bufp->chgIData(oldp+851,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_214__DOT__i),32);
        bufp->chgBit(oldp+852,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+853,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__data_stored),32);
        bufp->chgIData(oldp+854,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_215__DOT__i),32);
        bufp->chgBit(oldp+855,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+856,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__data_stored),32);
        bufp->chgIData(oldp+857,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_216__DOT__i),32);
        bufp->chgBit(oldp+858,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+859,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__data_stored),32);
        bufp->chgIData(oldp+860,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_217__DOT__i),32);
        bufp->chgBit(oldp+861,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+862,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__data_stored),32);
        bufp->chgIData(oldp+863,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_218__DOT__i),32);
        bufp->chgBit(oldp+864,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+865,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__data_stored),32);
        bufp->chgIData(oldp+866,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_219__DOT__i),32);
        bufp->chgBit(oldp+867,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+868,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__data_stored),32);
        bufp->chgIData(oldp+869,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_22__DOT__i),32);
        bufp->chgBit(oldp+870,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+871,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__data_stored),32);
        bufp->chgIData(oldp+872,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_220__DOT__i),32);
        bufp->chgBit(oldp+873,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+874,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__data_stored),32);
        bufp->chgIData(oldp+875,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_221__DOT__i),32);
        bufp->chgBit(oldp+876,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+877,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__data_stored),32);
        bufp->chgIData(oldp+878,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_222__DOT__i),32);
        bufp->chgBit(oldp+879,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[6U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+880,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__data_stored),32);
        bufp->chgIData(oldp+881,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_223__DOT__i),32);
        bufp->chgBit(oldp+882,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U])));
        bufp->chgIData(oldp+883,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__data_stored),32);
        bufp->chgIData(oldp+884,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_224__DOT__i),32);
        bufp->chgBit(oldp+885,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 1U))));
        bufp->chgIData(oldp+886,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__data_stored),32);
        bufp->chgIData(oldp+887,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_225__DOT__i),32);
        bufp->chgBit(oldp+888,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 2U))));
        bufp->chgIData(oldp+889,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__data_stored),32);
        bufp->chgIData(oldp+890,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_226__DOT__i),32);
        bufp->chgBit(oldp+891,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 3U))));
        bufp->chgIData(oldp+892,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__data_stored),32);
        bufp->chgIData(oldp+893,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_227__DOT__i),32);
        bufp->chgBit(oldp+894,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 4U))));
        bufp->chgIData(oldp+895,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__data_stored),32);
        bufp->chgIData(oldp+896,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_228__DOT__i),32);
        bufp->chgBit(oldp+897,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 5U))));
        bufp->chgIData(oldp+898,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__data_stored),32);
        bufp->chgIData(oldp+899,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_229__DOT__i),32);
        bufp->chgBit(oldp+900,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+901,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__data_stored),32);
        bufp->chgIData(oldp+902,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_23__DOT__i),32);
        bufp->chgBit(oldp+903,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 6U))));
        bufp->chgIData(oldp+904,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__data_stored),32);
        bufp->chgIData(oldp+905,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_230__DOT__i),32);
        bufp->chgBit(oldp+906,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 7U))));
        bufp->chgIData(oldp+907,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__data_stored),32);
        bufp->chgIData(oldp+908,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_231__DOT__i),32);
        bufp->chgBit(oldp+909,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 8U))));
        bufp->chgIData(oldp+910,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__data_stored),32);
        bufp->chgIData(oldp+911,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_232__DOT__i),32);
        bufp->chgBit(oldp+912,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 9U))));
        bufp->chgIData(oldp+913,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__data_stored),32);
        bufp->chgIData(oldp+914,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_233__DOT__i),32);
        bufp->chgBit(oldp+915,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+916,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__data_stored),32);
        bufp->chgIData(oldp+917,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_234__DOT__i),32);
        bufp->chgBit(oldp+918,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0xbU))));
        bufp->chgIData(oldp+919,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__data_stored),32);
        bufp->chgIData(oldp+920,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_235__DOT__i),32);
        bufp->chgBit(oldp+921,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0xcU))));
        bufp->chgIData(oldp+922,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__data_stored),32);
        bufp->chgIData(oldp+923,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_236__DOT__i),32);
        bufp->chgBit(oldp+924,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0xdU))));
        bufp->chgIData(oldp+925,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__data_stored),32);
        bufp->chgIData(oldp+926,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_237__DOT__i),32);
        bufp->chgBit(oldp+927,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0xeU))));
        bufp->chgIData(oldp+928,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__data_stored),32);
        bufp->chgIData(oldp+929,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_238__DOT__i),32);
        bufp->chgBit(oldp+930,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0xfU))));
        bufp->chgIData(oldp+931,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__data_stored),32);
        bufp->chgIData(oldp+932,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_239__DOT__i),32);
        bufp->chgBit(oldp+933,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+934,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__data_stored),32);
        bufp->chgIData(oldp+935,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_24__DOT__i),32);
        bufp->chgBit(oldp+936,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+937,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__data_stored),32);
        bufp->chgIData(oldp+938,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_240__DOT__i),32);
        bufp->chgBit(oldp+939,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x11U))));
        bufp->chgIData(oldp+940,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__data_stored),32);
        bufp->chgIData(oldp+941,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_241__DOT__i),32);
        bufp->chgBit(oldp+942,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x12U))));
        bufp->chgIData(oldp+943,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__data_stored),32);
        bufp->chgIData(oldp+944,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_242__DOT__i),32);
        bufp->chgBit(oldp+945,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x13U))));
        bufp->chgIData(oldp+946,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__data_stored),32);
        bufp->chgIData(oldp+947,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_243__DOT__i),32);
        bufp->chgBit(oldp+948,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x14U))));
        bufp->chgIData(oldp+949,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__data_stored),32);
        bufp->chgIData(oldp+950,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_244__DOT__i),32);
        bufp->chgBit(oldp+951,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+952,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__data_stored),32);
        bufp->chgIData(oldp+953,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_245__DOT__i),32);
        bufp->chgBit(oldp+954,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x16U))));
        bufp->chgIData(oldp+955,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__data_stored),32);
        bufp->chgIData(oldp+956,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_246__DOT__i),32);
        bufp->chgBit(oldp+957,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+958,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__data_stored),32);
        bufp->chgIData(oldp+959,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_247__DOT__i),32);
        bufp->chgBit(oldp+960,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x18U))));
        bufp->chgIData(oldp+961,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__data_stored),32);
        bufp->chgIData(oldp+962,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_248__DOT__i),32);
        bufp->chgBit(oldp+963,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+964,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__data_stored),32);
        bufp->chgIData(oldp+965,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_249__DOT__i),32);
        bufp->chgBit(oldp+966,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+967,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__data_stored),32);
        bufp->chgIData(oldp+968,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_25__DOT__i),32);
        bufp->chgBit(oldp+969,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+970,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__data_stored),32);
        bufp->chgIData(oldp+971,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_250__DOT__i),32);
        bufp->chgBit(oldp+972,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+973,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__data_stored),32);
        bufp->chgIData(oldp+974,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_251__DOT__i),32);
        bufp->chgBit(oldp+975,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+976,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__data_stored),32);
        bufp->chgIData(oldp+977,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_252__DOT__i),32);
        bufp->chgBit(oldp+978,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+979,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__data_stored),32);
        bufp->chgIData(oldp+980,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_253__DOT__i),32);
        bufp->chgBit(oldp+981,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+982,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__data_stored),32);
        bufp->chgIData(oldp+983,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_254__DOT__i),32);
        bufp->chgBit(oldp+984,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[7U] 
                                >> 0x1fU)));
        bufp->chgIData(oldp+985,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__data_stored),32);
        bufp->chgIData(oldp+986,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_255__DOT__i),32);
        bufp->chgBit(oldp+987,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[8U])));
        bufp->chgIData(oldp+988,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__data_stored),32);
        bufp->chgIData(oldp+989,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_256__DOT__i),32);
        bufp->chgBit(oldp+990,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x1aU))));
        bufp->chgIData(oldp+991,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__data_stored),32);
        bufp->chgIData(oldp+992,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_26__DOT__i),32);
        bufp->chgBit(oldp+993,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+994,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__data_stored),32);
        bufp->chgIData(oldp+995,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_27__DOT__i),32);
        bufp->chgBit(oldp+996,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+997,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__data_stored),32);
        bufp->chgIData(oldp+998,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_28__DOT__i),32);
        bufp->chgBit(oldp+999,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                      >> 0x1dU))));
        bufp->chgIData(oldp+1000,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__data_stored),32);
        bufp->chgIData(oldp+1001,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_29__DOT__i),32);
        bufp->chgBit(oldp+1002,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1003,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__data_stored),32);
        bufp->chgIData(oldp+1004,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_3__DOT__i),32);
        bufp->chgBit(oldp+1005,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+1006,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__data_stored),32);
        bufp->chgIData(oldp+1007,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_30__DOT__i),32);
        bufp->chgBit(oldp+1008,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1009,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__data_stored),32);
        bufp->chgIData(oldp+1010,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_31__DOT__i),32);
        bufp->chgBit(oldp+1011,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U])));
        bufp->chgIData(oldp+1012,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__data_stored),32);
        bufp->chgIData(oldp+1013,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_32__DOT__i),32);
        bufp->chgBit(oldp+1014,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 1U))));
        bufp->chgIData(oldp+1015,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__data_stored),32);
        bufp->chgIData(oldp+1016,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_33__DOT__i),32);
        bufp->chgBit(oldp+1017,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 2U))));
        bufp->chgIData(oldp+1018,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__data_stored),32);
        bufp->chgIData(oldp+1019,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_34__DOT__i),32);
        bufp->chgBit(oldp+1020,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1021,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__data_stored),32);
        bufp->chgIData(oldp+1022,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_35__DOT__i),32);
        bufp->chgBit(oldp+1023,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 4U))));
        bufp->chgIData(oldp+1024,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__data_stored),32);
        bufp->chgIData(oldp+1025,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_36__DOT__i),32);
        bufp->chgBit(oldp+1026,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 5U))));
        bufp->chgIData(oldp+1027,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__data_stored),32);
        bufp->chgIData(oldp+1028,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_37__DOT__i),32);
        bufp->chgBit(oldp+1029,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 6U))));
        bufp->chgIData(oldp+1030,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__data_stored),32);
        bufp->chgIData(oldp+1031,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_38__DOT__i),32);
        bufp->chgBit(oldp+1032,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 7U))));
        bufp->chgIData(oldp+1033,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__data_stored),32);
        bufp->chgIData(oldp+1034,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_39__DOT__i),32);
        bufp->chgBit(oldp+1035,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 4U))));
        bufp->chgIData(oldp+1036,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__data_stored),32);
        bufp->chgIData(oldp+1037,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_4__DOT__i),32);
        bufp->chgBit(oldp+1038,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 8U))));
        bufp->chgIData(oldp+1039,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__data_stored),32);
        bufp->chgIData(oldp+1040,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_40__DOT__i),32);
        bufp->chgBit(oldp+1041,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 9U))));
        bufp->chgIData(oldp+1042,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__data_stored),32);
        bufp->chgIData(oldp+1043,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_41__DOT__i),32);
        bufp->chgBit(oldp+1044,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1045,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__data_stored),32);
        bufp->chgIData(oldp+1046,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_42__DOT__i),32);
        bufp->chgBit(oldp+1047,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0xbU))));
        bufp->chgIData(oldp+1048,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__data_stored),32);
        bufp->chgIData(oldp+1049,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_43__DOT__i),32);
        bufp->chgBit(oldp+1050,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1051,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__data_stored),32);
        bufp->chgIData(oldp+1052,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_44__DOT__i),32);
        bufp->chgBit(oldp+1053,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1054,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__data_stored),32);
        bufp->chgIData(oldp+1055,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_45__DOT__i),32);
        bufp->chgBit(oldp+1056,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0xeU))));
        bufp->chgIData(oldp+1057,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__data_stored),32);
        bufp->chgIData(oldp+1058,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_46__DOT__i),32);
        bufp->chgBit(oldp+1059,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0xfU))));
        bufp->chgIData(oldp+1060,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__data_stored),32);
        bufp->chgIData(oldp+1061,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_47__DOT__i),32);
        bufp->chgBit(oldp+1062,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x10U))));
        bufp->chgIData(oldp+1063,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__data_stored),32);
        bufp->chgIData(oldp+1064,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_48__DOT__i),32);
        bufp->chgBit(oldp+1065,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x11U))));
        bufp->chgIData(oldp+1066,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__data_stored),32);
        bufp->chgIData(oldp+1067,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_49__DOT__i),32);
        bufp->chgBit(oldp+1068,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 5U))));
        bufp->chgIData(oldp+1069,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__data_stored),32);
        bufp->chgIData(oldp+1070,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_5__DOT__i),32);
        bufp->chgBit(oldp+1071,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x12U))));
        bufp->chgIData(oldp+1072,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__data_stored),32);
        bufp->chgIData(oldp+1073,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_50__DOT__i),32);
        bufp->chgBit(oldp+1074,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x13U))));
        bufp->chgIData(oldp+1075,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__data_stored),32);
        bufp->chgIData(oldp+1076,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_51__DOT__i),32);
        bufp->chgBit(oldp+1077,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x14U))));
        bufp->chgIData(oldp+1078,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__data_stored),32);
        bufp->chgIData(oldp+1079,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_52__DOT__i),32);
        bufp->chgBit(oldp+1080,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x15U))));
        bufp->chgIData(oldp+1081,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__data_stored),32);
        bufp->chgIData(oldp+1082,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_53__DOT__i),32);
        bufp->chgBit(oldp+1083,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+1084,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__data_stored),32);
        bufp->chgIData(oldp+1085,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_54__DOT__i),32);
        bufp->chgBit(oldp+1086,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x17U))));
        bufp->chgIData(oldp+1087,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__data_stored),32);
        bufp->chgIData(oldp+1088,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_55__DOT__i),32);
        bufp->chgBit(oldp+1089,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x18U))));
        bufp->chgIData(oldp+1090,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__data_stored),32);
        bufp->chgIData(oldp+1091,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_56__DOT__i),32);
        bufp->chgBit(oldp+1092,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+1093,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__data_stored),32);
        bufp->chgIData(oldp+1094,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_57__DOT__i),32);
        bufp->chgBit(oldp+1095,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x1aU))));
        bufp->chgIData(oldp+1096,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__data_stored),32);
        bufp->chgIData(oldp+1097,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_58__DOT__i),32);
        bufp->chgBit(oldp+1098,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x1bU))));
        bufp->chgIData(oldp+1099,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__data_stored),32);
        bufp->chgIData(oldp+1100,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_59__DOT__i),32);
        bufp->chgBit(oldp+1101,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 6U))));
        bufp->chgIData(oldp+1102,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__data_stored),32);
        bufp->chgIData(oldp+1103,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_6__DOT__i),32);
        bufp->chgBit(oldp+1104,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x1cU))));
        bufp->chgIData(oldp+1105,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__data_stored),32);
        bufp->chgIData(oldp+1106,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_60__DOT__i),32);
        bufp->chgBit(oldp+1107,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x1dU))));
        bufp->chgIData(oldp+1108,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__data_stored),32);
        bufp->chgIData(oldp+1109,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_61__DOT__i),32);
        bufp->chgBit(oldp+1110,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+1111,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__data_stored),32);
        bufp->chgIData(oldp+1112,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_62__DOT__i),32);
        bufp->chgBit(oldp+1113,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[1U] 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1114,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__data_stored),32);
        bufp->chgIData(oldp+1115,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_63__DOT__i),32);
        bufp->chgBit(oldp+1116,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U])));
        bufp->chgIData(oldp+1117,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__data_stored),32);
        bufp->chgIData(oldp+1118,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_64__DOT__i),32);
        bufp->chgBit(oldp+1119,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 1U))));
        bufp->chgIData(oldp+1120,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__data_stored),32);
        bufp->chgIData(oldp+1121,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_65__DOT__i),32);
        bufp->chgBit(oldp+1122,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 2U))));
        bufp->chgIData(oldp+1123,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__data_stored),32);
        bufp->chgIData(oldp+1124,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_66__DOT__i),32);
        bufp->chgBit(oldp+1125,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1126,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__data_stored),32);
        bufp->chgIData(oldp+1127,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_67__DOT__i),32);
        bufp->chgBit(oldp+1128,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 4U))));
        bufp->chgIData(oldp+1129,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__data_stored),32);
        bufp->chgIData(oldp+1130,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_68__DOT__i),32);
        bufp->chgBit(oldp+1131,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 5U))));
        bufp->chgIData(oldp+1132,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__data_stored),32);
        bufp->chgIData(oldp+1133,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_69__DOT__i),32);
        bufp->chgBit(oldp+1134,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 7U))));
        bufp->chgIData(oldp+1135,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__data_stored),32);
        bufp->chgIData(oldp+1136,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_7__DOT__i),32);
        bufp->chgBit(oldp+1137,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 6U))));
        bufp->chgIData(oldp+1138,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__data_stored),32);
        bufp->chgIData(oldp+1139,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_70__DOT__i),32);
        bufp->chgBit(oldp+1140,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 7U))));
        bufp->chgIData(oldp+1141,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__data_stored),32);
        bufp->chgIData(oldp+1142,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_71__DOT__i),32);
        bufp->chgBit(oldp+1143,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 8U))));
        bufp->chgIData(oldp+1144,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__data_stored),32);
        bufp->chgIData(oldp+1145,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_72__DOT__i),32);
        bufp->chgBit(oldp+1146,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 9U))));
        bufp->chgIData(oldp+1147,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__data_stored),32);
        bufp->chgIData(oldp+1148,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_73__DOT__i),32);
        bufp->chgBit(oldp+1149,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1150,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__data_stored),32);
        bufp->chgIData(oldp+1151,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_74__DOT__i),32);
        bufp->chgBit(oldp+1152,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0xbU))));
        bufp->chgIData(oldp+1153,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__data_stored),32);
        bufp->chgIData(oldp+1154,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_75__DOT__i),32);
        bufp->chgBit(oldp+1155,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1156,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__data_stored),32);
        bufp->chgIData(oldp+1157,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_76__DOT__i),32);
        bufp->chgBit(oldp+1158,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1159,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__data_stored),32);
        bufp->chgIData(oldp+1160,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_77__DOT__i),32);
        bufp->chgBit(oldp+1161,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0xeU))));
        bufp->chgIData(oldp+1162,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__data_stored),32);
        bufp->chgIData(oldp+1163,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_78__DOT__i),32);
        bufp->chgBit(oldp+1164,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0xfU))));
        bufp->chgIData(oldp+1165,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__data_stored),32);
        bufp->chgIData(oldp+1166,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_79__DOT__i),32);
        bufp->chgBit(oldp+1167,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 8U))));
        bufp->chgIData(oldp+1168,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__data_stored),32);
        bufp->chgIData(oldp+1169,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_8__DOT__i),32);
        bufp->chgBit(oldp+1170,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x10U))));
        bufp->chgIData(oldp+1171,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__data_stored),32);
        bufp->chgIData(oldp+1172,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_80__DOT__i),32);
        bufp->chgBit(oldp+1173,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x11U))));
        bufp->chgIData(oldp+1174,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__data_stored),32);
        bufp->chgIData(oldp+1175,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_81__DOT__i),32);
        bufp->chgBit(oldp+1176,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x12U))));
        bufp->chgIData(oldp+1177,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__data_stored),32);
        bufp->chgIData(oldp+1178,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_82__DOT__i),32);
        bufp->chgBit(oldp+1179,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x13U))));
        bufp->chgIData(oldp+1180,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__data_stored),32);
        bufp->chgIData(oldp+1181,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_83__DOT__i),32);
        bufp->chgBit(oldp+1182,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x14U))));
        bufp->chgIData(oldp+1183,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__data_stored),32);
        bufp->chgIData(oldp+1184,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_84__DOT__i),32);
        bufp->chgBit(oldp+1185,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x15U))));
        bufp->chgIData(oldp+1186,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__data_stored),32);
        bufp->chgIData(oldp+1187,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_85__DOT__i),32);
        bufp->chgBit(oldp+1188,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+1189,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__data_stored),32);
        bufp->chgIData(oldp+1190,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_86__DOT__i),32);
        bufp->chgBit(oldp+1191,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x17U))));
        bufp->chgIData(oldp+1192,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__data_stored),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_87__DOT__i),32);
        bufp->chgBit(oldp+1194,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x18U))));
        bufp->chgIData(oldp+1195,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__data_stored),32);
        bufp->chgIData(oldp+1196,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_88__DOT__i),32);
        bufp->chgBit(oldp+1197,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+1198,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__data_stored),32);
        bufp->chgIData(oldp+1199,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_89__DOT__i),32);
        bufp->chgBit(oldp+1200,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0U] 
                                       >> 9U))));
        bufp->chgIData(oldp+1201,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__data_stored),32);
        bufp->chgIData(oldp+1202,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_9__DOT__i),32);
        bufp->chgBit(oldp+1203,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x1aU))));
        bufp->chgIData(oldp+1204,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__data_stored),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_90__DOT__i),32);
        bufp->chgBit(oldp+1206,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x1bU))));
        bufp->chgIData(oldp+1207,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__data_stored),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_91__DOT__i),32);
        bufp->chgBit(oldp+1209,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x1cU))));
        bufp->chgIData(oldp+1210,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__data_stored),32);
        bufp->chgIData(oldp+1211,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_92__DOT__i),32);
        bufp->chgBit(oldp+1212,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x1dU))));
        bufp->chgIData(oldp+1213,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__data_stored),32);
        bufp->chgIData(oldp+1214,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_93__DOT__i),32);
        bufp->chgBit(oldp+1215,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+1216,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__data_stored),32);
        bufp->chgIData(oldp+1217,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_94__DOT__i),32);
        bufp->chgBit(oldp+1218,((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[2U] 
                                 >> 0x1fU)));
        bufp->chgIData(oldp+1219,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__data_stored),32);
        bufp->chgIData(oldp+1220,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_95__DOT__i),32);
        bufp->chgBit(oldp+1221,((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U])));
        bufp->chgIData(oldp+1222,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__data_stored),32);
        bufp->chgIData(oldp+1223,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_96__DOT__i),32);
        bufp->chgBit(oldp+1224,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                       >> 1U))));
        bufp->chgIData(oldp+1225,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__data_stored),32);
        bufp->chgIData(oldp+1226,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_97__DOT__i),32);
        bufp->chgBit(oldp+1227,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                       >> 2U))));
        bufp->chgIData(oldp+1228,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__data_stored),32);
        bufp->chgIData(oldp+1229,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_98__DOT__i),32);
        bufp->chgBit(oldp+1230,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[3U] 
                                       >> 3U))));
        bufp->chgIData(oldp+1231,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__data_stored),32);
        bufp->chgIData(oldp+1232,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_pm_config_99__DOT__i),32);
        bufp->chgBit(oldp+1233,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0xfU))));
        bufp->chgIData(oldp+1234,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_0__DOT__i),32);
        bufp->chgBit(oldp+1235,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x10U))));
        bufp->chgIData(oldp+1236,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_1__DOT__i),32);
        bufp->chgBit(oldp+1237,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x19U))));
        bufp->chgIData(oldp+1238,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_10__DOT__i),32);
        bufp->chgBit(oldp+1239,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x1aU))));
        bufp->chgIData(oldp+1240,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_11__DOT__i),32);
        bufp->chgBit(oldp+1241,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x1bU))));
        bufp->chgIData(oldp+1242,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_12__DOT__i),32);
        bufp->chgBit(oldp+1243,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x1cU))));
        bufp->chgIData(oldp+1244,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_13__DOT__i),32);
        bufp->chgBit(oldp+1245,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x1dU))));
        bufp->chgIData(oldp+1246,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_14__DOT__i),32);
        bufp->chgBit(oldp+1247,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+1248,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_15__DOT__i),32);
        bufp->chgBit(oldp+1249,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x11U))));
        bufp->chgIData(oldp+1250,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_2__DOT__i),32);
        bufp->chgBit(oldp+1251,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x12U))));
        bufp->chgIData(oldp+1252,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_3__DOT__i),32);
        bufp->chgBit(oldp+1253,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x13U))));
        bufp->chgIData(oldp+1254,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_4__DOT__i),32);
        bufp->chgBit(oldp+1255,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x14U))));
        bufp->chgIData(oldp+1256,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_5__DOT__i),32);
        bufp->chgBit(oldp+1257,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x15U))));
        bufp->chgIData(oldp+1258,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_6__DOT__i),32);
        bufp->chgBit(oldp+1259,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x16U))));
        bufp->chgIData(oldp+1260,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_7__DOT__i),32);
        bufp->chgBit(oldp+1261,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x17U))));
        bufp->chgIData(oldp+1262,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_8__DOT__i),32);
        bufp->chgBit(oldp+1263,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x78U] 
                                       >> 0x18U))));
        bufp->chgIData(oldp+1264,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reg_syscoh_9__DOT__i),32);
        bufp->chgBit(oldp+1265,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 7U))));
        bufp->chgIData(oldp+1266,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_0__DOT__i),32);
        bufp->chgBit(oldp+1267,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 8U))));
        bufp->chgIData(oldp+1268,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_1__DOT__i),32);
        bufp->chgBit(oldp+1269,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 9U))));
        bufp->chgIData(oldp+1270,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_2__DOT__i),32);
        bufp->chgBit(oldp+1271,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0xaU))));
        bufp->chgIData(oldp+1272,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_3__DOT__i),32);
        bufp->chgBit(oldp+1273,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0xbU))));
        bufp->chgIData(oldp+1274,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_4__DOT__i),32);
        bufp->chgBit(oldp+1275,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1276,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_5__DOT__i),32);
        bufp->chgBit(oldp+1277,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0xdU))));
        bufp->chgIData(oldp+1278,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_6__DOT__i),32);
        bufp->chgBit(oldp+1279,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0xeU))));
        bufp->chgIData(oldp+1280,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_7__DOT__i),32);
        bufp->chgBit(oldp+1281,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0xfU))));
        bufp->chgIData(oldp+1282,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_reset_8__DOT__i),32);
        bufp->chgBit(oldp+1283,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0x15U))));
        bufp->chgIData(oldp+1284,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_slc_cache_flush_reg__DOT__i),32);
        bufp->chgBit(oldp+1285,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x79U] 
                                       >> 0x17U))));
        bufp->chgIData(oldp+1286,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_ucie_topology_id_reg__DOT__i),32);
        bufp->chgBit(oldp+1287,((1U & (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x93U] 
                                       >> 0x18U))));
        bufp->chgIData(oldp+1288,(vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_use_early_write__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x26U]))) {
        bufp->chgBit(oldp+1289,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync));
        bufp->chgBit(oldp+1290,(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_sync));
        bufp->chgBit(oldp+1291,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_sync)) 
                                       | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_sync) 
                                          | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync))))));
        bufp->chgBit(oldp+1292,((1U & (~ ((~ (IData)(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_sync)) 
                                          | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_sync) 
                                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync)))))));
        bufp->chgBit(oldp+1293,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_sync));
        bufp->chgBit(oldp+1294,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_qp_clk__DOT__sig_src_sync1));
        bufp->chgBit(oldp+1295,(vlSelfRef.sig_topology_top__DOT__inst_sync_cl0_p0_TXRXSACTIVE_qp_clk__DOT__sig_src_sync1));
        bufp->chgBit(oldp+1296,(vlSelfRef.sig_topology_top__DOT__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk__DOT__sig_src_sync1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x28U]))) {
        bufp->chgBit(oldp+1297,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp));
        bufp->chgBit(oldp+1298,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat));
        bufp->chgWData(oldp+1299,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpreq_flit_from_id_translator),151);
        bufp->chgWData(oldp+1304,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__rsp_flit_from_id_translator),73);
        bufp->chgWData(oldp+1307,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator),680);
        bufp->chgWData(oldp+1329,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator),119);
        bufp->chgSData(oldp+1333,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__tx_actual_snp_txnid_to_rn),12);
        bufp->chgSData(oldp+1334,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_dat_dbid_to_rn),12);
        bufp->chgIData(oldp+1335,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__rsp_txnid_entry_match),32);
        bufp->chgIData(oldp+1336,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__dat_txnid_entry_match),32);
        bufp->chgSData(oldp+1337,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_rsp_dbid_to_rn),12);
        bufp->chgSData(oldp+1338,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[0]),12);
        bufp->chgSData(oldp+1339,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[1]),12);
        bufp->chgSData(oldp+1340,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[2]),12);
        bufp->chgSData(oldp+1341,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[3]),12);
        bufp->chgCData(oldp+1342,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__wren_id_buffer),4);
        bufp->chgBit(oldp+1343,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1344,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl),73);
        bufp->chgBit(oldp+1347,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1348,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl),680);
        __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                    ? 
                                                   (0xfffU 
                                                    & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                        << 6U) 
                                                       | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                          >> 0x1aU)))
                                                    : 0U))) 
                                  << 0x1aU) | (QData)((IData)(
                                                              (0x3ffffffU 
                                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(
                                                    (0x3fffffffU 
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
        __Vtemp_1[2U] = (((IData)((((QData)((IData)(
                                                    (0x3fffffffU 
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
        bufp->chgWData(oldp+1370,(__Vtemp_1),73);
        __Vtemp_4[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
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
                                                                     & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))));
        __Vtemp_4[1U] = ((0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                          << 0x15U) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U])) 
                         | (IData)(((((QData)((IData)(
                                                      ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                        ? 
                                                       (0xfU 
                                                        & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                           >> 0x11U))
                                                        : 0U))) 
                                      << 0x31U) | (
                                                   ((QData)((IData)(
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
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])));
        __Vtemp_4[3U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])));
        __Vtemp_4[4U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])));
        __Vtemp_4[5U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])));
        __Vtemp_4[6U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])));
        __Vtemp_4[7U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])));
        __Vtemp_4[8U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])));
        __Vtemp_4[9U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                        >> 0xbU) & 
                                       vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])) 
                         | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                            << 0x15U) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])));
        __Vtemp_4[0xaU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])) 
                           | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                              << 0x15U) 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])));
        __Vtemp_4[0xbU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])) 
                           | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                              << 0x15U) 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])));
        __Vtemp_4[0xcU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])) 
                           | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                              << 0x15U) 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])));
        __Vtemp_4[0xdU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])) 
                           | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                              << 0x15U) 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])));
        __Vtemp_4[0xeU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])) 
                           | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                              << 0x15U) 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])));
        __Vtemp_4[0xfU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])) 
                           | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                              << 0x15U) 
                                             & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])));
        __Vtemp_4[0x10U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])));
        __Vtemp_4[0x11U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])));
        __Vtemp_4[0x12U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])));
        __Vtemp_4[0x13U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])));
        __Vtemp_4[0x14U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])));
        __Vtemp_4[0x15U] = (0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                          >> 0xbU) 
                                         & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x15U]));
        bufp->chgWData(oldp+1373,(__Vtemp_4),680);
        bufp->chgSData(oldp+1395,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__inactive_cntr_nxt),14);
        bufp->chgBit(oldp+1396,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__port_is_inactive_nxt));
        bufp->chgCData(oldp+1397,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                    ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                >> 6U))
                                    : 0U)),5);
        bufp->chgCData(oldp+1398,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                               >> 0x11U))
                                    : 0U)),4);
        bufp->chgSData(oldp+1399,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgSData(oldp+1400,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgBit(oldp+1401,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgWData(oldp+1402,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__write_data_fifo),686);
        bufp->chgBit(oldp+1424,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgIData(oldp+1425,((0xfffffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[3U] 
                                                << 0xdU) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U] 
                                                  >> 0x13U)))),20);
        __Vtemp_7[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[0U];
        __Vtemp_7[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[1U];
        __Vtemp_7[2U] = (0x7ffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U]);
        bufp->chgWData(oldp+1426,(__Vtemp_7),83);
        bufp->chgBit(oldp+1429,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1430,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+1431,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+1432,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+1433,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1434,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1435,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1436,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
        bufp->chgWData(oldp+1458,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
        bufp->chgWData(oldp+1480,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
        bufp->chgWData(oldp+1502,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
        bufp->chgBit(oldp+1524,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1525,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1526,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1527,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+1528,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+1529,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+1530,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1531,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1532,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1533,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+1536,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+1539,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+1542,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+1545,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__write_data_fifo_tx_snpreq),152);
        bufp->chgCData(oldp+1550,((7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hac6e8b95_0_71))))),3);
        bufp->chgBit(oldp+1551,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo));
        bufp->chgWData(oldp+1552,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__snprsp_flit_s),73);
        bufp->chgCData(oldp+1555,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x2cU]))) {
        bufp->chgBit(oldp+1556,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp));
        bufp->chgBit(oldp+1557,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat));
        bufp->chgWData(oldp+1558,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__snpreq_flit_from_id_translator),151);
        bufp->chgWData(oldp+1563,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__rsp_flit_from_id_translator),73);
        bufp->chgWData(oldp+1566,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator),680);
        bufp->chgWData(oldp+1588,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator),119);
        bufp->chgSData(oldp+1592,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__tx_actual_snp_txnid_to_rn),12);
        bufp->chgSData(oldp+1593,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_dat_dbid_to_rn),12);
        bufp->chgIData(oldp+1594,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__rsp_txnid_entry_match),32);
        bufp->chgIData(oldp+1595,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__dat_txnid_entry_match),32);
        bufp->chgSData(oldp+1596,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_req__DOT__tx_actual_rsp_dbid_to_rn),12);
        bufp->chgSData(oldp+1597,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[0]),12);
        bufp->chgSData(oldp+1598,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[1]),12);
        bufp->chgSData(oldp+1599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[2]),12);
        bufp->chgSData(oldp+1600,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer_nxt[3]),12);
        bufp->chgCData(oldp+1601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__wren_id_buffer),4);
        bufp->chgBit(oldp+1602,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl),73);
        bufp->chgBit(oldp+1606,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl),680);
        __Vtemp_8[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                                    ? 
                                                   (0xfffU 
                                                    & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                        << 6U) 
                                                       | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                          >> 0x1aU)))
                                                    : 0U))) 
                                  << 0x1aU) | (QData)((IData)(
                                                              (0x3ffffffU 
                                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U])))));
        __Vtemp_8[1U] = (((IData)((((QData)((IData)(
                                                    (0x3fffffffU 
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
        __Vtemp_8[2U] = (((IData)((((QData)((IData)(
                                                    (0x3fffffffU 
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
        bufp->chgWData(oldp+1629,(__Vtemp_8),73);
        __Vtemp_11[0U] = (IData)((((QData)((IData)(
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
                                                                      & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))));
        __Vtemp_11[1U] = ((0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U])) 
                          | (IData)(((((QData)((IData)(
                                                       ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                         ? 
                                                        (0xfU 
                                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                            >> 0x11U))
                                                         : 0U))) 
                                       << 0x31U) | 
                                      (((QData)((IData)(
                                                        (0x7ffU 
                                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                            >> 6U)))) 
                                        << 0x26U) | 
                                       (((QData)((IData)(
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
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])));
        __Vtemp_11[3U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])));
        __Vtemp_11[4U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])));
        __Vtemp_11[5U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])));
        __Vtemp_11[6U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])));
        __Vtemp_11[7U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])));
        __Vtemp_11[8U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])));
        __Vtemp_11[9U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])));
        __Vtemp_11[0xaU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])));
        __Vtemp_11[0xbU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])));
        __Vtemp_11[0xcU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])));
        __Vtemp_11[0xdU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])));
        __Vtemp_11[0xeU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])));
        __Vtemp_11[0xfU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])));
        __Vtemp_11[0x10U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])));
        __Vtemp_11[0x11U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])));
        __Vtemp_11[0x12U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])));
        __Vtemp_11[0x13U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])));
        __Vtemp_11[0x14U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])));
        __Vtemp_11[0x15U] = (0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x15U]));
        bufp->chgWData(oldp+1632,(__Vtemp_11),680);
        bufp->chgSData(oldp+1654,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__inactive_cntr_nxt),14);
        bufp->chgBit(oldp+1655,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__port_is_inactive_nxt));
        bufp->chgCData(oldp+1656,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                    ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                >> 6U))
                                    : 0U)),5);
        bufp->chgCData(oldp+1657,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                               >> 0x11U))
                                    : 0U)),4);
        bufp->chgSData(oldp+1658,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgSData(oldp+1659,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgBit(oldp+1660,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgWData(oldp+1661,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__write_data_fifo),686);
        bufp->chgBit(oldp+1683,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgIData(oldp+1684,((0xfffffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[3U] 
                                                << 0xdU) 
                                               | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U] 
                                                  >> 0x13U)))),20);
        __Vtemp_14[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[0U];
        __Vtemp_14[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[1U];
        __Vtemp_14[2U] = (0x7ffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__dat_flit_from_id_translator[2U]);
        bufp->chgWData(oldp+1685,(__Vtemp_14),83);
        bufp->chgBit(oldp+1688,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1689,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+1690,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+1691,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+1692,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1693,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1694,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1695,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
        bufp->chgWData(oldp+1717,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
        bufp->chgWData(oldp+1739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
        bufp->chgWData(oldp+1761,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
        bufp->chgBit(oldp+1783,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1784,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1786,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+1787,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+1788,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+1789,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1790,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1791,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1792,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+1795,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+1798,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+1801,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+1804,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__write_data_fifo_tx_snpreq),152);
        bufp->chgCData(oldp+1809,((7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hac6e8b95_0_73))))),3);
        bufp->chgBit(oldp+1810,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo));
        bufp->chgWData(oldp+1811,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__snprsp_flit_s),73);
        bufp->chgCData(oldp+1814,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x30U]))) {
        bufp->chgBit(oldp+1815,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_snp));
        bufp->chgBit(oldp+1816,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_dat));
        bufp->chgBit(oldp+1817,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__consumed_crdt_rsp));
        bufp->chgWData(oldp+1818,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__snpreq_flit_from_id_translator),151);
        bufp->chgWData(oldp+1823,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__req_flit_from_id_translator),151);
        bufp->chgSData(oldp+1828,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__tx_req_txnid_to_sn),12);
        bufp->chgQData(oldp+1829,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__wren_id_buffer),35);
        bufp->chgQData(oldp+1831,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__valid_buffer_nxt),35);
        bufp->chgBit(oldp+1833,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_translator_full_nxt));
        bufp->chgQData(oldp+1834,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__readnosnp_with_dmt_vec_nxt),35);
        bufp->chgWData(oldp+1836,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl),152);
        bufp->chgBit(oldp+1841,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl));
        bufp->chgBit(oldp+1842,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1843,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl),73);
        bufp->chgBit(oldp+1846,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+1847,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl),680);
        __Vtemp_19[0U] = (IData)((((QData)((IData)(
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
                                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U])))));
        __Vtemp_19[1U] = ((0xffffffc0U & ((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                             ? (0x7fU 
                                                & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U] 
                                                    << 2U) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                      >> 0x1eU)))
                                             : 0U) 
                                           << 0x1eU) 
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
                                        ? (0x7fU & 
                                           ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U] 
                                             << 2U) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                               >> 0x1eU)))
                                        : 0U) >> 2U)));
        __Vtemp_19[3U] = ((0x1fU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U]) 
                          | (0xffffffe0U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U]));
        __Vtemp_19[4U] = ((0x1fU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[4U]) 
                          | (0x7fffe0U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[4U]));
        bufp->chgWData(oldp+1869,(__Vtemp_19),151);
        __Vtemp_20[0U] = (IData)((((QData)((IData)(
                                                   ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
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
        __Vtemp_20[1U] = (((IData)((((QData)((IData)(
                                                     (0x3fffffffU 
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
        __Vtemp_20[2U] = (((IData)((((QData)((IData)(
                                                     (0x3fffffffU 
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
        bufp->chgWData(oldp+1874,(__Vtemp_20),73);
        __Vtemp_23[0U] = (IData)((((QData)((IData)(
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
                                                                      & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U])))))));
        __Vtemp_23[1U] = ((0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0U] 
                                           << 0x15U) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U])) 
                          | (IData)(((((QData)((IData)(
                                                       ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                                         ? 
                                                        (0xfU 
                                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                            >> 0x11U))
                                                         : 0U))) 
                                       << 0x31U) | 
                                      (((QData)((IData)(
                                                        (0x7ffU 
                                                         & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                            >> 6U)))) 
                                        << 0x26U) | 
                                       (((QData)((IData)(
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
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[2U])));
        __Vtemp_23[3U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[1U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[3U])));
        __Vtemp_23[4U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[2U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[4U])));
        __Vtemp_23[5U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[3U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[5U])));
        __Vtemp_23[6U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[4U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[6U])));
        __Vtemp_23[7U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[5U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[7U])));
        __Vtemp_23[8U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[6U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[8U])));
        __Vtemp_23[9U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[7U] 
                                         >> 0xbU) & 
                                        vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])) 
                          | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                             << 0x15U) 
                                            & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[9U])));
        __Vtemp_23[0xaU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[8U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xaU])));
        __Vtemp_23[0xbU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[9U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xbU])));
        __Vtemp_23[0xcU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xaU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xcU])));
        __Vtemp_23[0xdU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xbU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xdU])));
        __Vtemp_23[0xeU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xcU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xeU])));
        __Vtemp_23[0xfU] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xdU] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])) 
                            | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                               << 0x15U) 
                                              & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0xfU])));
        __Vtemp_23[0x10U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xeU] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x10U])));
        __Vtemp_23[0x11U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0xfU] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x11U])));
        __Vtemp_23[0x12U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x10U] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x12U])));
        __Vtemp_23[0x13U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x11U] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x13U])));
        __Vtemp_23[0x14U] = ((0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x12U] 
                                            >> 0xbU) 
                                           & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])) 
                             | (0xffe00000U & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                                << 0x15U) 
                                               & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x14U])));
        __Vtemp_23[0x15U] = (0x1fffffU & ((Vsig_topology_top__ConstPool__CONST_h3419a097_0[0x13U] 
                                           >> 0xbU) 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0x15U]));
        bufp->chgWData(oldp+1877,(__Vtemp_23),680);
        bufp->chgSData(oldp+1899,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__inactive_cntr_nxt),14);
        bufp->chgBit(oldp+1900,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__port_is_inactive_nxt));
        __Vtemp_26[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U];
        __Vtemp_26[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U];
        __Vtemp_26[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U];
        __Vtemp_26[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U];
        __Vtemp_26[4U] = (0x7fffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[4U]);
        bufp->chgWData(oldp+1901,(__Vtemp_26),151);
        __Vtemp_29[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U];
        __Vtemp_29[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U];
        __Vtemp_29[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U];
        __Vtemp_29[3U] = (0x7fffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[3U]);
        bufp->chgWData(oldp+1906,(__Vtemp_29),119);
        bufp->chgCData(oldp+1910,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                    ? (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                   >> 0x1eU)))
                                    : 0U)),7);
        bufp->chgCData(oldp+1911,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                    ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                >> 0x12U))
                                    : 0U)),5);
        bufp->chgCData(oldp+1912,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                    ? (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                >> 6U))
                                    : 0U)),5);
        bufp->chgCData(oldp+1913,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                               >> 0x11U))
                                    : 0U)),4);
        bufp->chgSData(oldp+1914,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgSData(oldp+1915,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)
                                    ? (0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLIT_ptcl[0U] 
                                                 >> 0xfU))
                                    : 0U)),12);
        bufp->chgSData(oldp+1916,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_RSPFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgSData(oldp+1917,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)
                                    ? (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_DATFLIT_ptcl[0U] 
                                                    >> 0x1aU)))
                                    : 0U)),12);
        bufp->chgCData(oldp+1918,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgBit(oldp+1919,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+1920,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+1921,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+1922,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+1923,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+1924,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+1925,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1926,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+1927,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+1928,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
        bufp->chgWData(oldp+1950,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
        bufp->chgWData(oldp+1972,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
        bufp->chgWData(oldp+1994,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
        bufp->chgBit(oldp+2016,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+2017,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+2018,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+2019,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+2020,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+2021,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+2022,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2023,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2024,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+2025,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+2028,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+2031,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+2034,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgBit(oldp+2037,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgWData(oldp+2038,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__write_data_fifo_tx_snpreq),152);
        bufp->chgCData(oldp+2043,((7U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hac6e8b95_0_75))))),3);
        bufp->chgBit(oldp+2044,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo));
        bufp->chgWData(oldp+2045,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__snprsp_flit_s),73);
        bufp->chgBit(oldp+2048,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+2049,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),2);
        bufp->chgCData(oldp+2050,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
        bufp->chgCData(oldp+2051,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt),3);
        bufp->chgBit(oldp+2052,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2053,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2054,((2ULL < (0x3ffffffffULL 
                                         & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+2055,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),152);
        bufp->chgWData(oldp+2060,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),152);
        bufp->chgWData(oldp+2065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),152);
        bufp->chgWData(oldp+2070,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sync_fifo_gen__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),152);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x34U]))) {
        bufp->chgBit(oldp+2075,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__consumed_crdt));
        bufp->chgBit(oldp+2076,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+2077,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
        bufp->chgBit(oldp+2082,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom));
        bufp->chgBit(oldp+2083,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__send_datacrdt_update));
        bufp->chgWData(oldp+2084,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s),680);
        bufp->chgBit(oldp+2106,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_req_crdt));
        bufp->chgBit(oldp+2107,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__opened_fiforoom));
        bufp->chgWData(oldp+2108,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s),680);
        bufp->chgBit(oldp+2130,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__update_rsp_crdt));
        bufp->chgWData(oldp+2131,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s),73);
        bufp->chgBit(oldp+2134,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__consumed_xmt_dat_crdt));
        bufp->chgBit(oldp+2135,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3));
        bufp->chgWData(oldp+2136,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__slc_rspflit_s),73);
        bufp->chgBit(oldp+2139,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3)))));
        bufp->chgBit(oldp+2140,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff));
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
        bufp->chgWData(oldp+2141,(__Vtemp_30),512);
        bufp->chgCData(oldp+2157,((3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[1U] 
                                         >> 0x15U))),2);
        bufp->chgBit(oldp+2158,((1U & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_rd_txnid_buff)))));
        bufp->chgBit(oldp+2159,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_reqflit_fifo));
        bufp->chgCData(oldp+2160,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cmdproc_st_nxt),2);
        bufp->chgBit(oldp+2161,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff));
        bufp->chgSData(oldp+2162,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_bit_available_nxt),16);
        bufp->chgCData(oldp+2163,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_selected_nxt),4);
        bufp->chgSData(oldp+2164,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_rd_txnid_buff),16);
        bufp->chgSData(oldp+2165,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+2166,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+2167,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+2168,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+2169,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+2170,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+2171,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+2172,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+2173,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+2174,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+2175,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+2176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+2177,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+2178,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+2179,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+2180,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_txnid_buffer_nxt[15]),12);
        bufp->chgCData(oldp+2181,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_DATFLIT_s[0U] 
                                           >> 0x1aU))),4);
        bufp->chgBit(oldp+2182,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__latch_txnid));
        bufp->chgBit(oldp+2183,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_addr_buff));
        bufp->chgSData(oldp+2184,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_bit_available_nxt),16);
        bufp->chgCData(oldp+2185,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_selected_nxt),4);
        bufp->chgBit(oldp+2186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_zero_buff));
        bufp->chgSData(oldp+2187,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_zero_buffer_nxt),16);
        bufp->chgSData(oldp+2188,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_wr_addr_buff),16);
        bufp->chgQData(oldp+2189,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[0]),52);
        bufp->chgQData(oldp+2191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[1]),52);
        bufp->chgQData(oldp+2193,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[2]),52);
        bufp->chgQData(oldp+2195,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[3]),52);
        bufp->chgQData(oldp+2197,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[4]),52);
        bufp->chgQData(oldp+2199,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[5]),52);
        bufp->chgQData(oldp+2201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[6]),52);
        bufp->chgQData(oldp+2203,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[7]),52);
        bufp->chgQData(oldp+2205,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[8]),52);
        bufp->chgQData(oldp+2207,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[9]),52);
        bufp->chgQData(oldp+2209,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[10]),52);
        bufp->chgQData(oldp+2211,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[11]),52);
        bufp->chgQData(oldp+2213,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[12]),52);
        bufp->chgQData(oldp+2215,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[13]),52);
        bufp->chgQData(oldp+2217,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[14]),52);
        bufp->chgQData(oldp+2219,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_addr_buffer_nxt[15]),52);
        bufp->chgCData(oldp+2221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[0]),4);
        bufp->chgCData(oldp+2222,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[1]),4);
        bufp->chgCData(oldp+2223,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[2]),4);
        bufp->chgCData(oldp+2224,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[3]),4);
        bufp->chgCData(oldp+2225,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[4]),4);
        bufp->chgCData(oldp+2226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[5]),4);
        bufp->chgCData(oldp+2227,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[6]),4);
        bufp->chgCData(oldp+2228,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[7]),4);
        bufp->chgCData(oldp+2229,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[8]),4);
        bufp->chgCData(oldp+2230,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[9]),4);
        bufp->chgCData(oldp+2231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[10]),4);
        bufp->chgCData(oldp+2232,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[11]),4);
        bufp->chgCData(oldp+2233,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[12]),4);
        bufp->chgCData(oldp+2234,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[13]),4);
        bufp->chgCData(oldp+2235,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[14]),4);
        bufp->chgCData(oldp+2236,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_qos_buffer_nxt[15]),4);
        bufp->chgSData(oldp+2237,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+2238,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+2239,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+2240,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+2241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+2242,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+2243,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+2244,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+2245,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+2246,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+2247,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+2248,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+2249,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+2250,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+2251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+2252,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_txnid_buffer_nxt[15]),12);
        bufp->chgSData(oldp+2253,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[0]),11);
        bufp->chgSData(oldp+2254,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[1]),11);
        bufp->chgSData(oldp+2255,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[2]),11);
        bufp->chgSData(oldp+2256,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[3]),11);
        bufp->chgSData(oldp+2257,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[4]),11);
        bufp->chgSData(oldp+2258,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[5]),11);
        bufp->chgSData(oldp+2259,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[6]),11);
        bufp->chgSData(oldp+2260,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[7]),11);
        bufp->chgSData(oldp+2261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[8]),11);
        bufp->chgSData(oldp+2262,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[9]),11);
        bufp->chgSData(oldp+2263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[10]),11);
        bufp->chgSData(oldp+2264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[11]),11);
        bufp->chgSData(oldp+2265,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[12]),11);
        bufp->chgSData(oldp+2266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[13]),11);
        bufp->chgSData(oldp+2267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[14]),11);
        bufp->chgSData(oldp+2268,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_tgtid_buffer_nxt[15]),11);
        bufp->chgBit(oldp+2269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[0]));
        bufp->chgBit(oldp+2270,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[1]));
        bufp->chgBit(oldp+2271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[2]));
        bufp->chgBit(oldp+2272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[3]));
        bufp->chgBit(oldp+2273,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[4]));
        bufp->chgBit(oldp+2274,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[5]));
        bufp->chgBit(oldp+2275,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[6]));
        bufp->chgBit(oldp+2276,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[7]));
        bufp->chgBit(oldp+2277,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[8]));
        bufp->chgBit(oldp+2278,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[9]));
        bufp->chgBit(oldp+2279,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[10]));
        bufp->chgBit(oldp+2280,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[11]));
        bufp->chgBit(oldp+2281,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[12]));
        bufp->chgBit(oldp+2282,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[13]));
        bufp->chgBit(oldp+2283,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[14]));
        bufp->chgBit(oldp+2284,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_ns_buffer_nxt[15]));
        bufp->chgCData(oldp+2285,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[0]),4);
        bufp->chgCData(oldp+2286,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[1]),4);
        bufp->chgCData(oldp+2287,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[2]),4);
        bufp->chgCData(oldp+2288,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[3]),4);
        bufp->chgCData(oldp+2289,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[4]),4);
        bufp->chgCData(oldp+2290,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[5]),4);
        bufp->chgCData(oldp+2291,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[6]),4);
        bufp->chgCData(oldp+2292,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[7]),4);
        bufp->chgCData(oldp+2293,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[8]),4);
        bufp->chgCData(oldp+2294,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[9]),4);
        bufp->chgCData(oldp+2295,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[10]),4);
        bufp->chgCData(oldp+2296,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[11]),4);
        bufp->chgCData(oldp+2297,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[12]),4);
        bufp->chgCData(oldp+2298,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[13]),4);
        bufp->chgCData(oldp+2299,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[14]),4);
        bufp->chgCData(oldp+2300,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_memattr_buffer_nxt[15]),4);
        bufp->chgSData(oldp+2301,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_sent_data_bit_nxt),16);
        bufp->chgSData(oldp+2302,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_received_sn_comp_bit_nxt),16);
        bufp->chgBit(oldp+2303,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_comp_buff));
        bufp->chgBit(oldp+2304,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_txnid_buff_outstanding_reqf));
        bufp->chgBit(oldp+2305,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_rd_reqf_buff));
        bufp->chgBit(oldp+2306,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_select_rd_reqf_pointer));
        bufp->chgWData(oldp+2307,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[0]),154);
        bufp->chgWData(oldp+2312,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[1]),154);
        bufp->chgWData(oldp+2317,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[2]),154);
        bufp->chgWData(oldp+2322,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[3]),154);
        bufp->chgWData(oldp+2327,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[4]),154);
        bufp->chgWData(oldp+2332,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[5]),154);
        bufp->chgWData(oldp+2337,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[6]),154);
        bufp->chgWData(oldp+2342,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[7]),154);
        bufp->chgWData(oldp+2347,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[8]),154);
        bufp->chgWData(oldp+2352,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[9]),154);
        bufp->chgWData(oldp+2357,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[10]),154);
        bufp->chgWData(oldp+2362,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[11]),154);
        bufp->chgWData(oldp+2367,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[12]),154);
        bufp->chgWData(oldp+2372,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[13]),154);
        bufp->chgWData(oldp+2377,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[14]),154);
        bufp->chgWData(oldp+2382,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_nxt[15]),154);
        bufp->chgSData(oldp+2387,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_buffer_bit_available_nxt),16);
        bufp->chgWData(oldp+2388,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rd_reqf_s),151);
        bufp->chgSData(oldp+2393,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__txnid_from_cc),12);
        bufp->chgBit(oldp+2394,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__flit_dmt_en));
        bufp->chgBit(oldp+2395,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memwr_req));
        bufp->chgBit(oldp+2396,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_memrd_req));
        bufp->chgBit(oldp+2397,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_data_buff));
        bufp->chgCData(oldp+2398,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[0]),4);
        bufp->chgCData(oldp+2399,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[1]),4);
        bufp->chgCData(oldp+2400,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[2]),4);
        bufp->chgCData(oldp+2401,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[3]),4);
        bufp->chgCData(oldp+2402,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[4]),4);
        bufp->chgCData(oldp+2403,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[5]),4);
        bufp->chgCData(oldp+2404,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[6]),4);
        bufp->chgCData(oldp+2405,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[7]),4);
        bufp->chgCData(oldp+2406,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[8]),4);
        bufp->chgCData(oldp+2407,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[9]),4);
        bufp->chgCData(oldp+2408,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[10]),4);
        bufp->chgCData(oldp+2409,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[11]),4);
        bufp->chgCData(oldp+2410,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[12]),4);
        bufp->chgCData(oldp+2411,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[13]),4);
        bufp->chgCData(oldp+2412,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[14]),4);
        bufp->chgCData(oldp+2413,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_nxt[15]),4);
        bufp->chgSData(oldp+2414,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_index_buffer_bit_nxt),16);
        bufp->chgWData(oldp+2415,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[0]),512);
        bufp->chgWData(oldp+2431,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[1]),512);
        bufp->chgWData(oldp+2447,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[2]),512);
        bufp->chgWData(oldp+2463,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[3]),512);
        bufp->chgWData(oldp+2479,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[4]),512);
        bufp->chgWData(oldp+2495,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[5]),512);
        bufp->chgWData(oldp+2511,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[6]),512);
        bufp->chgWData(oldp+2527,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[7]),512);
        bufp->chgWData(oldp+2543,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[8]),512);
        bufp->chgWData(oldp+2559,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[9]),512);
        bufp->chgWData(oldp+2575,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[10]),512);
        bufp->chgWData(oldp+2591,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[11]),512);
        bufp->chgWData(oldp+2607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[12]),512);
        bufp->chgWData(oldp+2623,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[13]),512);
        bufp->chgWData(oldp+2639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[14]),512);
        bufp->chgWData(oldp+2655,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_data_buffer_nxt[15]),512);
        bufp->chgQData(oldp+2671,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[0]),64);
        bufp->chgQData(oldp+2673,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[1]),64);
        bufp->chgQData(oldp+2675,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[2]),64);
        bufp->chgQData(oldp+2677,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[3]),64);
        bufp->chgQData(oldp+2679,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[4]),64);
        bufp->chgQData(oldp+2681,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[5]),64);
        bufp->chgQData(oldp+2683,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[6]),64);
        bufp->chgQData(oldp+2685,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[7]),64);
        bufp->chgQData(oldp+2687,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[8]),64);
        bufp->chgQData(oldp+2689,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[9]),64);
        bufp->chgQData(oldp+2691,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[10]),64);
        bufp->chgQData(oldp+2693,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[11]),64);
        bufp->chgQData(oldp+2695,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[12]),64);
        bufp->chgQData(oldp+2697,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[13]),64);
        bufp->chgQData(oldp+2699,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[14]),64);
        bufp->chgQData(oldp+2701,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_be_buffer_nxt[15]),64);
        bufp->chgBit(oldp+2703,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_data_index_buffer));
        bufp->chgBit(oldp+2704,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__allocate_wr_dbid_buff));
        bufp->chgCData(oldp+2705,((0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[0U] 
                                           >> 0x1aU))),4);
        bufp->chgSData(oldp+2706,((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[2U] 
                                              << 0xaU) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U] 
                                                >> 0x16U)))),12);
        bufp->chgSData(oldp+2707,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_index_buffer_bit_nxt),16);
        bufp->chgSData(oldp+2708,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[0]),12);
        bufp->chgSData(oldp+2709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[1]),12);
        bufp->chgSData(oldp+2710,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[2]),12);
        bufp->chgSData(oldp+2711,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[3]),12);
        bufp->chgSData(oldp+2712,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[4]),12);
        bufp->chgSData(oldp+2713,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[5]),12);
        bufp->chgSData(oldp+2714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[6]),12);
        bufp->chgSData(oldp+2715,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[7]),12);
        bufp->chgSData(oldp+2716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[8]),12);
        bufp->chgSData(oldp+2717,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[9]),12);
        bufp->chgSData(oldp+2718,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[10]),12);
        bufp->chgSData(oldp+2719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[11]),12);
        bufp->chgSData(oldp+2720,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[12]),12);
        bufp->chgSData(oldp+2721,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[13]),12);
        bufp->chgSData(oldp+2722,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[14]),12);
        bufp->chgSData(oldp+2723,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_dbid_buffer_nxt[15]),12);
        bufp->chgBit(oldp+2724,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rst_wr_buff));
        bufp->chgQData(oldp+2725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__mem_addr_wrrd),52);
        bufp->chgIData(oldp+2727,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__cm_flit_addr_sliced_pm[0]),28);
        bufp->chgSData(oldp+2728,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_rdretryack_bufv),16);
        bufp->chgSData(oldp+2729,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__clr_wrretryack_bufv),16);
        bufp->chgBit(oldp+2730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__got_retryackresp));
        bufp->chgSData(oldp+2731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__retryack_buf_entry),15);
        bufp->chgSData(oldp+2732,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[0]),15);
        bufp->chgSData(oldp+2733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[1]),15);
        bufp->chgSData(oldp+2734,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[2]),15);
        bufp->chgSData(oldp+2735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[3]),15);
        bufp->chgSData(oldp+2736,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[4]),15);
        bufp->chgSData(oldp+2737,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[5]),15);
        bufp->chgSData(oldp+2738,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[6]),15);
        bufp->chgSData(oldp+2739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[7]),15);
        bufp->chgSData(oldp+2740,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[8]),15);
        bufp->chgSData(oldp+2741,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[9]),15);
        bufp->chgSData(oldp+2742,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[10]),15);
        bufp->chgSData(oldp+2743,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[11]),15);
        bufp->chgSData(oldp+2744,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[12]),15);
        bufp->chgSData(oldp+2745,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[13]),15);
        bufp->chgSData(oldp+2746,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[14]),15);
        bufp->chgSData(oldp+2747,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_buf_nxt[15]),15);
        bufp->chgSData(oldp+2748,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[0]),15);
        bufp->chgSData(oldp+2749,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[1]),15);
        bufp->chgSData(oldp+2750,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[2]),15);
        bufp->chgSData(oldp+2751,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[3]),15);
        bufp->chgSData(oldp+2752,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[4]),15);
        bufp->chgSData(oldp+2753,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[5]),15);
        bufp->chgSData(oldp+2754,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[6]),15);
        bufp->chgSData(oldp+2755,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[7]),15);
        bufp->chgSData(oldp+2756,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[8]),15);
        bufp->chgSData(oldp+2757,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[9]),15);
        bufp->chgSData(oldp+2758,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[10]),15);
        bufp->chgSData(oldp+2759,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[11]),15);
        bufp->chgSData(oldp+2760,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[12]),15);
        bufp->chgSData(oldp+2761,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[13]),15);
        bufp->chgSData(oldp+2762,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[14]),15);
        bufp->chgSData(oldp+2763,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_buf_nxt[15]),15);
        bufp->chgSData(oldp+2764,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rdretryack_bufv_nxt),16);
        bufp->chgSData(oldp+2765,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wrretryack_bufv_nxt),16);
        bufp->chgBit(oldp+2766,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wren_pcredit_fifo));
        bufp->chgBit(oldp+2767,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__rden_pcredit_fifo));
        bufp->chgBit(oldp+2768,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_outstand_req_cmo));
        bufp->chgBit(oldp+2769,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__assert_slc_rspvalid));
        bufp->chgBit(oldp+2770,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_dbidresp));
        bufp->chgBit(oldp+2771,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_compdbidresp));
        bufp->chgBit(oldp+2772,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__send_late_comp_resp));
        bufp->chgSData(oldp+2773,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__wr_req_sent_nxt),16);
        bufp->chgBit(oldp+2774,((3U == (3U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_RX_RSPFLIT_s[1U]))));
        bufp->chgCData(oldp+2775,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__wr_ptr_nxt),5);
        bufp->chgCData(oldp+2776,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__rd_ptr_nxt),5);
        bufp->chgCData(oldp+2777,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt),6);
        bufp->chgBit(oldp+2778,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2779,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2780,((2ULL < (0x3ffffffffULL 
                                         & (0x20ULL 
                                            - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__num_entries_nxt)))))));
        bufp->chgSData(oldp+2781,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[0]),15);
        bufp->chgSData(oldp+2782,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[1]),15);
        bufp->chgSData(oldp+2783,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[2]),15);
        bufp->chgSData(oldp+2784,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[3]),15);
        bufp->chgSData(oldp+2785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[4]),15);
        bufp->chgSData(oldp+2786,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[5]),15);
        bufp->chgSData(oldp+2787,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[6]),15);
        bufp->chgSData(oldp+2788,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[7]),15);
        bufp->chgSData(oldp+2789,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[8]),15);
        bufp->chgSData(oldp+2790,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[9]),15);
        bufp->chgSData(oldp+2791,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[10]),15);
        bufp->chgSData(oldp+2792,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[11]),15);
        bufp->chgSData(oldp+2793,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[12]),15);
        bufp->chgSData(oldp+2794,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[13]),15);
        bufp->chgSData(oldp+2795,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[14]),15);
        bufp->chgSData(oldp+2796,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[15]),15);
        bufp->chgSData(oldp+2797,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[16]),15);
        bufp->chgSData(oldp+2798,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[17]),15);
        bufp->chgSData(oldp+2799,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[18]),15);
        bufp->chgSData(oldp+2800,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[19]),15);
        bufp->chgSData(oldp+2801,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[20]),15);
        bufp->chgSData(oldp+2802,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[21]),15);
        bufp->chgSData(oldp+2803,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[22]),15);
        bufp->chgSData(oldp+2804,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[23]),15);
        bufp->chgSData(oldp+2805,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[24]),15);
        bufp->chgSData(oldp+2806,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[25]),15);
        bufp->chgSData(oldp+2807,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[26]),15);
        bufp->chgSData(oldp+2808,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[27]),15);
        bufp->chgSData(oldp+2809,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[28]),15);
        bufp->chgSData(oldp+2810,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[29]),15);
        bufp->chgSData(oldp+2811,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[30]),15);
        bufp->chgSData(oldp+2812,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__pcredit_fifo__DOT__fifo_loc_nxt[31]),15);
        bufp->chgBit(oldp+2813,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt));
        bufp->chgCData(oldp+2814,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_dat__DOT__init_crdt_ctr_nxt),5);
        bufp->chgCData(oldp+2815,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__sig_ic_crdt_update_rsp__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+2816,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+2817,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+2818,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+2819,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+2820,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+2821,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+2822,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2823,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+2824,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+2825,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),680);
        bufp->chgWData(oldp+2847,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),680);
        bufp->chgWData(oldp+2869,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),680);
        bufp->chgWData(oldp+2891,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),680);
        bufp->chgWData(oldp+2913,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),680);
        bufp->chgWData(oldp+2935,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),680);
        bufp->chgWData(oldp+2957,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),680);
        bufp->chgWData(oldp+2979,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),680);
        bufp->chgBit(oldp+3001,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+3002,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+3003,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+3004,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+3005,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+3006,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+3007,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3008,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3009,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+3010,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),151);
        bufp->chgWData(oldp+3015,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),151);
        bufp->chgWData(oldp+3020,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),151);
        bufp->chgWData(oldp+3025,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),151);
        bufp->chgWData(oldp+3030,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),151);
        bufp->chgWData(oldp+3035,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),151);
        bufp->chgWData(oldp+3040,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),151);
        bufp->chgWData(oldp+3045,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),151);
        bufp->chgBit(oldp+3050,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+3051,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+3052,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+3053,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+3054,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+3055,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+3056,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3057,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3058,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+3059,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+3062,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+3065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+3068,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+3071,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
        bufp->chgWData(oldp+3074,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
        bufp->chgWData(oldp+3077,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
        bufp->chgWData(oldp+3080,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
        bufp->chgCData(oldp+3083,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+3084,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_req__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+3085,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgIData(oldp+3086,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dealloc_compfifo_vector_compdata),32);
        bufp->chgBit(oldp+3087,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_reqcmdq));
        bufp->chgBit(oldp+3088,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wren_respcmdq));
        bufp->chgWData(oldp+3089,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_respcmdq),74);
        bufp->chgWData(oldp+3092,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_memrespcmdq),109);
        bufp->chgBit(oldp+3096,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid));
        bufp->chgBit(oldp+3097,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_dataflit));
        bufp->chgIData(oldp+3098,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_outstand_prep),32);
        bufp->chgBit(oldp+3099,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__clr_unused_compbuff_num));
        bufp->chgBit(oldp+3100,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st));
        bufp->chgBit(oldp+3101,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd));
        bufp->chgBit(oldp+3102,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__en_compbuf_2nd_for_snpdata));
        bufp->chgBit(oldp+3103,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__block_compbuf_available));
        bufp->chgBit(oldp+3104,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_1st) 
                                 | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__allocate_compbuf_2nd))));
        bufp->chgBit(oldp+3105,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq));
        bufp->chgBit(oldp+3106,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_nodeid_valid));
        bufp->chgSData(oldp+3107,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_reqproc_full_node_id),11);
        bufp->chgSData(oldp+3108,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__rcv_rsp_dat_linear_srcid),11);
        bufp->chgSData(oldp+3109,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__xmt_snpreq_full_srcid),11);
        bufp->chgBit(oldp+3110,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_copyback_nocopyback));
        bufp->chgBit(oldp+3111,((7U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                                >> 0x11U)))));
        bufp->chgBit(oldp+3112,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_snprespdata));
        bufp->chgBit(oldp+3113,((4U == (0xfU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__ic_RX_DATFLIT_s[1U] 
                                                >> 0x11U)))));
        bufp->chgBit(oldp+3114,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__opcode_valid));
        bufp->chgCData(oldp+3115,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_datproc_0__DOT__sig_chi_crdt_update_datproc__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+3116,(((3U == (0x7fU & ((
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                     >> 0x1eU)))) 
                                 | ((2U == (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                          | ((0x26U 
                                              == (0x7fU 
                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                        >> 0x1eU)))) 
                                             | ((0x24U 
                                                 == 
                                                 (0x7fU 
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
        bufp->chgBit(oldp+3117,(((0x15U == (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                       | ((0x16U == 
                                           (0x7fU & 
                                            ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                              << 2U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                >> 0x1eU)))) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                        >> 0x1eU)))) 
                                             | ((0x18U 
                                                 == 
                                                 (0x7fU 
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
        bufp->chgBit(oldp+3118,((4U == (0x7fU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                    >> 0x1eU))))));
        bufp->chgBit(oldp+3119,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_nonsnpable));
        bufp->chgBit(oldp+3120,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable));
        bufp->chgBit(oldp+3121,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable));
        bufp->chgBit(oldp+3122,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_non_snpable));
        bufp->chgCData(oldp+3123,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__req_is_atmo),3);
        bufp->chgBit(oldp+3124,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_atomtxn));
        bufp->chgBit(oldp+3125,((((0x54U == (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
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
                                            (0x7fU 
                                             & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                 << 2U) 
                                                | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                   >> 0x1eU)))) 
                                           | (0x5cU 
                                              == (0x7fU 
                                                  & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                        >> 0x1eU)))))))) 
                                 | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp))));
        bufp->chgBit(oldp+3126,(((0x54U == (0x7fU & 
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
                                          | (0x5cU 
                                             == (0x7fU 
                                                 & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[2U] 
                                                     << 2U) 
                                                    | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed[1U] 
                                                       >> 0x1eU))))))))));
        bufp->chgIData(oldp+3127,((0xfffffffU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U])),28);
        bufp->chgSData(oldp+3128,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_addr_match_vec),16);
        bufp->chgCData(oldp+3129,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[0]),4);
        bufp->chgCData(oldp+3130,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[1]),4);
        bufp->chgCData(oldp+3131,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[2]),4);
        bufp->chgCData(oldp+3132,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[3]),4);
        bufp->chgCData(oldp+3133,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[4]),4);
        bufp->chgCData(oldp+3134,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[5]),4);
        bufp->chgCData(oldp+3135,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[6]),4);
        bufp->chgCData(oldp+3136,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[7]),4);
        bufp->chgCData(oldp+3137,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[8]),4);
        bufp->chgCData(oldp+3138,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[9]),4);
        bufp->chgCData(oldp+3139,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[10]),4);
        bufp->chgCData(oldp+3140,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[11]),4);
        bufp->chgCData(oldp+3141,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[12]),4);
        bufp->chgCData(oldp+3142,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[13]),4);
        bufp->chgCData(oldp+3143,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[14]),4);
        bufp->chgCData(oldp+3144,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__ucie_flit_sliced_addr[15]),4);
        bufp->chgBit(oldp+3145,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wrcmo_nonsnp));
        bufp->chgBit(oldp+3146,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wren_reqfifo));
        bufp->chgBit(oldp+3147,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__rden_reqfifo));
        bufp->chgWData(oldp+3148,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__wrdata_reqfifo),151);
        bufp->chgWData(oldp+3153,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmd_muxed),151);
        bufp->chgBit(oldp+3158,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__writeevictorevict_turns_writeevict));
        bufp->chgWData(oldp+3159,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit),151);
        __Vtemp_32[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[0U];
        __Vtemp_32[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[1U];
        __Vtemp_32[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[2U];
        __Vtemp_32[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[3U];
        __Vtemp_32[4U] = (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_rd_snpable_or_nonsnpable) 
                           << 0x18U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqis_wr_snpable_or_nonsnpable) 
                                         << 0x17U) 
                                        | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U]));
        bufp->chgWData(oldp+3164,(__Vtemp_32),153);
        bufp->chgBit(oldp+3169,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__placeholder_state_n));
        bufp->chgCData(oldp+3170,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__wr_ptr_nxt),4);
        bufp->chgCData(oldp+3171,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__rd_ptr_nxt),4);
        bufp->chgCData(oldp+3172,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt),5);
        bufp->chgBit(oldp+3173,((0x10U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3174,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3175,((2ULL < (0x3ffffffffULL 
                                         & (0x10ULL 
                                            - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+3176,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[0]),151);
        bufp->chgWData(oldp+3181,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[1]),151);
        bufp->chgWData(oldp+3186,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[2]),151);
        bufp->chgWData(oldp+3191,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[3]),151);
        bufp->chgWData(oldp+3196,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[4]),151);
        bufp->chgWData(oldp+3201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[5]),151);
        bufp->chgWData(oldp+3206,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[6]),151);
        bufp->chgWData(oldp+3211,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[7]),151);
        bufp->chgWData(oldp+3216,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[8]),151);
        bufp->chgWData(oldp+3221,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[9]),151);
        bufp->chgWData(oldp+3226,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[10]),151);
        bufp->chgWData(oldp+3231,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[11]),151);
        bufp->chgWData(oldp+3236,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[12]),151);
        bufp->chgWData(oldp+3241,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[13]),151);
        bufp->chgWData(oldp+3246,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[14]),151);
        bufp->chgWData(oldp+3251,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqflit_fifo_0__DOT__fifo_loc_nxt[15]),151);
        bufp->chgBit(oldp+3256,(((1U == (0x1fU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                  >> 6U))) 
                                 | ((9U == (0x1fU & 
                                            (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                             >> 6U))) 
                                    | ((2U == (0x1fU 
                                               & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                  >> 6U))) 
                                       | ((5U == (0x1fU 
                                                  & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                     >> 6U))) 
                                          | ((6U == 
                                              (0x1fU 
                                               & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT[1U] 
                                                  >> 6U))) 
                                             | ((4U 
                                                 == 
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
        bufp->chgBit(oldp+3257,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__opened_fiforoom) 
                                 | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__resp_src_l3))));
        bufp->chgWData(oldp+3258,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__RX_RSPFLIT),73);
        bufp->chgCData(oldp+3261,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__init_crdt_ctr_nxt),5);
        bufp->chgBit(oldp+3262,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_2nd_compbuff_num));
        bufp->chgBit(oldp+3263,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_1st_compbuff));
        bufp->chgBit(oldp+3264,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__deallocate_2nd_compbuff));
        bufp->chgBit(oldp+3265,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__swap_1st_and_2nd_compbuff));
        bufp->chgBit(oldp+3266,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__req_resp_compdata_nxt));
        bufp->chgIData(oldp+3267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_outstand_cmd_pre),32);
        bufp->chgBit(oldp+3268,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__send_memdata));
        bufp->chgBit(oldp+3269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flag_memwr_allbe_zero_nxt));
        bufp->chgBit(oldp+3270,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__make_be_allzero_memwr));
        bufp->chgBit(oldp+3271,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_pendingq_prep));
        bufp->chgBit(oldp+3272,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__clr_collnreg_sending_ini_pre));
        bufp->chgBit(oldp+3273,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__flittype_rdnosnp_l3));
        bufp->chgBit(oldp+3274,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__xmt_datflit_resperr_nxt));
        bufp->chgBit(oldp+3275,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__compbuf_available));
        bufp->chgIData(oldp+3276,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3277,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__outstand_prep_valid_nxt),32);
        bufp->chgWData(oldp+3278,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__wrdata_stat_common_ph3_rsp),136);
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
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2991__03a2856__KET__[4U] 
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
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_43[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3127__03a2992__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_43[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_43[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_43[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3263__03a3128__KET__[3U] 
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
                                            >> 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3535__03a3400__KET__[4U] 
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
                                            << 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                                              << 0x10U)));
        __Vtemp_43[0x1eU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                          >> 8U)) | 
                              (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3671__03a3536__KET__[4U] 
                               >> 0x10U)) | ((0xff0000U 
                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[0U] 
                                                 >> 8U)) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                                << 0x18U)));
        __Vtemp_43[0x1fU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[1U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                 << 0x18U)));
        __Vtemp_43[0x20U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[2U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                 << 0x18U)));
        __Vtemp_43[0x21U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__3807__03a3672__KET__[3U] 
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
                                            >> 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4079__03a3944__KET__[4U] 
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
                                            << 0x18U) 
                                           | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                                              << 0x10U)));
        __Vtemp_43[0x2fU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                          >> 8U)) | 
                              (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4215__03a4080__KET__[4U] 
                               >> 0x10U)) | ((0xff0000U 
                                              & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[0U] 
                                                 >> 8U)) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                                << 0x18U)));
        __Vtemp_43[0x30U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[1U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                 << 0x18U)));
        __Vtemp_43[0x31U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[2U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                 << 0x18U)));
        __Vtemp_43[0x32U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__4351__03a4216__KET__[3U] 
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
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2447__03a2312__KET__[4U] 
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
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_46[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2583__03a2448__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_46[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_46[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_46[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2719__03a2584__KET__[3U] 
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
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1903__03a1768__KET__[4U] 
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
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_50[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2039__03a1904__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_50[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_50[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_50[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__2175__03a2040__KET__[3U] 
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
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1359__03a1224__KET__[4U] 
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
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_54[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1495__03a1360__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_54[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_54[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_54[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1631__03a1496__KET__[3U] 
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
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__815__03a680__KET__[4U] 
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
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_58[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__951__03a816__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_58[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_58[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_58[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__1087__03a952__KET__[3U] 
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
                                         >> 0x18U) 
                                        | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__271__03a136__KET__[4U] 
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
                                           << 0x18U) 
                                          | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                                             << 0x10U)));
        __Vtemp_62[0xdU] = (((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                         >> 8U)) | 
                             (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__407__03a272__KET__[4U] 
                              >> 0x10U)) | ((0xff0000U 
                                             & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[0U] 
                                                >> 8U)) 
                                            | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                               << 0x18U)));
        __Vtemp_62[0xeU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[1U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                      << 0x18U)));
        __Vtemp_62[0xfU] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                        >> 8U)) | (
                                                   (0xff0000U 
                                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[2U] 
                                                       >> 8U)) 
                                                   | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                                      << 0x18U)));
        __Vtemp_62[0x10U] = ((0xffffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                         >> 8U)) | 
                             ((0xff0000U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[3U] 
                                            >> 8U)) 
                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__status_field_common_nxt__BRA__543__03a408__KET__[4U] 
                                 << 0x18U)));
        VL_CONCAT_WWW(4352,3808,544, __Vtemp_63, __Vtemp_59, __Vtemp_62);
        bufp->chgWData(oldp+3283,(__Vtemp_63),4352);
        bufp->chgCData(oldp+3419,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_ownerp_id_ph3_rsp),7);
        bufp->chgIData(oldp+3420,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__new_share_vect_rsp_m_ph3),22);
        bufp->chgCData(oldp+3421,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_inactive_st_nxt),2);
        bufp->chgSData(oldp+3422,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__inactive_ctr_nxt),16);
        bufp->chgCData(oldp+3423,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+3424,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__wr_ptr_nxt),5);
        bufp->chgCData(oldp+3425,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt),6);
        bufp->chgBit(oldp+3426,((0x20U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3427,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3428,((2ULL < (0x3ffffffffULL 
                                         & (0x20ULL 
                                            - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+3429,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[0]),74);
        bufp->chgWData(oldp+3432,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[1]),74);
        bufp->chgWData(oldp+3435,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[2]),74);
        bufp->chgWData(oldp+3438,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[3]),74);
        bufp->chgWData(oldp+3441,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[4]),74);
        bufp->chgWData(oldp+3444,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[5]),74);
        bufp->chgWData(oldp+3447,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[6]),74);
        bufp->chgWData(oldp+3450,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[7]),74);
        bufp->chgWData(oldp+3453,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[8]),74);
        bufp->chgWData(oldp+3456,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[9]),74);
        bufp->chgWData(oldp+3459,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[10]),74);
        bufp->chgWData(oldp+3462,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[11]),74);
        bufp->chgWData(oldp+3465,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[12]),74);
        bufp->chgWData(oldp+3468,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[13]),74);
        bufp->chgWData(oldp+3471,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[14]),74);
        bufp->chgWData(oldp+3474,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[15]),74);
        bufp->chgWData(oldp+3477,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[16]),74);
        bufp->chgWData(oldp+3480,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[17]),74);
        bufp->chgWData(oldp+3483,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[18]),74);
        bufp->chgWData(oldp+3486,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[19]),74);
        bufp->chgWData(oldp+3489,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[20]),74);
        bufp->chgWData(oldp+3492,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[21]),74);
        bufp->chgWData(oldp+3495,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[22]),74);
        bufp->chgWData(oldp+3498,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[23]),74);
        bufp->chgWData(oldp+3501,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[24]),74);
        bufp->chgWData(oldp+3504,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[25]),74);
        bufp->chgWData(oldp+3507,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[26]),74);
        bufp->chgWData(oldp+3510,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[27]),74);
        bufp->chgWData(oldp+3513,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[28]),74);
        bufp->chgWData(oldp+3516,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[29]),74);
        bufp->chgWData(oldp+3519,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[30]),74);
        bufp->chgWData(oldp+3522,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__respcmd_fifo_0__DOT__fifo_loc_nxt[31]),74);
        bufp->chgIData(oldp+3525,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo),32);
        bufp->chgIData(oldp+3526,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf),32);
        bufp->chgBit(oldp+3527,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo)));
        bufp->chgBit(oldp+3528,((1U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf)));
        bufp->chgBit(oldp+3529,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xaU))));
        bufp->chgBit(oldp+3530,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xaU))));
        bufp->chgBit(oldp+3531,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xbU))));
        bufp->chgBit(oldp+3532,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xbU))));
        bufp->chgBit(oldp+3533,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xcU))));
        bufp->chgBit(oldp+3534,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xcU))));
        bufp->chgBit(oldp+3535,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xdU))));
        bufp->chgBit(oldp+3536,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xdU))));
        bufp->chgBit(oldp+3537,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xeU))));
        bufp->chgBit(oldp+3538,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xeU))));
        bufp->chgBit(oldp+3539,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0xfU))));
        bufp->chgBit(oldp+3540,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0xfU))));
        bufp->chgBit(oldp+3541,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x10U))));
        bufp->chgBit(oldp+3542,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x10U))));
        bufp->chgBit(oldp+3543,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x11U))));
        bufp->chgBit(oldp+3544,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x11U))));
        bufp->chgBit(oldp+3545,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3546,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x12U))));
        bufp->chgBit(oldp+3547,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x13U))));
        bufp->chgBit(oldp+3548,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x13U))));
        bufp->chgBit(oldp+3549,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 1U))));
        bufp->chgBit(oldp+3550,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 1U))));
        bufp->chgBit(oldp+3551,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x14U))));
        bufp->chgBit(oldp+3552,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x14U))));
        bufp->chgBit(oldp+3553,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x15U))));
        bufp->chgBit(oldp+3554,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x15U))));
        bufp->chgBit(oldp+3555,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x16U))));
        bufp->chgBit(oldp+3556,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x16U))));
        bufp->chgBit(oldp+3557,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x17U))));
        bufp->chgBit(oldp+3558,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x17U))));
        bufp->chgBit(oldp+3559,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x18U))));
        bufp->chgBit(oldp+3560,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x18U))));
        bufp->chgBit(oldp+3561,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x19U))));
        bufp->chgBit(oldp+3562,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x19U))));
        bufp->chgBit(oldp+3563,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+3564,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+3565,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+3566,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+3567,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+3568,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+3569,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+3570,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+3571,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 2U))));
        bufp->chgBit(oldp+3572,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 2U))));
        bufp->chgBit(oldp+3573,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+3574,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+3575,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3576,((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+3577,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 3U))));
        bufp->chgBit(oldp+3578,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 3U))));
        bufp->chgBit(oldp+3579,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 4U))));
        bufp->chgBit(oldp+3580,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 4U))));
        bufp->chgBit(oldp+3581,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 5U))));
        bufp->chgBit(oldp+3582,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 5U))));
        bufp->chgBit(oldp+3583,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 6U))));
        bufp->chgBit(oldp+3584,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 6U))));
        bufp->chgBit(oldp+3585,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 7U))));
        bufp->chgBit(oldp+3586,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 7U))));
        bufp->chgBit(oldp+3587,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 8U))));
        bufp->chgBit(oldp+3588,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 8U))));
        bufp->chgBit(oldp+3589,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_compfifo 
                                       >> 9U))));
        bufp->chgBit(oldp+3590,((1U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_compbuff_top_0__DOT__dealloc_unused_compbuf 
                                       >> 9U))));
        bufp->chgCData(oldp+3591,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_idx),5);
        bufp->chgBit(oldp+3592,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_node_id_found));
        bufp->chgIData(oldp+3593,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_reqproc_match_vector),22);
        bufp->chgIData(oldp+3594,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__rcv_rsp_dat_nodeid_match_vector),22);
        bufp->chgIData(oldp+3595,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__u_linearize_nodeid__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+3596,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
        bufp->chgCData(oldp+3597,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
        bufp->chgBit(oldp+3598,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+3599,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+3600,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+3601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+3602,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+3603,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+3604,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3605,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3606,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+3607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),686);
        bufp->chgWData(oldp+3629,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),686);
        bufp->chgWData(oldp+3651,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),686);
        bufp->chgWData(oldp+3673,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),686);
        bufp->chgWData(oldp+3695,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),686);
        bufp->chgWData(oldp+3717,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),686);
        bufp->chgWData(oldp+3739,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),686);
        bufp->chgWData(oldp+3761,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),686);
        bufp->chgBit(oldp+3783,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__wren_flit_store_fifo));
        bufp->chgBit(oldp+3784,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo));
        bufp->chgBit(oldp+3785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__rden_storefifo_bypass));
        bufp->chgCData(oldp+3786,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__wr_ptr_nxt),3);
        bufp->chgCData(oldp+3787,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),3);
        bufp->chgCData(oldp+3788,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt),4);
        bufp->chgBit(oldp+3789,((8U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3790,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt))));
        bufp->chgBit(oldp+3791,((2ULL < (0x3ffffffffULL 
                                         & (8ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__num_entries_nxt)))))));
        bufp->chgWData(oldp+3792,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[0]),73);
        bufp->chgWData(oldp+3795,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[1]),73);
        bufp->chgWData(oldp+3798,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[2]),73);
        bufp->chgWData(oldp+3801,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[3]),73);
        bufp->chgWData(oldp+3804,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[4]),73);
        bufp->chgWData(oldp+3807,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[5]),73);
        bufp->chgWData(oldp+3810,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[6]),73);
        bufp->chgWData(oldp+3813,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__flit_store_fifo_0__DOT__fifo_loc_nxt[7]),73);
        bufp->chgBit(oldp+3816,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_txn_valid));
        bufp->chgBit(oldp+3817,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_to_ap.dat_init_valid));
        bufp->chgBit(oldp+3818,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__data_from_ap.ready));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x3bU]))) {
        bufp->chgBit(oldp+3819,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__rden_dircache_nxt));
        bufp->chgBit(oldp+3820,((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
        bufp->chgSData(oldp+3821,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc),10);
        bufp->chgSData(oldp+3822,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector),16);
        bufp->chgBit(oldp+3823,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector))));
        bufp->chgWData(oldp+3824,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+3856,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgWData(oldp+3857,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__DOT____Vcellinp__sig_sram_valid_tag_data__wrdata),69);
        bufp->chgBit(oldp+3860,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xaU))));
        bufp->chgWData(oldp+3861,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+3893,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+3894,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xbU))));
        bufp->chgWData(oldp+3895,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+3927,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+3928,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xcU))));
        bufp->chgWData(oldp+3929,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+3961,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+3962,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xdU))));
        bufp->chgWData(oldp+3963,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+3995,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+3996,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xeU))));
        bufp->chgWData(oldp+3997,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4029,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4030,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 0xfU))));
        bufp->chgWData(oldp+4031,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4063,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4064,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 1U))));
        bufp->chgWData(oldp+4065,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4097,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4098,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 2U))));
        bufp->chgWData(oldp+4099,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4131,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4132,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 3U))));
        bufp->chgWData(oldp+4133,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4165,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4166,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 4U))));
        bufp->chgWData(oldp+4167,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4199,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4200,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 5U))));
        bufp->chgWData(oldp+4201,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4233,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4234,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 6U))));
        bufp->chgWData(oldp+4235,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4267,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4268,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 7U))));
        bufp->chgWData(oldp+4269,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4301,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4302,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 8U))));
        bufp->chgWData(oldp+4303,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4335,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgBit(oldp+4336,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector) 
                                       >> 9U))));
        bufp->chgWData(oldp+4337,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__in_pendingq_nxt),1024);
        bufp->chgBit(oldp+4369,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__DOT__clr_in_pendingq));
        bufp->chgSData(oldp+4370,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__cacheproc_state_nxt),13);
        bufp->chgSData(oldp+4371,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_one_nxt),16);
        bufp->chgBit(oldp+4372,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__evict_this_cycle_nxt));
        bufp->chgCData(oldp+4373,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__count_evict_nxt),3);
        bufp->chgBit(oldp+4374,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_fetch_cohc_nxt));
        bufp->chgBit(oldp+4375,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__first_cycle_in_evictend_nxt));
        bufp->chgBit(oldp+4376,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_cachedir_ctrlr_0__DOT__block_rden_cache));
        bufp->chgBit(oldp+4377,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated));
        bufp->chgBit(oldp+4378,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x3cU]))) {
        bufp->chgWData(oldp+4379,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc0),686);
        bufp->chgWData(oldp+4401,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_out_flit_datf_vc1),686);
        bufp->chgWData(oldp+4423,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc0_from_id_translator),680);
        bufp->chgWData(oldp+4445,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__flit_out_datf_vc1_from_id_translator),680);
        bufp->chgBit(oldp+4467,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled));
        bufp->chgBit(oldp+4468,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x3dU]))) {
        bufp->chgBit(oldp+4469,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive));
        bufp->chgBit(oldp+4470,(vlSelfRef.sig_topology_top__DOT__cc_is_inactive_sync));
        bufp->chgBit(oldp+4471,(vlSelfRef.sig_topology_top__DOT__all_cc_are_inactive_reg));
        bufp->chgCData(oldp+4472,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                    << 3U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n)))),4);
        bufp->chgBit(oldp+4473,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__inst_cc_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+4474,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+4475,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+4476,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__DOT__rx_cg_en_n));
        bufp->chgBit(oldp+4477,(vlSelfRef.sig_topology_top__DOT__inst_sync_cc_inactive_cl0_ic_clk__DOT__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__DOT__sig_src_sync1));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x50U]))) {
        bufp->chgWData(oldp+4478,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s),151);
        bufp->chgWData(oldp+4483,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s),680);
        __Vtemp_64[0U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[0U];
        __Vtemp_64[1U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[1U];
        __Vtemp_64[2U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[2U];
        __Vtemp_64[3U] = vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[3U];
        __Vtemp_64[4U] = (0x800000U | vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__ic_RX_REQFLIT_s[4U]);
        bufp->chgWData(oldp+4505,(__Vtemp_64),152);
        bufp->chgWData(oldp+4510,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrd_req_s),151);
        bufp->chgWData(oldp+4515,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memwr_req_s),151);
        bufp->chgSData(oldp+4520,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__tgt_pm_node_id),11);
        bufp->chgWData(oldp+4521,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0U]),151);
        bufp->chgWData(oldp+4526,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [1U]),151);
        bufp->chgWData(oldp+4531,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [2U]),151);
        bufp->chgWData(oldp+4536,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [3U]),151);
        bufp->chgWData(oldp+4541,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [4U]),151);
        bufp->chgWData(oldp+4546,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [5U]),151);
        bufp->chgWData(oldp+4551,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [6U]),151);
        bufp->chgWData(oldp+4556,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [7U]),151);
        bufp->chgWData(oldp+4561,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [8U]),151);
        bufp->chgWData(oldp+4566,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [9U]),151);
        bufp->chgWData(oldp+4571,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xaU]),151);
        bufp->chgWData(oldp+4576,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xbU]),151);
        bufp->chgWData(oldp+4581,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xcU]),151);
        bufp->chgWData(oldp+4586,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xdU]),151);
        bufp->chgWData(oldp+4591,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xeU]),151);
        bufp->chgWData(oldp+4596,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__memrdretry_buf_nxt
                                  [0xfU]),151);
        bufp->chgWData(oldp+4601,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__wrdata_reqcmdq),156);
        bufp->chgBit(oldp+4606,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm));
        bufp->chgBit(oldp+4607,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm));
        bufp->chgBit(oldp+4608,((1U & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                       & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))))));
        bufp->chgWData(oldp+4609,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[0]),156);
        bufp->chgWData(oldp+4614,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[1]),156);
        bufp->chgWData(oldp+4619,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[2]),156);
        bufp->chgWData(oldp+4624,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[3]),156);
        bufp->chgWData(oldp+4629,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[4]),156);
        bufp->chgWData(oldp+4634,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[5]),156);
        bufp->chgWData(oldp+4639,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[6]),156);
        bufp->chgWData(oldp+4644,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc_nxt[7]),156);
        bufp->chgBit(oldp+4649,((8U > (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
        bufp->chgBit(oldp+4650,((8U <= (0xfU & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U]))));
        bufp->chgBit(oldp+4651,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc0));
        bufp->chgBit(oldp+4652,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__ic_RX_FLITV_is_vc1));
    }
    bufp->chgBit(oldp+4653,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->chgBit(oldp+4654,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top));
    bufp->chgBit(oldp+4655,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE) 
                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->chgBit(oldp+4656,(vlSelfRef.sig_topology_top__DOT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->chgBit(oldp+4657,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RXSACTIVE) 
                             | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top))));
    bufp->chgBit(oldp+4658,(vlSelfRef.sig_topology_top__DOT__cl0_p0_TXSACTIVE_OR_RXSACTIVE_reg));
    bufp->chgBit(oldp+4659,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+4660,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk));
    bufp->chgBit(oldp+4661,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+4662,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_tx_activate_clk));
    bufp->chgBit(oldp+4663,((1U & (~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                         | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                        | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                       | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                      | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))))));
    bufp->chgBit(oldp+4664,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk));
    bufp->chgCData(oldp+4665,(((8U & ((~ (((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_tx_hs.req_send)) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc0_tx_hs.req_send))) 
                                            | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_tx_hs.req_send))) 
                                           | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_rsp_vc1_tx_hs.req_send))) 
                                          | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_tx_hs.req_send)))) 
                                      << 3U)) | ((2U 
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
    bufp->chgCData(oldp+4666,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p3_tx_activate_clk) 
                                << 3U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p1_tx_activate_clk) 
                                           << 1U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__p0_tx_activate_clk)))),4);
    bufp->chgCData(oldp+4667,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_rx_intfc_gclk),4);
    bufp->chgCData(oldp+4668,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__pp_tx_intfc_gclk),4);
    bufp->chgBit(oldp+4669,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__activate_cc_l3_or_mn));
    bufp->chgBit(oldp+4670,(((((((0U != (0x1ffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc0
                                                   [0U] 
                                                   >> 1U))) 
                                 | (0U != (0x1ffU & 
                                           (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_reqf_vc1
                                            [0U] >> 1U)))) 
                                | (0U != (0x1ffU & 
                                          (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc0
                                           [0U] >> 1U)))) 
                               | (0U != (0x1ffU & (
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_rspf_vc1
                                                   [0U] 
                                                   >> 1U)))) 
                              | (0U != (0x1ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc0
                                                  [0U] 
                                                  >> 1U)))) 
                             | (0U != (0x1ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_req_datf_vc1
                                                 [0U] 
                                                 >> 1U))))));
    bufp->chgBit(oldp+4671,(((((0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc0_rx_hs.recv_req)) 
                               | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_rsp_vc1_rx_hs.recv_req))) 
                              | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_req))) 
                             | (0U != (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_req)))));
    bufp->chgBit(oldp+4672,((1U & ((~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))) 
                                   & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                          | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send))))))));
    bufp->chgBit(oldp+4673,((1U & (~ (((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send)) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send))) 
                                      | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->chgBit(oldp+4674,((1U & (~ (((((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send)) 
                                         | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc0_tx_hs_req_send))) 
                                        | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__rspf_vc1_tx_hs_req_send))) 
                                       | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send))) 
                                      | (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send)))))));
    bufp->chgBit(oldp+4675,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_RSPLCRDV));
    bufp->chgBit(oldp+4676,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->chgBit(oldp+4677,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+4678,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__cc_RX_DATFLIT[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_cc_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+4679,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+4680,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update));
    bufp->chgCData(oldp+4681,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__credits_cnt_nxt),5);
    bufp->chgCData(oldp+4682,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__init_crdt_ctr_nxt),5);
    bufp->chgBit(oldp+4683,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_rspproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+4684,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__DOT__sig_cc_rx_snpproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgCData(oldp+4685,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3407)))))),5);
    bufp->chgBit(oldp+4686,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->chgBit(oldp+4687,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))))));
    bufp->chgSData(oldp+4688,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc0)))),10);
    bufp->chgSData(oldp+4689,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_datf_vc1)))),10);
    bufp->chgBit(oldp+4690,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_reqtxflit_top_0__DOT__sig_cc_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+4691,(((0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                               & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))) 
                             | (0U != (0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                                 & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))))));
    bufp->chgSData(oldp+4692,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc0_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc0)))),10);
    bufp->chgSData(oldp+4693,((0x3feU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__reqf_vc1_rx_hs_gnt_recv) 
                                         & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__out_valid_flit_reqf_vc1)))),10);
    bufp->chgCData(oldp+4694,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_cc_porttop_0__DOT__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__DOT__sig_cc_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+4695,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__allocate_compbuf_1st) 
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
    bufp->chgWData(oldp+4696,(__Vtemp_66),152);
    bufp->chgBit(oldp+4701,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                    & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                       >> 7U)) | ((~ 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                                    >> 7U)) 
                                                  & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)))))));
    bufp->chgBit(oldp+4702,((1U & (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm)) 
                                    & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm))) 
                                   | (((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__cm_addr_match_pm)) 
                                       & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                          >> 7U)) | 
                                      ((~ (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__reqcmdfifo_reqflit[4U] 
                                           >> 7U)) 
                                       & (~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__noncm_addr_match_pm))))))));
    bufp->chgBit(oldp+4703,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update)))));
    bufp->chgBit(oldp+4704,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_reqcrdt_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_reqproc_0__DOT__sig_chi_crdt_update_req__DOT__req_init_update))));
    bufp->chgBit(oldp+4705,(((0xfU == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_initcrdt_enable_0__DOT__init_update_ctr)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update)))));
    bufp->chgBit(oldp+4706,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__send_respcrdt_update_cohc)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_rcv_respproc_0__DOT__sig_crdt_update_resp__DOT__req_init_update))));
    bufp->chgCData(oldp+4707,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_resp_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->chgBit(oldp+4708,((1U & ((~ ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                       | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3reqflit_fifo_full) 
                                          | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cc_reqflit_valid_compdata)))) 
                                   | ((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT____VdfgRegularize_h33273a89_0_2)) 
                                      & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_compdata_0__DOT__mem_reqflit_valid)) 
                                         & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__available_credits))))))));
    bufp->chgCData(oldp+4709,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_chi_xmt_snpreq_0__DOT__sig_chi_crdt_recv_0__DOT__available_credits_nxt),4);
    bufp->chgBit(oldp+4710,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__fifo_loc
                                              [vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__reqcmd_fifo_0__DOT__rd_ptr][2U] 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+4711,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__sel_winner_entry[2U] 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+4712,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__dir_nway_cache__DOT__wren_cache_vector)) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cache_index_wr_cohc_or_dirc) 
                                == (0x3ffU & (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmdvalid_evict)
                                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__evict_req_s[2U]
                                                : vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__cm_cmd[2U]) 
                                              >> 0xeU))))));
    bufp->chgBit(oldp+4713,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->chgSData(oldp+4714,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2),11);
    bufp->chgBit(oldp+4715,(((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_noncm_homeaddr_limit_all_pm_0__DOT__data_stored 
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
    bufp->chgSData(oldp+4716,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2),11);
    bufp->chgSData(oldp+4717,(((0x80U & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cmd_ph2_req[4U])
                                ? (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cm_tgtid_pm_ph2)
                                : (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__noncm_tgtid_pm_ph2))),11);
    bufp->chgCData(oldp+4718,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_reqcmdq_gated) 
                                << 2U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_collnq_gated) 
                                           << 1U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__req_cmq_gated)))),3);
    bufp->chgBit(oldp+4719,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_chi_cc_top_0__DOT__sig_coherency_ctrlr_0__DOT__cc_is_inactive_nxt));
    bufp->chgCData(oldp+4720,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                << 3U) | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n) 
                                           << 1U) | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n)))),4);
    bufp->chgBit(oldp+4721,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+4722,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+4723,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+4724,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+4725,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+4726,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+4727,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+4728,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+4729,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+4730,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+4731,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__DOT__rx_cg_en_n));
    bufp->chgBit(oldp+4732,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+4733,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+4734,(((IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p3_intfrx_clk) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n))));
    bufp->chgBit(oldp+4735,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_clust_cg_top_0__DOT__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__DOT__final_cg_enable_n));
    bufp->chgBit(oldp+4736,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgBit(oldp+4737,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+4738,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                    >> 3U))) 
                             & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->chgBit(oldp+4739,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                             == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc0__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->chgBit(oldp+4740,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo_bypass)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_L3top_bypass_0__DOT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__DOT__ic_TX_DATFLIT_s[0U] 
                                       >> 0xfU) : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__rden_storefifo)
                                                    ? 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__fifo_loc
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab))][0U] 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0xfU))))));
    bufp->chgBit(oldp+4741,((((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                                                    >> 3U))) 
                             & ((7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt)) 
                                == (7U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt))))));
    bufp->chgBit(oldp+4742,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__rd_ptr_wab_nxt) 
                             == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_datproc_0__DOT__sig_l3_rx_datproc_vc1__DOT__flit_store_fifo_0__DOT__wr_ptr_wab_nxt))));
    bufp->chgBit(oldp+4743,(((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__send_working_update)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_ic_crdt_update_0__DOT__req_init_update))));
    bufp->chgCData(oldp+4744,((3U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                      ? ((0x800000U 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U])
                                          ? 0U : ((
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                                   << 0xfU) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[4U] 
                                                     >> 0x11U)))
                                      : ((0x800000U 
                                          & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[4U])
                                          ? 0U : ((
                                                   vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                   << 0x1cU) 
                                                  | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                     >> 4U)))))),2);
    bufp->chgBit(oldp+4745,(((0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__tgt_clusterid_fifoout)) 
                             & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__assert_req))));
    bufp->chgBit(oldp+4746,((1U & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__req_crdt_update)
                                    ? (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_withbypass[0U] 
                                       >> 4U) : (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__DOT__sig_l3_rx_reqproc_0__DOT__sig_l3_rx_reqproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                 >> 4U)))));
    bufp->chgCData(oldp+4747,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3410)))))),5);
    bufp->chgBit(oldp+4748,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+4749,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4750,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4751,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__l3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+4752,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_l3_porttop_0__DOT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__DOT__sig_l3_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+4753,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->chgBit(oldp+4754,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->chgBit(oldp+4755,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->chgSData(oldp+4756,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgSData(oldp+4757,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgBit(oldp+4758,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+4759,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+4760,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+4761,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+4762,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                               << 6U) 
                                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))) 
                                   == (0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                 >> 1U)))))));
    bufp->chgBit(oldp+4763,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgCData(oldp+4764,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4765,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4766,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+4767,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->chgBit(oldp+4768,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->chgCData(oldp+4769,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->chgCData(oldp+4770,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+4771,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+4772,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+4773,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+4774,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+4775,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+4776,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+4777,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+4778,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3426)))))),5);
    bufp->chgBit(oldp+4779,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+4780,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4781,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4782,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+4783,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+4784,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+4785,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgCData(oldp+4786,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->chgBit(oldp+4787,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+4788,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+4789,((2ULL < (0x3ffffffffULL 
                                     & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->chgBit(oldp+4790,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+4791,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4792,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4793,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
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
    bufp->chgWData(oldp+4794,(__Vtemp_75),111);
    bufp->chgCData(oldp+4798,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p0__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p0_RXSACTIVE))),2);
    bufp->chgCData(oldp+4799,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__coh_state_nxt),2);
    bufp->chgBit(oldp+4800,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__syscoack_nxt));
    bufp->chgBit(oldp+4801,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__sysco_is_disabled));
    bufp->chgSData(oldp+4802,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgSData(oldp+4803,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__id_buffer
                              [(3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                      >> 0x1aU))]),12);
    bufp->chgBit(oldp+4804,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc0_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+4805,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                             & ((~ ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__waiting_for_first_rsp) 
                                    >> (3U & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                              >> 0x1aU)))) 
                                | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__vc1_rx_rsp_v_snp) 
                                   & (0x40U == (0x7c0U 
                                                & vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U])))))));
    bufp->chgBit(oldp+4806,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+4807,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgBit(oldp+4808,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_COMPDATA) 
                                & ((0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[1U] 
                                               << 6U) 
                                              | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                 >> 0x1aU))) 
                                   == (0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[2U] 
                                                 >> 1U)))))));
    bufp->chgBit(oldp+4809,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc1_rx_SNPRESPFWDED) 
                             & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__DOT__i_sig_id_translator_rn_snp__DOT__is_vc0_rx_COMPDATA) 
                                & ((0xfffU & (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[2U] 
                                              >> 1U)) 
                                   == (0xfffU & ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                    >> 0x1aU))))))));
    bufp->chgCData(oldp+4810,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4811,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4812,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+4813,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__drive_end_flit));
    bufp->chgBit(oldp+4814,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__rden_storefifo));
    bufp->chgCData(oldp+4815,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__sig_node_rx_reqproc_vc0__DOT__flit_fifo_default__DOT__flit_store_fifo_0__DOT__rd_ptr_nxt),2);
    bufp->chgCData(oldp+4816,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+4817,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+4818,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+4819,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+4820,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+4821,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+4822,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+4823,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+4824,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3412)))))),5);
    bufp->chgBit(oldp+4825,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+4826,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4827,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4828,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+4829,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+4830,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+4831,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgCData(oldp+4832,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt),3);
    bufp->chgBit(oldp+4833,((4U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+4834,((0U == (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt))));
    bufp->chgBit(oldp+4835,((2ULL < (0x3ffffffffULL 
                                     & (4ULL - (QData)((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__enable_snprsp_generator_in_normal_rn_port__DOT__snpresp_fifo_0__DOT__num_entries_nxt)))))));
    bufp->chgBit(oldp+4836,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+4837,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4838,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4839,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
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
    bufp->chgWData(oldp+4840,(__Vtemp_80),111);
    bufp->chgCData(oldp+4844,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_rn_p1__DOT__node_porttop_rn__DOT__u_node_porttop_rn__DOT__tx_sactive_from_tx_top) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__sig_topology_top__cl0_p1_RXSACTIVE))),2);
    bufp->chgSData(oldp+4845,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                          >> 0x1aU))
                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc0__DOT__read_data_fifo_stored[0U] 
                                 >> 0x1aU)] : 0U)),12);
    bufp->chgSData(oldp+4846,(((0x22U >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                          >> 0x1aU))
                                ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                               [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__sig_node_rx_rspproc_vc1__DOT__read_data_fifo_stored[0U] 
                                 >> 0x1aU)] : 0U)),12);
    bufp->chgSData(oldp+4847,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                          ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[1U] 
                                              << 6U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU))
                                          : ((0x22U 
                                              >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                              ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                             [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc0__DOT__read_data_fifo_stored[0U] 
                                               >> 0x1aU)]
                                              : 0U)))),12);
    bufp->chgSData(oldp+4848,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                          ? ((vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[1U] 
                                              << 6U) 
                                             | (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                >> 0x1aU))
                                          : ((0x22U 
                                              >= (vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                                  >> 0x1aU))
                                              ? vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__id_buffer
                                             [(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__sig_node_rx_datproc_vc1__DOT__read_data_fifo_stored[0U] 
                                               >> 0x1aU)]
                                              : 0U)))),12);
    bufp->chgSData(oldp+4849,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_data_from_sn_has_dmt_enabled)
                                          ? ((0x22U 
                                              >= (0x3fU 
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
    bufp->chgSData(oldp+4850,((0xfffU & ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_data_from_sn_has_dmt_enabled)
                                          ? ((0x22U 
                                              >= (0x3fU 
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
    bufp->chgBit(oldp+4851,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__flitv_out_mux) 
                             | ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__unused_signal) 
                                | (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__TX_DATFLITV_mux)))));
    bufp->chgBit(oldp+4852,((1U & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_addr_translator_0__DOT__addr_translator_enabled__DOT__unused_signal))));
    bufp->chgBit(oldp+4853,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc0_dat_rsp_cntr));
    bufp->chgBit(oldp+4854,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__down_2_vc1_dat_rsp_cntr));
    bufp->chgSData(oldp+4855,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc0_rx_dat_idx_to_clr),12);
    bufp->chgSData(oldp+4856,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__id_translator_sn__DOT__sig_id_translator_sn_0__DOT__vc1_rx_dat_idx_to_clr),12);
    bufp->chgCData(oldp+4857,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_datproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4858,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__reqcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4859,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_reqproc_0__DOT__snpcrdt_balnce_tobesent_nxt),5);
    bufp->chgCData(oldp+4860,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_rxtop_0__DOT__sig_node_rx_rspproc_0__DOT__crdt_balnce_tobesent_nxt),5);
    bufp->chgBit(oldp+4861,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__TX_SNPFLITV_ptcl)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_snp))))));
    bufp->chgBit(oldp+4862,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_rsp))))));
    bufp->chgBit(oldp+4863,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__return_linkcrdt) 
                             & ((~ (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__opened_fiforoom)) 
                                & (0U != (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__available_credits_dat))))));
    bufp->chgBit(oldp+4864,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sactive_st_nxt));
    bufp->chgBit(oldp+4865,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__ic_TXSACTIVE_nxt));
    bufp->chgCData(oldp+4866,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+4867,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp__DOT__available_credits_nxt),4);
    bufp->chgCData(oldp+4868,((0x1fU & ((2U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439))
                                         ? ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            - (IData)(1U))
                                         : ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__available_fiforoom) 
                                            + (1U == (IData)(vlSelfRef.__VdfgRegularize_h1ea0c1a1_0_3439)))))),5);
    bufp->chgBit(oldp+4869,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgBit(oldp+4870,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4871,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4872,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_dattxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_dat_vc1_rx_hs.recv_vld))),10);
    bufp->chgCData(oldp+4873,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_rsptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgCData(oldp+4874,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__available_fiforoom_nxt),5);
    bufp->chgBit(oldp+4875,(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__opened_fiforoom));
    bufp->chgBit(oldp+4876,((((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                              & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc0)) 
                             | (((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__gnt_vec_vcarb) 
                                 >> 1U) & (IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__sig_node_arbtop_0__DOT__end_req_qual_vc1)))));
    bufp->chgBit(oldp+4877,(((0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                                     & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))) 
                             | (0U != ((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                                       & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))))));
    bufp->chgSData(oldp+4878,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc0_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc0_rx_hs.recv_vld))),10);
    bufp->chgSData(oldp+4879,(((IData)(vlSelfRef.sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__sig_node_porttop_sn_p3__DOT__node_porttop_sn__DOT__u_node_porttop_sn__DOT__sig_node_txtop_0__DOT__sig_node_snptxflit_top_0__DOT__flit_handshake_vc1_if_gnt_recv) 
                               & (IData)(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n3_port_req_vc1_rx_hs.recv_vld))),10);
    bufp->chgBit(oldp+4880,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n1_port_req_vc0_tx_hs.vld_send));
    bufp->chgBit(oldp+4881,(vlSymsp->TOP__sig_topology_top__DOT__cl0_sig_clustertop__DOT__inst_cl0_clustercore__DOT__n0_port_req_vc0_tx_hs.vld_send));
}

void Vsig_topology_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root__trace_cleanup\n"); );
    // Init
    Vsig_topology_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsig_topology_top___024root*>(voidSelf);
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x7aU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
