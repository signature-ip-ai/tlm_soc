// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_RCV_DATPROC__PI14_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_RCV_DATPROC__PI14_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_chi_crdt_update__N8;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_rcv_datproc__pi14 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_chi_crdt_update__N8* __PVT__sig_chi_crdt_update_datproc;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__cc_gclk,0,0);
    VL_IN8(__PVT__ic_RX_DATFLITPEND,0,0);
    VL_IN8(__PVT__ic_RX_DATFLITV,0,0);
    VL_OUT8(__PVT__ic_RX_DATLCRDV,0,0);
    VL_IN8(__PVT__enable_init_update,0,0);
    VL_IN8(__PVT__l3_datvalid,0,0);
    VL_IN8(__PVT__l3_rddata_resperr,1,0);
    VL_OUT8(__PVT__porthas_datgnt_fromcc,0,0);
    VL_OUT8(__PVT__wren_which128,3,0);
    VL_OUT8(__PVT__rcv_datproc_wr_to_compbuff,0,0);
    VL_OUT8(__PVT__wren_drespcmdfifo,0,0);
    VL_OUT8(__PVT__wren_memrespcmdq,0,0);
    VL_OUT8(__PVT__index_outq_rcvdata,5,0);
    VL_IN8(__PVT__compq_buff_to_rcvdatproc_1st,4,0);
    VL_IN8(__PVT__compq_buff_to_rcvdatproc_2nd,4,0);
    VL_IN8(__PVT__vld_compq_buff_to_rcvdatproc_2nd,0,0);
    VL_IN8(__PVT__vld_compbuf_2nd_for_snpdata,0,0);
    CData/*0:0*/ __PVT__drive_xLCRDV_data;
    CData/*0:0*/ __PVT__send_datacrdt_update;
    CData/*0:0*/ __PVT__data_fwdbit_cache;
    CData/*0:0*/ __PVT__opcode_copyback_nocopyback;
    CData/*0:0*/ __PVT__opcode_writedatacancel;
    CData/*0:0*/ __PVT__opcode_snprespdata;
    CData/*0:0*/ __PVT__opcode_compdata;
    CData/*0:0*/ __PVT__opcode_valid;
    CData/*4:0*/ __PVT__compq_buff_to_rcvdatproc;
    CData/*0:0*/ __PVT__wren_memrespcmdq_nosnp;
    CData/*0:0*/ __Vdly__ic_RX_DATLCRDV;
    VL_IN16(__PVT__l3_rddata_txnid,12,0);
    SData/*11:0*/ __PVT__data_txnid_cache;
    VL_INW(__PVT__ic_RX_DATFLIT,679,0,22);
    VL_INW(__PVT__l3_datflit,511,0,16);
    VL_OUT(__PVT__wren_compfifo,31,0);
    VL_OUTW(__PVT__wrdata_dataflit,511,0,16);
    VL_OUTW(__PVT__wrdata_drespcmdfifo,108,0,4);
    VL_OUTW(__PVT__wrdata_memrespcmdq,108,0,4);
    IData/*31:0*/ __PVT__wren_drespcmdfifo_s;
    IData/*31:0*/ __PVT__wren_memrespcmdq_nosnp_s;
    VL_OUT64(__PVT__wrbe_dataflit,63,0);
    VlWide<22>/*679:0*/ __PVT__ic_RX_DATFLIT_s;
    VlWide<4>/*103:0*/ __PVT__wrdata_drespcmdfifo_s;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_rcv_datproc__pi14(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_rcv_datproc__pi14();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_rcv_datproc__pi14);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
