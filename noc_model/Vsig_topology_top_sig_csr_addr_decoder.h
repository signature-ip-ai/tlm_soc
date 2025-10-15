// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CSR_ADDR_DECODER_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CSR_ADDR_DECODER_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_csr_addr_decoder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_wren_prog,0,0);
    VL_IN8(__PVT__i_rden_prog,0,0);
    VL_OUT8(__PVT__o_rden_csr_top_or_clus,1,0);
    VL_OUT8(__PVT__o_wren_csr_top_or_clus,1,0);
    VL_OUT8(__PVT__o_rdy_prog,0,0);
    VL_OUT8(__PVT__o_rddata_valid_prog,0,0);
    CData/*1:0*/ __PVT__r_rden_csr_top_or_clus;
    CData/*0:0*/ __Vdly__o_rddata_valid_prog;
    CData/*1:0*/ __Vdly__r_rden_csr_top_or_clus;
    VL_IN(__PVT__i_address_prog,31,0);
    VL_IN(__PVT__i_rd_csr_top,31,0);
    VL_IN(__PVT__i_rd_csr_clus_0,31,0);
    VL_OUT(__PVT__o_rddata_prog,31,0);
    IData/*31:0*/ __PVT__reg_rddata_prog_nxt;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_csr_addr_decoder(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_csr_addr_decoder();
    VL_UNCOPYABLE(Vsig_topology_top_sig_csr_addr_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
