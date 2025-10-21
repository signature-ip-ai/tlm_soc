// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_TOPOLOGY_TOP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_TOPOLOGY_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_apb_prog;
class Vsig_topology_top_sig_cl0_clustertop__pi2;
class Vsig_topology_top_sig_cmn_qpchan_if_ctrl;
class Vsig_topology_top_sig_csr_addr_decoder;
class Vsig_topology_top_sig_double_synchronizer;
class Vsig_topology_top_sig_double_synchronizer_param_dw__pi1;
class Vsig_topology_top_sig_top_csr_wrapper__A1c;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_topology_top final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_top_csr_wrapper__A1c* __PVT__sig_top_csr_wrapper_0;
    Vsig_topology_top_sig_double_synchronizer_param_dw__pi1* __PVT__inst_sync_cc_inactive_cl0_ic_clk;
    Vsig_topology_top_sig_double_synchronizer_param_dw__pi1* __PVT__inst_sync_cache_init_complete;
    Vsig_topology_top_sig_cl0_clustertop__pi2* __PVT__cl0_sig_clustertop;
    Vsig_topology_top_sig_double_synchronizer* __PVT__inst_sync_cc_inactive_qp_clk;
    Vsig_topology_top_sig_double_synchronizer* __PVT__inst_sync_cl0_p1_TXRXSACTIVE_qp_clk;
    Vsig_topology_top_sig_cmn_qpchan_if_ctrl* __PVT__i_sig_cmn_qpchan_if_ctrl;
    Vsig_topology_top_sig_apb_prog* __PVT__i_sig_apb_prog;
    Vsig_topology_top_sig_csr_addr_decoder* __PVT__i_sig_csr_addr_decoder;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cl0_ic_clk,0,0);
        VL_IN8(cl0_rstb_ic_clk,0,0);
        VL_IN8(cl0_p1_intfrx_clk,0,0);
        VL_IN8(cl0_p1_rstb_intfrx_clk,0,0);
        VL_IN8(cl0_cc_intfrx_clk,0,0);
        VL_IN8(cl0_cc_rstb_intfrx_clk,0,0);
        VL_OUT8(cl0_p1_TX_LINKACTIVEREQ,0,0);
        VL_IN8(cl0_p1_TX_LINKACTIVEACK,0,0);
        VL_IN8(cl0_p1_RX_REQFLITPEND,0,0);
        VL_IN8(cl0_p1_RX_REQFLITV,0,0);
        VL_OUT8(cl0_p1_RX_REQLCRDV,0,0);
        VL_IN8(cl0_p1_RX_RSPFLITPEND,0,0);
        VL_IN8(cl0_p1_RX_RSPFLITV,0,0);
        VL_OUT8(cl0_p1_RX_RSPLCRDV,0,0);
        VL_IN8(cl0_p1_RX_DATFLITPEND,0,0);
        VL_IN8(cl0_p1_RX_DATFLITV,0,0);
        VL_OUT8(cl0_p1_RX_DATLCRDV,0,0);
        VL_IN8(cl0_p1_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(cl0_p1_RX_LINKACTIVEACK,0,0);
        VL_OUT8(cl0_p1_TX_SNPFLITPEND,0,0);
        VL_OUT8(cl0_p1_TX_SNPFLITV,0,0);
        VL_IN8(cl0_p1_TX_SNPLCRDV,0,0);
        VL_OUT8(cl0_p1_TX_RSPFLITPEND,0,0);
        VL_OUT8(cl0_p1_TX_RSPFLITV,0,0);
        VL_IN8(cl0_p1_TX_RSPLCRDV,0,0);
        VL_OUT8(cl0_p1_TX_DATFLITPEND,0,0);
        VL_OUT8(cl0_p1_TX_DATFLITV,0,0);
        VL_IN8(cl0_p1_TX_DATLCRDV,0,0);
        VL_OUT8(cl0_p1_TXSACTIVE,0,0);
        VL_IN8(cl0_p1_RXSACTIVE,0,0);
        VL_IN8(cl0_p1_SYSCOREQ,0,0);
        VL_OUT8(cl0_p1_SYSCOACK,0,0);
        VL_IN8(cl0_p3_intfrx_clk,0,0);
        VL_IN8(cl0_p3_rstb_intfrx_clk,0,0);
        VL_IN8(cl0_p3_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(cl0_p3_RX_LINKACTIVEACK,0,0);
        VL_IN8(cl0_p3_RX_RSPFLITPEND,0,0);
        VL_IN8(cl0_p3_RX_RSPFLITV,0,0);
        VL_OUT8(cl0_p3_RX_RSPLCRDV,0,0);
        VL_IN8(cl0_p3_RX_DATFLITPEND,0,0);
        VL_IN8(cl0_p3_RX_DATFLITV,0,0);
        VL_OUT8(cl0_p3_RX_DATLCRDV,0,0);
        VL_OUT8(cl0_p3_TX_LINKACTIVEREQ,0,0);
        VL_IN8(cl0_p3_TX_LINKACTIVEACK,0,0);
        VL_OUT8(cl0_p3_TX_REQFLITPEND,0,0);
        VL_OUT8(cl0_p3_TX_REQFLITV,0,0);
        VL_IN8(cl0_p3_TX_REQLCRDV,0,0);
        VL_OUT8(cl0_p3_TX_DATFLITPEND,0,0);
        VL_OUT8(cl0_p3_TX_DATFLITV,0,0);
        VL_IN8(cl0_p3_TX_DATLCRDV,0,0);
        VL_OUT8(cl0_p3_TXSACTIVE,0,0);
        VL_IN8(cl0_p3_RXSACTIVE,0,0);
        VL_IN8(PCLK_prog,0,0);
        VL_IN8(PRESETn_prog,0,0);
        VL_IN8(PSEL_prog,0,0);
        VL_IN8(PENABLE_prog,0,0);
        VL_IN8(PWRITE_prog,0,0);
        VL_IN8(PSTRB_prog,3,0);
        VL_OUT8(PREADY_prog,0,0);
        VL_OUT8(PSLVERR_prog,0,0);
        VL_IN8(qp_clk,0,0);
        VL_IN8(qp_rstb,0,0);
        VL_IN8(qreqn,0,0);
        VL_OUT8(qacceptn,0,0);
    };
    struct {
        VL_OUT8(qdeny,0,0);
        VL_OUT8(qactive,0,0);
        VL_OUT8(qin_quiescence,0,0);
        VL_IN8(pstate,0,0);
        VL_IN8(preq,0,0);
        VL_OUT8(paccept,0,0);
        VL_OUT8(pdeny,0,0);
        VL_OUT8(pactive,0,0);
        CData/*3:0*/ __PVT__cl0_icx_txport_cfg;
        CData/*7:0*/ __PVT__xy_coord_all_clus;
        CData/*3:0*/ __PVT__icx_txport_cfg_all_clus;
        CData/*0:0*/ __PVT__reset_0_top_sft_reset_n;
        CData/*7:0*/ __PVT__cl0_mycluster_id;
        CData/*7:0*/ __PVT__xy_coord_all_hn_f;
        CData/*1:0*/ __PVT__rden_csr_top_or_clus;
        CData/*1:0*/ __PVT__wren_csr_top_or_clus;
        CData/*3:0*/ __PVT__reg_wrstrb_prog;
        CData/*0:0*/ __PVT__reg_wren_prog;
        CData/*0:0*/ __PVT__wrdata_rdy_prog;
        CData/*0:0*/ __PVT__reg_rden_prog;
        CData/*0:0*/ __PVT__reg_rddata_valid_prog;
        CData/*3:0*/ __Vcellout__sig_top_csr_wrapper_0__o_icx_txport_cfg_all_clus;
        CData/*7:0*/ __Vcellout__sig_top_csr_wrapper_0__o_xy_coord_all_clus;
        CData/*0:0*/ __Vcellinp__sig_top_csr_wrapper_0__i_rd_en;
        CData/*0:0*/ __Vcellinp__sig_top_csr_wrapper_0__i_wr_en;
        CData/*1:0*/ __PVT__cl0_p1_reg_syscoh;
        CData/*0:0*/ __PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE;
        CData/*0:0*/ __PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg;
        CData/*0:0*/ __PVT__cl0_p1_TXSACTIVE_OR_RXSACTIVE_sync;
        CData/*0:0*/ __PVT__cache_init_complete;
        CData/*0:0*/ __PVT__cache_init_complete_sync;
        CData/*0:0*/ __PVT__all_cache_init_complete;
        CData/*0:0*/ __PVT__cnoc_is_active;
        CData/*0:0*/ __PVT__cnoc_is_inactive;
        CData/*0:0*/ __PVT__cc_is_inactive;
        CData/*0:0*/ __PVT__cc_is_inactive_sync;
        CData/*0:0*/ __PVT__all_cc_are_inactive;
        CData/*0:0*/ __PVT__all_cc_are_inactive_reg;
        CData/*0:0*/ __PVT__all_cc_are_inactive_sync;
        CData/*0:0*/ __Vcellinp__cl0_sig_clustertop__i_wren_csr_top_or_clus;
        CData/*0:0*/ __Vcellinp__cl0_sig_clustertop__i_rden_csr_top_or_clus;
        CData/*0:0*/ __Vdly__all_cc_are_inactive_reg;
        CData/*0:0*/ __Vdly__cl0_p1_TXSACTIVE_OR_RXSACTIVE_reg;
        SData/*10:0*/ __PVT__mn_node_id;
        SData/*10:0*/ __PVT__xy_coord_all_pm;
        SData/*10:0*/ __PVT__COH_nodeid_all_rn;
        VL_INW(cl0_p1_RX_REQFLIT,150,0,5);
        VL_INW(cl0_p1_RX_RSPFLIT,72,0,3);
        VL_INW(cl0_p1_RX_DATFLIT,679,0,22);
        VL_OUTW(cl0_p1_TX_SNPFLIT,107,0,4);
        VL_OUTW(cl0_p1_TX_RSPFLIT,72,0,3);
        VL_OUTW(cl0_p1_TX_DATFLIT,679,0,22);
        VL_INW(cl0_p3_RX_RSPFLIT,72,0,3);
        VL_INW(cl0_p3_RX_DATFLIT,679,0,22);
        VL_OUTW(cl0_p3_TX_REQFLIT,150,0,5);
        VL_OUTW(cl0_p3_TX_DATFLIT,679,0,22);
        VL_IN(PADDR_prog,31,0);
        VL_IN(PWDATA_prog,31,0);
        VL_OUT(PRDATA_prog,31,0);
        IData/*27:0*/ __PVT__cm_homeaddr_base_all_hn_f;
        IData/*28:0*/ __PVT__cm_homeaddr_limit_all_hn_f;
        IData/*27:0*/ __PVT__noncm_homeaddr_base_all_hn_f;
        IData/*28:0*/ __PVT__noncm_homeaddr_limit_all_hn_f;
        IData/*27:0*/ __PVT__cm_homeaddr_base_all_pm;
    };
    struct {
        IData/*28:0*/ __PVT__cm_homeaddr_limit_all_pm;
        IData/*27:0*/ __PVT__noncm_homeaddr_base_all_pm;
        IData/*28:0*/ __PVT__noncm_homeaddr_limit_all_pm;
        IData/*31:0*/ __PVT__reg_syscoh_0_reg_syscoh_snppend_31_0;
        IData/*31:0*/ __PVT__reg_syscoh_1_reg_syscoh_snppend_63_32;
        IData/*31:0*/ __PVT__reg_syscoh_2_reg_syscoh_snppend_95_64;
        IData/*31:0*/ __PVT__reg_syscoh_3_reg_syscoh_snppend_127_96;
        IData/*31:0*/ __PVT__reg_syscoh_4_reg_syscoh_snppend_159_128;
        IData/*31:0*/ __PVT__reg_syscoh_5_reg_syscoh_snppend_191_160;
        IData/*31:0*/ __PVT__reg_syscoh_6_reg_syscoh_snppend_223_192;
        IData/*31:0*/ __PVT__reg_syscoh_7_reg_syscoh_snppend_255_224;
        IData/*31:0*/ __PVT__reg_syscoh_8_reg_syscoh_con2enable_31_0;
        IData/*31:0*/ __PVT__reg_syscoh_9_reg_syscoh_con2enable_63_32;
        IData/*31:0*/ __PVT__reg_syscoh_10_reg_syscoh_con2enable_95_64;
        IData/*31:0*/ __PVT__reg_syscoh_11_reg_syscoh_con2enable_127_96;
        IData/*31:0*/ __PVT__reg_syscoh_12_reg_syscoh_con2enable_159_128;
        IData/*31:0*/ __PVT__reg_syscoh_13_reg_syscoh_con2enable_191_160;
        IData/*31:0*/ __PVT__reg_syscoh_14_reg_syscoh_con2enable_223_192;
        IData/*31:0*/ __PVT__reg_syscoh_15_reg_syscoh_con2enable_255_224;
        IData/*31:0*/ __PVT__coh_clst_0_COH_CLST_Exist_31_0;
        IData/*31:0*/ __PVT__coh_clst_1_COH_CLST_Exist_63_32;
        IData/*31:0*/ __PVT__coh_clst_2_COH_CLST_Exist_95_64;
        IData/*31:0*/ __PVT__coh_clst_3_COH_CLST_Exist_127_96;
        IData/*31:0*/ __PVT__coh_clst_4_COH_CLST_Exist_159_128;
        IData/*31:0*/ __PVT__coh_clst_5_COH_CLST_Exist_191_160;
        IData/*31:0*/ __PVT__coh_clst_6_COH_CLST_Exist_223_192;
        IData/*31:0*/ __PVT__coh_clst_7_COH_CLST_Exist_255_224;
        IData/*31:0*/ __PVT__reset_1_cluster_sft_reset_n_31_0;
        IData/*31:0*/ __PVT__reset_2_cluster_sft_reset_n_63_32;
        IData/*31:0*/ __PVT__reset_3_cluster_sft_reset_n_95_64;
        IData/*31:0*/ __PVT__reset_4_cluster_sft_reset_n_127_96;
        IData/*31:0*/ __PVT__reset_5_cluster_sft_reset_n_159_128;
        IData/*31:0*/ __PVT__reset_6_cluster_sft_reset_n_191_160;
        IData/*31:0*/ __PVT__reset_7_cluster_sft_reset_n_223_192;
        IData/*31:0*/ __PVT__reset_8_cluster_sft_reset_n_255_224;
        IData/*31:0*/ __PVT__reg_syscoh_snppend;
        IData/*31:0*/ __PVT__reg_syscoh_con2enable;
        IData/*31:0*/ __PVT__reg_cc_ctrl1;
        IData/*31:0*/ __PVT__reg_wrdata_prog;
        IData/*31:0*/ __PVT__reg_address_prog;
        IData/*31:0*/ __PVT__reg_rddata_prog;
        IData/*31:0*/ __PVT__rd_csr_clus_0;
        IData/*31:0*/ __PVT__rd_csr_top;
        VlWide<8>/*241:0*/ __PVT__max_COH_nodeid_all_rn;
        IData/*21:0*/ __PVT__COH_RNF_Exist;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_topology_top(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_topology_top();
    VL_UNCOPYABLE(Vsig_topology_top_sig_topology_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
