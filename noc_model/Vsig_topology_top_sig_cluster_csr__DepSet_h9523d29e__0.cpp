// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_cluster_csr.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_proc_port_reg_0.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_proc_port_reg_1.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_0.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_1.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_node_port_timeout_control_reg_3.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_qos_override_reg.__PVT__i_rst_n 
        = vlSelfRef.__PVT__i_rst_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_proc_port_reg_0.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_proc_port_reg_1.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_0.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_1.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_node_port_timeout_control_reg_3.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_qos_override_reg.__PVT__i_clk 
        = vlSelfRef.__PVT__i_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__1(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_proc_port_reg_0.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_strobe;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_0.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_strobe;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_1.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_strobe;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_node_port_timeout_control_reg_3.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_strobe;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_qos_override_reg.__PVT__i_strobe 
        = vlSelfRef.__PVT__i_strobe;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_proc_port_reg_0.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_wr_data;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_0.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_wr_data;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_1.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_wr_data;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_node_port_timeout_control_reg_3.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_wr_data;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_qos_override_reg.__PVT__i_wr_data 
        = vlSelfRef.__PVT__i_wr_data;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 0U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 0U)))));
    VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 1U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 1U)))));
    VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 2U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 2U)))));
    VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 3U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 3U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2.__PVT__in_data 
        = vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 0U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 0U)))));
    VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 1U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 1U)))));
    VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 2U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 2U)))));
    VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 3U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 3U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2.__PVT__in_data 
        = vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_proc_port_reg_1 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_proc_port_reg_1.__PVT__o_rddata_reg;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__1(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_proc_port_timeout_status_reg_2 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2.__PVT__o_rddata_reg;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__2(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_proc_port_reg_0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_proc_port_reg_0.__PVT__o_rddata_reg;
    vlSelfRef.__PVT__o_proc_port_reg_0_max_credits 
        = vlSelfRef.__PVT__o_rd_data_proc_port_reg_0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__3(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_coherency_ctlr_reg_0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_0.__PVT__o_rddata_reg;
    vlSelfRef.__PVT__o_coherency_ctlr_reg_0_inactive_threshold 
        = vlSelfRef.__PVT__o_rd_data_coherency_ctlr_reg_0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__4(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_coherency_ctlr_reg_1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_1.__PVT__o_rddata_reg;
    vlSelfRef.__PVT__o_coherency_ctlr_reg_1_b2b_resp_wait 
        = vlSelfRef.__PVT__o_rd_data_coherency_ctlr_reg_1;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__5(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_qos_override_reg = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_qos_override_reg.__PVT__o_rddata_reg;
    vlSelfRef.__PVT__o_qos_override_en_p0 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 7U));
    vlSelfRef.__PVT__o_qos_override_val_p0 = (0xfU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 0U, 4));
    vlSelfRef.__PVT__o_qos_override_en_p1 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 0xfU));
    vlSelfRef.__PVT__o_qos_override_val_p1 = (0xfU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 8U, 4));
    vlSelfRef.__PVT__o_qos_override_en_p2 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 0x17U));
    vlSelfRef.__PVT__o_qos_override_val_p2 = (0xfU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 0x10U, 4));
    vlSelfRef.__PVT__o_qos_override_en_p3 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 0x1fU));
    vlSelfRef.__PVT__o_qos_override_val_p3 = (0xfU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__o_rd_data_qos_override_reg, 0x18U, 4));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__6(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_node_port_timeout_control_reg_3.__PVT__o_rddata_reg;
    VL_ASSIGNSEL_II(4,3,0U, vlSelfRef.__PVT__o_node_port_timeout_clear_timeout_interrupt_vec, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 0x10U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 8U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 0U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_node_port_timeout_clear_timeout_interrupt_vec, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 0x18U)));
    VL_ASSIGNSEL_II(4,3,0U, vlSelfRef.__PVT__o_node_port_timeout_clear_recovery_interrupt_vec, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 0x11U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 9U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 1U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_node_port_timeout_clear_recovery_interrupt_vec, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__o_rd_data_node_port_timeout_control_reg_3, 0x19U)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__7(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__wr_en_reg = vlSelfRef.__PVT__wr_en_reg;
    vlSelfRef.__Vdly__o_rd_data = vlSelfRef.__PVT__o_rd_data;
    if (vlSelfRef.__PVT__i_rst_n) {
        vlSelfRef.__Vdly__o_rd_data = vlSelfRef.__PVT__o_rd_data_nxt;
        vlSelfRef.__Vdly__wr_en_reg = vlSelfRef.__PVT__wr_en_reg_nxt;
    } else {
        vlSelfRef.__Vdly__o_rd_data = 0U;
        vlSelfRef.__Vdly__wr_en_reg = 0U;
    }
    vlSelfRef.__PVT__wr_en_reg = vlSelfRef.__Vdly__wr_en_reg;
    vlSelfRef.__PVT__o_rd_data = vlSelfRef.__Vdly__o_rd_data;
    vlSelfRef.__Vcellinp__rw_proc_port_reg_0__i_wr_reg_en 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__wr_en_reg), 0U));
    vlSelfRef.__Vcellinp__rw_coherency_ctlr_reg_0__i_wr_reg_en 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__wr_en_reg), 1U));
    vlSelfRef.__Vcellinp__rw_coherency_ctlr_reg_1__i_wr_reg_en 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__wr_en_reg), 2U));
    vlSelfRef.__Vcellinp__rw_node_port_timeout_control_reg_3__i_wr_reg_en 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__wr_en_reg), 3U));
    vlSelfRef.__Vcellinp__rw_qos_override_reg__i_wr_reg_en 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__wr_en_reg), 4U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_proc_port_reg_0.__PVT__i_wr_reg_en 
        = vlSelfRef.__Vcellinp__rw_proc_port_reg_0__i_wr_reg_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_0.__PVT__i_wr_reg_en 
        = vlSelfRef.__Vcellinp__rw_coherency_ctlr_reg_0__i_wr_reg_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_coherency_ctlr_reg_1.__PVT__i_wr_reg_en 
        = vlSelfRef.__Vcellinp__rw_coherency_ctlr_reg_1__i_wr_reg_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_node_port_timeout_control_reg_3.__PVT__i_wr_reg_en 
        = vlSelfRef.__Vcellinp__rw_node_port_timeout_control_reg_3__i_wr_reg_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__rw_qos_override_reg.__PVT__i_wr_reg_en 
        = vlSelfRef.__Vcellinp__rw_qos_override_reg__i_wr_reg_en;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cluster_csr___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__2(Vsig_topology_top_sig_cluster_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_cluster_csr___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(32,8,0U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 0U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 0U)))));
    VL_ASSIGNSEL_II(32,8,8U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 1U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 1U)))));
    VL_ASSIGNSEL_II(32,8,0x10U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 2U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 2U)))));
    VL_ASSIGNSEL_II(32,8,0x18U, vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2, 
                    VL_EXTEND_II(8,2, VL_CONCAT_III(2,1,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_recovery_successful_vec), 3U)), 
                                                    (1U 
                                                     & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_node_port_timeout_interrupt_vec), 3U)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2.__PVT__in_data 
        = vlSelfRef.__PVT__i_rd_data_proc_port_timeout_status_reg_2;
}
