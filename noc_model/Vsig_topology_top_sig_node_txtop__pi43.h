// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_TXTOP__PI43_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_TXTOP__PI43_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_double_synchronizer;
class Vsig_topology_top_sig_ic_crdt_recv;
class Vsig_topology_top_sig_lnkactive_xmt;
class Vsig_topology_top_sig_node_dattxflit_top__pi59;
class Vsig_topology_top_sig_node_rsptxflit_top;
class Vsig_topology_top_sig_node_snptxflit_top__pi58;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_txtop__pi43 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_snptxflit_top__pi58* __PVT__sig_node_snptxflit_top_0;
    Vsig_topology_top_sig_node_rsptxflit_top* __PVT__sig_node_rsptxflit_top_0;
    Vsig_topology_top_sig_node_dattxflit_top__pi59* __PVT__sig_node_dattxflit_top_0;
    Vsig_topology_top_sig_ic_crdt_recv* __PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp;
    Vsig_topology_top_sig_ic_crdt_recv* __PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp;
    Vsig_topology_top_sig_ic_crdt_recv* __PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat;
    Vsig_topology_top_sig_lnkactive_xmt* __PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt;
    Vsig_topology_top_sig_double_synchronizer* __PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_IN8(__PVT__ic_gclk,0,0);
        VL_IN8(__PVT__intfrx_clk,0,0);
        VL_IN8(__PVT__intfrx_gclk,0,0);
        VL_IN8(__PVT__rstb_intfrx_clk,0,0);
        VL_OUT8(__PVT__TX_SNPFLITPEND,0,0);
        VL_OUT8(__PVT__TX_SNPFLITV,0,0);
        VL_IN8(__PVT__TX_SNPLCRDV,0,0);
        VL_OUT8(__PVT__TX_RSPFLITPEND,0,0);
        VL_OUT8(__PVT__TX_RSPFLITV,0,0);
        VL_IN8(__PVT__TX_RSPLCRDV,0,0);
        VL_OUT8(__PVT__TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__TX_DATFLITV,0,0);
        VL_IN8(__PVT__TX_DATLCRDV,0,0);
        VL_OUT8(__PVT__TX_REQFLITPEND,0,0);
        VL_OUT8(__PVT__TX_REQFLITV,0,0);
        VL_IN8(__PVT__TX_REQLCRDV,0,0);
        VL_IN8(__PVT__ic_RX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__ic_RX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__ic_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__ic_TX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__ic_TXSACTIVE,0,0);
        VL_IN8(__PVT__ic_RXSACTIVE,0,0);
        VL_IN8(__PVT__cc_is_inactive,0,0);
        VL_IN8(__PVT__all_cache_init_complete,0,0);
        VL_IN8(__PVT__portis_RN_or_SN,0,0);
        VL_IN8(__PVT__sysco_is_disabled,0,0);
        VL_IN8(__PVT__credits_backto_full,0,0);
        VL_IN8(__PVT__i_in_timeout_mode,0,0);
        VL_IN8(__PVT__i_in_recovery_mode,0,0);
        VL_IN8(__PVT__rx_req_port_is_inactive,0,0);
        VL_OUT8(__PVT__o_dat_empty_flit_store_fifo,0,0);
        VL_OUT8(__PVT__snpreq_flitv_to_id_translator,0,0);
        VL_OUT8(__PVT__rsp_flitv_to_id_translator,0,0);
        VL_OUT8(__PVT__dat_flitv_to_id_translator,0,0);
        VL_IN8(__PVT__id_translator_full,0,0);
        VL_IN8(__PVT__id_translator_hs_pending_txn,0,0);
        VL_IN8(__PVT__rden_snprsp_flit_fifo_tx_snp,0,0);
        VL_OUT8(__PVT__empty_snprsp_flit_fifo_tx_snp,0,0);
        CData/*0:0*/ __PVT__req_or_snp;
        CData/*0:0*/ __PVT__porthas_credits_req;
        CData/*0:0*/ __PVT__porthas_credits_rsp;
        CData/*0:0*/ __PVT__porthas_credits_dat;
        CData/*0:0*/ __PVT__porthas_credits_snp;
        CData/*0:0*/ __PVT__port_can_send_flit_req;
        CData/*0:0*/ __PVT__port_can_send_flit_dat;
        CData/*0:0*/ __PVT__port_can_send_flit_rsp;
        CData/*0:0*/ __PVT__port_can_send_flit_snp;
        CData/*3:0*/ __PVT__available_credits_req;
        CData/*3:0*/ __PVT__available_credits_rsp;
        CData/*3:0*/ __PVT__available_credits_dat;
        CData/*3:0*/ __PVT__available_credits_snp;
        CData/*0:0*/ __PVT__consumed_crdt_req;
        CData/*0:0*/ __PVT__consumed_crdt_rsp;
        CData/*0:0*/ __PVT__consumed_crdt_dat;
        CData/*0:0*/ __PVT__consumed_crdt_snp;
        CData/*0:0*/ __PVT__enter_deactivate;
        CData/*0:0*/ __PVT__xmtr_cansend_flits;
        CData/*0:0*/ __PVT__enable_xmt;
        CData/*0:0*/ __PVT__TX_SNPFLITV_ptcl;
        CData/*0:0*/ __PVT__TX_RSPFLITV_ptcl;
        CData/*0:0*/ __PVT__TX_DATFLITV_ptcl;
        CData/*0:0*/ __PVT__TX_REQFLITV_link;
    };
    struct {
        CData/*0:0*/ __PVT__TX_SNPFLITV_link;
        CData/*0:0*/ __PVT__TX_RSPFLITV_link;
        CData/*0:0*/ __PVT__TX_DATFLITV_link;
        CData/*0:0*/ __PVT__TX_REQFLITV_nxt;
        CData/*0:0*/ __PVT__TX_SNPFLITV_nxt;
        CData/*0:0*/ __PVT__TX_RSPFLITV_nxt;
        CData/*0:0*/ __PVT__TX_DATFLITV_nxt;
        CData/*0:0*/ __PVT__return_linkcrdt;
        CData/*0:0*/ __PVT__snpreq_empty_flit_store_fifo;
        CData/*0:0*/ __PVT__rsp_empty_flit_store_fifo;
        CData/*0:0*/ __PVT__dat_empty_flit_store_fifo;
        CData/*0:0*/ __PVT__port_is_inactive;
        CData/*0:0*/ __PVT__port_is_inactive_nxt;
        CData/*0:0*/ __PVT__timeout_or_recovery_mode;
        CData/*0:0*/ __PVT__cc_is_inactive_sync;
        CData/*0:0*/ __PVT__sactive_st;
        CData/*0:0*/ __PVT__sactive_st_nxt;
        CData/*0:0*/ __PVT__ic_TXSACTIVE_nxt;
        CData/*6:0*/ __PVT__opcode_req_or_lcrdt;
        CData/*4:0*/ __PVT__opcode_snp_or_lcrdt;
        CData/*4:0*/ __PVT__opcode_rsp_or_lcrdt;
        CData/*3:0*/ __PVT__opcode_dat_or_lcrdt;
        CData/*0:0*/ __Vdly__port_is_inactive;
        CData/*0:0*/ __Vdly__TX_SNPFLITV;
        CData/*0:0*/ __Vdly__TX_RSPFLITV;
        CData/*0:0*/ __Vdly__TX_DATFLITV;
        CData/*0:0*/ __Vdly__TX_REQFLITV;
        CData/*0:0*/ __Vdly__sactive_st;
        CData/*0:0*/ __Vdly__ic_TXSACTIVE;
        SData/*13:0*/ __PVT__inactive_cntr;
        SData/*13:0*/ __PVT__inactive_cntr_nxt;
        SData/*11:0*/ __PVT__txnid_req_or_lcrdt;
        SData/*11:0*/ __PVT__txnid_snp_or_lcrdt;
        SData/*11:0*/ __PVT__txnid_rsp_or_lcrdt;
        SData/*11:0*/ __PVT__txnid_dat_or_lcrdt;
        SData/*13:0*/ __Vdly__inactive_cntr;
        VL_INW(__PVT__flit_all_req_vc0,1609,0,51);
        VL_INW(__PVT__flit_all_req_vc1,1609,0,51);
        VL_INW(__PVT__flit_all_rsp_vc0,789,0,25);
        VL_INW(__PVT__flit_all_rsp_vc1,789,0,25);
        VL_INW(__PVT__flit_all_dat_vc0,6859,0,215);
        VL_INW(__PVT__flit_all_dat_vc1,6859,0,215);
        VL_OUTW(__PVT__TX_SNPFLIT,150,0,5);
        VL_OUTW(__PVT__TX_RSPFLIT,72,0,3);
        VL_OUTW(__PVT__TX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__TX_REQFLIT,150,0,5);
        VL_OUTW(__PVT__snpreq_flit_to_id_translator,150,0,5);
        VL_INW(__PVT__snpreq_flit_from_id_translator,150,0,5);
        VL_OUTW(__PVT__rsp_flit_to_id_translator,72,0,3);
        VL_INW(__PVT__rsp_flit_from_id_translator,72,0,3);
        VL_OUTW(__PVT__dat_flit_to_id_translator,679,0,22);
        VL_INW(__PVT__dat_flit_from_id_translator,679,0,22);
        VL_OUTW(__PVT__rddata_snprsp_flit_fifo_tx_snp,72,0,3);
        VlWide<5>/*151:0*/ __PVT__TX_SNPFLIT_ptcl;
        VlWide<3>/*72:0*/ __PVT__TX_RSPFLIT_ptcl;
        VlWide<22>/*679:0*/ __PVT__TX_DATFLIT_ptcl;
        VlWide<5>/*150:0*/ __PVT__TX_REQFLIT_nxt;
        VlWide<5>/*150:0*/ __PVT__TX_SNPFLIT_nxt;
        VlWide<3>/*72:0*/ __PVT__TX_RSPFLIT_nxt;
        VlWide<22>/*679:0*/ __PVT__TX_DATFLIT_nxt;
        VlWide<5>/*150:0*/ __Vdly__TX_SNPFLIT;
        VlWide<3>/*72:0*/ __Vdly__TX_RSPFLIT;
        VlWide<22>/*679:0*/ __Vdly__TX_DATFLIT;
        VlWide<5>/*150:0*/ __Vdly__TX_REQFLIT;
    };
    struct {
        VlWide<5>/*150:0*/ __PVT__TX_REQFLIT_ptcl_s;
        VlWide<4>/*118:0*/ __PVT__TX_SNPFLIT_ptcl_s;
        VlWide<3>/*72:0*/ __PVT__TX_RSPFLIT_ptcl_s;
        VlWide<22>/*679:0*/ __PVT__TX_DATFLIT_ptcl_s;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_txtop__pi43(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_txtop__pi43();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_txtop__pi43);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
