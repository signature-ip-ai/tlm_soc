// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_COMPDATA__PI20_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_COMPDATA__PI20_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_chi_crdt_recv;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_xmt_compdata__pi20 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_chi_crdt_recv* __PVT__sig_chi_crdt_recv_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cc_gclk,0,0);
        VL_IN8(__PVT__rstb_cc_clk,0,0);
        VL_IN8(__PVT__cc_clk,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLITV,0,0);
        VL_IN8(__PVT__ic_TX_DATLCRDV,0,0);
        VL_OUT8(__PVT__l3_wrdata_valid,0,0);
        VL_OUT8(__PVT__l3_drop_wrdata,0,0);
        VL_IN8(__PVT__l3_wrdatabuf_hasroom,0,0);
        VL_OUT8(__PVT__ic_TX_MEM_REQFLITV,0,0);
        VL_IN8(__PVT__req_link_crdt_avlble,0,0);
        VL_OUT8(__PVT__dat_link_crdt_avlble,0,0);
        VL_IN8(__PVT__empty_outcompfifo,0,0);
        VL_OUT8(__PVT__rden_outcompfifo,0,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__wren_compbuff_rcv_dat,0,0);
        VL_OUT8(__PVT__wren_which128,3,0);
        VL_OUT8(__PVT__rden_which16bytes_1st,3,0);
        VL_OUT8(__PVT__rden_which16bytes_2nd,3,0);
        VL_OUT8(__PVT__req_resp_compdata,0,0);
        VL_IN8(__PVT__gnt_resp_compdata,0,0);
        VL_OUT8(__PVT__allocate_respbuf,0,0);
        VL_IN8(__PVT__respbuff_avail,5,0);
        VL_OUT8(__PVT__index_pendingq_clr_outstand_cmd,5,0);
        VL_OUT8(__PVT__compdata_clr_outstand,0,0);
        VL_OUT8(__PVT__clr_collnreg_sending_ini,0,0);
        VL_OUT8(__PVT__clr_2nd_buffer,0,0);
        VL_OUT8(__PVT__clr_unused_compbuff_num,0,0);
        VL_OUT8(__PVT__o_xmt_compdata_nodeid_valid,0,0);
        VL_OUT8(__PVT__xmtdata_crdt_avail,0,0);
        VL_OUT8(__PVT__compdata_sending_ccreq,0,0);
        VL_IN8(__PVT__snpreq_sending_datflit,0,0);
        VL_IN8(__PVT__l3reqflit_fifo_full,0,0);
        VL_OUT8(__PVT__cc_reqflit_valid,0,0);
        VL_OUT8(__PVT__index_pendingq,5,0);
        VL_IN8(__PVT__compbuf_available,0,0);
        VL_OUT8(__PVT__block_compbuf_available,0,0);
        VL_OUT8(__PVT__allocate_compbuf,0,0);
        VL_OUT8(__PVT__wren_compbuff_num_compdata_1st,0,0);
        VL_OUT8(__PVT__wren_compbuff_num_compdata_2nd,0,0);
        VL_IN8(__PVT__use_early_write_response,0,0);
        VL_OUT8(__PVT__slc_readnosnp_apply_dmt_compdata_out,0,0);
        VL_OUT8(__PVT__slc_origreq_is_read_snp_dmt_out,0,0);
        CData/*0:0*/ __PVT__send_dataflit;
        CData/*3:0*/ __PVT__selected_valid_location_1st;
        CData/*3:0*/ __PVT__selected_valid_location_2nd;
        CData/*0:0*/ __PVT__read_compbuf_all;
        CData/*0:0*/ __PVT__read_2nd_compbuff;
        CData/*0:0*/ __PVT__clr_2nd_compbuff_num;
        CData/*0:0*/ __PVT__all4_locations_have_data;
        CData/*4:0*/ __PVT__compresp_opcode;
        CData/*0:0*/ __PVT__deallocate_1st_compbuff;
        CData/*0:0*/ __PVT__deallocate_2nd_compbuff;
        CData/*0:0*/ __PVT__swap_1st_and_2nd_compbuff;
        CData/*3:0*/ __PVT__comp_opcode;
        CData/*0:0*/ __PVT__req_resp_compdata_nxt;
        CData/*0:0*/ __PVT__respbuff_hasroom;
        CData/*0:0*/ __PVT__clr_pendingq;
        CData/*0:0*/ __PVT__mem_reqflit_valid;
        CData/*0:0*/ __PVT__allocate_compbuf_1st;
        CData/*0:0*/ __PVT__allocate_compbuf_2nd;
        CData/*3:0*/ __PVT__available_credits;
        CData/*0:0*/ __PVT__read_compdat_reuse_en;
        CData/*0:0*/ __PVT__origreq_read_u;
        CData/*0:0*/ __PVT__origreq_read_pu;
    };
    struct {
        CData/*0:0*/ __PVT__origreq_makeread_u;
        CData/*0:0*/ __PVT__origreq_rd;
        CData/*0:0*/ __PVT__origreq_cache_state_SD;
        CData/*0:0*/ __PVT__origreq_cache_state_SC;
        CData/*0:0*/ __PVT__clear_compbuff_no_dataxfr;
        CData/*0:0*/ __PVT__read_u_from_SDnode;
        CData/*0:0*/ __PVT__origreq_wr_uniq_fl;
        CData/*0:0*/ __PVT__origreq_wr_uniq_ptl;
        CData/*0:0*/ __PVT__origreq_wr_uniq_zero;
        CData/*0:0*/ __PVT__origreq_wr_uniq_nonzero;
        CData/*0:0*/ __PVT__origreq_wr_uniq;
        CData/*0:0*/ __PVT__origreq_wr_cb;
        CData/*0:0*/ __PVT__origreq_wr;
        CData/*0:0*/ __PVT__origreq_wr_zero;
        CData/*0:0*/ __PVT__origreq_atom;
        CData/*0:0*/ __PVT__origreq_atom_no_compdata;
        CData/*0:0*/ __PVT__origreq_wrback_wrcln;
        CData/*0:0*/ __PVT__l3_drop_wrdata_nxt;
        CData/*0:0*/ __PVT__l3_drop_wrdata_stored;
        CData/*0:0*/ __PVT__orig_req_is_wr_nosnpfl_clean_i;
        CData/*0:0*/ __PVT__orig_req_is_wr_nosnpfl_clean_s;
        CData/*0:0*/ __PVT__orig_req_is_wr_nosnpptl_clean_i;
        CData/*0:0*/ __PVT__orig_req_is_wr_nosnpptl_clean_s;
        CData/*0:0*/ __PVT__orig_req_is_wr_uniquefl_clean_s;
        CData/*0:0*/ __PVT__orig_req_is_wr_uniqueptl_clean_s;
        CData/*0:0*/ __PVT__orig_req_is_wr_backfl_clean_i;
        CData/*0:0*/ __PVT__orig_req_is_wr_backfl_clean_s;
        CData/*0:0*/ __PVT__orig_req_is_wr_cleanfl_clean_s;
        CData/*0:0*/ __PVT__origreq_wruniq_cmo;
        CData/*0:0*/ __PVT__origreq_wrnosnp_cmo;
        CData/*0:0*/ __PVT__origreq_writefull_clean_s;
        CData/*0:0*/ __PVT__origreq_writefull_clean_i;
        CData/*0:0*/ __PVT__origreq_writeptl_cmo;
        CData/*0:0*/ __PVT__origreq_write_cmo;
        CData/*6:0*/ __PVT__memreq_wrcmo_opcode;
        CData/*0:0*/ __PVT__wrcmo_to_send_cmo;
        CData/*0:0*/ __PVT__wrcmo_to_send_slc_data;
        CData/*0:0*/ __PVT__write_copyback_cmo_cancel;
        CData/*0:0*/ __PVT__merge_wrcmo;
        CData/*0:0*/ __PVT__wrcmo_clr_2nd_buffer;
        CData/*0:0*/ __PVT__drop_write_data_to_slc;
        CData/*0:0*/ __PVT__expcompack_has_respbufroom;
        CData/*0:0*/ __PVT__merge_wr_ptl_data;
        CData/*0:0*/ __PVT__merge_dataless;
        CData/*0:0*/ __PVT__merge_atom_ptldata;
        CData/*0:0*/ __PVT__origreq_read_ocsu_notsd_makereadunique;
        CData/*0:0*/ __PVT__origreq_read_snp;
        CData/*0:0*/ __PVT__merge_data;
        CData/*0:0*/ __PVT__merge_rdcompdata;
        CData/*0:0*/ __PVT__send_memdata;
        CData/*0:0*/ __PVT__consumed_crdt;
        CData/*0:0*/ __PVT__flag_memwr_allbe_zero;
        CData/*0:0*/ __PVT__flag_memwr_allbe_zero_nxt;
        CData/*0:0*/ __PVT__make_be_allzero_memwr;
        CData/*0:0*/ __PVT__was_SEND_REQ_st_nxt;
        CData/*0:0*/ __PVT__was_SEND_REQ_st;
        CData/*0:0*/ __PVT__origreq_read_nosnp;
        CData/*0:0*/ __PVT__origreq_read_once;
        CData/*0:0*/ __PVT__origreq_wr_nosnp_fl;
        CData/*0:0*/ __PVT__origreq_wr_nosnp_ptl;
        CData/*0:0*/ __PVT__origreq_wr_nosnp_zero;
        CData/*0:0*/ __PVT__origreq_wr_nosnp_nonzero;
        CData/*0:0*/ __PVT__origreq_wr_nosnp;
        CData/*0:0*/ __PVT__origreq_wr_back_ptl;
    };
    struct {
        CData/*0:0*/ __PVT__origreq_makeinvalid;
        CData/*0:0*/ __PVT__origreq_cleanshared;
        CData/*0:0*/ __PVT__origreq_rdwr_nosnp;
        CData/*0:0*/ __PVT__memreq_to_mem_or_slc;
        CData/*6:0*/ __PVT__memreq_opcode;
        CData/*0:0*/ __PVT__clr_pendingq_prep;
        CData/*0:0*/ __PVT__outstand_already_clr;
        CData/*0:0*/ __PVT__outstand_already_clr_nxt;
        CData/*0:0*/ __PVT__avoid_clearing_outstand;
        CData/*0:0*/ __PVT__avoid_clearing_outstand_nxt;
        CData/*0:0*/ __PVT__clr_collnreg_sending_ini_pre;
        CData/*0:0*/ __PVT__invalidate_need_dataxfr;
        CData/*0:0*/ __PVT__invalidate_mayneed_dataxfr;
        CData/*0:0*/ __PVT__invalidate_no_dataxfr;
        CData/*0:0*/ __PVT__send_l3data;
        CData/*0:0*/ __PVT__read_once_cln_needxfr_mem;
        CData/*0:0*/ __PVT__read_notsd_needxfr_mem;
        CData/*0:0*/ __PVT__lastresp_wr_uniq_ptl;
        CData/*0:0*/ __PVT__wren_compbuff_xmt_dat;
        CData/*0:0*/ __PVT__drop_wr_to_slc_but_keep_wrbe;
        CData/*0:0*/ __PVT__flittype_rdnosnp_l3;
        CData/*3:0*/ __PVT__proc_state_c;
        CData/*3:0*/ __PVT__proc_state_n;
        CData/*3:0*/ __PVT__memwr_opcode;
        CData/*0:0*/ __PVT__origreq_cleaninvalid;
        CData/*0:0*/ __Vdly__clr_collnreg_sending_ini;
        CData/*5:0*/ __Vdly__index_pendingq_clr_outstand_cmd;
        CData/*3:0*/ __Vdly__proc_state_c;
        CData/*0:0*/ __Vdly__outstand_already_clr;
        CData/*0:0*/ __Vdly__avoid_clearing_outstand;
        CData/*0:0*/ __Vdly__flag_memwr_allbe_zero;
        CData/*0:0*/ __Vdly__was_SEND_REQ_st;
        CData/*0:0*/ __Vdly__l3_drop_wrdata_stored;
        VL_OUT16(__PVT__dbid_from_l3,11,0);
        VL_OUT16(__PVT__o_xmt_compdata_linear_nodeid,10,0);
        VL_IN16(__PVT__i_xmt_compdata_full_node_id,10,0);
        SData/*10:0*/ __PVT__comp_tgt_nodeid_linear;
        SData/*10:0*/ __PVT__tgt_nodeid_grid;
        SData/*10:0*/ __PVT__comp_tgt_nodeid;
        SData/*11:0*/ __PVT__comp_dbid;
        SData/*15:0*/ __PVT__wrbe_merged_0;
        SData/*15:0*/ __PVT__wrbe_merged_1;
        SData/*15:0*/ __PVT__wrbe_merged_2;
        SData/*15:0*/ __PVT__wrbe_merged_3;
        SData/*10:0*/ __PVT__memwr_origreq_src_node_id;
        SData/*15:0*/ __PVT__wrbe_merged_selected;
        SData/*15:0*/ __PVT__wrbe_merged_selected_2nd;
        SData/*15:0*/ __PVT__wrbe_merged_selected_3rd;
        SData/*15:0*/ __PVT__wrbe_merged_selected_4th;
        SData/*10:0*/ __PVT__returnnid;
        SData/*11:0*/ __PVT__returntxnid;
        SData/*15:0*/ __PVT__rdbe_to_compdata_1st_0;
        SData/*15:0*/ __PVT__rdbe_to_compdata_1st_1;
        SData/*15:0*/ __PVT__rdbe_to_compdata_1st_2;
        SData/*15:0*/ __PVT__rdbe_to_compdata_1st_3;
        SData/*15:0*/ __PVT__rdbe_to_compdata_2nd_0;
        SData/*15:0*/ __PVT__rdbe_to_compdata_2nd_1;
        SData/*15:0*/ __PVT__rdbe_to_compdata_2nd_2;
        SData/*15:0*/ __PVT__rdbe_to_compdata_2nd_3;
        SData/*10:0*/ __PVT__datf_homenid_attr_compdata;
        VL_OUTW(__PVT__ic_TX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__l3_wrdata,511,0,16);
        VL_INW(__PVT__rddata_outcompfifo,180,0,6);
        VL_OUT(__PVT__wren_compbuff,31,0);
    };
    struct {
        VL_OUTW(__PVT__wrdata_dataflit,511,0,16);
        VL_INW(__PVT__valid_location_all,127,0,4);
        VL_OUT(__PVT__read_compbuf_datareuse_1st,31,0);
        VL_OUT(__PVT__rden_whichcompfifo_1st,31,0);
        VL_INW(__PVT__rddata_compfifo_1st,511,0,16);
        VL_OUT(__PVT__rden_whichcompfifo_2nd,31,0);
        VL_INW(__PVT__rddata_compfifo_2nd,511,0,16);
        VL_OUT(__PVT__read_compbuf_datareuse_2nd,31,0);
        VL_OUT(__PVT__dealloc_compfifo_vector,31,0);
        VL_OUTW(__PVT__respbody_compdata,73,0,3);
        VL_OUT(__PVT__clr_outstand_cmd,31,0);
        VL_OUT(__PVT__clr_outstand_prep,31,0);
        VL_OUTW(__PVT__ic_TX_REQFLIT,151,0,5);
        IData/*31:0*/ __PVT__clr_outstand_cmd_pre;
        VlWide<16>/*511:0*/ __PVT__l3_wrdata_nxt;
        VlWide<16>/*511:0*/ __PVT__l3_wrdata_stored;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_0;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_1;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_2;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_3;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_selected;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_selected_2nd;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_selected_3rd;
        VlWide<4>/*127:0*/ __PVT__wrdata_merged_selected_4th;
        IData/*31:0*/ __PVT__r;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_1st_0;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_1st_1;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_1st_2;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_1st_3;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_2nd_0;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_2nd_1;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_2nd_2;
        VlWide<4>/*127:0*/ __PVT__rddata_compfifo_2nd_3;
        IData/*31:0*/ __Vdly__clr_outstand_cmd;
        VlWide<16>/*511:0*/ __Vdly__l3_wrdata_stored;
        VL_OUT64(__PVT__l3_wrbe,63,0);
        VL_OUT64(__PVT__wrbe_dataflit,63,0);
        VL_IN64(__PVT__rdbe_to_compdata_1st,63,0);
        VL_IN64(__PVT__rdbe_to_compdata_2nd,63,0);
        VL_IN64(__PVT__addr_outstandq_to_compdata,51,0);
        VlWide<6>/*180:0*/ __PVT__cc_outcompfifo_s;
        QData/*63:0*/ __PVT__l3_wrbe_nxt;
        QData/*63:0*/ __PVT__l3_wrbe_stored;
        VlWide<5>/*150:0*/ __PVT__ic_TX_REQFLIT_s;
        VlWide<3>/*72:0*/ __PVT__respbody_compdata_s;
        VlWide<22>/*679:0*/ __PVT__ic_TX_DATFLIT_s;
        QData/*63:0*/ __Vdly__l3_wrbe_stored;
        VlUnpacked<CData/*3:0*/, 32> __PVT__valid_location;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_xmt_compdata__pi20(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_xmt_compdata__pi20();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_xmt_compdata__pi20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
