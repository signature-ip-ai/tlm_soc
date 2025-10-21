// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_SYN_SRAM_FLOP_512BIT__F90_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_SYN_SRAM_FLOP_512BIT__F90_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_syn_sram_flop_512bit__F90 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__fifo_clk,0,0);
    VL_IN8(__PVT__rstb,0,0);
    VL_IN8(__PVT__wren_0,0,0);
    VL_IN8(__PVT__wren_1,0,0);
    VL_IN8(__PVT__wren_2,0,0);
    VL_IN8(__PVT__wren_3,0,0);
    VL_IN8(__PVT__rden_0,0,0);
    VL_IN8(__PVT__rden_1,0,0);
    VL_IN8(__PVT__rden_2,0,0);
    VL_IN8(__PVT__rden_3,0,0);
    VL_IN8(__PVT__read_compbuf_datareuse,0,0);
    VL_IN8(__PVT__dealloc_compfifo,0,0);
    VL_IN8(__PVT__dealloc_unused_compbuf,0,0);
    VL_OUT8(__PVT__valid_location,3,0);
    VL_OUT8(__PVT__empty,0,0);
    VL_IN8(__PVT__allocated_compbuf,0,0);
    VL_OUT8(__PVT__buff_avail,0,0);
    CData/*3:0*/ __PVT__valid_location_nxt;
    CData/*3:0*/ __PVT__clr_valid_location;
    CData/*3:0*/ __PVT__wren_0123;
    CData/*3:0*/ __PVT__rden_0123;
    CData/*0:0*/ __PVT__buff_avail_nxt;
    CData/*3:0*/ __PVT__got_wr;
    CData/*3:0*/ __PVT__got_wr_nxt;
    CData/*3:0*/ __PVT__got_wrrd;
    CData/*3:0*/ __PVT__got_wrrd_nxt;
    CData/*0:0*/ __PVT__got_wrrd_all;
    CData/*3:0*/ __Vdly__valid_location;
    CData/*3:0*/ __Vdly__got_wr;
    CData/*3:0*/ __Vdly__got_wrrd;
    CData/*0:0*/ __Vdly__buff_avail;
    VL_INW(__PVT__wrdata_0,143,0,5);
    VL_INW(__PVT__wrdata_1,143,0,5);
    VL_INW(__PVT__wrdata_2,143,0,5);
    VL_INW(__PVT__wrdata_3,143,0,5);
    VL_OUTW(__PVT__rddata,511,0,16);
    VlWide<5>/*143:0*/ __PVT__fifo_loc0;
    VlWide<5>/*143:0*/ __PVT__fifo_loc0_nxt;
    VlWide<5>/*143:0*/ __PVT__fifo_loc1;
    VlWide<5>/*143:0*/ __PVT__fifo_loc1_nxt;
    VlWide<5>/*143:0*/ __PVT__fifo_loc2;
    VlWide<5>/*143:0*/ __PVT__fifo_loc2_nxt;
    VlWide<5>/*143:0*/ __PVT__fifo_loc3;
    VlWide<5>/*143:0*/ __PVT__fifo_loc3_nxt;
    VlWide<5>/*143:0*/ __Vdly__fifo_loc0;
    VlWide<5>/*143:0*/ __Vdly__fifo_loc1;
    VlWide<5>/*143:0*/ __Vdly__fifo_loc2;
    VlWide<5>/*143:0*/ __Vdly__fifo_loc3;
    VL_OUT64(__PVT__rdbe,63,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_syn_sram_flop_512bit__F90(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_syn_sram_flop_512bit__F90();
    VL_UNCOPYABLE(Vsig_topology_top_sig_syn_sram_flop_512bit__F90);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
