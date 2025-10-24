// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_FIFO_SYNCHCLK_FLOP_MATCH__PI35_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_FIFO_SYNCHCLK_FLOP_MATCH__PI35_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__fifo_clk,0,0);
    VL_IN8(__PVT__rstb,0,0);
    VL_IN8(__PVT__fifo_wren,0,0);
    VL_IN8(__PVT__fifo_rden,0,0);
    VL_OUT8(__PVT__fifo_full,0,0);
    VL_OUT8(__PVT__fifo_empty,0,0);
    VL_OUT8(__PVT__fiforoom_atlst4,0,0);
    VL_OUT8(__PVT__fifohas_1room,0,0);
    VL_OUT8(__PVT__fifohas_2room,0,0);
    VL_OUT8(__PVT__fifohas_3room,0,0);
    VL_OUT8(__PVT__itis_a_match,0,0);
    CData/*2:0*/ __PVT__wr_ptr;
    CData/*2:0*/ __PVT__wr_ptr_nxt;
    CData/*2:0*/ __PVT__rd_ptr;
    CData/*2:0*/ __PVT__rd_ptr_nxt;
    CData/*3:0*/ __PVT__num_entries;
    CData/*3:0*/ __PVT__num_entries_nxt;
    CData/*3:0*/ __PVT__num_room;
    CData/*3:0*/ __PVT__num_room_nxt;
    CData/*0:0*/ __PVT__fifo_full_nxt;
    CData/*0:0*/ __PVT__fifo_empty_nxt;
    CData/*0:0*/ __PVT__fiforoom_atlst4_nxt;
    CData/*0:0*/ __PVT__fifohas_1room_nxt;
    CData/*0:0*/ __PVT__fifohas_2room_nxt;
    CData/*0:0*/ __PVT__fifohas_3room_nxt;
    CData/*7:0*/ __PVT__fifo_loc_valid;
    CData/*7:0*/ __PVT__fifo_loc_valid_nxt;
    CData/*7:0*/ __PVT__match_loc_all;
    CData/*2:0*/ __Vdly__wr_ptr;
    CData/*2:0*/ __Vdly__rd_ptr;
    CData/*3:0*/ __Vdly__num_entries;
    CData/*3:0*/ __Vdly__num_room;
    CData/*0:0*/ __Vdly__fifo_full;
    CData/*0:0*/ __Vdly__fifo_empty;
    CData/*0:0*/ __Vdly__fiforoom_atlst4;
    CData/*7:0*/ __Vdly__fifo_loc_valid;
    CData/*0:0*/ __Vdly__fifohas_1room;
    CData/*0:0*/ __Vdly__fifohas_2room;
    CData/*0:0*/ __Vdly__fifohas_3room;
    CData/*0:0*/ __VdlySet__fifo_loc__v0;
    CData/*0:0*/ __VdlySet__fifo_loc__v1;
    CData/*0:0*/ __VdlySet__fifo_loc__v2;
    CData/*0:0*/ __VdlySet__fifo_loc__v3;
    CData/*0:0*/ __VdlySet__fifo_loc__v4;
    CData/*0:0*/ __VdlySet__fifo_loc__v5;
    CData/*0:0*/ __VdlySet__fifo_loc__v6;
    CData/*0:0*/ __VdlySet__fifo_loc__v7;
    VL_INW(__PVT__fifo_wrdata,154,0,5);
    VL_OUTW(__PVT__fifo_rddata,154,0,5);
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v0;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v1;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v2;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v3;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v4;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v5;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v6;
    VlWide<5>/*154:0*/ __VdlyVal__fifo_loc__v7;
    VL_IN64(__PVT__match_data_in,45,0);
    VlUnpacked<VlWide<5>/*154:0*/, 8> __PVT__fifo_loc_nxt;
    VlUnpacked<VlWide<5>/*154:0*/, 8> __PVT__fifo_loc;
    VlUnpacked<QData/*45:0*/, 8> __PVT__fifo_loc_match_field;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35();
    VL_UNCOPYABLE(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
