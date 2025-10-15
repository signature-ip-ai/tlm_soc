// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top___024root.h"

VL_INLINE_OPT void Vsig_topology_top___024root___ico_sequent__TOP__3(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___ico_sequent__TOP__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_223__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_224__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_225__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_226__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_227__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_228__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_229__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_230__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_231__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_232__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_233__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_234__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_235__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_236__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_237__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_238__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_239__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_240__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_241__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_242__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_243__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_244__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_245__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_246__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_247__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_248__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_249__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_250__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_251__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x1fU] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_252__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_253__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_254__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_255__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_node_ID_COH_RN_config_256__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_0_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_1_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_2_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_3_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_4_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_5_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_6_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_7_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_8_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_9_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_10_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_11_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_12_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_13_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_14_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_15_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_16_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_17_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_18_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_19_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_20_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_21_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_22_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_23_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_24_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_25_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_26_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x20U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_27_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_28_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_29_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_30_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_31_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_32_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_33_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_34_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_35_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_36_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_37_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_38_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_39_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_40_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_41_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_42_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_43_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_44_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_45_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_46_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_47_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_48_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_49_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_50_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_51_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_52_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_53_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_54_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_55_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_56_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_57_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_58_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x21U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_59_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_60_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_61_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_62_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_63_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_64_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_65_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_66_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_67_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_68_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_69_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_70_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_71_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_72_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_73_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_74_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_75_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_76_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_77_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_78_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_79_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_80_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_81_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_82_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_83_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_84_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_85_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_86_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_87_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_88_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_89_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_90_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x22U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_91_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_92_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_93_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_94_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_95_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_96_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_97_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_98_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_99_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_100_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_101_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_102_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_103_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_104_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_105_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_106_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_107_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_108_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_109_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_110_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_111_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_112_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_113_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_114_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_115_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_116_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_117_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_118_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_119_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_120_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_121_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_122_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x23U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_123_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_124_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_125_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_126_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_127_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_128_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_129_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_130_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_131_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_132_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_133_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_134_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_135_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_136_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_137_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_138_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_139_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_140_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_141_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_142_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_143_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_144_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_145_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_146_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_147_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_148_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_149_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_150_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_151_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_152_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_153_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_154_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x24U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_155_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_156_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_157_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_158_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_159_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_160_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_161_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_162_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_163_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_164_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_165_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_166_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_167_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_168_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_169_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_170_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_171_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_172_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_173_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_174_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_175_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_176_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_177_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_178_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_179_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_180_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_181_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_182_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_183_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_184_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_185_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_186_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x25U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_187_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_188_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_189_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_190_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_191_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_192_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_193_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_194_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_195_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_196_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_197_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_198_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_199_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_200_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_201_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_202_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_203_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_204_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_205_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_206_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_207_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_208_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_209_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_210_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_211_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_212_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_213_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_214_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_215_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_216_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_217_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_218_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x26U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_219_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_220_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_221_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_222_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_223_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_224_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_225_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_226_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_227_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_228_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_229_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_230_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_231_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_232_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_233_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_234_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_235_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_236_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_237_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_238_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_239_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_240_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_241_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_242_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_243_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_244_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_245_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_246_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_247_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_248_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_249_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_250_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x27U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_251_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_252_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_253_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_254_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_255_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_cl_256_config__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_0__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_1__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_2__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_3__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_4__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_5__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_6__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_7__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_8__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_9__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_10__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_11__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_12__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_13__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_14__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_15__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_16__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_17__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_18__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_19__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_20__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_21__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_22__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_23__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_24__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_25__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x28U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_26__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_27__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_28__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_29__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_30__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_31__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_32__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_33__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_34__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_35__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_36__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_37__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_38__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_39__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_40__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_41__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_42__DOT__data_stored;
    }
}
