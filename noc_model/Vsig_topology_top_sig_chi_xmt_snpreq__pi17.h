// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_SNPREQ__PI17_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_SNPREQ__PI17_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_chi_crdt_recv;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_xmt_snpreq__pi17 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_chi_crdt_recv* __PVT__sig_chi_crdt_recv_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cc_gclk,0,0);
        VL_IN8(__PVT__rstb_cc_clk,0,0);
        VL_IN8(__PVT__cc_clk,0,0);
        VL_OUT8(__PVT__ic_TX_SNPFLITV,0,0);
        VL_IN8(__PVT__ic_TX_SNPLCRDV,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLITV_RESPERR,0,0);
        VL_OUT8(__PVT__cc_reqflit_valid,0,0);
        VL_OUT8(__PVT__slc_readnosnp_apply_dmt_snpreq_out,0,0);
        VL_OUT8(__PVT__slc_origreq_is_read_snp_dmt_out,0,0);
        VL_IN8(__PVT__l3reqflit_fifo_full,0,0);
        VL_IN8(__PVT__compdata_sending_ccreq,0,0);
        VL_IN8(__PVT__compdata_clr_outstand,0,0);
        VL_IN8(__PVT__compdata_sending_memreq,0,0);
        VL_IN8(__PVT__empty_snpreqfifo,0,0);
        VL_OUT8(__PVT__rden_snpreqfifo,0,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__compbuf_available_compbuftop,0,0);
        VL_OUT8(__PVT__allocate_compbuf,0,0);
        VL_OUT8(__PVT__allocate_respbuf,0,0);
        VL_IN8(__PVT__respbuff_avail,5,0);
        VL_IN8(__PVT__block_compbuf_available,0,0);
        VL_OUT8(__PVT__req_resp,0,0);
        VL_IN8(__PVT__gnt_rsp_snpreq,0,0);
        VL_IN8(__PVT__use_early_write_response,0,0);
        VL_OUT8(__PVT__req_link_crdt_avlble,0,0);
        VL_IN8(__PVT__dat_link_crdt_atleast_2,0,0);
        VL_OUT8(__PVT__wren_compbuff_num_1st,0,0);
        VL_OUT8(__PVT__wren_compbuff_num_2nd,0,0);
        VL_OUT8(__PVT__en_compbuf_2nd_for_snpdata,0,0);
        VL_OUT8(__PVT__outq_index_o,5,0);
        VL_OUT8(__PVT__index_pendingq_clr_outstand_cmd,5,0);
        VL_OUT8(__PVT__avoid_clr_colln,0,0);
        CData/*3:0*/ __PVT__available_credits;
        CData/*0:0*/ __PVT__consumed_crdt;
        CData/*0:0*/ __PVT__req_is_read_ocs_notsd;
        CData/*0:0*/ __PVT__req_is_read_u;
        CData/*0:0*/ __PVT__req_is_read_s;
        CData/*0:0*/ __PVT__req_is_read_c;
        CData/*0:0*/ __PVT__req_is_read_s_notsd;
        CData/*0:0*/ __PVT__req_is_read_snp;
        CData/*0:0*/ __PVT__req_is_read_nosnp;
        CData/*0:0*/ __PVT__req_is_read_once;
        CData/*0:0*/ __PVT__req_is_read_notsd;
        CData/*0:0*/ __PVT__req_is_makeread_u;
        CData/*0:0*/ __PVT__req_is_read_pu;
        CData/*0:0*/ __PVT__req_is_read_oc;
        CData/*0:0*/ __PVT__req_is_anydmt;
        CData/*0:0*/ __PVT__is_xmt_snp_uniq;
        CData/*0:0*/ __PVT__anyp_valid;
        CData/*0:0*/ __PVT__reqis_clean_usi;
        CData/*0:0*/ __PVT__reqis_clean_us;
        CData/*0:0*/ __PVT__reqis_clean_si;
        CData/*0:0*/ __PVT__reqis_clean_u;
        CData/*0:0*/ __PVT__reqis_clean_i;
        CData/*0:0*/ __PVT__reqis_clean_s;
        CData/*0:0*/ __PVT__dataless_need_or_mayneed_dxfr_tomm;
        CData/*0:0*/ __PVT__dataless_no_dxfr_tomm;
        CData/*0:0*/ __PVT__respbuff_hasroom;
        CData/*7:0*/ __PVT__req_srcid_snp;
        CData/*0:0*/ __PVT__cachest_u;
        CData/*0:0*/ __PVT__cachest_s;
        CData/*0:0*/ __PVT__cachest_uc;
        CData/*0:0*/ __PVT__cachest_ud;
        CData/*0:0*/ __PVT__cachest_sc;
    };
    struct {
        CData/*0:0*/ __PVT__cachest_sd;
        CData/*0:0*/ __PVT__cachest_inv;
        CData/*0:0*/ __PVT__cachest_vld;
        CData/*0:0*/ __PVT__reqis_make_u;
        CData/*0:0*/ __PVT__reqis_make_i;
        CData/*0:0*/ __PVT__req_alreadysent_toDirtyNode;
        CData/*0:0*/ __PVT__req_alreadysent_toDirtyNode_nxt;
        CData/*0:0*/ __PVT__reqis_clean_ui;
        CData/*2:0*/ __PVT__resp_tgt_port_id;
        CData/*0:0*/ __PVT__cacheable_partial_write;
        CData/*0:0*/ __PVT__req_is_wr_evict_fl;
        CData/*0:0*/ __PVT__req_is_wr_unique_ptl;
        CData/*0:0*/ __PVT__req_is_wr_unique_full;
        CData/*0:0*/ __PVT__req_is_wr_unique_zero;
        CData/*0:0*/ __PVT__req_is_wr_unique;
        CData/*0:0*/ __PVT__req_is_wr_nosnpfull;
        CData/*0:0*/ __PVT__req_is_wr_nosnpptl;
        CData/*0:0*/ __PVT__req_is_wr_zero;
        CData/*0:0*/ __PVT__req_is_nonzero_wr;
        CData/*0:0*/ __PVT__req_is_wr_nosnp;
        CData/*0:0*/ __PVT__req_is_wr_nosnp_zero;
        CData/*0:0*/ __PVT__req_is_rd_nosnp;
        CData/*0:0*/ __PVT__req_is_wr_nosnpfl_clean_i;
        CData/*0:0*/ __PVT__req_is_wr_nosnpfl_clean_s;
        CData/*0:0*/ __PVT__req_is_wr_nosnpptl_clean_i;
        CData/*0:0*/ __PVT__req_is_wr_nosnpptl_clean_s;
        CData/*0:0*/ __PVT__req_is_wr_uniquefl_clean_s;
        CData/*0:0*/ __PVT__req_is_wr_uniqueptl_clean_s;
        CData/*0:0*/ __PVT__req_is_wr_backfl_clean_i;
        CData/*0:0*/ __PVT__req_is_wr_backfl_clean_s;
        CData/*0:0*/ __PVT__req_is_wr_cleanfl_clean_s;
        CData/*0:0*/ __PVT__writefull_clean_i;
        CData/*0:0*/ __PVT__writefull_clean_s;
        CData/*0:0*/ __PVT__writeuniq_cmo;
        CData/*0:0*/ __PVT__writenosnp_cmo;
        CData/*0:0*/ __PVT__writeptl_cmo;
        CData/*0:0*/ __PVT__writenosnpptl_cmo;
        CData/*0:0*/ __PVT__write_cmo;
        CData/*0:0*/ __PVT__req_is_nonsnp_excl;
        CData/*0:0*/ __PVT__ExpCompAck_Rdnosnp;
        CData/*0:0*/ __PVT__xmt_snpORreq_flit;
        CData/*0:0*/ __PVT__xmt_datflit_resperr;
        CData/*0:0*/ __PVT__xmt_datflit_resperr_nxt;
        CData/*0:0*/ __PVT__goto_EVAL_FURTHER_afterMemWR;
        CData/*0:0*/ __PVT__goto_EVAL_FURTHER_afterMemWR_nxt;
        CData/*0:0*/ __PVT__req_read_oc_notsd_in_ucudsd;
        CData/*0:0*/ __PVT__readto_invalid_addr;
        CData/*0:0*/ __PVT__atom_rd_addr_inv_dealloc;
        CData/*0:0*/ __PVT__flittype_rdnosnp_mem;
        CData/*0:0*/ __PVT__flittype_wrnosnp_mem;
        CData/*0:0*/ __PVT__flittype_rdnosnp_l3;
        CData/*0:0*/ __PVT__flittype_wrnosnp_l3;
        CData/*0:0*/ __PVT__flittype_rdnosnp;
        CData/*0:0*/ __PVT__flittype_wrnosnp;
        CData/*0:0*/ __PVT__flittype_snp;
        CData/*0:0*/ __PVT__flittype_cmo_mem;
        CData/*0:0*/ __PVT__flittype_cmo_l3;
        CData/*0:0*/ __PVT__flittype_cmo;
        CData/*0:0*/ __PVT__cmo_need_snooping_with_data;
        CData/*0:0*/ __PVT__cmo_need_snooping_without_data;
        CData/*0:0*/ __PVT__cmo_no_need_snooping;
        CData/*0:0*/ __PVT__read_once_nosnp_needs_rcrcpt;
        CData/*0:0*/ __PVT__readto_memonly;
        CData/*0:0*/ __PVT__readto_iconly;
    };
    struct {
        CData/*0:0*/ __PVT__readto_both_memic;
        CData/*0:0*/ __PVT__readto_invalidate;
        CData/*7:0*/ __PVT__req_src_grid_actual;
        CData/*0:0*/ __PVT__replicate_in_cluster;
        CData/*0:0*/ __PVT__req_nonsnpable;
        CData/*0:0*/ __PVT__send_memwr_to_l3;
        CData/*0:0*/ __PVT__send_memwr_to_l3_nxt;
        CData/*0:0*/ __PVT__l3_or_link_rdreq_crdtavail;
        CData/*0:0*/ __PVT__respis_compresp;
        CData/*0:0*/ __PVT__compbuf_available;
        CData/*0:0*/ __PVT__allocate_compbuf_1st;
        CData/*0:0*/ __PVT__allocate_compbuf_2nd;
        CData/*0:0*/ __PVT__clr_pendingq;
        CData/*0:0*/ __PVT__invalidate_all_requester;
        CData/*0:0*/ __PVT__cmo_respbuf_allocated;
        CData/*0:0*/ __PVT__cmo_respbuf_allocated_nxt;
        CData/*4:0*/ __PVT__snp_opcode;
        CData/*4:0*/ __PVT__resp_opcode;
        CData/*2:0*/ __PVT__compdata_resp_field;
        CData/*0:0*/ __PVT__sole_snoopee_supports_dct;
        CData/*0:0*/ __PVT__avoid_clr_colln_nxt;
        CData/*0:0*/ __PVT__timeout_cback_wrdata;
        CData/*0:0*/ __PVT__timeout_snprespdata_i_pd;
        CData/*0:0*/ __PVT__snp_opcode_anyfwd;
        CData/*0:0*/ __PVT__donotgotosd_wire;
        CData/*0:0*/ __PVT__snp_donotgotosd_high;
        CData/*6:0*/ __PVT__memreq_opcode;
        CData/*0:0*/ __PVT__apply_dct;
        CData/*0:0*/ __PVT__gen_unused_signals__DOT__unused_signal;
        CData/*0:0*/ __Vlvbound_h6854731d__0;
        CData/*5:0*/ __Vdly__index_pendingq_clr_outstand_cmd;
        CData/*0:0*/ __Vdly__avoid_clr_colln;
        CData/*0:0*/ __Vdly__xmt_datflit_resperr;
        CData/*0:0*/ __Vdly__req_alreadysent_toDirtyNode;
        CData/*0:0*/ __Vdly__goto_EVAL_FURTHER_afterMemWR;
        CData/*0:0*/ __Vdly__send_memwr_to_l3;
        CData/*0:0*/ __Vdly__cmo_respbuf_allocated;
        VL_OUT16(__PVT__o_xmt_snpreq_linear_tgtid,10,0);
        VL_IN16(__PVT__i_xmt_snpreq_full_tgtid,10,0);
        VL_OUT16(__PVT__o_xmt_snpreq_linear_srcid,10,0);
        VL_IN16(__PVT__i_xmt_snpreq_full_srcid,10,0);
        SData/*10:0*/ __PVT__snp_tgtid_linear;
        SData/*10:0*/ __PVT__snp_tgtid_muxed;
        SData/*10:0*/ __PVT__tgt_nodeid_grid;
        SData/*11:0*/ __PVT__proc_state;
        SData/*11:0*/ __PVT__proc_state_nxt;
        SData/*10:0*/ __PVT__requester_srcid;
        SData/*10:0*/ __PVT__srcrn_nodeid_grid;
        SData/*11:0*/ __PVT__cc_dbid_index;
        SData/*9:0*/ __PVT__req_src_id_actual;
        SData/*10:0*/ __PVT__returnnid;
        SData/*11:0*/ __PVT__returntxnid;
        SData/*11:0*/ __PVT__dbid_field_masked;
        SData/*11:0*/ __PVT__snp_txnid_masked;
        SData/*10:0*/ __PVT__datf_homenid_attr_compdata;
        SData/*11:0*/ __Vdly__proc_state;
        VL_OUTW(__PVT__ic_TX_FLIT_SNPREQ_OR_MEMREQ,151,0,5);
        VL_OUTW(__PVT__ic_TX_DATFLIT_RESPERR,679,0,22);
        VL_IN(__PVT__dct_enable_all_rn_vec,21,0);
        VL_INW(__PVT__COH_nodeid_all_rn,241,0,8);
        VL_OUTW(__PVT__respbody_snpreq,73,0,3);
        VL_OUT(__PVT__clr_outstand_cmd,31,0);
        IData/*21:0*/ __PVT__share_vect_word;
        IData/*21:0*/ __PVT__share_vect_word_nxt;
    };
    struct {
        IData/*31:0*/ __PVT__clr_outstand_cmd_pre;
        VlWide<22>/*679:0*/ __PVT__ic_TX_DATFLIT_RESPERR_nxt;
        IData/*21:0*/ __PVT__sole_snoopee_supports_dct_mask;
        VlWide<5>/*151:0*/ __PVT__ic_TX_FLIT_SNPREQ;
        VlWide<5>/*151:0*/ __PVT__ic_TX_FLIT_MEMREQ;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vdly__clr_outstand_cmd;
        IData/*21:0*/ __Vdly__share_vect_word;
        VlWide<22>/*679:0*/ __Vdly__ic_TX_DATFLIT_RESPERR;
        VL_INW(__PVT__snpreqcmd,190,0,6);
        VlWide<5>/*150:0*/ __PVT__ic_TX_FLIT_MEMREQ_s;
        VlWide<4>/*118:0*/ __PVT__ic_TX_FLIT_SNPREQ_s;
        VlWide<3>/*72:0*/ __PVT__respbody_snpreq_s;
        VlWide<22>/*679:0*/ __PVT__ic_TX_DATFLIT_RESPERR_s;
        VlUnpacked<SData/*10:0*/, 22> __PVT__full_rn_node_ids;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_xmt_snpreq__pi17(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_xmt_snpreq__pi17();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_xmt_snpreq__pi17);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
