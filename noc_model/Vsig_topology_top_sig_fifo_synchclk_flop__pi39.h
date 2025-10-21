// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_FIFO_SYNCHCLK_FLOP__PI39_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_FIFO_SYNCHCLK_FLOP__PI39_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_fifo_synchclk_flop__pi39 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__fifo_clk,0,0);
        VL_IN8(__PVT__rstb,0,0);
        VL_IN8(__PVT__fifo_wren,0,0);
        VL_IN8(__PVT__fifo_rden,0,0);
        VL_OUT8(__PVT__fifo_full,0,0);
        VL_OUT8(__PVT__fifo_empty,0,0);
        VL_OUT8(__PVT__fiforoom_atlst3,0,0);
        CData/*4:0*/ __PVT__wr_ptr;
        CData/*4:0*/ __PVT__wr_ptr_nxt;
        CData/*4:0*/ __PVT__rd_ptr;
        CData/*4:0*/ __PVT__rd_ptr_nxt;
        CData/*5:0*/ __PVT__num_entries;
        CData/*5:0*/ __PVT__num_entries_nxt;
        CData/*0:0*/ __PVT__fifo_full_nxt;
        CData/*0:0*/ __PVT__fifo_empty_nxt;
        CData/*0:0*/ __PVT__fiforoom_atlst3_nxt;
        CData/*4:0*/ __Vdly__wr_ptr;
        CData/*4:0*/ __Vdly__rd_ptr;
        CData/*5:0*/ __Vdly__num_entries;
        CData/*0:0*/ __Vdly__fifo_full;
        CData/*0:0*/ __Vdly__fifo_empty;
        CData/*0:0*/ __Vdly__fiforoom_atlst3;
        CData/*0:0*/ __VdlySet__fifo_loc__v0;
        CData/*0:0*/ __VdlySet__fifo_loc__v1;
        CData/*0:0*/ __VdlySet__fifo_loc__v2;
        CData/*0:0*/ __VdlySet__fifo_loc__v3;
        CData/*0:0*/ __VdlySet__fifo_loc__v4;
        CData/*0:0*/ __VdlySet__fifo_loc__v5;
        CData/*0:0*/ __VdlySet__fifo_loc__v6;
        CData/*0:0*/ __VdlySet__fifo_loc__v7;
        CData/*0:0*/ __VdlySet__fifo_loc__v8;
        CData/*0:0*/ __VdlySet__fifo_loc__v9;
        CData/*0:0*/ __VdlySet__fifo_loc__v10;
        CData/*0:0*/ __VdlySet__fifo_loc__v11;
        CData/*0:0*/ __VdlySet__fifo_loc__v12;
        CData/*0:0*/ __VdlySet__fifo_loc__v13;
        CData/*0:0*/ __VdlySet__fifo_loc__v14;
        CData/*0:0*/ __VdlySet__fifo_loc__v15;
        CData/*0:0*/ __VdlySet__fifo_loc__v16;
        CData/*0:0*/ __VdlySet__fifo_loc__v17;
        CData/*0:0*/ __VdlySet__fifo_loc__v18;
        CData/*0:0*/ __VdlySet__fifo_loc__v19;
        CData/*0:0*/ __VdlySet__fifo_loc__v20;
        CData/*0:0*/ __VdlySet__fifo_loc__v21;
        CData/*0:0*/ __VdlySet__fifo_loc__v22;
        CData/*0:0*/ __VdlySet__fifo_loc__v23;
        CData/*0:0*/ __VdlySet__fifo_loc__v24;
        CData/*0:0*/ __VdlySet__fifo_loc__v25;
        CData/*0:0*/ __VdlySet__fifo_loc__v26;
        CData/*0:0*/ __VdlySet__fifo_loc__v27;
        CData/*0:0*/ __VdlySet__fifo_loc__v28;
        CData/*0:0*/ __VdlySet__fifo_loc__v29;
        CData/*0:0*/ __VdlySet__fifo_loc__v30;
        CData/*0:0*/ __VdlySet__fifo_loc__v31;
        VL_IN16(__PVT__fifo_wrdata,14,0);
        VL_OUT16(__PVT__fifo_rddata,14,0);
        SData/*14:0*/ __VdlyVal__fifo_loc__v0;
        SData/*14:0*/ __VdlyVal__fifo_loc__v1;
        SData/*14:0*/ __VdlyVal__fifo_loc__v2;
        SData/*14:0*/ __VdlyVal__fifo_loc__v3;
        SData/*14:0*/ __VdlyVal__fifo_loc__v4;
        SData/*14:0*/ __VdlyVal__fifo_loc__v5;
        SData/*14:0*/ __VdlyVal__fifo_loc__v6;
        SData/*14:0*/ __VdlyVal__fifo_loc__v7;
    };
    struct {
        SData/*14:0*/ __VdlyVal__fifo_loc__v8;
        SData/*14:0*/ __VdlyVal__fifo_loc__v9;
        SData/*14:0*/ __VdlyVal__fifo_loc__v10;
        SData/*14:0*/ __VdlyVal__fifo_loc__v11;
        SData/*14:0*/ __VdlyVal__fifo_loc__v12;
        SData/*14:0*/ __VdlyVal__fifo_loc__v13;
        SData/*14:0*/ __VdlyVal__fifo_loc__v14;
        SData/*14:0*/ __VdlyVal__fifo_loc__v15;
        SData/*14:0*/ __VdlyVal__fifo_loc__v16;
        SData/*14:0*/ __VdlyVal__fifo_loc__v17;
        SData/*14:0*/ __VdlyVal__fifo_loc__v18;
        SData/*14:0*/ __VdlyVal__fifo_loc__v19;
        SData/*14:0*/ __VdlyVal__fifo_loc__v20;
        SData/*14:0*/ __VdlyVal__fifo_loc__v21;
        SData/*14:0*/ __VdlyVal__fifo_loc__v22;
        SData/*14:0*/ __VdlyVal__fifo_loc__v23;
        SData/*14:0*/ __VdlyVal__fifo_loc__v24;
        SData/*14:0*/ __VdlyVal__fifo_loc__v25;
        SData/*14:0*/ __VdlyVal__fifo_loc__v26;
        SData/*14:0*/ __VdlyVal__fifo_loc__v27;
        SData/*14:0*/ __VdlyVal__fifo_loc__v28;
        SData/*14:0*/ __VdlyVal__fifo_loc__v29;
        SData/*14:0*/ __VdlyVal__fifo_loc__v30;
        SData/*14:0*/ __VdlyVal__fifo_loc__v31;
        VlUnpacked<SData/*14:0*/, 32> __PVT__fifo_loc_nxt;
        VlUnpacked<SData/*14:0*/, 32> __PVT__fifo_loc;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_fifo_synchclk_flop__pi39(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_fifo_synchclk_flop__pi39();
    VL_UNCOPYABLE(Vsig_topology_top_sig_fifo_synchclk_flop__pi39);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
