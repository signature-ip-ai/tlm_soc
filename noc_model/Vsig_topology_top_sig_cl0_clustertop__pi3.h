// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CL0_CLUSTERTOP__PI3_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CL0_CLUSTERTOP__PI3_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_cl0_clustercore__pi4;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cl0_clustertop__pi3 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_cl0_clustercore__pi4* __PVT__inst_cl0_clustercore;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_OUT8(__PVT__cc_is_inactive,0,0);
        VL_IN8(__PVT__noc_is_inactive,0,0);
        VL_OUT8(__PVT__cache_init_complete,0,0);
        VL_IN8(__PVT__all_cache_init_complete,0,0);
        VL_IN8(__PVT__cc_intfrx_clk,0,0);
        VL_IN8(__PVT__cc_rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__p2_intfrx_clk,0,0);
        VL_IN8(__PVT__p2_rstb_intfrx_clk,0,0);
        VL_OUT8(__PVT__p2_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__p2_TX_LINKACTIVEACK,0,0);
        VL_IN8(__PVT__p2_RX_REQFLITPEND,0,0);
        VL_IN8(__PVT__p2_RX_REQFLITV,0,0);
        VL_OUT8(__PVT__p2_RX_REQLCRDV,0,0);
        VL_IN8(__PVT__p2_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__p2_RX_RSPFLITV,0,0);
        VL_OUT8(__PVT__p2_RX_RSPLCRDV,0,0);
        VL_IN8(__PVT__p2_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__p2_RX_DATFLITV,0,0);
        VL_OUT8(__PVT__p2_RX_DATLCRDV,0,0);
        VL_IN8(__PVT__p2_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__p2_RX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__p2_TX_SNPFLITPEND,0,0);
        VL_OUT8(__PVT__p2_TX_SNPFLITV,0,0);
        VL_IN8(__PVT__p2_TX_SNPLCRDV,0,0);
        VL_OUT8(__PVT__p2_TX_RSPFLITPEND,0,0);
        VL_OUT8(__PVT__p2_TX_RSPFLITV,0,0);
        VL_IN8(__PVT__p2_TX_RSPLCRDV,0,0);
        VL_OUT8(__PVT__p2_TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__p2_TX_DATFLITV,0,0);
        VL_IN8(__PVT__p2_TX_DATLCRDV,0,0);
        VL_OUT8(__PVT__p2_TXSACTIVE,0,0);
        VL_IN8(__PVT__p2_RXSACTIVE,0,0);
        VL_IN8(__PVT__p2_SYSCOREQ,0,0);
        VL_OUT8(__PVT__p2_SYSCOACK,0,0);
        VL_IN8(__PVT__p2_reg_syscoh,1,0);
        VL_IN8(__PVT__p3_intfrx_clk,0,0);
        VL_IN8(__PVT__p3_rstb_intfrx_clk,0,0);
        VL_OUT8(__PVT__p3_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__p3_TX_LINKACTIVEACK,0,0);
        VL_IN8(__PVT__p3_RX_REQFLITPEND,0,0);
        VL_IN8(__PVT__p3_RX_REQFLITV,0,0);
        VL_OUT8(__PVT__p3_RX_REQLCRDV,0,0);
        VL_IN8(__PVT__p3_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__p3_RX_RSPFLITV,0,0);
        VL_OUT8(__PVT__p3_RX_RSPLCRDV,0,0);
        VL_IN8(__PVT__p3_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__p3_RX_DATFLITV,0,0);
        VL_OUT8(__PVT__p3_RX_DATLCRDV,0,0);
        VL_IN8(__PVT__p3_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__p3_RX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__p3_TX_SNPFLITPEND,0,0);
        VL_OUT8(__PVT__p3_TX_SNPFLITV,0,0);
        VL_IN8(__PVT__p3_TX_SNPLCRDV,0,0);
        VL_OUT8(__PVT__p3_TX_RSPFLITPEND,0,0);
        VL_OUT8(__PVT__p3_TX_RSPFLITV,0,0);
        VL_IN8(__PVT__p3_TX_RSPLCRDV,0,0);
        VL_OUT8(__PVT__p3_TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__p3_TX_DATFLITV,0,0);
        VL_IN8(__PVT__p3_TX_DATLCRDV,0,0);
        VL_OUT8(__PVT__p3_TXSACTIVE,0,0);
        VL_IN8(__PVT__p3_RXSACTIVE,0,0);
        VL_IN8(__PVT__p3_SYSCOREQ,0,0);
    };
    struct {
        VL_OUT8(__PVT__p3_SYSCOACK,0,0);
        VL_IN8(__PVT__p3_reg_syscoh,1,0);
        VL_IN8(__PVT__p1_intfrx_clk,0,0);
        VL_IN8(__PVT__p1_rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__p1_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__p1_RX_LINKACTIVEACK,0,0);
        VL_IN8(__PVT__p1_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__p1_RX_RSPFLITV,0,0);
        VL_OUT8(__PVT__p1_RX_RSPLCRDV,0,0);
        VL_IN8(__PVT__p1_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__p1_RX_DATFLITV,0,0);
        VL_OUT8(__PVT__p1_RX_DATLCRDV,0,0);
        VL_OUT8(__PVT__p1_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__p1_TX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__p1_TX_REQFLITPEND,0,0);
        VL_OUT8(__PVT__p1_TX_REQFLITV,0,0);
        VL_IN8(__PVT__p1_TX_REQLCRDV,0,0);
        VL_OUT8(__PVT__p1_TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__p1_TX_DATFLITV,0,0);
        VL_IN8(__PVT__p1_TX_DATLCRDV,0,0);
        VL_OUT8(__PVT__p1_TXSACTIVE,0,0);
        VL_IN8(__PVT__p1_RXSACTIVE,0,0);
        VL_IN8(__PVT__p0_intfrx_clk,0,0);
        VL_IN8(__PVT__p0_rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__p0_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__p0_RX_LINKACTIVEACK,0,0);
        VL_IN8(__PVT__p0_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__p0_RX_RSPFLITV,0,0);
        VL_OUT8(__PVT__p0_RX_RSPLCRDV,0,0);
        VL_IN8(__PVT__p0_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__p0_RX_DATFLITV,0,0);
        VL_OUT8(__PVT__p0_RX_DATLCRDV,0,0);
        VL_OUT8(__PVT__p0_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__p0_TX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__p0_TX_REQFLITPEND,0,0);
        VL_OUT8(__PVT__p0_TX_REQFLITV,0,0);
        VL_IN8(__PVT__p0_TX_REQLCRDV,0,0);
        VL_OUT8(__PVT__p0_TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__p0_TX_DATFLITV,0,0);
        VL_IN8(__PVT__p0_TX_DATLCRDV,0,0);
        VL_OUT8(__PVT__p0_TXSACTIVE,0,0);
        VL_IN8(__PVT__p0_RXSACTIVE,0,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__xy_coord_all_hn_f,7,0);
        VL_IN8(__PVT__i_rden_csr_top_or_clus,0,0);
        VL_IN8(__PVT__i_wren_csr_top_or_clus,0,0);
        VL_IN8(__PVT__i_clus_csr_wstrb,3,0);
        VL_IN8(__PVT__i_csr_clk,0,0);
        VL_IN8(__PVT__i_csr_reset_n,0,0);
        VL_IN8(__PVT__icx_txport_cfg,3,0);
        VL_IN16(__PVT__mn_node_id,10,0);
        VL_INW(__PVT__p2_RX_REQFLIT,150,0,5);
        VL_INW(__PVT__p2_RX_RSPFLIT,72,0,3);
        VL_INW(__PVT__p2_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__p2_TX_SNPFLIT,107,0,4);
        VL_OUTW(__PVT__p2_TX_RSPFLIT,72,0,3);
        VL_OUTW(__PVT__p2_TX_DATFLIT,679,0,22);
        VL_INW(__PVT__p3_RX_REQFLIT,150,0,5);
        VL_INW(__PVT__p3_RX_RSPFLIT,72,0,3);
        VL_INW(__PVT__p3_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__p3_TX_SNPFLIT,107,0,4);
        VL_OUTW(__PVT__p3_TX_RSPFLIT,72,0,3);
        VL_OUTW(__PVT__p3_TX_DATFLIT,679,0,22);
        VL_INW(__PVT__p1_RX_RSPFLIT,72,0,3);
    };
    struct {
        VL_INW(__PVT__p1_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__p1_TX_REQFLIT,150,0,5);
        VL_OUTW(__PVT__p1_TX_DATFLIT,679,0,22);
        VL_INW(__PVT__p0_RX_RSPFLIT,72,0,3);
        VL_INW(__PVT__p0_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__p0_TX_REQFLIT,150,0,5);
        VL_OUTW(__PVT__p0_TX_DATFLIT,679,0,22);
        VL_IN(__PVT__COH_RNF_Exist,21,0);
        VL_IN(__PVT__reg_cc_ctrl1,31,0);
        VL_INW(__PVT__COH_nodeid_all_rn,241,0,8);
        VL_IN(__PVT__xy_coord_all_pm,21,0);
        VL_IN(__PVT__cm_homeaddr_base_all_hn_f,27,0);
        VL_IN(__PVT__cm_homeaddr_limit_all_hn_f,28,0);
        VL_IN(__PVT__noncm_homeaddr_base_all_hn_f,27,0);
        VL_IN(__PVT__noncm_homeaddr_limit_all_hn_f,28,0);
        VL_OUT(__PVT__o_rd_csr_clus,31,0);
        VL_IN(__PVT__i_clus_csr_address,31,0);
        VL_IN(__PVT__i_clus_csr_wdata,31,0);
        VL_IN64(__PVT__cm_homeaddr_base_all_pm,55,0);
        VL_IN64(__PVT__cm_homeaddr_limit_all_pm,57,0);
        VL_IN64(__PVT__noncm_homeaddr_base_all_pm,55,0);
        VL_IN64(__PVT__noncm_homeaddr_limit_all_pm,57,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cl0_clustertop__pi3(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cl0_clustertop__pi3();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cl0_clustertop__pi3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
