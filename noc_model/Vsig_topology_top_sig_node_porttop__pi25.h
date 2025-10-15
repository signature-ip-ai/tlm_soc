// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_PORTTOP__PI25_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_PORTTOP__PI25_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_id_translator_rn_wrapper__pi42;
class Vsig_topology_top_sig_node_rxtop__pi43;
class Vsig_topology_top_sig_node_txtop__pi44;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_porttop__pi25 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_rxtop__pi43* __PVT__sig_node_rxtop_0;
    Vsig_topology_top_sig_node_txtop__pi44* __PVT__sig_node_txtop_0;
    Vsig_topology_top_sig_id_translator_rn_wrapper__pi42* __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0;

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
        VL_IN8(__PVT__sysco_is_disabled,0,0);
        VL_OUT8(__PVT__id_translator_hs_pending_txn_snp,0,0);
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
        VL_IN8(__PVT__portis_RN_or_SN,0,0);
        VL_OUT8(__PVT__ic_TXSACTIVE,0,0);
        VL_IN8(__PVT__ic_RXSACTIVE,0,0);
        VL_IN8(__PVT__cc_is_inactive,0,0);
        VL_IN8(__PVT__all_cache_init_complete,0,0);
        VL_OUT8(__PVT__ic_TX_LINKACTIVEREQ,0,0);
        VL_IN8(__PVT__ic_TX_LINKACTIVEACK,0,0);
        VL_OUT8(__PVT__o_timeout_interrupt,0,0);
        VL_IN8(__PVT__i_clear_timeout_interrupt,0,0);
        VL_OUT8(__PVT__o_timeout_recovery_successful,0,0);
        VL_IN8(__PVT__i_clear_recovery_interrupt,0,0);
        CData/*5:0*/ __PVT__metadata_out_rspf_vc0_tmp;
        CData/*5:0*/ __PVT__metadata_out_rspf_vc1_tmp;
        CData/*5:0*/ __PVT__metadata_out_datf_vc0_tmp;
        CData/*5:0*/ __PVT__metadata_out_datf_vc1_tmp;
        CData/*0:0*/ __PVT__snpreq_flitv_to_id_translator;
        CData/*0:0*/ __PVT__rsp_flitv_to_id_translator;
        CData/*0:0*/ __PVT__dat_flitv_to_id_translator;
    };
    struct {
        CData/*0:0*/ __PVT__id_translator_full;
        CData/*0:0*/ __PVT__id_translator_hs_pending_txn;
        CData/*0:0*/ __PVT__id_translator_full_req;
        CData/*0:0*/ __PVT__credits_backto_full;
        CData/*0:0*/ __PVT__rx_req_port_is_inactive;
        CData/*0:0*/ __PVT__enable_balanced_routing;
        CData/*3:0*/ __PVT__icx_exist_req;
        CData/*3:0*/ __PVT__icx_exist_rsp;
        CData/*3:0*/ __PVT__icx_exist_dat;
        CData/*0:0*/ __PVT__timeout_mode;
        CData/*0:0*/ __PVT__recovery_mode;
        CData/*0:0*/ __PVT__timeout_can_send_generated_dat_rsp_flit;
        CData/*0:0*/ __PVT__tx_dat_empty_flit_store_fifo;
        CData/*0:0*/ __PVT__id_translator_req_snp_empty;
        CData/*0:0*/ __PVT__tx_sactive_from_tx_top;
        CData/*0:0*/ __PVT__tx_linkactivereq_from_tx_top;
        CData/*0:0*/ __PVT__tx_linkactiveack_to_tx_top;
        CData/*0:0*/ __PVT__snpflitpend_from_tx_top;
        CData/*0:0*/ __PVT__snpflitv_from_tx_top;
        CData/*0:0*/ __PVT__snplcrdv_to_tx_top;
        CData/*0:0*/ __PVT__datflitpend_from_tx_top;
        CData/*0:0*/ __PVT__datflitv_from_tx_top;
        CData/*0:0*/ __PVT__datlcrdv_to_tx_top;
        CData/*0:0*/ __PVT__rspflitpend_from_tx_top;
        CData/*0:0*/ __PVT__rspflitv_from_tx_top;
        CData/*0:0*/ __PVT__rsplcrdv_to_tx_top;
        CData/*0:0*/ __PVT__rx_sactive_to_rx_top;
        CData/*0:0*/ __PVT__rx_linkactivereq_to_rx_top;
        CData/*0:0*/ __PVT__rx_linkactiveack_from_rx_top;
        CData/*0:0*/ __PVT__reqflitpend_to_rx_top;
        CData/*0:0*/ __PVT__reqflitv_to_rx_top;
        CData/*0:0*/ __PVT__reqlcrdv_from_rx_top;
        CData/*0:0*/ __PVT__datflitpend_to_rx_top;
        CData/*0:0*/ __PVT__datflitv_to_rx_top;
        CData/*0:0*/ __PVT__datlcrdv_from_rx_top;
        CData/*0:0*/ __PVT__rspflitpend_to_rx_top;
        CData/*0:0*/ __PVT__rspflitv_to_rx_top;
        CData/*0:0*/ __PVT__rsplcrdv_from_rx_top;
        CData/*0:0*/ __PVT__rden_snprsp_flit_fifo_tx_snp;
        CData/*0:0*/ __PVT__empty_snprsp_flit_fifo_tx_snp;
        CData/*0:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__id_translator_hs_pending_txn_req;
        CData/*3:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_opcode;
        CData/*0:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_v;
        CData/*3:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_opcode;
        CData/*0:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_v;
        CData/*4:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_opcode;
        CData/*0:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_v;
        CData/*4:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_opcode;
        CData/*0:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_v;
        CData/*4:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_opcode;
        CData/*4:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_opcode;
        CData/*0:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack;
        CData/*6:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode;
        CData/*0:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared;
        CData/*0:0*/ __PVT__unused_signal_block__DOT__unused_signal_timeout;
        VL_IN16(__PVT__mn_node_id,10,0);
        VL_IN16(__PVT__xy_coord_all_pm,10,0);
        SData/*11:0*/ __PVT__vc0_rx_rsp_txnid_to_hn;
        SData/*11:0*/ __PVT__vc1_rx_rsp_txnid_to_hn;
        SData/*11:0*/ __PVT__vc0_rx_dat_txnid_to_hn;
        SData/*11:0*/ __PVT__vc1_rx_dat_txnid_to_hn;
        SData/*11:0*/ __PVT__vc0_rx_dat_dbid_to_hn;
        SData/*11:0*/ __PVT__vc1_rx_dat_dbid_to_hn;
        SData/*11:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn;
    };
    struct {
        SData/*11:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn;
        SData/*11:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_dbid_from_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_dat_txnid_from_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_dbid_from_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_dat_txnid_from_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc1_rx_rsp_txnid_from_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__vc0_rx_rsp_txnid_from_rn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_txnid_from_hn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_dat_dbid_from_hn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_txnid_from_hn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_rsp_dbid_from_hn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__tx_snp_txnid_from_hn;
        SData/*11:0*/ __Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn;
        VL_IN(__PVT__cm_homeaddr_base_all_hn_f,27,0);
        VL_IN(__PVT__cm_homeaddr_limit_all_hn_f,28,0);
        VL_IN(__PVT__noncm_homeaddr_base_all_hn_f,27,0);
        VL_IN(__PVT__noncm_homeaddr_limit_all_hn_f,28,0);
        VL_INW(__PVT__noncm_homeaddr_base_all_hn_i,111,0,4);
        VL_INW(__PVT__noncm_homeaddr_limit_all_hn_i,115,0,4);
        VL_IN(__PVT__xy_coord_all_hn_i,31,0);
        VL_IN(__PVT__cm_homeaddr_base_all_pm,27,0);
        VL_IN(__PVT__cm_homeaddr_limit_all_pm,28,0);
        VL_IN(__PVT__noncm_homeaddr_base_all_pm,27,0);
        VL_IN(__PVT__noncm_homeaddr_limit_all_pm,28,0);
        VL_INW(__PVT__ic_RX_REQFLIT,150,0,5);
        VL_INW(__PVT__ic_RX_SNPFLIT,107,0,4);
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
        VL_OUTW(__PVT__ic_TX_SNPFLIT,150,0,5);
        VL_OUTW(__PVT__ic_TX_RSPFLIT,72,0,3);
        VL_OUTW(__PVT__ic_TX_DATFLIT,679,0,22);
        VlWide<5>/*150:0*/ __PVT__snpreq_flit_to_id_translator;
        VlWide<5>/*150:0*/ __PVT__snpreq_flit_from_id_translator;
        VlWide<5>/*150:0*/ __PVT__snpflit_from_tx_top;
        VlWide<22>/*679:0*/ __PVT__datflit_from_tx_top;
        VlWide<3>/*72:0*/ __PVT__rspflit_from_tx_top;
        VlWide<5>/*150:0*/ __PVT__reqflit_to_rx_top;
        VlWide<22>/*679:0*/ __PVT__datflit_to_rx_top;
        VlWide<3>/*72:0*/ __PVT__rspflit_to_rx_top;
        VlWide<3>/*72:0*/ __PVT__rddata_snprsp_flit_fifo_tx_snp;
        VlWide<22>/*685:0*/ __Vcellout__sig_node_rxtop_0__flit_out_datf_vc1;
        VlWide<3>/*78:0*/ __Vcellout__sig_node_rxtop_0__flit_out_rspf_vc1;
        VlWide<22>/*685:0*/ __Vcellout__sig_node_rxtop_0__flit_out_datf_vc0;
        VlWide<3>/*78:0*/ __Vcellout__sig_node_rxtop_0__flit_out_rspf_vc0;
        VlWide<22>/*679:0*/ __Vcellinp__sig_node_txtop_0__dat_flit_from_id_translator;
        VlWide<22>/*679:0*/ __Vcellout__sig_node_txtop_0__dat_flit_to_id_translator;
        VlWide<3>/*72:0*/ __Vcellinp__sig_node_txtop_0__rsp_flit_from_id_translator;
        VlWide<3>/*72:0*/ __Vcellout__sig_node_txtop_0__rsp_flit_to_id_translator;
        VlWide<3>/*72:0*/ __PVT__flit_out_rspf_vc0_to_id_translator;
        VlWide<3>/*72:0*/ __PVT__flit_out_rspf_vc1_to_id_translator;
    };
    struct {
        VlWide<3>/*72:0*/ __PVT__flit_out_rspf_vc0_from_id_translator;
        VlWide<3>/*72:0*/ __PVT__flit_out_rspf_vc1_from_id_translator;
        VlWide<22>/*679:0*/ __PVT__flit_out_datf_vc0_to_id_translator;
        VlWide<22>/*679:0*/ __PVT__flit_out_datf_vc1_to_id_translator;
        VlWide<22>/*679:0*/ __PVT__flit_out_datf_vc0_from_id_translator;
        VlWide<22>/*679:0*/ __PVT__flit_out_datf_vc1_from_id_translator;
        VlWide<3>/*72:0*/ __PVT__rsp_flit_to_id_translator;
        VlWide<3>/*72:0*/ __PVT__rsp_flit_from_id_translator;
        VlWide<22>/*679:0*/ __PVT__dat_flit_to_id_translator;
        VlWide<22>/*679:0*/ __PVT__dat_flit_from_id_translator;
        VlWide<4>/*118:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_to_id_translator;
        VlWide<4>/*118:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__snp_flit_from_id_translator;
        VlWide<5>/*150:0*/ __PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator;
        VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);
        VL_IN8(__PVT__i_ucie_node_ids[16],1,0);
        VL_IN(__PVT__i_ucie_base_addresses[16],27,0);
        VL_IN(__PVT__i_ucie_limit_addresses[16],28,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_porttop__pi25(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_porttop__pi25();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_porttop__pi25);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
