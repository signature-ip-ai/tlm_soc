// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_RCV_REQPROC__PI13_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_RCV_REQPROC__PI13_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_chi_crdt_update;
class Vsig_topology_top_sig_fifo_synchclk_flop__FB97;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_rcv_reqproc__pi13 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_fifo_synchclk_flop__FB97* __PVT__reqflit_fifo_0;
    Vsig_topology_top_sig_chi_crdt_update* __PVT__sig_chi_crdt_update_req;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cc_clk,0,0);
        VL_IN8(__PVT__rstb_cc_clk,0,0);
        VL_IN8(__PVT__cc_gclk,0,0);
        VL_IN8(__PVT__ic_RX_REQFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_REQFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_REQLCRDV,0,0);
        VL_OUT8(__PVT__wren_reqcmdfifo,0,0);
        VL_IN8(__PVT__fifofull_reqcmdq,0,0);
        VL_IN8(__PVT__send_reqcrdt_update,0,0);
        VL_OUT8(__PVT__o_rcv_reqproc_nodeid_valid,0,0);
        VL_IN8(__PVT__writeevict_or_evict,0,0);
        VL_IN8(__PVT__ignore_likyshared_writeevictorevict,0,0);
        VL_IN8(__PVT__enable_init_update,0,0);
        CData/*0:0*/ __PVT__reqis_rd_snpable;
        CData/*0:0*/ __PVT__reqis_wr_snpable;
        CData/*0:0*/ __PVT__reqis_rd_nonsnpable;
        CData/*0:0*/ __PVT__reqis_wr_nonsnpable;
        CData/*0:0*/ __PVT__reqis_rd_snpable_or_nonsnpable;
        CData/*0:0*/ __PVT__reqis_wr_snpable_or_nonsnpable;
        CData/*0:0*/ __PVT__reqis_non_snpable;
        CData/*2:0*/ __PVT__req_is_atmo;
        CData/*0:0*/ __PVT__reqis_atomtxn;
        CData/*0:0*/ __PVT__rddata_is_atom;
        CData/*0:0*/ __PVT__reqis_wrcmo;
        CData/*0:0*/ __PVT__reqis_wrcmo_snp;
        CData/*1:0*/ __PVT__cm_activated_pm;
        CData/*1:0*/ __PVT__cm_addr_match_pm;
        CData/*1:0*/ __PVT__noncm_activated_pm;
        CData/*1:0*/ __PVT__noncm_addr_match_pm;
        CData/*0:0*/ __PVT__noncm_addr_match_pm_nonzero;
        CData/*0:0*/ __PVT__cm_addr_match_pm_nonzero;
        CData/*0:0*/ __PVT__ucie_addr_match_vec_nonzero;
        CData/*0:0*/ __PVT__addr_is_invalid_resperr;
        CData/*0:0*/ __PVT__cacheable_bit_mismatch_resperr;
        CData/*0:0*/ __PVT__req_is_invalid_resperr;
        CData/*0:0*/ __PVT__reqis_wrcmo_nonsnp;
        CData/*0:0*/ __PVT__drive_xLCRDV_req;
        CData/*0:0*/ __PVT__mux_control;
        CData/*0:0*/ __PVT__wren_reqfifo;
        CData/*0:0*/ __PVT__rden_reqfifo;
        CData/*0:0*/ __PVT__empty_reqfifo;
        CData/*0:0*/ __PVT__writeevictorevict_turns_writeevict;
        CData/*0:0*/ __PVT__placeholder_state_c;
        CData/*0:0*/ __PVT__placeholder_state_n;
        CData/*0:0*/ __Vdly__placeholder_state_c;
        CData/*0:0*/ __Vdly__ic_RX_REQLCRDV;
        VL_OUT16(__PVT__o_rcv_reqproc_full_nodeid,10,0);
        VL_IN16(__PVT__i_rcv_reqproc_linear_nodeid,10,0);
        SData/*15:0*/ __PVT__ucie_sam_activated;
        SData/*15:0*/ __PVT__ucie_addr_match_vec;
        SData/*10:0*/ __PVT__linear_nodeid_rn;
        VL_INW(__PVT__ic_RX_REQFLIT,150,0,5);
        VL_OUTW(__PVT__wrdata_reqcmdfifo,155,0,5);
        QData/*55:0*/ __PVT__cm_homeaddr_base_pm;
        QData/*57:0*/ __PVT__cm_homeaddr_limit_pm;
        QData/*55:0*/ __PVT__noncm_homeaddr_base_pm;
        QData/*57:0*/ __PVT__noncm_homeaddr_limit_pm;
        QData/*55:0*/ __PVT__cm_homeaddr_base_sliced_pm;
        QData/*57:0*/ __PVT__cm_homeaddr_limit_sliced_pm;
        QData/*55:0*/ __PVT__cm_flit_addr_sliced_pm;
        QData/*55:0*/ __PVT__noncm_homeaddr_base_sliced_pm;
        QData/*57:0*/ __PVT__noncm_homeaddr_limit_sliced_pm;
        QData/*55:0*/ __PVT__noncm_flit_addr_sliced_pm;
        VlWide<5>/*150:0*/ __PVT__wrdata_reqfifo;
    };
    struct {
        VlWide<5>/*150:0*/ __PVT__rddata_reqfifo;
        VlWide<5>/*150:0*/ __PVT__reqcmd_muxed;
        VlWide<5>/*152:0*/ __PVT__wrdata_reqcmdout;
        VL_IN64(__PVT__cm_homeaddr_base_all_pm,55,0);
        VL_IN64(__PVT__cm_homeaddr_limit_all_pm,57,0);
        VL_IN64(__PVT__noncm_homeaddr_base_all_pm,55,0);
        VL_IN64(__PVT__noncm_homeaddr_limit_all_pm,57,0);
        VlWide<5>/*150:0*/ __PVT__ic_RX_REQFLIT_s;
        VlWide<5>/*150:0*/ __PVT__rddata_reqfifo_s;
        VlWide<5>/*150:0*/ __PVT__reqcmd_muxed_s;
        VlWide<5>/*150:0*/ __PVT__reqcmdfifo_reqflit;
        VL_IN(__PVT__i_ucie_base_addresses[16],27,0);
        VL_IN(__PVT__i_ucie_limit_addresses[16],28,0);
        VlUnpacked<CData/*3:0*/, 16> __PVT__ucie_sliced_base_addresses;
        VlUnpacked<CData/*3:0*/, 16> __PVT__ucie_sliced_limit_addresses;
        VlUnpacked<CData/*3:0*/, 16> __PVT__ucie_flit_sliced_addr;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_rcv_reqproc__pi13(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_rcv_reqproc__pi13();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_rcv_reqproc__pi13);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
