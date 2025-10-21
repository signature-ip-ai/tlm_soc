// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cluster_csr.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cluster_csr___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__4(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_reg_nxt = 0U;
    if (vlSelfRef.__PVT__i_wr_en) {
        if ((4U == VL_CONCAT_III(16,3,13, (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                 VL_CONCAT_III(13,11,2, 
                                               (0x7ffU 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                               (3U 
                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))) {
            VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__wr_en_reg_nxt);
        } else if ((0x2004U == VL_CONCAT_III(16,3,13, 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                             VL_CONCAT_III(13,11,2, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                           (3U 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))) {
            VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__wr_en_reg_nxt);
        } else if ((0x2008U == VL_CONCAT_III(16,3,13, 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                             VL_CONCAT_III(13,11,2, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                           (3U 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))) {
            VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__wr_en_reg_nxt);
        } else if ((0x1008U == VL_CONCAT_III(16,3,13, 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                             VL_CONCAT_III(13,11,2, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                           (3U 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))) {
            VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__wr_en_reg_nxt);
        } else if ((0x3004U == VL_CONCAT_III(16,3,13, 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                             VL_CONCAT_III(13,11,2, 
                                                           (0x7ffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                           (3U 
                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))) {
            VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__wr_en_reg_nxt);
        } else {
            vlSelfRef.__PVT__wr_en_reg_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__wr_en_reg_nxt = 0U;
    }
    vlSelfRef.__PVT__o_rd_data_nxt = ((IData)(vlSelfRef.__PVT__i_rd_en)
                                       ? ((4U == VL_CONCAT_III(16,3,13, 
                                                               (7U 
                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                               VL_CONCAT_III(13,11,2, 
                                                                             (0x7ffU 
                                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                             (3U 
                                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                           ? vlSelfRef.__PVT__o_rd_data_proc_port_reg_0
                                           : ((8U == 
                                               VL_CONCAT_III(16,3,13, 
                                                             (7U 
                                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                             VL_CONCAT_III(13,11,2, 
                                                                           (0x7ffU 
                                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                           (3U 
                                                                            & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                               ? vlSelfRef.__PVT__o_rd_data_proc_port_reg_1
                                               : ((0x2004U 
                                                   == 
                                                   VL_CONCAT_III(16,3,13, 
                                                                 (7U 
                                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                                 VL_CONCAT_III(13,11,2, 
                                                                               (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                               (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                                   ? vlSelfRef.__PVT__o_rd_data_coherency_ctlr_reg_0
                                                   : 
                                                  ((0x2008U 
                                                    == 
                                                    VL_CONCAT_III(16,3,13, 
                                                                  (7U 
                                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                                  VL_CONCAT_III(13,11,2, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                                    ? vlSelfRef.__PVT__o_rd_data_coherency_ctlr_reg_1
                                                    : 
                                                   ((0x1004U 
                                                     == 
                                                     VL_CONCAT_III(16,3,13, 
                                                                   (7U 
                                                                    & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                                   VL_CONCAT_III(13,11,2, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                                     ? vlSelfRef.__PVT__o_rd_data_proc_port_timeout_status_reg_2
                                                     : 
                                                    ((0x1008U 
                                                      == 
                                                      VL_CONCAT_III(16,3,13, 
                                                                    (7U 
                                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                                    VL_CONCAT_III(13,11,2, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                                      ? vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3
                                                      : 
                                                     ((0x3004U 
                                                       == 
                                                       VL_CONCAT_III(16,3,13, 
                                                                     (7U 
                                                                      & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0xdU, 3)), 
                                                                     VL_CONCAT_III(13,11,2, 
                                                                                (0x7ffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 2U, 11)), 
                                                                                (3U 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__i_addr, 0U, 2)))))
                                                       ? vlSelfRef.__PVT__o_rd_data_qos_override_reg
                                                       : vlSelfRef.__PVT__o_rd_data)))))))
                                       : vlSelfRef.__PVT__o_rd_data);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cluster_csr___ctor_var_reset(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->__PVT__i_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4084054307081237675ull);
    vlSelf->__PVT__i_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11859596126772393031ull);
    vlSelf->__PVT__i_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18109629909367482656ull);
    vlSelf->__PVT__i_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8714240812129732381ull);
    vlSelf->__PVT__i_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2823197477097194037ull);
    vlSelf->__PVT__i_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18430523862738239482ull);
    vlSelf->__PVT__o_proc_port_reg_0_max_credits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 339214082117144763ull);
    vlSelf->__PVT__i_proc_port_reg_1_rx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6737161845887704465ull);
    vlSelf->__PVT__i_proc_port_reg_1_tx_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17363686023176527906ull);
    vlSelf->__PVT__i_node_port_timeout_interrupt_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3041477305654977209ull);
    vlSelf->__PVT__i_node_port_timeout_recovery_successful_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13376743119884071935ull);
    vlSelf->__PVT__o_node_port_timeout_clear_timeout_interrupt_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 151727309687133764ull);
    vlSelf->__PVT__o_node_port_timeout_clear_recovery_interrupt_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2529108269896570278ull);
    vlSelf->__PVT__o_coherency_ctlr_reg_0_inactive_threshold = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4641365561555256447ull);
    vlSelf->__PVT__o_coherency_ctlr_reg_1_b2b_resp_wait = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2694516505517892007ull);
    vlSelf->__PVT__o_qos_override_en_p0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5713835567662276992ull);
    vlSelf->__PVT__o_qos_override_val_p0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10397337235489211878ull);
    vlSelf->__PVT__o_qos_override_en_p1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742801626435235325ull);
    vlSelf->__PVT__o_qos_override_val_p1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8255587799440641244ull);
    vlSelf->__PVT__o_qos_override_en_p2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9215912270672342168ull);
    vlSelf->__PVT__o_qos_override_val_p2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2423352751403346676ull);
    vlSelf->__PVT__o_qos_override_en_p3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3182728188994520055ull);
    vlSelf->__PVT__o_qos_override_val_p3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12585558288980714899ull);
    vlSelf->__PVT__o_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17635883622474188337ull);
    vlSelf->__PVT__o_rd_data_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16139432433965821285ull);
    vlSelf->__PVT__o_rd_data_proc_port_reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12620491863869956028ull);
    vlSelf->__PVT__o_rd_data_proc_port_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5506216445627552886ull);
    vlSelf->__PVT__o_rd_data_proc_port_timeout_status_reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7754386625852452110ull);
    vlSelf->__PVT__i_rd_data_proc_port_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15512544050020473884ull);
    vlSelf->__PVT__i_rd_data_proc_port_timeout_status_reg_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2940700347275608505ull);
    vlSelf->__PVT__o_rd_data_coherency_ctlr_reg_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9675598348060239436ull);
    vlSelf->__PVT__o_rd_data_coherency_ctlr_reg_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5168836374008769296ull);
    vlSelf->__PVT__o_rd_data_qos_override_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3089146022855278035ull);
    vlSelf->__PVT__o_rd_data_node_port_timeout_control_reg_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13374750583242311376ull);
    vlSelf->__PVT__wr_en_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7528258517014165852ull);
    vlSelf->__PVT__wr_en_reg_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3895807025477671365ull);
    vlSelf->__Vcellinp__rw_proc_port_reg_0__i_wr_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16545413830906316636ull);
    vlSelf->__Vcellinp__rw_coherency_ctlr_reg_0__i_wr_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11404273096143617470ull);
    vlSelf->__Vcellinp__rw_coherency_ctlr_reg_1__i_wr_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14480256071317781274ull);
    vlSelf->__Vcellinp__rw_node_port_timeout_control_reg_3__i_wr_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5777893400801032437ull);
    vlSelf->__Vcellinp__rw_qos_override_reg__i_wr_reg_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2529172547177115790ull);
    vlSelf->__Vdly__o_rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1837963759423059123ull);
    vlSelf->__Vdly__wr_en_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9628316629654103946ull);
}
