// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_PORTTOP_WRAPPER__PI9_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_PORTTOP_WRAPPER__PI9_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_cmn_pipeline_chi__pi26;
class Vsig_topology_top_sig_node_porttop__pi27;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_porttop_wrapper__pi9 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_cmn_pipeline_chi__pi26* __PVT__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn;
    Vsig_topology_top_sig_node_porttop__pi27* __PVT__node_porttop_sn__DOT__u_node_porttop_sn;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__intfrx_clk,0,0);
        VL_IN8(__PVT__rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_IN8(__PVT__rx_ic_gclk,0,0);
        VL_IN8(__PVT__tx_ic_gclk,0,0);
        VL_IN8(__PVT__rx_intfrx_gclk,0,0);
        VL_IN8(__PVT__tx_intfrx_gclk,0,0);
        VL_OUT8(__PVT__rx_is_inactive,0,0);
        VL_OUT8(__PVT__tx_is_inactive,0,0);
        VL_OUT8(__PVT__rx_activate_clk,0,0);
        VL_OUT8(__PVT__tx_activate_clk,0,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__myproc_id,2,0);
        VL_IN8(__PVT__xy_coord_all_hn_f,7,0);
        VL_IN8(__PVT__qos_override_en,0,0);
        VL_IN8(__PVT__qos_override_val,3,0);
        VL_IN8(__PVT__ic_RX_REQFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_REQFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_REQLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_RSPLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_DATFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_DATLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__ic_RX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__ic_TX_REQFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_REQFLITV,0,0);
        VL_IN8(__PVT__ic_TX_REQLCRDV,0,0);
        VL_OUT8(__PVT__ic_TX_SNPFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_SNPFLITV,0,0);
        VL_IN8(__PVT__ic_TX_SNPLCRDV,0,0);
        VL_OUT8(__PVT__ic_TX_RSPFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_RSPFLITV,0,0);
        VL_IN8(__PVT__ic_TX_RSPLCRDV,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLITV,0,0);
        VL_IN8(__PVT__ic_TX_DATLCRDV,0,0);
        VL_IN8(__PVT__icx_exist,3,0);
        VL_OUT8(__PVT__ic_TXSACTIVE,0,0);
        VL_IN8(__PVT__ic_RXSACTIVE,0,0);
        VL_IN8(__PVT__cc_is_inactive,0,0);
        VL_IN8(__PVT__all_cache_init_complete,0,0);
        VL_OUT8(__PVT__ic_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__ic_TX_LINKACTIVEACK,0,0);
        VL_IN8(__PVT__syscoreq,0,0);
        VL_OUT8(__PVT__syscoack,0,0);
        VL_IN8(__PVT__reg_syscoh,1,0);
        VL_IN8(__PVT__i_clear_timeout_interrupt,0,0);
        VL_OUT8(__PVT__o_timeout_interrupt,0,0);
        VL_OUT8(__PVT__o_timeout_recovery_successful,0,0);
        VL_IN8(__PVT__i_clear_recovery_interrupt,0,0);
        CData/*0:0*/ __PVT__id_translator_hs_pending_txn_snp;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxsactive_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txsactive_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxlinkactivereq_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxlinkactiveack_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txlinkactivereq_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txlinkactiveack_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxrspflitpend_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxrspflitv_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxrsplcrdv_to_pl;
    };
    struct {
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxdatflitpend_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxdatflitv_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__rxdatlcrdv_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txreqflitpend_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txreqflitv_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txreqlcrdv_to_hn;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txdatflitpend_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txdatflitv_to_pl;
        CData/*0:0*/ __PVT__node_porttop_sn__DOT__txdatlcrdv_to_hn;
        VL_IN16(__PVT__mn_node_id,10,0);
        VL_IN(__PVT__cm_homeaddr_base_all_hn_f,27,0);
        VL_IN(__PVT__cm_homeaddr_limit_all_hn_f,28,0);
        VL_IN(__PVT__noncm_homeaddr_base_all_hn_f,27,0);
        VL_IN(__PVT__noncm_homeaddr_limit_all_hn_f,28,0);
        VL_INW(__PVT__noncm_homeaddr_base_all_hn_i,111,0,4);
        VL_INW(__PVT__noncm_homeaddr_limit_all_hn_i,115,0,4);
        VL_IN(__PVT__xy_coord_all_hn_i,31,0);
        VL_INW(__PVT__cm_homeaddr_base_all_pm,111,0,4);
        VL_INW(__PVT__cm_homeaddr_limit_all_pm,115,0,4);
        VL_INW(__PVT__noncm_homeaddr_base_all_pm,111,0,4);
        VL_INW(__PVT__noncm_homeaddr_limit_all_pm,115,0,4);
        VL_INW(__PVT__ic_RX_REQFLIT,150,0,5);
        VL_INW(__PVT__ic_RX_RSPFLIT,72,0,3);
        VL_INW(__PVT__ic_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__flit_out_reqf_vc0,160,0,6);
        VL_OUTW(__PVT__flit_out_rspf_vc0,78,0,3);
        VL_OUTW(__PVT__flit_out_datf_vc0,685,0,22);
        VL_OUTW(__PVT__flit_out_reqf_vc1,160,0,6);
        VL_OUTW(__PVT__flit_out_rspf_vc1,78,0,3);
        VL_OUTW(__PVT__flit_out_datf_vc1,685,0,22);
        VL_INW(__PVT__flit_all_req_vc0,1609,0,51);
        VL_INW(__PVT__flit_all_req_vc1,1609,0,51);
        VL_INW(__PVT__flit_all_rsp_vc0,789,0,25);
        VL_INW(__PVT__flit_all_rsp_vc1,789,0,25);
        VL_INW(__PVT__flit_all_dat_vc0,6859,0,215);
        VL_INW(__PVT__flit_all_dat_vc1,6859,0,215);
        VL_OUTW(__PVT__ic_TX_REQFLIT,150,0,5);
        VL_OUTW(__PVT__ic_TX_SNPFLIT,107,0,4);
        VL_OUTW(__PVT__ic_TX_RSPFLIT,72,0,3);
        VL_OUTW(__PVT__ic_TX_DATFLIT,679,0,22);
        VlWide<3>/*72:0*/ __PVT__node_porttop_sn__DOT__rxrspflit_to_hn;
        VlWide<22>/*679:0*/ __PVT__node_porttop_sn__DOT__rxdatflit_to_hn;
        VlWide<5>/*150:0*/ __PVT__node_porttop_sn__DOT__txreqflit_to_pl;
        VlWide<22>/*679:0*/ __PVT__node_porttop_sn__DOT__txdatflit_to_pl;
        VL_IN64(__PVT__xy_coord_all_pm,43,0);
        VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);
        VL_IN8(__PVT__i_ucie_node_ids[16],1,0);
        VL_IN(__PVT__i_ucie_base_addresses[16],27,0);
        VL_IN(__PVT__i_ucie_limit_addresses[16],28,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_porttop_wrapper__pi9(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_porttop_wrapper__pi9();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_porttop_wrapper__pi9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
