// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_REQPROC__PI56_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_REQPROC__PI56_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi63;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_rx_reqproc__pi56 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi63* __PVT__sig_node_rx_reqproc_vc0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_IN8(__PVT__ic_gclk,0,0);
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
        VL_IN8(__PVT__enable_init_update,0,0);
        VL_IN8(__PVT__rcvr_can_send_crdt,0,0);
        VL_IN8(__PVT__icx_exist,3,0);
        VL_IN8(__PVT__enable_balanced_routing,0,0);
        VL_OUT8(__PVT__reqcredits_backto_full,0,0);
        VL_OUT8(__PVT__snpcredits_backto_full,0,0);
        VL_OUT8(__PVT__rx_req_port_is_inactive,0,0);
        VL_IN8(__PVT__portis_RN_or_SN,0,0);
        VL_IN8(__PVT__i_timeout_or_recovery_mode,0,0);
        CData/*0:0*/ __PVT__vc0_vld;
        CData/*0:0*/ __PVT__vc1_vld;
        CData/*0:0*/ __PVT__reqflit_is_vc0;
        CData/*0:0*/ __PVT__reqflit_is_vc1;
        CData/*0:0*/ __PVT__snpflit_is_vc0;
        CData/*0:0*/ __PVT__snpflit_is_vc1;
        CData/*0:0*/ __PVT__vc0_pend;
        CData/*0:0*/ __PVT__vc1_pend;
        CData/*0:0*/ __PVT__cm_reqaddr_match_hn_f;
        CData/*7:0*/ __PVT__cm_tgt_cluster_id_hn_f;
        CData/*0:0*/ __PVT__cm_activated_hn_f;
        CData/*0:0*/ __PVT__noncm_reqaddr_match_hn_f;
        CData/*7:0*/ __PVT__noncm_tgt_cluster_id_hn_f;
        CData/*0:0*/ __PVT__noncm_activated_hn_f;
        CData/*3:0*/ __PVT__noncm_addr_match_hn_i;
        CData/*7:0*/ __PVT__noncm_tgt_cluster_id_hn_i;
        CData/*3:0*/ __PVT__noncm_activated_hn_i;
        CData/*0:0*/ __PVT__cm_addr_match_pm;
        CData/*0:0*/ __PVT__cm_activated_pm;
        CData/*0:0*/ __PVT__noncm_addr_match_pm;
        CData/*0:0*/ __PVT__noncm_activated_pm;
        CData/*7:0*/ __PVT__tgt_cluster_id_hn;
        CData/*2:0*/ __PVT__tgt_port_id_hn;
        CData/*0:0*/ __PVT__reqis_to_noncm;
        CData/*0:0*/ __PVT__noncm_addr_match_hn_i_nonzero;
        CData/*0:0*/ __PVT__noncm_addr_match_hn_f_nonzero;
        CData/*0:0*/ __PVT__noncm_addr_match_pm_nonzero;
        CData/*0:0*/ __PVT__rcv_buff_released_vc0;
        CData/*0:0*/ __PVT__rcv_buff_released_vc1;
        CData/*0:0*/ __PVT__send_working_update_gate;
        CData/*0:0*/ __PVT__enable_init_update_gate;
        CData/*0:0*/ __PVT__reqcredits_backto_full_nxt;
        CData/*0:0*/ __PVT__snpcredits_backto_full_nxt;
        CData/*0:0*/ __PVT__send_reqcredit;
        CData/*0:0*/ __PVT__send_snpcredit;
        CData/*0:0*/ __PVT__rcvd_reqlink_crdt;
        CData/*0:0*/ __PVT__rcvd_snplink_crdt;
        CData/*0:0*/ __PVT__port_is_inactive;
    };
    struct {
        CData/*0:0*/ __PVT__port_is_inactive_nxt;
        CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc0;
        CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc1;
        CData/*0:0*/ __PVT__rden_snp0_fifo;
        CData/*0:0*/ __PVT__rden_snp1_fifo;
        CData/*0:0*/ __PVT__rden_req0_fifo;
        CData/*0:0*/ __PVT__rden_req1_fifo;
        CData/*0:0*/ __PVT__empty_req0_fifo;
        CData/*0:0*/ __PVT__empty_req1_fifo;
        CData/*0:0*/ __PVT__empty_snp0_fifo;
        CData/*0:0*/ __PVT__empty_snp1_fifo;
        CData/*0:0*/ __PVT__full_req0_fifo;
        CData/*0:0*/ __PVT__full_req1_fifo;
        CData/*0:0*/ __PVT__full_snp0_fifo;
        CData/*0:0*/ __PVT__full_snp1_fifo;
        CData/*4:0*/ __PVT__reqcrdt_balnce_tobesent;
        CData/*4:0*/ __PVT__reqcrdt_balnce_tobesent_nxt;
        CData/*4:0*/ __PVT__snpcrdt_balnce_tobesent;
        CData/*4:0*/ __PVT__snpcrdt_balnce_tobesent_nxt;
        CData/*4:0*/ __PVT__crdt_balance_to_deactivate_link;
        CData/*4:0*/ __PVT__crdt_balance_to_deactivate_link_nxt;
        CData/*4:0*/ __Vdly__reqcrdt_balnce_tobesent;
        CData/*4:0*/ __Vdly__crdt_balance_to_deactivate_link;
        CData/*0:0*/ __Vdly__reqcredits_backto_full;
        CData/*4:0*/ __Vdly__snpcrdt_balnce_tobesent;
        CData/*0:0*/ __Vdly__snpcredits_backto_full;
        CData/*0:0*/ __Vdly__port_is_inactive;
        VL_IN16(__PVT__mn_node_id,10,0);
        VL_IN16(__PVT__xy_coord_all_pm,10,0);
        SData/*10:0*/ __PVT__cm_tgtid_pm;
        SData/*10:0*/ __PVT__noncm_tgtid_pm;
        SData/*10:0*/ __PVT__snpflit_tgtid;
        SData/*10:0*/ __PVT__tgtid_pm;
        SData/*13:0*/ __PVT__inactive_cntr;
        SData/*13:0*/ __PVT__inactive_cntr_nxt;
        SData/*15:0*/ __PVT__ucie_sam_activated;
        SData/*15:0*/ __PVT__ucie_addr_match_vec;
        SData/*10:0*/ __PVT__ucie_tgtid;
        SData/*10:0*/ __PVT__icn_generated_tgtid;
        SData/*13:0*/ __Vdly__inactive_cntr;
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
        VL_OUTW(__PVT__flit_out_vc0,160,0,6);
        VL_OUTW(__PVT__flit_out_vc1,160,0,6);
        VlWide<5>/*150:0*/ __PVT__vc0_flit;
        VlWide<5>/*150:0*/ __PVT__vc1_flit;
        VlWide<5>/*150:0*/ __PVT__rddata_req0_fifo;
        VlWide<5>/*150:0*/ __PVT__rddata_req1_fifo;
        VlWide<5>/*150:0*/ __PVT__wrdata_req0_fifo;
        VlWide<5>/*150:0*/ __PVT__wrdata_req1_fifo;
        VlWide<4>/*107:0*/ __PVT__rddata_snp0_fifo;
        VlWide<4>/*107:0*/ __PVT__rddata_snp1_fifo;
        VlWide<4>/*107:0*/ __PVT__wrdata_snp0_fifo;
    };
    struct {
        VlWide<4>/*107:0*/ __PVT__wrdata_snp1_fifo;
        IData/*31:0*/ __PVT__p;
        IData/*31:0*/ __PVT__q;
        IData/*31:0*/ __PVT__r;
        IData/*31:0*/ __PVT__s;
        IData/*31:0*/ __PVT__t;
        IData/*31:0*/ __PVT__x;
        IData/*31:0*/ __PVT__y;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        VlWide<5>/*150:0*/ __PVT__ic_RX_REQFLIT_s;
        VlWide<5>/*150:0*/ __PVT__ic_RX_REQFLIT_modified;
        VlWide<4>/*118:0*/ __PVT__ic_RX_SNPFLIT_s;
        VlWide<4>/*118:0*/ __PVT__ic_RX_SNPFLIT_modified;
        VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);
        VL_IN8(__PVT__i_ucie_node_ids[16],1,0);
        VL_IN(__PVT__i_ucie_base_addresses[16],27,0);
        VL_IN(__PVT__i_ucie_limit_addresses[16],28,0);
        VlUnpacked<IData/*27:0*/, 1> __PVT__cm_reqflit_addr_sliced_hn_f;
        VlUnpacked<IData/*27:0*/, 1> __PVT__cm_homeaddr_base_hn_f;
        VlUnpacked<IData/*28:0*/, 1> __PVT__cm_homeaddr_limit_hn_f;
        VlUnpacked<IData/*27:0*/, 1> __PVT__cm_homeaddr_base_sliced_hn_f;
        VlUnpacked<IData/*28:0*/, 1> __PVT__cm_homeaddr_limit_sliced_hn_f;
        VlUnpacked<CData/*7:0*/, 1> __PVT__xy_coord_hn_f;
        VlUnpacked<IData/*27:0*/, 1> __PVT__noncm_reqflit_addr_sliced_hn_f;
        VlUnpacked<IData/*27:0*/, 1> __PVT__noncm_homeaddr_base_hn_f;
        VlUnpacked<IData/*28:0*/, 1> __PVT__noncm_homeaddr_limit_hn_f;
        VlUnpacked<IData/*27:0*/, 1> __PVT__noncm_homeaddr_base_sliced_hn_f;
        VlUnpacked<IData/*28:0*/, 1> __PVT__noncm_homeaddr_limit_sliced_hn_f;
        VlUnpacked<IData/*27:0*/, 4> __PVT__noncm_flit_addr_sliced_hn_i;
        VlUnpacked<IData/*27:0*/, 4> __PVT__noncm_homeaddr_base_hn_i;
        VlUnpacked<IData/*28:0*/, 4> __PVT__noncm_homeaddr_limit_hn_i;
        VlUnpacked<IData/*27:0*/, 4> __PVT__noncm_homeaddr_base_sliced_hn_i;
        VlUnpacked<IData/*28:0*/, 4> __PVT__noncm_homeaddr_limit_sliced_hn_i;
        VlUnpacked<CData/*7:0*/, 4> __PVT__xy_coord_hn_i;
        VlUnpacked<IData/*27:0*/, 1> __PVT__cm_flit_addr_sliced_pm;
        VlUnpacked<IData/*27:0*/, 1> __PVT__cm_homeaddr_base_pm;
        VlUnpacked<IData/*28:0*/, 1> __PVT__cm_homeaddr_limit_pm;
        VlUnpacked<IData/*27:0*/, 1> __PVT__cm_homeaddr_base_sliced_pm;
        VlUnpacked<IData/*28:0*/, 1> __PVT__cm_homeaddr_limit_sliced_pm;
        VlUnpacked<SData/*10:0*/, 1> __PVT__nodeid_pm;
        VlUnpacked<IData/*27:0*/, 1> __PVT__noncm_flit_addr_sliced_pm;
        VlUnpacked<IData/*27:0*/, 1> __PVT__noncm_homeaddr_base_pm;
        VlUnpacked<IData/*28:0*/, 1> __PVT__noncm_homeaddr_limit_pm;
        VlUnpacked<IData/*27:0*/, 1> __PVT__noncm_homeaddr_base_sliced_pm;
        VlUnpacked<IData/*28:0*/, 1> __PVT__noncm_homeaddr_limit_sliced_pm;
        VlUnpacked<CData/*3:0*/, 16> __PVT__ucie_sliced_base_addresses;
        VlUnpacked<CData/*3:0*/, 16> __PVT__ucie_sliced_limit_addresses;
        VlUnpacked<CData/*3:0*/, 16> __PVT__ucie_flit_sliced_addr;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_rx_reqproc__pi56(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_rx_reqproc__pi56();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_rx_reqproc__pi56);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
