// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_RCV_RESPPROC_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_RCV_RESPPROC_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_chi_crdt_update__N8;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_rcv_respproc final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_chi_crdt_update__N8* __PVT__sig_crdt_update_resp;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__cc_gclk,0,0);
    VL_IN8(__PVT__ic_RX_RSPFLITPEND,0,0);
    VL_IN8(__PVT__ic_RX_RSPFLITV,0,0);
    VL_OUT8(__PVT__ic_RX_RSPLCRDV,0,0);
    VL_IN8(__PVT__enable_init_update,0,0);
    VL_IN8(__PVT__send_respcrdt_update_cohc,0,0);
    VL_OUT8(__PVT__wren_respcmdfifo,0,0);
    VL_IN8(__PVT__l3_rspvalid,0,0);
    VL_OUT8(__PVT__porthas_rspgnt_fromcc,0,0);
    CData/*0:0*/ __PVT__respis_anylegal_opcode;
    CData/*0:0*/ __PVT__drive_xLCRDV_resp_cohc;
    CData/*0:0*/ __PVT__drive_xLCRDV_resp;
    CData/*0:0*/ __PVT__RX_RSPFLITV;
    CData/*0:0*/ __PVT__resp_src_l3;
    CData/*0:0*/ __Vdly__ic_RX_RSPLCRDV;
    VL_INW(__PVT__ic_RX_RSPFLIT,72,0,3);
    VL_OUTW(__PVT__wrdata_respcmdfifo,73,0,3);
    VL_INW(__PVT__l3_rspflit,72,0,3);
    VlWide<3>/*72:0*/ __PVT__RX_RSPFLIT;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_rcv_respproc(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_rcv_respproc();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_rcv_respproc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
