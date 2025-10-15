// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_FIFO_SYNCHCLK_FLOP_RBACK__PI63_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_FIFO_SYNCHCLK_FLOP_RBACK__PI63_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi63 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__fifo_clk,0,0);
    VL_IN8(__PVT__rstb,0,0);
    VL_IN8(__PVT__fifo_wren,0,0);
    VL_IN8(__PVT__fifo_rden,0,0);
    VL_OUT8(__PVT__fifo_full,0,0);
    VL_OUT8(__PVT__fifo_empty,0,0);
    VL_IN8(__PVT__snapshot_rdptr,0,0);
    VL_IN8(__PVT__restore_rdptr,0,0);
    CData/*3:0*/ __PVT__wr_ptr_wab;
    CData/*3:0*/ __PVT__wr_ptr_wab_nxt;
    CData/*3:0*/ __PVT__rd_ptr_wab;
    CData/*3:0*/ __PVT__rd_ptr_wab_nxt;
    CData/*2:0*/ __PVT__wr_ptr;
    CData/*2:0*/ __PVT__rd_ptr;
    CData/*0:0*/ __PVT__fifo_full_nxt;
    CData/*0:0*/ __PVT__fifo_empty_nxt;
    CData/*3:0*/ __PVT__rd_ptr_wab_snapshot;
    CData/*3:0*/ __PVT__rd_ptr_wab_snapshot_nxt;
    CData/*3:0*/ __PVT__data_avail;
    CData/*3:0*/ __PVT__data_avail_nxt;
    CData/*3:0*/ __Vdly__wr_ptr_wab;
    CData/*3:0*/ __Vdly__rd_ptr_wab;
    CData/*0:0*/ __Vdly__fifo_full;
    CData/*0:0*/ __Vdly__fifo_empty;
    CData/*3:0*/ __Vdly__rd_ptr_wab_snapshot;
    CData/*3:0*/ __Vdly__data_avail;
    CData/*0:0*/ __VdlySet__fifo_loc__v0;
    CData/*0:0*/ __VdlySet__fifo_loc__v1;
    CData/*0:0*/ __VdlySet__fifo_loc__v2;
    CData/*0:0*/ __VdlySet__fifo_loc__v3;
    CData/*0:0*/ __VdlySet__fifo_loc__v4;
    CData/*0:0*/ __VdlySet__fifo_loc__v5;
    CData/*0:0*/ __VdlySet__fifo_loc__v6;
    CData/*0:0*/ __VdlySet__fifo_loc__v7;
    VL_INW(__PVT__fifo_wrdata,679,0,22);
    VL_OUTW(__PVT__fifo_rddata,679,0,22);
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v0;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v1;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v2;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v3;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v4;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v5;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v6;
    VlWide<22>/*679:0*/ __VdlyVal__fifo_loc__v7;
    VlUnpacked<VlWide<22>/*679:0*/, 8> __PVT__fifo_loc_nxt;
    VlUnpacked<VlWide<22>/*679:0*/, 8> __PVT__fifo_loc;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi63(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi63();
    VL_UNCOPYABLE(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi63);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
