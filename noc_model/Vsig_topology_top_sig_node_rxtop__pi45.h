// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RXTOP__PI45_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RXTOP__PI45_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_ic_initcrdt_enable;
class Vsig_topology_top_sig_lnkactive_rcv;
class Vsig_topology_top_sig_node_rx_datproc__pi58;
class Vsig_topology_top_sig_node_rx_reqproc__pi61;
class Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_rxtop__pi45 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_rx_reqproc__pi61* __PVT__sig_node_rx_reqproc_0;
    Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* __PVT__sig_node_rx_rspproc_0;
    Vsig_topology_top_sig_node_rx_datproc__pi58* __PVT__sig_node_rx_datproc_0;
    Vsig_topology_top_sig_ic_initcrdt_enable* __PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0;
    Vsig_topology_top_sig_lnkactive_rcv* __PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__ic_gclk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_IN8(__PVT__intfrx_clk,0,0);
        VL_IN8(__PVT__intfrx_gclk,0,0);
        VL_IN8(__PVT__rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__myproc_id,2,0);
        VL_IN8(__PVT__xy_coord_all_hn_f,7,0);
        VL_IN8(__PVT__qos_override_en,0,0);
        VL_IN8(__PVT__qos_override_val,3,0);
        VL_IN8(__PVT__ic_RX_REQFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_REQFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_REQLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_SNPFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_SNPFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_SNPLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_RSPLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_DATFLITV,0,0);
        VL_OUT8(__PVT__ic_RX_DATLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__ic_RX_LINKACTIVEACK,0,0);
        VL_IN8(__PVT__ic_TX_LINKACTIVEREQ,0,0);
        VL_OUT8(__PVT__credits_backto_full,0,0);
        VL_OUT8(__PVT__rx_req_port_is_inactive,0,0);
        VL_IN8(__PVT__i_in_timeout_mode,0,0);
        VL_IN8(__PVT__i_in_recovery_mode,0,0);
        VL_OUT8(__PVT__o_timeout_can_send_generated_dat_rsp_flit,0,0);
        VL_IN8(__PVT__id_translator_full_req,0,0);
        VL_IN8(__PVT__icx_exist_req,3,0);
        VL_IN8(__PVT__icx_exist_rsp,3,0);
        VL_IN8(__PVT__icx_exist_dat,3,0);
        VL_IN8(__PVT__enable_balanced_routing,0,0);
        VL_IN8(__PVT__portis_RN_or_SN,0,0);
        VL_OUT8(__PVT__rden_snprsp_flit_fifo_tx_snp,0,0);
        VL_IN8(__PVT__empty_snprsp_flit_fifo_tx_snp,0,0);
        CData/*0:0*/ __PVT__rxtop_datproc_fifo_is_full_vc0;
        CData/*0:0*/ __PVT__rxtop_rspproc_fifo_is_full_vc0;
        CData/*0:0*/ __PVT__timeout_or_recovery_mode;
        CData/*0:0*/ __PVT__enable_init_update;
        CData/*0:0*/ __PVT__rcvr_can_send_crdt;
        CData/*0:0*/ __PVT__rcvr_can_send_crdt_muxed;
        CData/*0:0*/ __PVT__credits_backto_full_req;
        CData/*0:0*/ __PVT__credits_backto_full_snp;
        CData/*0:0*/ __PVT__credits_backto_full_rsp;
        CData/*0:0*/ __PVT__credits_backto_full_data;
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
        VL_INW(__PVT__ic_RX_SNPFLIT,107,0,4);
        VL_INW(__PVT__ic_RX_RSPFLIT,72,0,3);
    };
    struct {
        VL_INW(__PVT__ic_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__flit_out_reqf_vc0,160,0,6);
        VL_OUTW(__PVT__flit_out_rspf_vc0,78,0,3);
        VL_OUTW(__PVT__flit_out_datf_vc0,685,0,22);
        VL_OUTW(__PVT__flit_out_reqf_vc1,160,0,6);
        VL_OUTW(__PVT__flit_out_rspf_vc1,78,0,3);
        VL_OUTW(__PVT__flit_out_datf_vc1,685,0,22);
        VL_INW(__PVT__rddata_snprsp_flit_fifo_tx_snp,72,0,3);
        VL_IN64(__PVT__xy_coord_all_pm,43,0);
        VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);
        VL_IN8(__PVT__i_ucie_node_ids[16],1,0);
        VL_IN(__PVT__i_ucie_base_addresses[16],27,0);
        VL_IN(__PVT__i_ucie_limit_addresses[16],28,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_rxtop__pi45(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_rxtop__pi45();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_rxtop__pi45);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
