// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cachedir_ctrlr__pi16.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__0(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cmqhas_3room = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifohas_3room;
    vlSelfRef.__PVT__cmqhas_2room = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifohas_2room;
    vlSelfRef.__PVT__cmqhas_1room = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifohas_1room;
    vlSelfRef.__PVT__full_cmqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__dirc_init_complete = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init.__PVT__sram_init_complete_o;
    vlSelfRef.__PVT__fiforoom_atlst4_cmq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fiforoom_atlst4;
    vlSelfRef.__PVT__dirc_init_index_wr = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init.__PVT__sram_ptr_o;
    vlSelfRef.__PVT__dirc_init_en = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init.__PVT__sram_init_en_o;
    vlSelfRef.__PVT__empty_cmqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__memberset_full = (0xffffU == (IData)(vlSelfRef.__PVT__validity_stored));
    vlSelfRef.__PVT__evicted_cl_inidle_state = (0U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.__PVT__evicted_data, 0U, 3)));
    vlSelfRef.__PVT__evict_member_winner = vlSelfRef.__PVT__evict_random_decode;
    vlSelfRef.__PVT__notin_pendingq_stored = (0xffffU 
                                              & (~ (IData)(vlSelfRef.__PVT__in_pendingq_stored)));
    vlSelfRef.__PVT__invalidity_stored = (0xffffU & 
                                          (~ (IData)(vlSelfRef.__PVT__validity_stored)));
    vlSelfRef.__PVT__notin_pendingq_shifted = vlSelfRef.__PVT__notin_pendingq_stored;
    if ((0U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__notin_pendingq_shifted = vlSelfRef.__PVT__notin_pendingq_stored;
    } else if ((1U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__notin_pendingq_shifted = VL_CONCAT_III(16,4,12, 
                                                                (0xfU 
                                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_stored), 0U, 4)), 
                                                                (0xfffU 
                                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_stored), 4U, 12)));
    } else if ((2U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__notin_pendingq_shifted = VL_CONCAT_III(16,8,8, 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_stored), 0U, 8)), 
                                                                (0xffU 
                                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_stored), 8U, 8)));
    } else if ((3U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__notin_pendingq_shifted = VL_CONCAT_III(16,12,4, 
                                                                (0xfffU 
                                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_stored), 0U, 12)), 
                                                                (0xfU 
                                                                 & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_stored), 0xcU, 4)));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    (1U & ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U)) 
                           & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 1U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (3U & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 2))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 2U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (7U & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 3))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 3U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0xfU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 4))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 4U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x1fU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 5))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 5U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x3fU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 6))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 6U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x7fU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 7))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 7U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0xffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 8))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 8U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x1ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 9))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 9U)));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x3ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 10))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0xaU)));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x7ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 11))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0xbU)));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0xfffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 12))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0xcU)));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x1fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 13))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0xdU)));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x3fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 14))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0xeU)));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__sel_wren_noevict_decode, 
                    ((0U == (0x7fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0U, 15))) 
                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__invalidity_stored), 0xfU)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__n_p_s_w, (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__n_p_s_w, (1U 
                                                   & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 1U) 
                                                      & (~ 
                                                         VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 2U) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 2)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 3U) 
                                                   & (0U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 4U) 
                                                   & (0U 
                                                      == 
                                                      (0xfU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 4)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 5U) 
                                                   & (0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 6U) 
                                                   & (0U 
                                                      == 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 6)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 7U) 
                                                   & (0U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 7)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 8U) 
                                                   & (0U 
                                                      == 
                                                      (0xffU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 8)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__n_p_s_w, (
                                                   VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 9U) 
                                                   & (0U 
                                                      == 
                                                      (0x1ffU 
                                                       & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 9)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__n_p_s_w, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0xaU) 
                     & (0U == (0x3ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 10)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__n_p_s_w, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0xbU) 
                     & (0U == (0x7ffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 11)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__n_p_s_w, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0xcU) 
                     & (0U == (0xfffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 12)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__n_p_s_w, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0xdU) 
                     & (0U == (0x1fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 13)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__n_p_s_w, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0xeU) 
                     & (0U == (0x3fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 14)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__n_p_s_w, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0xfU) 
                     & (0U == (0x7fffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__notin_pendingq_shifted), 0U, 15)))));
    vlSelfRef.__PVT__got_an_eviction_winner = (0U != (IData)(vlSelfRef.__PVT__notin_pendingq_shifted));
    vlSelfRef.__PVT__evict_random_decode_nxt = vlSelfRef.__PVT__n_p_s_w;
    if ((0U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__evict_random_decode_nxt = vlSelfRef.__PVT__n_p_s_w;
    } else if ((1U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__evict_random_decode_nxt = 
            VL_CONCAT_III(16,12,4, (0xfffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n_p_s_w), 0U, 12)), 
                          (0xfU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n_p_s_w), 0xcU, 4)));
    } else if ((2U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__evict_random_decode_nxt = 
            VL_CONCAT_III(16,8,8, (0xffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n_p_s_w), 0U, 8)), 
                          (0xffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n_p_s_w), 8U, 8)));
    } else if ((3U == (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U, 2)))) {
        vlSelfRef.__PVT__evict_random_decode_nxt = 
            VL_CONCAT_III(16,4,12, (0xfU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n_p_s_w), 0U, 4)), 
                          (0xfffU & VL_SEL_IIII(16, (IData)(vlSelfRef.__PVT__n_p_s_w), 4U, 12)));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__1(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_wrdata_ph4, vlSelfRef.__PVT__cmd_ph4);
    vlSelfRef.__PVT__index_cmd_ph4 = (0x3ffU & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph4, 0x4eU, 10));
    vlSelfRef.__PVT__wren_cmqfifo_ph4 = vlSelfRef.__PVT__wren_cmq_ph4;
    vlSelfRef.__Vcellinp__cmqfifo_0__match_data_in 
        = (0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46));
    VL_ASSIGN_W(155,vlSelfRef.__PVT__rddata_cmqfifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_rddata);
    VL_ASSIGN_W(155,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__fifo_wrdata_ph4);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_cmqfifo_ph4;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__match_data_in 
        = vlSelfRef.__Vcellinp__cmqfifo_0__match_data_in;
    vlSelfRef.__PVT__addr_cache = (0xfffffffffffffULL 
                                   & VL_SEL_QWII(155, vlSelfRef.__PVT__rddata_cmqfifo, 0x48U, 52));
    vlSelfRef.__PVT__byteoffset_cache = (0x3fU & VL_SEL_IQII(52, vlSelfRef.__PVT__addr_cache, 0U, 6));
    vlSelfRef.__PVT__tag_cache = (0xfffffffffULL & 
                                  VL_SEL_QQII(52, vlSelfRef.__PVT__addr_cache, 0x10U, 36));
    vlSelfRef.__PVT__index_cache = (0x3ffU & VL_SEL_IQII(52, vlSelfRef.__PVT__addr_cache, 6U, 10));
    vlSelfRef.__PVT__cache_tag_rd = vlSelfRef.__PVT__tag_cache;
    vlSelfRef.__PVT__index_cache_eviction = vlSelfRef.__PVT__index_cache;
    vlSelfRef.__PVT__memadd_evict_wr = VL_CONCAT_QQI(52,36,16, vlSelfRef.__PVT__rdout_tag_stored, 
                                                     VL_CONCAT_III(16,10,6, (IData)(vlSelfRef.__PVT__index_cache), (IData)(vlSelfRef.__PVT__byteoffset_cache)));
    VL_CONCAT_WQI(84,52,32, vlSelfRef.__PVT__evict_details, vlSelfRef.__PVT__memadd_evict_wr, vlSelfRef.__PVT__evicted_data);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__2(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__itis_a_match_cmqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__itis_a_match;
    vlSelfRef.__PVT__cmd_addr_ph3_has_matchingentry_incmq 
        = (((IData)(vlSelfRef.__PVT__itis_a_match_cmqfifo) 
            | ((IData)(vlSelfRef.__PVT__wren_cmq_ph4) 
               & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                  == (0x3fffffffffffULL & VL_SEL_QWII(155, vlSelfRef.__PVT__cmd_ph4, 0x4eU, 46))))) 
           | ((IData)(vlSelfRef.__PVT__cm_cmdvalid) 
              & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                 == (0x3fffffffffffULL & VL_SEL_QWII(155, vlSelfRef.__PVT__cm_cmd, 0x4eU, 46)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__3(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init.__PVT__rst_n_i 
        = vlSelfRef.__PVT__rstb_cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__4(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__inst_sig_sram_init.__PVT__clk_i 
        = vlSelfRef.__PVT__cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__0(Vsig_topology_top_sig_cachedir_ctrlr__pi16* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cachedir_ctrlr__pi16___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cacheproc_state_nxt = vlSelfRef.__PVT__cacheproc_state;
    vlSelfRef.__PVT__rdout_tag_stored_nxt = vlSelfRef.__PVT__rdout_tag_stored;
    vlSelfRef.__PVT__in_pendingq_stored_nxt = vlSelfRef.__PVT__in_pendingq_stored;
    vlSelfRef.__PVT__cache_index_rd_nxt = vlSelfRef.__PVT__index_cache;
    vlSelfRef.__PVT__set_cm_cmdvalid = 0U;
    vlSelfRef.__PVT__set_cm_cmdvalid_evict = 0U;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cm_cmd_nxt, vlSelfRef.__PVT__cm_cmd);
    vlSelfRef.__PVT__evicted_data_nxt = vlSelfRef.__PVT__evicted_data;
    vlSelfRef.__PVT__eviction_in_progress_nxt = vlSelfRef.__PVT__eviction_in_progress;
    vlSelfRef.__PVT__wren_cache_cmd_vector = 0U;
    vlSelfRef.__PVT__block_fetch_cohc_nxt = 0U;
    vlSelfRef.__PVT__rden_dircache_nxt = 0U;
    vlSelfRef.__PVT__count_evict_nxt = vlSelfRef.__PVT__count_evict;
    vlSelfRef.__PVT__evict_this_cycle_nxt = 0U;
    vlSelfRef.__PVT__evict_this_one_nxt = vlSelfRef.__PVT__evict_this_one;
    vlSelfRef.__PVT__rden_cmqfifo = 0U;
    vlSelfRef.__PVT__advance_lfsr = 0U;
    vlSelfRef.__PVT__wrvalid_cmd_dirc = 0U;
    vlSelfRef.__PVT__en_blocking_reqcmdq_nxt = vlSelfRef.__PVT__en_blocking_reqcmdq;
    vlSelfRef.__PVT__first_cycle_in_evictend_nxt = 0U;
    vlSelfRef.__PVT__sel_wren_noevict_stored_nxt = vlSelfRef.__PVT__sel_wren_noevict_stored;
    vlSelfRef.__PVT__validity_stored_nxt = vlSelfRef.__PVT__validity_stored;
    vlSelfRef.__PVT__cachehit_stored_nxt = vlSelfRef.__PVT__cachehit_stored;
    if (((((((((1U == (IData)(vlSelfRef.__PVT__cacheproc_state)) 
               | (2U == (IData)(vlSelfRef.__PVT__cacheproc_state))) 
              | (4U == (IData)(vlSelfRef.__PVT__cacheproc_state))) 
             | (8U == (IData)(vlSelfRef.__PVT__cacheproc_state))) 
            | (0x20U == (IData)(vlSelfRef.__PVT__cacheproc_state))) 
           | (0x10U == (IData)(vlSelfRef.__PVT__cacheproc_state))) 
          | (0x40U == (IData)(vlSelfRef.__PVT__cacheproc_state))) 
         | (0x80U == (IData)(vlSelfRef.__PVT__cacheproc_state)))) {
        if ((1U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            if (vlSelfRef.__PVT__empty_cmqfifo) {
                if (vlSelfRef.__PVT__wren_cmq_ph4) {
                    if (((~ (IData)(vlSelfRef.__PVT__empty_cmqfifo_reg)) 
                         & ((IData)(vlSelfRef.__PVT__index_cache_reg) 
                            == (IData)(vlSelfRef.__PVT__index_cmd_ph4)))) {
                        vlSelfRef.__PVT__cacheproc_state_nxt = 2U;
                        vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
                        vlSelfRef.__PVT__en_blocking_reqcmdq_nxt = 0U;
                        vlSelfRef.__PVT__eviction_in_progress_nxt = 0U;
                    } else {
                        vlSelfRef.__PVT__validity_stored_nxt 
                            = vlSelfRef.__PVT__validity_in_ph4;
                        vlSelfRef.__PVT__cachehit_stored_nxt 
                            = vlSelfRef.__PVT__cachehit_ph4;
                        vlSelfRef.__PVT__cacheproc_state_nxt = 0x20U;
                        vlSelfRef.__PVT__eviction_in_progress_nxt = 0U;
                    }
                }
            } else {
                vlSelfRef.__PVT__cacheproc_state_nxt = 2U;
                vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
                vlSelfRef.__PVT__en_blocking_reqcmdq_nxt = 0U;
                vlSelfRef.__PVT__eviction_in_progress_nxt = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            if (vlSelfRef.__PVT__block_rden_cache) {
                vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
            } else {
                vlSelfRef.__PVT__cacheproc_state_nxt = 4U;
                vlSelfRef.__PVT__rden_dircache_nxt = 1U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            vlSelfRef.__PVT__cacheproc_state_nxt = 8U;
        } else if ((8U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            vlSelfRef.__PVT__validity_stored_nxt = vlSelfRef.__PVT__validity_in;
            vlSelfRef.__PVT__cachehit_stored_nxt = vlSelfRef.__PVT__cachehit;
            vlSelfRef.__PVT__in_pendingq_stored_nxt 
                = vlSelfRef.__PVT__in_pendingq;
            vlSelfRef.__PVT__cacheproc_state_nxt = 
                ((IData)(vlSelfRef.__PVT__eviction_in_progress)
                  ? 0x80U : 0x20U);
            vlSelfRef.__PVT__advance_lfsr = vlSelfRef.__PVT__eviction_in_progress;
            vlSelfRef.__PVT__count_evict_nxt = 0U;
        } else if ((0x20U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            if (((IData)(vlSelfRef.__PVT__cachehit_stored) 
                 & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid)))) {
                vlSelfRef.__PVT__cacheproc_state_nxt = 1U;
                vlSelfRef.__PVT__set_cm_cmdvalid = 1U;
                VL_ASSIGN_W(155,vlSelfRef.__PVT__cm_cmd_nxt, vlSelfRef.__PVT__rddata_cmqfifo);
                vlSelfRef.__PVT__eviction_in_progress_nxt = 0U;
                vlSelfRef.__PVT__rden_cmqfifo = 1U;
            } else if (vlSelfRef.__PVT__cachehit_stored) {
                vlSelfRef.__PVT__cacheproc_state_nxt = 0x1000U;
            } else if (vlSelfRef.__PVT__memberset_full) {
                if (vlSelfRef.__PVT__memberset_full) {
                    vlSelfRef.__PVT__cacheproc_state_nxt = 0x40U;
                    vlSelfRef.__PVT__en_blocking_reqcmdq_nxt = 1U;
                    vlSelfRef.__PVT__eviction_in_progress_nxt = 1U;
                    vlSelfRef.__PVT__count_evict_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__cacheproc_state_nxt = 0x10U;
                vlSelfRef.__PVT__sel_wren_noevict_stored_nxt 
                    = vlSelfRef.__PVT__sel_wren_noevict_decode;
                vlSelfRef.__PVT__eviction_in_progress_nxt = 0U;
                vlSelfRef.__PVT__en_blocking_reqcmdq_nxt = 0U;
            }
        } else if ((0x10U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            if (((IData)(vlSelfRef.__PVT__dirc_canwrite_tocache) 
                 & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid)))) {
                vlSelfRef.__PVT__cacheproc_state_nxt = 1U;
                vlSelfRef.__PVT__wren_cache_cmd_vector 
                    = vlSelfRef.__PVT__sel_wren_noevict_stored;
                vlSelfRef.__PVT__wrvalid_cmd_dirc = 1U;
                vlSelfRef.__PVT__set_cm_cmdvalid = 1U;
                VL_ASSIGN_W(155,vlSelfRef.__PVT__cm_cmd_nxt, vlSelfRef.__PVT__rddata_cmqfifo);
                vlSelfRef.__PVT__rden_cmqfifo = 1U;
            } else if (vlSelfRef.__PVT__dirc_canwrite_tocache) {
                vlSelfRef.__PVT__cacheproc_state_nxt = 0x1000U;
                vlSelfRef.__PVT__wren_cache_cmd_vector 
                    = vlSelfRef.__PVT__sel_wren_noevict_stored;
                vlSelfRef.__PVT__wrvalid_cmd_dirc = 1U;
            }
        } else if ((0x40U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
            if ((4U == (IData)(vlSelfRef.__PVT__count_evict))) {
                vlSelfRef.__PVT__count_evict_nxt = 0U;
                vlSelfRef.__PVT__cacheproc_state_nxt = 2U;
                vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
            } else {
                vlSelfRef.__PVT__count_evict_nxt = 
                    (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__count_evict)));
            }
        } else if (((IData)(vlSelfRef.__PVT__got_an_eviction_winner) 
                    & (0U == (IData)(vlSelfRef.__PVT__count_evict)))) {
            vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
            vlSelfRef.__PVT__count_evict_nxt = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__count_evict)));
        } else if (vlSelfRef.__PVT__got_an_eviction_winner) {
            if (vlSelfRef.__PVT__block_rden_cache) {
                vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
            } else {
                vlSelfRef.__PVT__count_evict_nxt = 0U;
                vlSelfRef.__PVT__cacheproc_state_nxt = 0x100U;
                vlSelfRef.__PVT__evict_this_cycle_nxt = 1U;
                vlSelfRef.__PVT__rden_dircache_nxt = 1U;
                vlSelfRef.__PVT__evict_this_one_nxt 
                    = vlSelfRef.__PVT__evict_member_winner;
                vlSelfRef.__PVT__first_cycle_in_evictend_nxt = 1U;
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__count_evict))) {
            vlSelfRef.__PVT__count_evict_nxt = 0U;
            vlSelfRef.__PVT__cacheproc_state_nxt = 2U;
            vlSelfRef.__PVT__block_fetch_cohc_nxt = 1U;
        } else {
            vlSelfRef.__PVT__count_evict_nxt = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__count_evict)));
        }
    } else if ((0x100U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
        vlSelfRef.__PVT__evict_this_cycle_nxt = vlSelfRef.__PVT__evict_this_cycle;
        vlSelfRef.__PVT__evict_this_one_nxt = vlSelfRef.__PVT__evict_this_one;
        vlSelfRef.__PVT__first_cycle_in_evictend_nxt 
            = vlSelfRef.__PVT__first_cycle_in_evictend;
        vlSelfRef.__PVT__cacheproc_state_nxt = 0x200U;
    } else if ((0x200U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
        vlSelfRef.__PVT__evicted_data_nxt = ((IData)(vlSelfRef.__PVT__first_cycle_in_evictend)
                                              ? vlSelfRef.__PVT__rddata_cache
                                              : vlSelfRef.__PVT__evicted_data);
        vlSelfRef.__PVT__rdout_tag_stored_nxt = ((IData)(vlSelfRef.__PVT__first_cycle_in_evictend)
                                                  ? vlSelfRef.__PVT__rdout_tag_value
                                                  : vlSelfRef.__PVT__rdout_tag_stored);
        vlSelfRef.__PVT__en_blocking_reqcmdq_nxt = 0U;
        if (vlSelfRef.__PVT__dirc_canwrite_tocache) {
            vlSelfRef.__PVT__wren_cache_cmd_vector 
                = vlSelfRef.__PVT__evict_this_one;
            vlSelfRef.__PVT__wrvalid_cmd_dirc = 1U;
            vlSelfRef.__PVT__cacheproc_state_nxt = 0x400U;
        }
    } else if ((0x400U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict)))) {
            if (vlSelfRef.__PVT__evicted_cl_inidle_state) {
                vlSelfRef.__PVT__set_cm_cmdvalid_evict = 0U;
                vlSelfRef.__PVT__cacheproc_state_nxt = 0x800U;
            } else {
                vlSelfRef.__PVT__set_cm_cmdvalid_evict = 1U;
                vlSelfRef.__PVT__cacheproc_state_nxt = 0x800U;
            }
        }
    } else if ((0x800U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict)) 
                   & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid))))) {
            vlSelfRef.__PVT__cacheproc_state_nxt = 1U;
            vlSelfRef.__PVT__set_cm_cmdvalid = 1U;
            VL_ASSIGN_W(155,vlSelfRef.__PVT__cm_cmd_nxt, vlSelfRef.__PVT__rddata_cmqfifo);
            vlSelfRef.__PVT__rden_cmqfifo = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict)))) {
            vlSelfRef.__PVT__cacheproc_state_nxt = 0x1000U;
        }
    } else if ((0x1000U == (IData)(vlSelfRef.__PVT__cacheproc_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid)))) {
            vlSelfRef.__PVT__cacheproc_state_nxt = 1U;
            vlSelfRef.__PVT__set_cm_cmdvalid = 1U;
            VL_ASSIGN_W(155,vlSelfRef.__PVT__cm_cmd_nxt, vlSelfRef.__PVT__rddata_cmqfifo);
            vlSelfRef.__PVT__rden_cmqfifo = 1U;
        }
    }
    vlSelfRef.__PVT__lfsr_flops_nxt = vlSelfRef.__PVT__lfsr_flops;
    if (vlSelfRef.__PVT__load_newseed) {
        vlSelfRef.__PVT__lfsr_flops_nxt = vlSelfRef.__PVT__newseed_value;
    } else if (vlSelfRef.__PVT__advance_lfsr) {
        vlSelfRef.__PVT__lfsr_flops_nxt = VL_CONCAT_III(3,1,2, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U)), 
                                                        VL_CONCAT_III(2,1,1, 
                                                                      (1U 
                                                                       & (VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 2U) 
                                                                          ^ 
                                                                          VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 0U))), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__lfsr_flops), 1U))));
    }
    vlSelfRef.__PVT__rden_dircache_pre = vlSelfRef.__PVT__rden_dircache_nxt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_cmqfifo;
    if (vlSelfRef.__PVT__dirc_init_en) {
        vlSelfRef.__PVT__cache_tag_wr = 0ULL;
        vlSelfRef.__PVT__cache_index_wr = vlSelfRef.__PVT__dirc_init_index_wr;
        vlSelfRef.__PVT__wrvalid_dirc = 0U;
        vlSelfRef.__PVT__wren_cache_vector = 0xffffU;
    } else {
        vlSelfRef.__PVT__cache_index_wr = vlSelfRef.__PVT__index_cache;
        vlSelfRef.__PVT__cache_tag_wr = vlSelfRef.__PVT__tag_cache;
        vlSelfRef.__PVT__wrvalid_dirc = vlSelfRef.__PVT__wrvalid_cmd_dirc;
        vlSelfRef.__PVT__wren_cache_vector = vlSelfRef.__PVT__wren_cache_cmd_vector;
    }
}
