// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_topology_top.h"

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__0(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_qp_clk.__PVT__sig_src 
        = vlSelfRef.__PVT__all_cc_are_inactive_reg;
    vlSymsp->TOP__sig_topology_top__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk.__PVT__sig_src 
        = vlSelfRef.__PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__COH_RNF_Exist 
        = vlSelfRef.__PVT__COH_RNF_Exist;
    vlSelfRef.pactive = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__pactive;
    vlSelfRef.pdeny = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__pdeny;
    vlSelfRef.paccept = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__paccept;
    vlSelfRef.qin_quiescence = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__qin_quiescence;
    vlSelfRef.qactive = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__qactive;
    vlSelfRef.qdeny = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__qdeny;
    vlSelfRef.qacceptn = vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__qacceptn;
    vlSelfRef.PSLVERR_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PSLVERR_prog;
    vlSelfRef.PRDATA_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PRDATA_prog;
    vlSelfRef.__PVT__all_cc_are_inactive_sync = vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_qp_clk.__PVT__sig_dest;
    vlSelfRef.__PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync 
        = vlSymsp->TOP__sig_topology_top__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk.__PVT__sig_dest;
    vlSelfRef.__PVT__cl0_p1_reg_syscoh = VL_CONCAT_III(2,1,1, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_syscoh_con2enable, 0U)), 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_syscoh_snppend, 0U)));
    vlSelfRef.__PVT__reg_rddata_valid_prog = vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__o_rddata_valid_prog;
    vlSelfRef.__PVT__wrdata_rdy_prog = vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__o_rdy_prog;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__icx_txport_cfg 
        = vlSelfRef.__PVT__cl0_icx_txport_cfg;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__reg_cc_ctrl1 
        = vlSelfRef.__PVT__reg_cc_ctrl1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__mycluster_id 
        = vlSelfRef.__PVT__cl0_mycluster_id;
    vlSelfRef.__PVT__cnoc_is_active = (1U & ((~ (IData)(vlSelfRef.__PVT__all_cc_are_inactive_sync)) 
                                             | (IData)(vlSelfRef.__PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_reg_syscoh 
        = vlSelfRef.__PVT__cl0_p1_reg_syscoh;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_rddata_valid_prog 
        = vlSelfRef.__PVT__reg_rddata_valid_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__wrdata_rdy_prog 
        = vlSelfRef.__PVT__wrdata_rdy_prog;
    vlSelfRef.__PVT__cnoc_is_inactive = (1U & (~ (IData)(vlSelfRef.__PVT__cnoc_is_active)));
    vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__is_idle 
        = vlSelfRef.__PVT__cnoc_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__1(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__preq 
        = vlSelfRef.preq;
    vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__pstate 
        = vlSelfRef.pstate;
    vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__qreqn 
        = vlSelfRef.qreqn;
    vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_qp_clk.__PVT__resetb_clkdest 
        = vlSelfRef.qp_rstb;
    vlSymsp->TOP__sig_topology_top__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk.__PVT__resetb_clkdest 
        = vlSelfRef.qp_rstb;
    vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__rst_n 
        = vlSelfRef.qp_rstb;
    vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_qp_clk.__PVT__clkdest 
        = vlSelfRef.qp_clk;
    vlSymsp->TOP__sig_topology_top__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk.__PVT__clkdest 
        = vlSelfRef.qp_clk;
    vlSymsp->TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl.__PVT__clk 
        = vlSelfRef.qp_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cc_rstb_intfrx_clk 
        = vlSelfRef.cl0_cc_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cc_intfrx_clk 
        = vlSelfRef.cl0_cc_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RXSACTIVE 
        = vlSelfRef.cl0_p3_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_LINKACTIVEACK 
        = vlSelfRef.cl0_p3_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_LINKACTIVEREQ 
        = vlSelfRef.cl0_p3_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_LINKACTIVEREQ 
        = vlSelfRef.cl0_p1_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_LINKACTIVEACK 
        = vlSelfRef.cl0_p1_TX_LINKACTIVEACK;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RXSACTIVE 
        = vlSelfRef.cl0_p1_RXSACTIVE;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_DATLCRDV 
        = vlSelfRef.cl0_p3_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_REQLCRDV 
        = vlSelfRef.cl0_p3_TX_REQLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_DATLCRDV 
        = vlSelfRef.cl0_p1_TX_DATLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_RSPLCRDV 
        = vlSelfRef.cl0_p1_TX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_SNPLCRDV 
        = vlSelfRef.cl0_p1_TX_SNPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_rstb_intfrx_clk 
        = vlSelfRef.cl0_p3_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_rstb_intfrx_clk 
        = vlSelfRef.cl0_p1_rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_intfrx_clk 
        = vlSelfRef.cl0_p3_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_intfrx_clk 
        = vlSelfRef.cl0_p1_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_cl0_ic_clk.__PVT__resetb_clkdest 
        = vlSelfRef.cl0_rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__inst_sync_cache_init_complete.__PVT__resetb_clkdest 
        = vlSelfRef.cl0_rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__rstb_ic_clk 
        = vlSelfRef.cl0_rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_cl0_ic_clk.__PVT__clkdest 
        = vlSelfRef.cl0_ic_clk;
    vlSymsp->TOP__sig_topology_top__inst_sync_cache_init_complete.__PVT__clkdest 
        = vlSelfRef.cl0_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__ic_clk 
        = vlSelfRef.cl0_ic_clk;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PWRITE_prog 
        = vlSelfRef.PWRITE_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PENABLE_prog 
        = vlSelfRef.PENABLE_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PSEL_prog 
        = vlSelfRef.PSEL_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PADDR_prog 
        = vlSelfRef.PADDR_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PRESETn_prog 
        = vlSelfRef.PRESETn_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_rst_n 
        = vlSelfRef.PRESETn_prog;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_csr_reset_n 
        = vlSelfRef.PRESETn_prog;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_rst_n 
        = vlSelfRef.PRESETn_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PCLK_prog 
        = vlSelfRef.PCLK_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_clk 
        = vlSelfRef.PCLK_prog;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_csr_clk 
        = vlSelfRef.PCLK_prog;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_clk 
        = vlSelfRef.PCLK_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PSTRB_prog 
        = vlSelfRef.PSTRB_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PWDATA_prog 
        = vlSelfRef.PWDATA_prog;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_SYSCOREQ 
        = vlSelfRef.cl0_p1_SYSCOREQ;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_DATFLIT, vlSelfRef.cl0_p1_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_DATFLITV 
        = vlSelfRef.cl0_p1_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_DATFLITPEND 
        = vlSelfRef.cl0_p1_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_RSPFLIT, vlSelfRef.cl0_p1_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_RSPFLITV 
        = vlSelfRef.cl0_p1_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_RSPFLITPEND 
        = vlSelfRef.cl0_p1_RX_RSPFLITPEND;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_REQFLIT, vlSelfRef.cl0_p1_RX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_REQFLITV 
        = vlSelfRef.cl0_p1_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_REQFLITPEND 
        = vlSelfRef.cl0_p1_RX_REQFLITPEND;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_DATFLIT, vlSelfRef.cl0_p3_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_DATFLITV 
        = vlSelfRef.cl0_p3_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_DATFLITPEND 
        = vlSelfRef.cl0_p3_RX_DATFLITPEND;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_RSPFLIT, vlSelfRef.cl0_p3_RX_RSPFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_RSPFLITV 
        = vlSelfRef.cl0_p3_RX_RSPFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_RSPFLITPEND 
        = vlSelfRef.cl0_p3_RX_RSPFLITPEND;
    vlSelfRef.__PVT__rd_csr_top = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_rd_data;
    vlSelfRef.__PVT__cc_is_inactive_sync = vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_cl0_ic_clk.__PVT__sig_dest;
    vlSelfRef.__PVT__cache_init_complete_sync = vlSymsp->TOP__sig_topology_top__inst_sync_cache_init_complete.__PVT__sig_dest;
    vlSelfRef.__PVT__rd_csr_clus_0 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__o_rd_csr_clus;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_rd_csr_top 
        = vlSelfRef.__PVT__rd_csr_top;
    vlSelfRef.__PVT__all_cc_are_inactive = vlSelfRef.__PVT__cc_is_inactive_sync;
    vlSelfRef.__PVT__all_cache_init_complete = vlSelfRef.__PVT__cache_init_complete_sync;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_rd_csr_clus_0 
        = vlSelfRef.__PVT__rd_csr_clus_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__noc_is_inactive 
        = vlSelfRef.__PVT__all_cc_are_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__2(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cc_is_inactive;
    vlSelfRef.__PVT__cache_init_complete = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cache_init_complete;
    vlSelfRef.__PVT__reg_address_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_address_prog;
    vlSelfRef.__PVT__reg_wrstrb_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_wrstrb_prog;
    vlSelfRef.__PVT__reg_wrdata_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_wrdata_prog;
    vlSelfRef.__PVT__reg_rddata_prog = vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__o_rddata_prog;
    vlSelfRef.__PVT__reg_syscoh_0_reg_syscoh_snppend_31_0 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_0_reg_syscoh_snppend_31_0;
    vlSelfRef.__PVT__reg_syscoh_1_reg_syscoh_snppend_63_32 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_1_reg_syscoh_snppend_63_32;
    vlSelfRef.__PVT__reg_syscoh_2_reg_syscoh_snppend_95_64 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_2_reg_syscoh_snppend_95_64;
    vlSelfRef.__PVT__reg_syscoh_3_reg_syscoh_snppend_127_96 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_3_reg_syscoh_snppend_127_96;
    vlSelfRef.__PVT__reg_syscoh_4_reg_syscoh_snppend_159_128 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_4_reg_syscoh_snppend_159_128;
    vlSelfRef.__PVT__reg_syscoh_5_reg_syscoh_snppend_191_160 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_5_reg_syscoh_snppend_191_160;
    vlSelfRef.__PVT__reg_syscoh_6_reg_syscoh_snppend_223_192 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_6_reg_syscoh_snppend_223_192;
    vlSelfRef.__PVT__reg_syscoh_7_reg_syscoh_snppend_255_224 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_7_reg_syscoh_snppend_255_224;
    vlSelfRef.__PVT__coh_clst_0_COH_CLST_Exist_31_0 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_0_COH_CLST_Exist_31_0;
    vlSelfRef.__PVT__coh_clst_1_COH_CLST_Exist_63_32 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_1_COH_CLST_Exist_63_32;
    vlSelfRef.__PVT__coh_clst_2_COH_CLST_Exist_95_64 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_2_COH_CLST_Exist_95_64;
    vlSelfRef.__PVT__coh_clst_3_COH_CLST_Exist_127_96 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_3_COH_CLST_Exist_127_96;
    vlSelfRef.__PVT__coh_clst_4_COH_CLST_Exist_159_128 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_4_COH_CLST_Exist_159_128;
    vlSelfRef.__PVT__coh_clst_5_COH_CLST_Exist_191_160 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_5_COH_CLST_Exist_191_160;
    vlSelfRef.__PVT__coh_clst_6_COH_CLST_Exist_223_192 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_6_COH_CLST_Exist_223_192;
    vlSelfRef.__PVT__coh_clst_7_COH_CLST_Exist_255_224 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_coh_clst_7_COH_CLST_Exist_255_224;
    vlSelfRef.__PVT__reset_0_top_sft_reset_n = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_0_top_sft_reset_n;
    vlSelfRef.__PVT__reg_syscoh_8_reg_syscoh_con2enable_31_0 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_8_reg_syscoh_con2enable_31_0;
    vlSelfRef.__PVT__reg_syscoh_9_reg_syscoh_con2enable_63_32 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_9_reg_syscoh_con2enable_63_32;
    vlSelfRef.__PVT__reg_syscoh_10_reg_syscoh_con2enable_95_64 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_10_reg_syscoh_con2enable_95_64;
    vlSelfRef.__PVT__reg_syscoh_11_reg_syscoh_con2enable_127_96 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_11_reg_syscoh_con2enable_127_96;
    vlSelfRef.__PVT__reg_syscoh_12_reg_syscoh_con2enable_159_128 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_12_reg_syscoh_con2enable_159_128;
    vlSelfRef.__PVT__reg_syscoh_13_reg_syscoh_con2enable_191_160 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_13_reg_syscoh_con2enable_191_160;
    vlSelfRef.__PVT__reg_syscoh_14_reg_syscoh_con2enable_223_192 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_14_reg_syscoh_con2enable_223_192;
    vlSelfRef.__PVT__reg_syscoh_15_reg_syscoh_con2enable_255_224 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reg_syscoh_15_reg_syscoh_con2enable_255_224;
    vlSelfRef.__PVT__reset_1_cluster_sft_reset_n_31_0 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_1_cluster_sft_reset_n_31_0;
    vlSelfRef.__PVT__reset_2_cluster_sft_reset_n_63_32 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_2_cluster_sft_reset_n_63_32;
    vlSelfRef.__PVT__reset_3_cluster_sft_reset_n_95_64 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_3_cluster_sft_reset_n_95_64;
    vlSelfRef.__PVT__reset_4_cluster_sft_reset_n_127_96 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_4_cluster_sft_reset_n_127_96;
    vlSelfRef.__PVT__reset_5_cluster_sft_reset_n_159_128 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_5_cluster_sft_reset_n_159_128;
    vlSelfRef.__PVT__reset_6_cluster_sft_reset_n_191_160 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_6_cluster_sft_reset_n_191_160;
    vlSelfRef.__PVT__reset_7_cluster_sft_reset_n_223_192 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_7_cluster_sft_reset_n_223_192;
    vlSelfRef.__PVT__reset_8_cluster_sft_reset_n_255_224 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_reset_8_cluster_sft_reset_n_255_224;
    vlSelfRef.__Vcellout__sig_top_csr_wrapper_0__o_xy_coord_all_clus 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_xy_coord_all_clus;
    vlSelfRef.__Vcellout__sig_top_csr_wrapper_0__o_icx_txport_cfg_all_clus 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_icx_txport_cfg_all_clus;
    vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_cm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_noncm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_cm_homeaddr_limit_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_base_all_pm = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_noncm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_noncm_homeaddr_limit_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_noncm_homeaddr_limit_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_all_pm = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_limit_all_pm = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_cm_homeaddr_limit_all_pm;
    vlSelfRef.__PVT__COH_nodeid_all_rn = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_COH_nodeid_all_rn;
    vlSelfRef.__PVT__xy_coord_all_hn_f = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_xy_coord_all_hn_f;
    vlSelfRef.__PVT__xy_coord_all_pm = vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__o_xy_coord_all_pm;
    vlSymsp->TOP__sig_topology_top__inst_sync_cc_inactive_cl0_ic_clk.__PVT__sig_src 
        = vlSelfRef.__PVT__cc_is_inactive;
    vlSymsp->TOP__sig_topology_top__inst_sync_cache_init_complete.__PVT__sig_src 
        = vlSelfRef.__PVT__cache_init_complete;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_clus_csr_address 
        = vlSelfRef.__PVT__reg_address_prog;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_addr 
        = vlSelfRef.__PVT__reg_address_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_address_prog 
        = vlSelfRef.__PVT__reg_address_prog;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_clus_csr_wstrb 
        = vlSelfRef.__PVT__reg_wrstrb_prog;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_strobe 
        = vlSelfRef.__PVT__reg_wrstrb_prog;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_clus_csr_wdata 
        = vlSelfRef.__PVT__reg_wrdata_prog;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_wr_data 
        = vlSelfRef.__PVT__reg_wrdata_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_rddata_prog 
        = vlSelfRef.__PVT__reg_rddata_prog;
    vlSelfRef.__PVT__xy_coord_all_clus = vlSelfRef.__Vcellout__sig_top_csr_wrapper_0__o_xy_coord_all_clus;
    vlSelfRef.__PVT__icx_txport_cfg_all_clus = vlSelfRef.__Vcellout__sig_top_csr_wrapper_0__o_icx_txport_cfg_all_clus;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
    VL_EXTEND_WI(242,11, vlSelfRef.__PVT__max_COH_nodeid_all_rn, (IData)(vlSelfRef.__PVT__COH_nodeid_all_rn));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(242,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__COH_nodeid_all_rn, vlSelfRef.__PVT__max_COH_nodeid_all_rn);
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__3(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PREADY_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__PREADY_prog;
    vlSelfRef.__PVT__reg_wren_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_wren_prog;
    vlSelfRef.__PVT__reg_rden_prog = vlSymsp->TOP__sig_topology_top__i_sig_apb_prog.__PVT__reg_rden_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_wren_prog 
        = vlSelfRef.__PVT__reg_wren_prog;
    vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__i_rden_prog 
        = vlSelfRef.__PVT__reg_rden_prog;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__4(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_csr_top_or_clus = vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__o_wren_csr_top_or_clus;
    vlSelfRef.__PVT__rden_csr_top_or_clus = vlSymsp->TOP__sig_topology_top__i_sig_csr_addr_decoder.__PVT__o_rden_csr_top_or_clus;
    vlSelfRef.__Vcellinp__sig_top_csr_wrapper_0__i_wr_en 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__wren_csr_top_or_clus), 1U));
    vlSelfRef.__Vcellinp__cl0_sig_clustertop__i_wren_csr_top_or_clus 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__wren_csr_top_or_clus), 0U));
    vlSelfRef.__Vcellinp__cl0_sig_clustertop__i_rden_csr_top_or_clus 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__rden_csr_top_or_clus), 0U));
    vlSelfRef.__Vcellinp__sig_top_csr_wrapper_0__i_rd_en 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__rden_csr_top_or_clus), 1U));
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_wr_en 
        = vlSelfRef.__Vcellinp__sig_top_csr_wrapper_0__i_wr_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_wren_csr_top_or_clus 
        = vlSelfRef.__Vcellinp__cl0_sig_clustertop__i_wren_csr_top_or_clus;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__i_rden_csr_top_or_clus 
        = vlSelfRef.__Vcellinp__cl0_sig_clustertop__i_rden_csr_top_or_clus;
    vlSymsp->TOP__sig_topology_top__sig_top_csr_wrapper_0.__PVT__i_rd_en 
        = vlSelfRef.__Vcellinp__sig_top_csr_wrapper_0__i_rd_en;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__5(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_sequent__TOP__sig_topology_top__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p1_SYSCOACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_SYSCOACK;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__0(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p3_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__1(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p3_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__2(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p1_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__3(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p1_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__4(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p1_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_REQLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__5(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p3_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TXSACTIVE;
    vlSelfRef.cl0_p3_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_LINKACTIVEREQ;
    vlSelfRef.cl0_p3_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_RX_LINKACTIVEACK;
    vlSelfRef.cl0_p3_TX_REQFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_REQFLITPEND;
    vlSelfRef.cl0_p3_TX_REQFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.cl0_p3_TX_REQFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_REQFLIT);
    vlSelfRef.cl0_p3_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_DATFLITPEND;
    vlSelfRef.cl0_p3_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.cl0_p3_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p3_TX_DATFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__6(Vsig_topology_top_sig_topology_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsig_topology_top_sig_topology_top___stl_comb__TOP__sig_topology_top__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cl0_p1_TX_LINKACTIVEREQ = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_LINKACTIVEREQ;
    vlSelfRef.cl0_p1_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_RX_LINKACTIVEACK;
    vlSelfRef.cl0_p1_TXSACTIVE = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TXSACTIVE;
    vlSelfRef.cl0_p1_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_DATFLITPEND;
    vlSelfRef.cl0_p1_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.cl0_p1_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_DATFLIT);
    vlSelfRef.cl0_p1_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_RSPFLITPEND;
    vlSelfRef.cl0_p1_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_RSPFLITV;
    VL_ASSIGN_W(73,vlSelfRef.cl0_p1_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_RSPFLIT);
    vlSelfRef.cl0_p1_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_SNPFLITPEND;
    vlSelfRef.cl0_p1_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_SNPFLITV;
    VL_ASSIGN_W(108,vlSelfRef.cl0_p1_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop.__PVT__p1_TX_SNPFLIT);
    vlSelfRef.__PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE 
        = ((IData)(vlSelfRef.cl0_p1_TXSACTIVE) | (IData)(vlSelfRef.cl0_p1_RXSACTIVE));
}
