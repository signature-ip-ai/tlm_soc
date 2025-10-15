// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_csr_addr_decoder.h"

VL_INLINE_OPT void Vsig_topology_top_sig_csr_addr_decoder___ico_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__0(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___ico_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_wren_csr_top_or_clus = 0U;
    if (vlSelfRef.__PVT__i_wren_prog) {
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x1cU, 3)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_wren_csr_top_or_clus, 
                            (0U == VL_CONCAT_III(12,6,6, 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x16U, 6)), 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x10U, 6)))));
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__o_wren_csr_top_or_clus);
        }
    } else {
        vlSelfRef.__PVT__o_wren_csr_top_or_clus = 0U;
    }
    vlSelfRef.__PVT__o_rden_csr_top_or_clus = 0U;
    if (vlSelfRef.__PVT__i_rden_prog) {
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x1cU, 3)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_rden_csr_top_or_clus, 
                            (0U == VL_CONCAT_III(12,6,6, 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x16U, 6)), 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x10U, 6)))));
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__o_rden_csr_top_or_clus);
        }
    } else {
        vlSelfRef.__PVT__o_rden_csr_top_or_clus = 0U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_csr_addr_decoder___nba_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__0(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___nba_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__r_rden_csr_top_or_clus = vlSelfRef.__PVT__r_rden_csr_top_or_clus;
    vlSelfRef.__Vdly__o_rddata_valid_prog = vlSelfRef.__PVT__o_rddata_valid_prog;
    if (vlSelfRef.__PVT__i_rst_n) {
        vlSelfRef.__Vdly__o_rddata_valid_prog = vlSelfRef.__PVT__i_rden_prog;
        vlSelfRef.__Vdly__r_rden_csr_top_or_clus = vlSelfRef.__PVT__o_rden_csr_top_or_clus;
    } else {
        vlSelfRef.__Vdly__o_rddata_valid_prog = 0U;
        vlSelfRef.__Vdly__r_rden_csr_top_or_clus = 0U;
    }
    vlSelfRef.__PVT__r_rden_csr_top_or_clus = vlSelfRef.__Vdly__r_rden_csr_top_or_clus;
    vlSelfRef.__PVT__o_rddata_valid_prog = vlSelfRef.__Vdly__o_rddata_valid_prog;
}

VL_INLINE_OPT void Vsig_topology_top_sig_csr_addr_decoder___nba_comb__TOP__sig_topology_top__i_sig_csr_addr_decoder__0(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___nba_comb__TOP__sig_topology_top__i_sig_csr_addr_decoder__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rddata_prog = ((IData)(vlSelfRef.__PVT__o_rddata_valid_prog)
                                       ? ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__r_rden_csr_top_or_clus), 0U))
                                           ? vlSelfRef.__PVT__i_rd_csr_clus_0
                                           : ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__r_rden_csr_top_or_clus), 1U))
                                               ? vlSelfRef.__PVT__i_rd_csr_top
                                               : 0U))
                                       : 0U);
}

VL_INLINE_OPT void Vsig_topology_top_sig_csr_addr_decoder___nba_comb__TOP__sig_topology_top__i_sig_csr_addr_decoder__1(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___nba_comb__TOP__sig_topology_top__i_sig_csr_addr_decoder__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_wren_csr_top_or_clus = 0U;
    if (vlSelfRef.__PVT__i_wren_prog) {
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x1cU, 3)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_wren_csr_top_or_clus, 
                            (0U == VL_CONCAT_III(12,6,6, 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x16U, 6)), 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x10U, 6)))));
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__o_wren_csr_top_or_clus);
        }
    } else {
        vlSelfRef.__PVT__o_wren_csr_top_or_clus = 0U;
    }
    vlSelfRef.__PVT__o_rden_csr_top_or_clus = 0U;
    if (vlSelfRef.__PVT__i_rden_prog) {
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x1cU, 3)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_rden_csr_top_or_clus, 
                            (0U == VL_CONCAT_III(12,6,6, 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x16U, 6)), 
                                                 (0x3fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_address_prog, 0x10U, 6)))));
        } else {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__o_rden_csr_top_or_clus);
        }
    } else {
        vlSelfRef.__PVT__o_rden_csr_top_or_clus = 0U;
    }
}
