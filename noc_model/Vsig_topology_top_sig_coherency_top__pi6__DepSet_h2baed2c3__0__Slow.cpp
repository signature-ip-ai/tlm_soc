// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_coherency_top__pi6.h"

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__0(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__avoid_clr_colln_snpreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__avoid_clr_colln;
    vlSelfRef.__PVT__clr_collnreg_sending_ini_compdata 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__clr_collnreg_sending_ini;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__snp_tx_datflit_resperr, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__ic_TX_DATFLIT_RESPERR);
    vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_snpreq 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__index_pendingq_clr_outstand_cmd;
    vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_compdata 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__index_pendingq_clr_outstand_cmd;
    vlSelfRef.__PVT__cc_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cc_is_inactive;
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__ic_RX_DATLCRDV;
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__ic_RX_RSPLCRDV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__dmt_enable_all_pm_vec 
        = vlSelfRef.__PVT__dmt_enable_all_pm_vec;
    vlSelfRef.__PVT__rden_dircache_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__rden_dircache;
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__respbody_pcrdgnt, vlSelfRef.__PVT__respbody_pcrdgnt);
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__respbody_retryack, vlSelfRef.__PVT__respbody_retryack);
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__respbody_rdrcpt, vlSelfRef.__PVT__respbody_rdrcpt);
    vlSelfRef.__PVT__full_snpreqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__wrdata_cache_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__wrdata_cache;
    vlSelfRef.__PVT__room_atlst3_outcompfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fiforoom_atlst3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__reg_dwt_en 
        = vlSelfRef.__PVT__reg_dwt_en;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelfRef.__PVT__clr_outstand_cmd_snpreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__clr_outstand_cmd;
    vlSelfRef.__PVT__clr_outstand_cmd_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__clr_outstand_cmd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__use_early_write_response 
        = vlSelfRef.__PVT__use_early_write_response;
    vlSelfRef.__PVT__empty_snpreqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__cm_cmdvalid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cm_cmdvalid;
    vlSelfRef.__PVT__en_blocking_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__en_blocking_reqcmdq;
    vlSelfRef.__PVT__cm_cmdvalid_evict = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cm_cmdvalid_evict;
    vlSelfRef.__PVT__block_fetch_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__block_fetch_cohc;
    vlSelfRef.__PVT__room_atlst3_snpreqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fiforoom_atlst3;
    vlSelfRef.__PVT__full_outcompfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_full;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__use_early_write_response 
        = vlSelfRef.__PVT__use_early_write_response;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__dct_enable_all_rn_vec 
        = vlSelfRef.__PVT__dct_enable_all_rn_vec;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cm_cmd, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cm_cmd);
    vlSelfRef.__PVT__ic_TX_RSPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__ic_TX_RSPFLITV;
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__rden_which16bytes_2nd = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rden_which16bytes_2nd;
    vlSelfRef.__PVT__rden_which16bytes_1st = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rden_which16bytes_1st;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_TX_RSPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__ic_TX_RSPFLIT);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__ic_TX_DATFLIT);
    VL_ASSIGN_W(152,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__ic_TX_SNPFLIT);
    vlSelfRef.__PVT__evict_this_cycle = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__evict_this_cycle;
    vlSelfRef.__PVT__evict_this_one = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__evict_this_one;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__use_early_write_response 
        = vlSelfRef.__PVT__use_early_write_response;
    vlSelfRef.__PVT__empty_outcompfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__respbuff_avail = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__respbuff_avail;
    vlSelfRef.__PVT__cache_index_rd_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cache_index_rd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__req_readreceipt 
        = vlSelfRef.__PVT__req_readreceipt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__req_pcrd_grant 
        = vlSelfRef.__PVT__req_pcrd_grant;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__req_retry_ack 
        = vlSelfRef.__PVT__req_retry_ack;
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph4, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cmd_ph4_req);
    vlSelfRef.__PVT__wren_cmq_ph4 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_cmq_ph4;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__ic_RX_DATFLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__ic_RX_RSPFLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__enable_init_update = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0.__PVT__enable_init_update;
    vlSelfRef.__PVT__wren_cache_vector_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_cache_vector;
    vlSelfRef.__PVT__cache_tag_wr_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cache_tag_wr;
    vlSelfRef.__PVT__cache_index_wr_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cache_index_wr;
    vlSelfRef.__PVT__wrdata_cache_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_cache;
    vlSelfRef.__PVT__fifofull_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__fifofull_reqcmdq;
    vlSelfRef.__PVT__rcv_rsp_dat_srcid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__o_rcv_rsp_dat_srcid;
    vlSelfRef.__PVT__cmd_addr_ph3 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cmd_addr_ph3;
    vlSelfRef.__PVT__rden_dircache_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__rden_dircache_ph2;
    vlSelfRef.__PVT__cache_tag_rd_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cache_tag_rd_ph2;
    vlSelfRef.__PVT__cache_index_rd_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cache_index_rd_ph2;
    vlSelfRef.__PVT__atom_res_update = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__atom_res_update;
    vlSelfRef.__PVT__dealloc_compfifo_vector_ccn = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__dealloc_compfifo_vector;
    vlSelfRef.__PVT__atom_addr = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__atom_addr;
    vlSelfRef.__PVT__cmqhas_3room = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cmqhas_3room;
    vlSelfRef.__PVT__cmqhas_2room = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cmqhas_2room;
    vlSelfRef.__PVT__cmqhas_1room = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cmqhas_1room;
    vlSelfRef.__PVT__full_cmqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__full_cmqfifo;
    vlSelfRef.__PVT__dirc_init_complete = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__dirc_init_complete;
    vlSelfRef.__PVT__fiforoom_atlst4_cmq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__fiforoom_atlst4_cmq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__avoid_clr_colln_snpreq 
        = vlSelfRef.__PVT__avoid_clr_colln_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_collnreg_sending_ini_compdata 
        = vlSelfRef.__PVT__clr_collnreg_sending_ini_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__index_pendingq_clr_outstand_cmd_snpreq 
        = vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__index_pendingq_clr_outstand_cmd_compdata 
        = vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rden_cache_dirc 
        = vlSelfRef.__PVT__rden_dircache_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__full_snpreqfifo 
        = vlSelfRef.__PVT__full_snpreqfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__wrdata_cache_dirc 
        = vlSelfRef.__PVT__wrdata_cache_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__room_atlst3_outcompfifo 
        = vlSelfRef.__PVT__room_atlst3_outcompfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_outstand_cmd_snpreq 
        = vlSelfRef.__PVT__clr_outstand_cmd_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_outstand_cmd_compdata 
        = vlSelfRef.__PVT__clr_outstand_cmd_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__empty_snpreqfifo 
        = vlSelfRef.__PVT__empty_snpreqfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cm_cmdvalid 
        = vlSelfRef.__PVT__cm_cmdvalid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__en_blocking_reqcmdq 
        = vlSelfRef.__PVT__en_blocking_reqcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cm_cmdvalid_evict 
        = vlSelfRef.__PVT__cm_cmdvalid_evict;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__block_fetch_cohc 
        = vlSelfRef.__PVT__block_fetch_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__room_atlst3_snpreqfifo 
        = vlSelfRef.__PVT__room_atlst3_snpreqfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__full_outcompfifo 
        = vlSelfRef.__PVT__full_outcompfifo;
    VL_ASSIGN_W(155,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cm_cmd, vlSelfRef.__PVT__cm_cmd);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rden_which16bytes_2nd 
        = vlSelfRef.__PVT__rden_which16bytes_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rden_which16bytes_1st 
        = vlSelfRef.__PVT__rden_which16bytes_1st;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__evict_this_cycle 
        = vlSelfRef.__PVT__evict_this_cycle;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__evict_this_one 
        = vlSelfRef.__PVT__evict_this_one;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__empty_outcompfifo 
        = vlSelfRef.__PVT__empty_outcompfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__respbuff_avail 
        = vlSelfRef.__PVT__respbuff_avail;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__respbuff_avail 
        = vlSelfRef.__PVT__respbuff_avail;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_index_rd_dirc 
        = vlSelfRef.__PVT__cache_index_rd_dirc;
    VL_ASSIGN_W(155,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cmd_ph4, vlSelfRef.__PVT__cmd_ph4);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__wren_cmq_ph4 
        = vlSelfRef.__PVT__wren_cmq_ph4;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__wren_cache_vector_cohc 
        = vlSelfRef.__PVT__wren_cache_vector_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_tag_wr_cohc 
        = vlSelfRef.__PVT__cache_tag_wr_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_index_wr_cohc 
        = vlSelfRef.__PVT__cache_index_wr_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__wrdata_cache_cohc 
        = vlSelfRef.__PVT__wrdata_cache_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__fifofull_reqcmdq 
        = vlSelfRef.__PVT__fifofull_reqcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_rcv_rsp_dat_srcid 
        = vlSelfRef.__PVT__rcv_rsp_dat_srcid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cmd_addr_ph3 
        = vlSelfRef.__PVT__cmd_addr_ph3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rden_cache_cohc 
        = vlSelfRef.__PVT__rden_dircache_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_tag_rd_cohc 
        = vlSelfRef.__PVT__cache_tag_rd_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_index_rd_cohc 
        = vlSelfRef.__PVT__cache_index_rd_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_atom_res_update 
        = vlSelfRef.__PVT__atom_res_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__dealloc_compfifo_vector_ccn 
        = vlSelfRef.__PVT__dealloc_compfifo_vector_ccn;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_atom_addr 
        = vlSelfRef.__PVT__atom_addr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cmqhas_3room 
        = vlSelfRef.__PVT__cmqhas_3room;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cmqhas_2room 
        = vlSelfRef.__PVT__cmqhas_2room;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cmqhas_1room 
        = vlSelfRef.__PVT__cmqhas_1room;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__full_cmqfifo 
        = vlSelfRef.__PVT__full_cmqfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__dirc_init_complete 
        = vlSelfRef.__PVT__dirc_init_complete;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__fiforoom_atlst4_cmq 
        = vlSelfRef.__PVT__fiforoom_atlst4_cmq;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__1(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__l3_wrbe = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__l3_wrbe;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__l3_wrdata, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__l3_wrdata);
    vlSelfRef.__PVT__l3_drop_wrdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__l3_drop_wrdata;
    vlSelfRef.__PVT__dat_link_crdt_avlble = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__dat_link_crdt_avlble;
    vlSelfRef.__PVT__xmtdata_crdt_avail = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__xmtdata_crdt_avail;
    vlSelfRef.__PVT__snp_tx_datflitv_resperr = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__ic_TX_DATFLITV_RESPERR;
    vlSelfRef.__PVT__snpreq_crdt_avail = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__req_link_crdt_avlble;
    vlSelfRef.__PVT__buffer_full = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__o_buffer_full;
    VL_ASSIGN_W(191,vlSelfRef.__Vcellout__snpreq_fifo_0__fifo_rddata, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__dirc_canwrite_tocache = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__dirc_canwrite_tocache;
    vlSelfRef.__PVT__validity_vector = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__validity_vector;
    vlSelfRef.__PVT__compbuf_available_compbuftop = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__compbuf_available;
    VL_ASSIGN_W(128,vlSelfRef.__PVT__valid_location_all, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__valid_location_all);
    vlSelfRef.__PVT__buffernum_available = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__buffernum_available;
    VL_ASSIGN_W(181,vlSelfRef.__PVT__rddata_outcompfifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__writeevict_or_evict = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_cc_ctrl1, 4U));
    vlSelfRef.__PVT__ignore_likyshared_writeevictorevict 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__reg_cc_ctrl1, 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__l3_wrdatabuf_hasroom 
        = vlSelfRef.__PVT__l3_wrdatabuf_hasroom;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__l3reqflit_fifo_full 
        = vlSelfRef.__PVT__l3reqflit_fifo_full;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__l3reqflit_fifo_full 
        = vlSelfRef.__PVT__l3reqflit_fifo_full;
    vlSelfRef.__PVT__wren_outcompfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_outcompfifo;
    VL_ASSIGN_W(181,vlSelfRef.__Vcellout__sig_coherency_ctrlr_0__wrdata_outcompfifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_outcompfifo);
    vlSelfRef.__PVT__cache_tag_rd_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cache_tag_rd;
    vlSelfRef.__PVT__index_cache_eviction = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__index_cache_eviction;
    VL_ASSIGN_W(84,vlSelfRef.__PVT__evict_details, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__evict_details);
    vlSelfRef.__PVT__rcv_rsp_dat_linear_srcid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__o_rcv_rsp_dat_linear_srcid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__dat_link_crdt_avlble 
        = vlSelfRef.__PVT__dat_link_crdt_avlble;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__snpreq_sending_datflit 
        = vlSelfRef.__PVT__snp_tx_datflitv_resperr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__snpreq_crdt_avail 
        = vlSelfRef.__PVT__snpreq_crdt_avail;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__req_link_crdt_avlble 
        = vlSelfRef.__PVT__snpreq_crdt_avail;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__buffer_full 
        = vlSelfRef.__PVT__buffer_full;
    VL_ASSIGN_W(191,vlSelfRef.__PVT__rddata_snpreqfifo, vlSelfRef.__Vcellout__snpreq_fifo_0__fifo_rddata);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__dirc_canwrite_tocache 
        = vlSelfRef.__PVT__dirc_canwrite_tocache;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__validity_in 
        = vlSelfRef.__PVT__validity_vector;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__compbuf_available_compbuftop 
        = vlSelfRef.__PVT__compbuf_available_compbuftop;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__compbuf_available 
        = vlSelfRef.__PVT__compbuf_available_compbuftop;
    VL_ASSIGN_W(128,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__valid_location_all, vlSelfRef.__PVT__valid_location_all);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__buffernum_available 
        = vlSelfRef.__PVT__buffernum_available;
    VL_ASSIGN_W(181,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rddata_outcompfifo, vlSelfRef.__PVT__rddata_outcompfifo);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__writeevict_or_evict 
        = vlSelfRef.__PVT__writeevict_or_evict;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__ignore_likyshared_writeevictorevict 
        = vlSelfRef.__PVT__ignore_likyshared_writeevictorevict;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_outcompfifo;
    VL_ASSIGN_W(181,vlSelfRef.__PVT__wrdata_outcompfifo, vlSelfRef.__Vcellout__sig_coherency_ctrlr_0__wrdata_outcompfifo);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_tag_rd_dirc 
        = vlSelfRef.__PVT__cache_tag_rd_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__index_cache_eviction 
        = vlSelfRef.__PVT__index_cache_eviction;
    VL_ASSIGN_W(84,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__evict_details, vlSelfRef.__PVT__evict_details);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__i_rcv_rsp_dat_linear_srcid 
        = vlSelfRef.__PVT__rcv_rsp_dat_linear_srcid;
    VL_ASSIGN_W(191,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__snpreqcmd, vlSelfRef.__PVT__rddata_snpreqfifo);
    VL_ASSIGN_W(181,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_outcompfifo);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__2(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__aresetn 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0.__PVT__rstb_cc_clk_i 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rstb_cache_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_proc_atomic_0.__PVT__cc_clk_i 
        = vlSelfRef.__PVT__cc_clk;
    vlSelfRef.__PVT__dbid_from_l3 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__dbid_from_l3;
    vlSelfRef.__PVT__index_pendingq_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__index_pendingq;
    vlSelfRef.__PVT__outq_index = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__outq_index_o;
    vlSelfRef.__PVT__excl_load_reqv = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_load_reqv;
    vlSelfRef.__PVT__excl_load_srcid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_load_srcid;
    vlSelfRef.__PVT__excl_load_lpid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_load_lpid;
    vlSelfRef.__PVT__excl_load_size = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_load_size;
    vlSelfRef.__PVT__excl_load_addr = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_load_addr;
    vlSelfRef.__PVT__cachehit_vector = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cachehit_vector;
    vlSelfRef.__PVT__cachehit = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cachehit;
    vlSelfRef.__PVT__in_pendingq_cache_all = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__in_pendingq_cache_all;
    vlSelfRef.__PVT__rdout_tag_value = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rdout_tag_value;
    vlSelfRef.__PVT__rddata_cache = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rddata_cache;
    vlSelfRef.__PVT__cmd_addr_ph3_has_matchingentry_incmq 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cmd_addr_ph3_has_matchingentry_incmq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__index_pendingq_compdata 
        = vlSelfRef.__PVT__index_pendingq_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__outq_index 
        = vlSelfRef.__PVT__outq_index;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_load_reqv 
        = vlSelfRef.__PVT__excl_load_reqv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_load_srcid 
        = vlSelfRef.__PVT__excl_load_srcid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_load_lpid 
        = vlSelfRef.__PVT__excl_load_lpid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_load_size 
        = vlSelfRef.__PVT__excl_load_size;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_load_addr 
        = vlSelfRef.__PVT__excl_load_addr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cachehit_vector_ph3 
        = vlSelfRef.__PVT__cachehit_vector;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cachehit 
        = vlSelfRef.__PVT__cachehit;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cachehit_ph3 
        = vlSelfRef.__PVT__cachehit;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__in_pendingq 
        = vlSelfRef.__PVT__in_pendingq_cache_all;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__rdout_tag_value 
        = vlSelfRef.__PVT__rdout_tag_value;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__rddata_cache_ph3 
        = vlSelfRef.__PVT__rddata_cache;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__rddata_cache 
        = vlSelfRef.__PVT__rddata_cache;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cmd_addr_ph3_has_matchingentry_incmq 
        = vlSelfRef.__PVT__cmd_addr_ph3_has_matchingentry_incmq;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__3(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__PVT__addr_outstandq_to_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__addr_outstandq_to_compdata;
    vlSelfRef.__PVT__excl_store_reqv = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_store_reqv;
    vlSelfRef.__PVT__inpendingq_matches_collnq_cohc 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__inpendingq_matches_collnq;
    vlSelfRef.__PVT__excl_store_addr = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_store_addr;
    vlSelfRef.__PVT__excl_store_srcid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_store_srcid;
    vlSelfRef.__PVT__excl_store_lpid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_store_lpid;
    vlSelfRef.__PVT__excl_store_size = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_store_size;
    vlSelfRef.__PVT__wren_snpreqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_snpreqfifo;
    vlSelfRef.__PVT__send_respcrdt_update_cohc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__send_respcrdt_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__addr_outstandq_to_compdata 
        = vlSelfRef.__PVT__addr_outstandq_to_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_store_reqv 
        = vlSelfRef.__PVT__excl_store_reqv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__inpendingq_matches_collnq_cohc 
        = vlSelfRef.__PVT__inpendingq_matches_collnq_cohc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_store_addr 
        = vlSelfRef.__PVT__excl_store_addr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_store_srcid 
        = vlSelfRef.__PVT__excl_store_srcid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_store_lpid 
        = vlSelfRef.__PVT__excl_store_lpid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__i_excl_store_size 
        = vlSelfRef.__PVT__excl_store_size;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_snpreqfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__send_respcrdt_update_cohc 
        = vlSelfRef.__PVT__send_respcrdt_update_cohc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__4(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    VL_ASSIGN_W(242,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__COH_nodeid_all_rn, vlSelfRef.__PVT__COH_nodeid_all_rn);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__aclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cc_gclk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSelfRef.__PVT__excl_store_pass = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_system_monitor_0.__PVT__o_excl_store_pass;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__excl_store_pass 
        = vlSelfRef.__PVT__excl_store_pass;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__5(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(191,vlSelfRef.__PVT__wrdata_snpreqfifo, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_snpreqfifo);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__l3_rddata_resperr 
        = vlSelfRef.__PVT__l3_rddata_resperr;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__l3_datvalid 
        = vlSelfRef.__PVT__l3_datvalid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__l3_rddata_txnid 
        = vlSelfRef.__PVT__l3_rddata_txnid;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__l3_datflit, vlSelfRef.__PVT__l3_datflit);
    VL_ASSIGN_W(191,vlSelfRef.__Vcellinp__snpreq_fifo_0__fifo_wrdata, vlSelfRef.__PVT__wrdata_snpreqfifo);
    VL_ASSIGN_W(191,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__snpreq_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__6(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__porthas_datgnt_fromcc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__porthas_datgnt_fromcc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__7(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__ic_RX_DATFLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__ic_RX_DATFLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__8(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(109,vlSelfRef.__PVT__wrdata_memrespcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wrdata_memrespcmdq);
    VL_ASSIGN_W(109,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_memrespcmdq, vlSelfRef.__PVT__wrdata_memrespcmdq);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__0(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_full_srcid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__o_xmt_snpreq_full_srcid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__i_xmt_snpreq_full_srcid 
        = vlSelfRef.__PVT__xmt_snpreq_full_srcid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__1(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_linear_srcid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__o_xmt_snpreq_linear_srcid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_xmt_snpreq_linear_srcid 
        = vlSelfRef.__PVT__xmt_snpreq_linear_srcid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__9(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__wren_reqcmdfifo;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__2(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_snpreq_full_tgtid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__o_xmt_snpreq_full_tgtid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__i_xmt_snpreq_full_tgtid 
        = vlSelfRef.__PVT__xmt_snpreq_full_tgtid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__3(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__grant_resp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__grant_resp;
    vlSelfRef.__PVT__ic_TX_RSPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__ic_TX_RSPFLITPEND;
    vlSelfRef.__Vcellinp__sig_chi_xmt_snpreq_0__gnt_rsp_snpreq 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__grant_resp), 0U));
    vlSelfRef.__Vcellinp__sig_chi_xmt_compdata_0__gnt_resp_compdata 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.__PVT__grant_resp), 1U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__gnt_rsp_snpreq 
        = vlSelfRef.__Vcellinp__sig_chi_xmt_snpreq_0__gnt_rsp_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__gnt_resp_compdata 
        = vlSelfRef.__Vcellinp__sig_chi_xmt_compdata_0__gnt_resp_compdata;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__4(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wrbe_compbuff_rcv_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wrbe_dataflit;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wrdata_compbuff_rcv_dat, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wrdata_dataflit);
    vlSelfRef.__PVT__wren_which128_compbuff_rcv_dat 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wren_which128;
    vlSelfRef.__PVT__index_outq_rcvdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__index_outq_rcvdata;
    vlSelfRef.__PVT__rcv_datproc_wr_to_compbuff = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__rcv_datproc_wr_to_compbuff;
    VL_ASSIGN_W(109,vlSelfRef.__PVT__wrdata_drespcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wrdata_drespcmdfifo);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__index_outq_rcvdata 
        = vlSelfRef.__PVT__index_outq_rcvdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wren_compbuff_rcv_dat 
        = vlSelfRef.__PVT__rcv_datproc_wr_to_compbuff;
    VL_ASSIGN_W(109,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_drespcmdq, vlSelfRef.__PVT__wrdata_drespcmdq);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__5(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc_1st = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__compq_buff_to_rcvdatproc_1st;
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc_2nd = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__compq_buff_to_rcvdatproc_2nd;
    vlSelfRef.__PVT__vld_compq_buff_to_rcvdatproc_2nd 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__vld_compq_buff_to_rcvdatproc_2nd;
    vlSelfRef.__PVT__vld_compbuf_2nd_for_snpdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__vld_compbuf_2nd_for_snpdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__compq_buff_to_rcvdatproc_1st 
        = vlSelfRef.__PVT__compq_buff_to_rcvdatproc_1st;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__compq_buff_to_rcvdatproc_2nd 
        = vlSelfRef.__PVT__compq_buff_to_rcvdatproc_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__vld_compq_buff_to_rcvdatproc_2nd 
        = vlSelfRef.__PVT__vld_compq_buff_to_rcvdatproc_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__vld_compbuf_2nd_for_snpdata 
        = vlSelfRef.__PVT__vld_compbuf_2nd_for_snpdata;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__6(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_compbuff_rcv_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wren_compfifo;
    vlSelfRef.__PVT__wren_drespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wren_drespcmdfifo;
    vlSelfRef.__PVT__wren_memrespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_datproc_0.__PVT__wren_memrespcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_drespcmdq 
        = vlSelfRef.__PVT__wren_drespcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_memrespcmdq 
        = vlSelfRef.__PVT__wren_memrespcmdq;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__7(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_dircache_dirc_pre = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__rden_dircache_pre;
    vlSelfRef.__PVT__wrvalid_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__wrvalid_dirc;
    vlSelfRef.__PVT__cache_tag_wr_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cache_tag_wr;
    vlSelfRef.__PVT__cache_index_wr_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cache_index_wr;
    vlSelfRef.__PVT__wren_cache_vector_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__wren_cache_vector;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rden_cache_dirc_pre 
        = vlSelfRef.__PVT__rden_dircache_dirc_pre;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__wrvalid_dirc 
        = vlSelfRef.__PVT__wrvalid_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_tag_wr_dirc 
        = vlSelfRef.__PVT__cache_tag_wr_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_index_wr_dirc 
        = vlSelfRef.__PVT__cache_index_wr_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__wren_cache_vector_dirc 
        = vlSelfRef.__PVT__wren_cache_vector_dirc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__8(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_index_wr_cohc_or_dirc;
    vlSelfRef.__PVT__wren_cache_cohc_or_dirc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__wren_cache_cohc_or_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__cache_index_wr_cohc_or_dirc 
        = vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cache_index_wr_cohc_or_dirc 
        = vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__wren_cache_cohc_or_dirc 
        = vlSelfRef.__PVT__wren_cache_cohc_or_dirc;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_cache_cohc_or_dirc 
        = vlSelfRef.__PVT__wren_cache_cohc_or_dirc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__9(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_reqcmdq 
        = vlSelfRef.__PVT__wren_reqcmdq;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__10(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_reqproc_linear_nodeid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__o_rcv_reqproc_linear_nodeid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__i_rcv_reqproc_linear_nodeid 
        = vlSelfRef.__PVT__rcv_reqproc_linear_nodeid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__11(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__ic_TX_SNPLCRDV 
        = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__12(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__ic_TX_DATLCRDV 
        = vlSelfRef.__PVT__ic_TX_DATLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__13(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__ic_TX_RSPLCRDV 
        = vlSelfRef.__PVT__ic_TX_RSPLCRDV;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__14(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_resp_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__req_resp_compdata;
    vlSelfRef.__PVT__allocate_respbuf_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__allocate_respbuf;
    vlSelfRef.__PVT__rden_outcompfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rden_outcompfifo;
    vlSelfRef.__PVT__clr_unused_compbuff_num = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__clr_unused_compbuff_num;
    vlSelfRef.__PVT__block_compbuf_available = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__block_compbuf_available;
    vlSelfRef.__PVT__cc_reqflit_valid_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__cc_reqflit_valid;
    vlSelfRef.__PVT__l3_wrdata_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__l3_wrdata_valid;
    vlSelfRef.__PVT__compdata_tx_datflitv = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__ic_TX_DATFLITV;
    vlSelfRef.__PVT__clr_outstand_prep = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__clr_outstand_prep;
    vlSelfRef.__PVT__clr_2nd_buffer = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__clr_2nd_buffer;
    vlSelfRef.__PVT__wren_compbuff_num_compdata_1st 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wren_compbuff_num_compdata_1st;
    vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wren_compbuff_num_compdata_2nd;
    vlSelfRef.__PVT__allocate_compbuf_compdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__allocate_compbuf;
    vlSelfRef.__PVT__compdata_clr_outstand = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__compdata_clr_outstand;
    vlSelfRef.__PVT__compdata_tx_reqflitv = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__ic_TX_MEM_REQFLITV;
    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__slc_readnosnp_apply_dmt_compdata_out;
    vlSelfRef.__PVT__compdata_sending_ccreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__compdata_sending_ccreq;
    vlSelfRef.__PVT__dealloc_compfifo_vector_compdata 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__dealloc_compfifo_vector;
    vlSelfRef.__PVT__wren_which128_compbuff_xmt_dat 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wren_which128;
    vlSelfRef.__PVT__wren_compbuff_xmt_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wren_compbuff;
    vlSelfRef.__PVT__read_datareuse_compdata_1st = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__read_compbuf_datareuse_1st;
    vlSelfRef.__PVT__read_datareuse_compdata_2nd = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__read_compbuf_datareuse_2nd;
    vlSelfRef.__PVT__rden_whichcompfifo_2nd = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rden_whichcompfifo_2nd;
    vlSelfRef.__PVT__rden_whichcompfifo_1st = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rden_whichcompfifo_1st;
    VL_ASSIGN_W(74,vlSelfRef.__PVT__respbody_compdata, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__respbody_compdata);
    vlSelfRef.__PVT__slc_origreq_is_read_snp_compdata 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__slc_origreq_is_read_snp_dmt_out;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__req_resp_compdata 
        = vlSelfRef.__PVT__req_resp_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__allocate_respbuf_compdata 
        = vlSelfRef.__PVT__allocate_respbuf_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__outcomp_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_outcompfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__clr_unused_compbuff_num 
        = vlSelfRef.__PVT__clr_unused_compbuff_num;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__block_compbuf_available 
        = vlSelfRef.__PVT__block_compbuf_available;
    vlSelfRef.__PVT__ic_tx_snpreq_datflitv = ((IData)(vlSelfRef.__PVT__snp_tx_datflitv_resperr) 
                                              | (IData)(vlSelfRef.__PVT__compdata_tx_datflitv));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_outstand_prep 
        = vlSelfRef.__PVT__clr_outstand_prep;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_2nd_buffer 
        = vlSelfRef.__PVT__clr_2nd_buffer;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_compbuff_num_compdata_1st 
        = vlSelfRef.__PVT__wren_compbuff_num_compdata_1st;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_compbuff_num_compdata_2nd 
        = vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__allocated_compbuf_compdata 
        = vlSelfRef.__PVT__allocate_compbuf_compdata;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__compdata_clr_outstand 
        = vlSelfRef.__PVT__compdata_clr_outstand;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__compdata_sending_memreq 
        = vlSelfRef.__PVT__compdata_tx_reqflitv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__compdata_sending_ccreq 
        = vlSelfRef.__PVT__compdata_sending_ccreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__dealloc_compfifo_vector_compdata 
        = vlSelfRef.__PVT__dealloc_compfifo_vector_compdata;
    vlSelfRef.__PVT__wren_which128_compbuff = (VL_REDOR_I(vlSelfRef.__PVT__wren_compbuff_rcv_dat)
                                                ? (IData)(vlSelfRef.__PVT__wren_which128_compbuff_rcv_dat)
                                                : (IData)(vlSelfRef.__PVT__wren_which128_compbuff_xmt_dat));
    vlSelfRef.__PVT__wren_compbuff = (vlSelfRef.__PVT__wren_compbuff_rcv_dat 
                                      | vlSelfRef.__PVT__wren_compbuff_xmt_dat);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__read_datareuse_compdata_1st 
        = vlSelfRef.__PVT__read_datareuse_compdata_1st;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__read_datareuse_compdata_2nd 
        = vlSelfRef.__PVT__read_datareuse_compdata_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rden_whichcompfifo_2nd 
        = vlSelfRef.__PVT__rden_whichcompfifo_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rden_whichcompfifo_1st 
        = vlSelfRef.__PVT__rden_whichcompfifo_1st;
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__respbody_compdata, vlSelfRef.__PVT__respbody_compdata);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__compdata_tx_datflitv 
        = vlSelfRef.__PVT__ic_tx_snpreq_datflitv;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__wrdataid_compfifo_ic 
        = vlSelfRef.__PVT__wren_which128_compbuff;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__wren_compfifo_ic 
        = vlSelfRef.__PVT__wren_compbuff;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__15(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_2nd, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rddata_to_compdata_2nd);
    vlSelfRef.__PVT__rdbe_to_compdata_2nd = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rdbe_to_compdata_2nd;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__rddata_to_compdata_1st, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rddata_to_compdata_1st);
    vlSelfRef.__PVT__rdbe_to_compdata_1st = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__rdbe_to_compdata_1st;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__ic_TX_DATFLITPEND;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rddata_compfifo_2nd, vlSelfRef.__PVT__rddata_to_compdata_2nd);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rdbe_to_compdata_2nd 
        = vlSelfRef.__PVT__rdbe_to_compdata_2nd;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rddata_compfifo_1st, vlSelfRef.__PVT__rddata_to_compdata_1st);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__rdbe_to_compdata_1st 
        = vlSelfRef.__PVT__rdbe_to_compdata_1st;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__16(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__PVT__wrbe_compbuff_xmt_dat = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wrbe_dataflit;
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wrdata_compbuff_xmt_dat, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__wrdata_dataflit);
    vlSelfRef.__PVT__wrbe_compbuff = (VL_REDOR_I(vlSelfRef.__PVT__wren_compbuff_rcv_dat)
                                       ? vlSelfRef.__PVT__wrbe_compbuff_rcv_dat
                                       : vlSelfRef.__PVT__wrbe_compbuff_xmt_dat);
    __Vtemp_1 = VL_REDOR_I(vlSelfRef.__PVT__wren_compbuff_rcv_dat);
    VL_COND_WIWW(512, vlSelfRef.__PVT__wrdata_compbuff, __Vtemp_1, vlSelfRef.__PVT__wrdata_compbuff_rcv_dat, vlSelfRef.__PVT__wrdata_compbuff_xmt_dat);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__wrbe_dataflit_ic 
        = vlSelfRef.__PVT__wrbe_compbuff;
    VL_ASSIGN_W(512,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__wrdata_compfifo_ic, vlSelfRef.__PVT__wrdata_compbuff);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__17(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__l3_rspvalid 
        = vlSelfRef.__PVT__l3_rspvalid;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__l3_rspflit, vlSelfRef.__PVT__l3_rspflit);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__18(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__porthas_rspgnt_fromcc = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__porthas_rspgnt_fromcc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__19(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__ic_RX_RSPFLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__ic_RX_RSPFLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__20(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(74,vlSelfRef.__PVT__wrdata_respcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__wrdata_respcmdfifo);
    vlSelfRef.__PVT__wren_respcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_respproc_0.__PVT__wren_respcmdfifo;
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_respcmdq, vlSelfRef.__PVT__wrdata_respcmdq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_respcmdq 
        = vlSelfRef.__PVT__wren_respcmdq;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__21(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_reqproc_full_node_id = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__o_rcv_reqproc_full_nodeid;
    vlSelfRef.__PVT__rcv_reqproc_nodeid_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__o_rcv_reqproc_nodeid_valid;
    VL_ASSIGN_W(156,vlSelfRef.__PVT__wrdata_reqcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__wrdata_reqcmdfifo);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_rcv_reqproc_full_node_id 
        = vlSelfRef.__PVT__rcv_reqproc_full_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_rcv_reqproc_nodeid_valid 
        = vlSelfRef.__PVT__rcv_reqproc_nodeid_valid;
    VL_ASSIGN_W(156,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wrdata_reqcmdq, vlSelfRef.__PVT__wrdata_reqcmdq);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__22(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_compdata_nodeid_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__o_xmt_compdata_nodeid_valid;
    vlSelfRef.__PVT__xmt_compdata_linear_nodeid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__o_xmt_compdata_linear_nodeid;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__compdata_tx_datflit, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__ic_TX_DATFLIT);
    VL_ASSIGN_W(152,vlSelfRef.__PVT__snp_tx_snpflit_compdata, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__ic_TX_REQFLIT);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_xmt_compdata_nodeid_valid 
        = vlSelfRef.__PVT__xmt_compdata_nodeid_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_xmt_compdata_linear_nodeid 
        = vlSelfRef.__PVT__xmt_compdata_linear_nodeid;
    VL_COND_WIWW(680, vlSelfRef.__PVT__ic_tx_snpreq_datflit, (IData)(vlSelfRef.__PVT__snp_tx_datflitv_resperr), vlSelfRef.__PVT__snp_tx_datflit_resperr, vlSelfRef.__PVT__compdata_tx_datflit);
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0.__PVT__compdata_tx_datflit, vlSelfRef.__PVT__ic_tx_snpreq_datflit);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__23(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_compdata_full_node_id = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__o_xmt_compdata_full_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_compdata_0.__PVT__i_xmt_compdata_full_node_id 
        = vlSelfRef.__PVT__xmt_compdata_full_node_id;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__24(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_resp_snpreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__req_resp;
    vlSelfRef.__PVT__allocate_respbuf_snpreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__allocate_respbuf;
    vlSelfRef.__PVT__rden_snpreqfifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__rden_snpreqfifo;
    vlSelfRef.__PVT__slc_origreq_is_read_snp_snpreq 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__slc_origreq_is_read_snp_dmt_out;
    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__slc_readnosnp_apply_dmt_snpreq_out;
    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__en_compbuf_2nd_for_snpdata;
    vlSelfRef.__PVT__snp_tx_snpflitv = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__ic_TX_SNPFLITV;
    vlSelfRef.__PVT__cc_reqflit_valid_snpreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__cc_reqflit_valid;
    vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__wren_compbuff_num_1st;
    vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__wren_compbuff_num_2nd;
    vlSelfRef.__PVT__allocate_compbuf_snpreq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__allocate_compbuf;
    vlSelfRef.__PVT__xmt_snpreq_linear_tgtid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__o_xmt_snpreq_linear_tgtid;
    VL_ASSIGN_W(74,vlSelfRef.__PVT__respbody_snpreq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__respbody_snpreq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__req_resp_snpreq 
        = vlSelfRef.__PVT__req_resp_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__allocate_respbuf_snpreq 
        = vlSelfRef.__PVT__allocate_respbuf_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__snpreq_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_snpreqfifo;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__en_compbuf_2nd_for_snpdata 
        = vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata;
    vlSelfRef.__PVT__ic_tx_snpreqflitv = ((IData)(vlSelfRef.__PVT__snp_tx_snpflitv) 
                                          | (IData)(vlSelfRef.__PVT__compdata_tx_reqflitv));
    vlSelfRef.__PVT__cc_reqflit_valid = ((IData)(vlSelfRef.__PVT__cc_reqflit_valid_snpreq) 
                                         | (IData)(vlSelfRef.__PVT__cc_reqflit_valid_compdata));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_compbuff_num_snpreq_1st 
        = vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__wren_compbuff_num_snpreq_2nd 
        = vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0.__PVT__allocated_compbuf_snpreq 
        = vlSelfRef.__PVT__allocate_compbuf_snpreq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_xmt_snpreq_linear_tgtid 
        = vlSelfRef.__PVT__xmt_snpreq_linear_tgtid;
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__respbody_snpreq, vlSelfRef.__PVT__respbody_snpreq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__snp_tx_snpflitv 
        = vlSelfRef.__PVT__ic_tx_snpreqflitv;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__25(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__ic_TX_SNPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__26(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(152,vlSelfRef.__PVT__txflit_snpreq_memreq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0.__PVT__ic_TX_FLIT_SNPREQ_OR_MEMREQ);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__27(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__27\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_resp_nodeid_valid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__o_xmt_resp_nodeid_valid;
    vlSelfRef.__PVT__xmt_resp_linear_nodeid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__o_xmt_resp_linear_nodeid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_xmt_resp_nodeid_valid 
        = vlSelfRef.__PVT__xmt_resp_nodeid_valid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__i_xmt_resp_linear_nodeid 
        = vlSelfRef.__PVT__xmt_resp_linear_nodeid;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__28(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__28\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmt_resp_full_node_id = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__u_linearize_nodeid.__PVT__o_xmt_resp_full_node_id;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_resp_0.__PVT__i_xmt_resp_full_node_id 
        = vlSelfRef.__PVT__xmt_resp_full_node_id;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__29(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clr_cm_cmdvalid = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_cm_cmdvalid;
    vlSelfRef.__PVT__clr_cm_cmdvalid_evict = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__clr_cm_cmdvalid_evict;
    vlSelfRef.__PVT__send_reqcrdt_update = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__send_reqcrdt_update;
    vlSelfRef.__PVT__cache_index_rd_cohc_pre = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__cache_index_rd_ph2_pre;
    vlSelfRef.__PVT__rden_dircache_cohc_pre = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0.__PVT__rden_dircache_pre;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__clr_cm_cmdvalid 
        = vlSelfRef.__PVT__clr_cm_cmdvalid;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0.__PVT__clr_cm_cmdvalid_evict 
        = vlSelfRef.__PVT__clr_cm_cmdvalid_evict;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0.__PVT__send_reqcrdt_update 
        = vlSelfRef.__PVT__send_reqcrdt_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__cache_index_rd_cohc_pre 
        = vlSelfRef.__PVT__cache_index_rd_cohc_pre;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache.__PVT__rden_cache_cohc_pre 
        = vlSelfRef.__PVT__rden_dircache_cohc_pre;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__30(Vsig_topology_top_sig_coherency_top__pi6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_coherency_top__pi6___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__30\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    VL_COND_WIWW(152, vlSelfRef.__PVT__ic_tx_snpreqflit, (IData)(vlSelfRef.__PVT__snp_tx_snpflitv), vlSelfRef.__PVT__txflit_snpreq_memreq, vlSelfRef.__PVT__snp_tx_snpflit_compdata);
    VL_CONCAT_WIW(153,1,152, __Vtemp_1, (IData)(vlSelfRef.__PVT__slc_origreq_is_read_snp_snpreq), vlSelfRef.__PVT__txflit_snpreq_memreq);
    VL_CONCAT_WIW(154,1,153, __Vtemp_2, (IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq), __Vtemp_1);
    VL_CONCAT_WIW(153,1,152, __Vtemp_3, (IData)(vlSelfRef.__PVT__slc_origreq_is_read_snp_compdata), vlSelfRef.__PVT__snp_tx_snpflit_compdata);
    VL_CONCAT_WIW(154,1,153, __Vtemp_4, (IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_compdata), __Vtemp_3);
    VL_COND_WIWW(154, vlSelfRef.__PVT__cc_reqflit, (IData)(vlSelfRef.__PVT__cc_reqflit_valid_snpreq), __Vtemp_2, __Vtemp_4);
    VL_ASSIGN_W(152,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0.__PVT__snp_tx_snpflit, vlSelfRef.__PVT__ic_tx_snpreqflit);
}
