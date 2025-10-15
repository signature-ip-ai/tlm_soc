// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_csr_addr_decoder.h"

VL_ATTR_COLD void Vsig_topology_top_sig_csr_addr_decoder___eval_initial__TOP__sig_topology_top__i_sig_csr_addr_decoder(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___eval_initial__TOP__sig_topology_top__i_sig_csr_addr_decoder\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rdy_prog = 1U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_csr_addr_decoder___stl_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__0(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___stl_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_csr_addr_decoder___stl_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__1(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___stl_sequent__TOP__sig_topology_top__i_sig_csr_addr_decoder__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_csr_addr_decoder___ctor_var_reset(Vsig_topology_top_sig_csr_addr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_csr_addr_decoder___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->__PVT__i_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4084054307081237675ull);
    vlSelf->__PVT__i_address_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9715246656327806000ull);
    vlSelf->__PVT__i_wren_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11934556534920233339ull);
    vlSelf->__PVT__i_rden_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8846812487569713860ull);
    vlSelf->__PVT__i_rd_csr_top = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10916053212166358300ull);
    vlSelf->__PVT__i_rd_csr_clus_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10397607417066586665ull);
    vlSelf->__PVT__o_rden_csr_top_or_clus = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 900222605176551613ull);
    vlSelf->__PVT__o_wren_csr_top_or_clus = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7464568151410360113ull);
    vlSelf->__PVT__o_rdy_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6291197934025435927ull);
    vlSelf->__PVT__o_rddata_valid_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1301598102255437599ull);
    vlSelf->__PVT__o_rddata_prog = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8143285623513806323ull);
    vlSelf->__PVT__reg_rddata_prog_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4569079775510059551ull);
    vlSelf->__PVT__r_rden_csr_top_or_clus = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7779157963470443003ull);
    vlSelf->__Vdly__o_rddata_valid_prog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3742660575738677714ull);
    vlSelf->__Vdly__r_rden_csr_top_or_clus = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8302680701586907562ull);
}
