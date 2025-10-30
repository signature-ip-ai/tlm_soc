// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top___024root.h"

VL_ATTR_COLD void Vsig_topology_top___024root___stl_sequent__TOP__7(Vsig_topology_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsig_topology_top___024root___stl_sequent__TOP__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_43__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_44__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_45__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_46__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_47__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_48__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_49__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_50__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_51__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_52__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_53__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_54__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_55__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_56__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_57__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x29U] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_58__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_59__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_60__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_61__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_62__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_63__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_64__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_65__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_66__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_67__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_68__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_69__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_70__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_71__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_72__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_73__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_74__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_75__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_76__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_77__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_78__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_79__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_80__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_81__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_82__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_83__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_84__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_85__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_86__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_87__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_88__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_89__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2aU] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_90__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_91__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_92__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_93__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_94__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_95__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_96__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_97__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_98__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_99__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_100__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_101__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_102__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_103__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_104__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_105__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_106__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_107__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_108__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_109__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_110__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_111__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_112__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_113__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_114__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_115__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_116__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_117__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_118__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_119__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_120__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_121__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2bU] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_122__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_123__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_124__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_125__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_126__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_127__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_128__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_129__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_130__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_131__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_132__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_133__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_134__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_135__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_136__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_137__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_138__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_139__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_140__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_141__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_142__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_143__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_144__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_145__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_146__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_147__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_148__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_149__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_150__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_151__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_152__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_153__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2cU] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_154__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_155__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_156__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_157__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_158__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_159__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_160__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_161__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_162__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_163__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_164__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_165__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_166__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_167__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_168__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_169__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_170__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_171__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_172__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_173__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_174__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_175__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_176__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_177__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_178__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_179__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_180__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_181__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_182__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_183__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_184__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_185__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2dU] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_186__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_187__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored;
    if ((2U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_188__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored;
    if ((4U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_189__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored;
    if ((8U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_190__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored;
    if ((0x10U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_191__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored;
    if ((0x20U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_192__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored;
    if ((0x40U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_193__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored;
    if ((0x80U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_194__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored;
    if ((0x100U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_195__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored;
    if ((0x200U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_196__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored;
    if ((0x400U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_197__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored;
    if ((0x800U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_198__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored;
    if ((0x1000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_199__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored;
    if ((0x2000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_200__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored;
    if ((0x4000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_201__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored;
    if ((0x8000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_202__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored;
    if ((0x10000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_203__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored;
    if ((0x20000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_204__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored;
    if ((0x40000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_205__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored;
    if ((0x80000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_206__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored;
    if ((0x100000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_207__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored;
    if ((0x200000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_208__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored;
    if ((0x400000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_209__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored;
    if ((0x800000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_210__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored;
    if ((0x1000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_211__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored;
    if ((0x2000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_212__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored;
    if ((0x4000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_213__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored;
    if ((0x8000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_214__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored;
    if ((0x10000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_215__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored;
    if ((0x20000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_216__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored;
    if ((0x40000000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_217__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored;
    if ((vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2eU] 
         >> 0x1fU)) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_218__DOT__data_stored;
    }
    vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored_nxt 
        = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored;
    if ((1U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__wr_en_reg[0x2fU])) {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored_nxt 
            = ((0xffff0000U & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored_nxt) 
               | ((0xff00U & (((2U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                   >> 8U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored 
                                             >> 8U)) 
                              << 8U)) | (0xffU & ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                                   ? vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog
                                                   : vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored))));
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored_nxt 
            = ((0xffffU & vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored_nxt) 
               | ((((8U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                     ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                        >> 0x18U) : (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored 
                                     >> 0x18U)) << 0x18U) 
                  | (0xff0000U & (((4U & (IData)(vlSelfRef.__Vcellinp__sig_topology_top__PSTRB_prog))
                                    ? (vlSelfRef.__Vcellinp__sig_topology_top__PWDATA_prog 
                                       >> 0x10U) : 
                                   (vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored 
                                    >> 0x10U)) << 0x10U))));
    } else {
        vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored_nxt 
            = vlSelfRef.sig_topology_top__DOT__sig_top_csr_wrapper_0__DOT__inst_sig_top_csr__DOT__rw_hn_f_base_219__DOT__data_stored;
    }
}
