// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cluster_csr.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__2(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__2\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0\n"); );
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
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__1(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
