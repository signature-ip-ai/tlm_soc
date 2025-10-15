// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NWAY_CACHE__CA_CB24_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NWAY_CACHE__CA_CB24_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_cache__Ca_CB24;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_nway_cache__Ca_CB24 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u;
    Vsig_topology_top_sig_cache__Ca_CB24* __PVT__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cache_clk,0,0);
        VL_IN8(__PVT__rstb_cache_clk,0,0);
        VL_IN8(__PVT__wrvalid_dirc,0,0);
        VL_IN8(__PVT__rden_cache_dirc,0,0);
        VL_IN8(__PVT__rden_cache_dirc_pre,0,0);
        VL_IN8(__PVT__inpendingq_matches_collnq_cohc,0,0);
        VL_IN8(__PVT__rden_cache_cohc,0,0);
        VL_IN8(__PVT__rden_cache_cohc_pre,0,0);
        VL_OUT8(__PVT__cachehit,0,0);
        VL_OUT8(__PVT__cache_all_occupied,0,0);
        VL_IN8(__PVT__evict_this_cycle,0,0);
        VL_OUT8(__PVT__dirc_canwrite_tocache,0,0);
        VL_OUT8(__PVT__wren_cache_cohc_or_dirc,0,0);
        VL_IN8(__PVT__dirc_init_complete,0,0);
        CData/*0:0*/ __PVT__sel_wren_cohc;
        CData/*0:0*/ __PVT__wrvalid_cache;
        CData/*0:0*/ __PVT__rden_cache;
        CData/*0:0*/ __PVT__rden_cache_pre;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__cache_hit;
    };
    struct {
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__wren_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__in_pendingq_cache;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__cache_hit;
        CData/*0:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__valid_rddata_cache;
        CData/*0:0*/ __Vcellinp__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__wren_cache;
        VL_IN16(__PVT__wren_cache_vector_dirc,15,0);
        VL_IN16(__PVT__cache_index_wr_dirc,9,0);
        VL_IN16(__PVT__cache_index_rd_dirc,9,0);
        VL_IN16(__PVT__wren_cache_vector_cohc,15,0);
        VL_IN16(__PVT__cache_index_wr_cohc,9,0);
        VL_IN16(__PVT__cache_index_rd_cohc,9,0);
        VL_IN16(__PVT__cache_index_rd_cohc_pre,9,0);
        VL_OUT16(__PVT__cachehit_vector,15,0);
        VL_OUT16(__PVT__validity_vector,15,0);
        VL_IN16(__PVT__evict_this_one,15,0);
        VL_OUT16(__PVT__in_pendingq_cache_all,15,0);
        VL_OUT16(__PVT__cache_index_wr_cohc_or_dirc,9,0);
        SData/*15:0*/ __PVT__valid_rddata_cache_s;
        SData/*15:0*/ __PVT__in_pendingq_cache_s;
        SData/*15:0*/ __PVT__sel_cache_rd;
        SData/*15:0*/ __PVT__wren_cache_vector;
        SData/*9:0*/ __PVT__cache_index_wr;
        SData/*9:0*/ __PVT__cache_index_rd;
        SData/*9:0*/ __PVT__cache_index_rd_pre;
        VL_IN(__PVT__wrdata_cache_dirc,31,0);
        VL_IN(__PVT__wrdata_cache_cohc,31,0);
        VL_OUT(__PVT__rddata_cache,31,0);
        IData/*31:0*/ __PVT__wrdata_cache;
        IData/*31:0*/ __PVT__p;
        IData/*31:0*/ __PVT__q;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__rddata_cache;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        VL_IN64(__PVT__cache_tag_wr_dirc,35,0);
        VL_IN64(__PVT__cache_tag_rd_dirc,35,0);
        VL_IN64(__PVT__cache_tag_wr_cohc,35,0);
        VL_IN64(__PVT__cache_tag_rd_cohc,35,0);
    };
    struct {
        VL_OUT64(__PVT__rdout_tag_value,35,0);
        QData/*35:0*/ __PVT__cache_tag_wr;
        QData/*35:0*/ __PVT__cache_tag_rd;
        QData/*35:0*/ __PVT__cache_tag_rd_nxt;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__1__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__2__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__6__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__7__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__8__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__9__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__10__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__11__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__12__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__13__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__14__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vcellout__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__rdout_tag_value;
        QData/*35:0*/ __Vdly__cache_tag_rd;
        VlUnpacked<IData/*31:0*/, 16> __PVT__rddata_cache_s;
        VlUnpacked<QData/*35:0*/, 16> __PVT__rdout_tag_value_s;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_nway_cache__Ca_CB24(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_nway_cache__Ca_CB24();
    VL_UNCOPYABLE(Vsig_topology_top_sig_nway_cache__Ca_CB24);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
