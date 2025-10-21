// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CACHEDIR_CTRLR__PI15_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CACHEDIR_CTRLR__PI15_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_fifo_synchclk_flop_match__pi36;
class Vsig_topology_top_sig_sram_init__Sa;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cachedir_ctrlr__pi15 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_fifo_synchclk_flop_match__pi36* __PVT__cmqfifo_0;
    Vsig_topology_top_sig_sram_init__Sa* __PVT__inst_sig_sram_init;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cc_clk,0,0);
        VL_IN8(__PVT__rstb_cc_clk,0,0);
        VL_IN8(__PVT__wren_cmq_ph4,0,0);
        VL_OUT8(__PVT__cmd_addr_ph3_has_matchingentry_incmq,0,0);
        VL_OUT8(__PVT__block_fetch_cohc,0,0);
        VL_OUT8(__PVT__rden_dircache,0,0);
        VL_OUT8(__PVT__rden_dircache_pre,0,0);
        VL_IN8(__PVT__cachehit,0,0);
        VL_OUT8(__PVT__evict_this_cycle,0,0);
        VL_OUT8(__PVT__wrvalid_dirc,0,0);
        VL_IN8(__PVT__wren_cache_cohc_or_dirc,0,0);
        VL_OUT8(__PVT__cm_cmdvalid,0,0);
        VL_IN8(__PVT__clr_cm_cmdvalid,0,0);
        VL_OUT8(__PVT__cm_cmdvalid_evict,0,0);
        VL_IN8(__PVT__clr_cm_cmdvalid_evict,0,0);
        VL_IN8(__PVT__dirc_canwrite_tocache,0,0);
        VL_OUT8(__PVT__fiforoom_atlst4_cmq,0,0);
        VL_OUT8(__PVT__full_cmqfifo,0,0);
        VL_OUT8(__PVT__cmqhas_1room,0,0);
        VL_OUT8(__PVT__cmqhas_2room,0,0);
        VL_OUT8(__PVT__cmqhas_3room,0,0);
        VL_OUT8(__PVT__en_blocking_reqcmdq,0,0);
        VL_OUT8(__PVT__dirc_init_complete,0,0);
        CData/*0:0*/ __PVT__fifo_cache_miss_status;
        CData/*0:0*/ __PVT__empty_cmqfifo;
        CData/*0:0*/ __PVT__rden_cmqfifo;
        CData/*0:0*/ __PVT__cm_cmdvalid_nxt;
        CData/*0:0*/ __PVT__set_cm_cmdvalid;
        CData/*0:0*/ __PVT__rden_dircache_nxt;
        CData/*0:0*/ __PVT__cm_cmdvalid_evict_nxt;
        CData/*0:0*/ __PVT__set_cm_cmdvalid_evict;
        CData/*0:0*/ __PVT__evict_this_cycle_nxt;
        CData/*5:0*/ __PVT__byteoffset_cache;
        CData/*0:0*/ __PVT__eviction_in_progress;
        CData/*0:0*/ __PVT__eviction_in_progress_nxt;
        CData/*2:0*/ __PVT__count_evict;
        CData/*2:0*/ __PVT__count_evict_nxt;
        CData/*0:0*/ __PVT__block_fetch_cohc_nxt;
        CData/*0:0*/ __PVT__wren_cmqfifo_ph4;
        CData/*0:0*/ __PVT__advance_lfsr;
        CData/*0:0*/ __PVT__got_an_eviction_winner;
        CData/*2:0*/ __PVT__lfsr_flops;
        CData/*2:0*/ __PVT__lfsr_flops_nxt;
        CData/*2:0*/ __PVT__newseed_value;
        CData/*0:0*/ __PVT__en_blocking_reqcmdq_nxt;
        CData/*0:0*/ __PVT__itis_a_match_cmqfifo;
        CData/*0:0*/ __PVT__first_cycle_in_evictend;
        CData/*0:0*/ __PVT__first_cycle_in_evictend_nxt;
        CData/*0:0*/ __PVT__memberset_full;
        CData/*0:0*/ __PVT__cachehit_stored;
        CData/*0:0*/ __PVT__cachehit_stored_nxt;
        CData/*0:0*/ __PVT__cachehit_ph4;
        CData/*0:0*/ __PVT__evicted_cl_inidle_state;
        CData/*0:0*/ __PVT__wrvalid_cmd_dirc;
        CData/*0:0*/ __PVT__dirc_init_en;
        CData/*0:0*/ __PVT__load_newseed;
        CData/*0:0*/ __PVT__block_rden_cache;
        CData/*0:0*/ __PVT__empty_cmqfifo_reg;
        CData/*0:0*/ __Vdly__cm_cmdvalid;
        CData/*0:0*/ __Vdly__cm_cmdvalid_evict;
        CData/*0:0*/ __Vdly__rden_dircache;
        CData/*0:0*/ __Vdly__evict_this_cycle;
        CData/*0:0*/ __Vdly__eviction_in_progress;
        CData/*2:0*/ __Vdly__count_evict;
    };
    struct {
        CData/*0:0*/ __Vdly__block_fetch_cohc;
        CData/*0:0*/ __Vdly__en_blocking_reqcmdq;
        CData/*0:0*/ __Vdly__first_cycle_in_evictend;
        CData/*0:0*/ __Vdly__cachehit_stored;
        CData/*0:0*/ __Vdly__cachehit_ph4;
        CData/*0:0*/ __Vdly__empty_cmqfifo_reg;
        CData/*2:0*/ __Vdly__lfsr_flops;
        VL_OUT16(__PVT__cache_index_rd,9,0);
        VL_IN16(__PVT__validity_in,15,0);
        VL_OUT16(__PVT__evict_this_one,15,0);
        VL_IN16(__PVT__in_pendingq,15,0);
        VL_OUT16(__PVT__wren_cache_vector,15,0);
        VL_OUT16(__PVT__cache_index_wr,9,0);
        VL_IN16(__PVT__cache_index_wr_cohc_or_dirc,9,0);
        VL_OUT16(__PVT__index_cache_eviction,9,0);
        SData/*12:0*/ __PVT__cacheproc_state;
        SData/*12:0*/ __PVT__cacheproc_state_nxt;
        SData/*15:0*/ __PVT__evict_this_one_nxt;
        SData/*15:0*/ __PVT__sel_wren_noevict_decode;
        SData/*15:0*/ __PVT__sel_wren_noevict_stored;
        SData/*15:0*/ __PVT__sel_wren_noevict_stored_nxt;
        SData/*15:0*/ __PVT__evict_random_decode;
        SData/*15:0*/ __PVT__evict_random_decode_nxt;
        SData/*15:0*/ __PVT__evict_random_plru;
        SData/*15:0*/ __PVT__evict_member_winner;
        SData/*15:0*/ __PVT__in_pendingq_stored;
        SData/*15:0*/ __PVT__in_pendingq_stored_nxt;
        SData/*15:0*/ __PVT__notin_pendingq_stored;
        SData/*15:0*/ __PVT__notin_pendingq_shifted;
        SData/*15:0*/ __PVT__n_p_s_w;
        SData/*9:0*/ __PVT__index_cache;
        SData/*15:0*/ __PVT__invalidity_stored;
        SData/*15:0*/ __PVT__validity_stored;
        SData/*15:0*/ __PVT__validity_stored_nxt;
        SData/*15:0*/ __PVT__validity_in_ph4;
        SData/*15:0*/ __PVT__wren_cache_cmd_vector;
        SData/*9:0*/ __PVT__dirc_init_index_wr;
        SData/*9:0*/ __PVT__index_cmd_ph4;
        SData/*9:0*/ __PVT__index_cache_reg;
        SData/*12:0*/ __Vdly__cacheproc_state;
        SData/*15:0*/ __Vdly__evict_this_one;
        SData/*15:0*/ __Vdly__evict_random_decode;
        SData/*15:0*/ __Vdly__in_pendingq_stored;
        SData/*15:0*/ __Vdly__sel_wren_noevict_stored;
        SData/*15:0*/ __Vdly__validity_stored;
        SData/*15:0*/ __Vdly__validity_in_ph4;
        SData/*9:0*/ __Vdly__index_cache_reg;
        VL_INW(__PVT__cmd_ph4,154,0,5);
        VL_IN(__PVT__rddata_cache,31,0);
        VL_OUT(__PVT__wrdata_cache,31,0);
        VL_OUTW(__PVT__cm_cmd,154,0,5);
        VL_OUTW(__PVT__evict_details,83,0,3);
        VlWide<5>/*154:0*/ __PVT__rddata_cmqfifo;
        VlWide<5>/*154:0*/ __PVT__cm_cmd_nxt;
        IData/*31:0*/ __PVT__evicted_data;
        IData/*31:0*/ __PVT__evicted_data_nxt;
        VlWide<5>/*154:0*/ __PVT__fifo_wrdata_ph4;
        VlWide<5>/*154:0*/ __Vdly__cm_cmd;
        IData/*31:0*/ __Vdly__evicted_data;
        VL_IN64(__PVT__cmd_addr_ph3,51,0);
        VL_OUT64(__PVT__cache_tag_rd,35,0);
        VL_IN64(__PVT__rdout_tag_value,35,0);
        VL_OUT64(__PVT__cache_tag_wr,35,0);
        QData/*51:0*/ __PVT__addr_cache;
    };
    struct {
        QData/*51:0*/ __PVT__cm_cmd_addr_rd;
        QData/*35:0*/ __PVT__rdout_tag_stored;
        QData/*35:0*/ __PVT__rdout_tag_stored_nxt;
        QData/*35:0*/ __PVT__tag_cache;
        QData/*51:0*/ __PVT__memadd_reloc_cmpct_rd;
        QData/*51:0*/ __PVT__memadd_reloc_cmpct_wr;
        QData/*51:0*/ __PVT__memadd_evict_wr;
        QData/*45:0*/ __Vcellinp__cmqfifo_0__match_data_in;
        QData/*35:0*/ __Vdly__rdout_tag_stored;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cachedir_ctrlr__pi15(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cachedir_ctrlr__pi15();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cachedir_ctrlr__pi15);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
