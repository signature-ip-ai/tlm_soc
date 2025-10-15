// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_PIPELINE_CHI__PI27_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_PIPELINE_CHI__PI27_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_cmn_pipeline_ff__D2;
class Vsig_topology_top_sig_cmn_pipeline_ff__D2ab;
class Vsig_topology_top_sig_cmn_pipeline_ff__D4c;
class Vsig_topology_top_sig_cmn_pipeline_ff__D9a;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cmn_pipeline_chi__pi27 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_cmn_pipeline_ff__D4c* __PVT__i_pipe_rxrsp_slv;
    Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* __PVT__i_pipe_rxdat_slv;
    Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* __PVT__i_pipe_rxdat_mst;
    Vsig_topology_top_sig_cmn_pipeline_ff__D9a* __PVT__i_pipe_rxsnp_mst;
    Vsig_topology_top_sig_cmn_pipeline_ff__D2* __PVT__nodeport_configuration__DOT__i_pipe_sact;
    Vsig_topology_top_sig_cmn_pipeline_ff__D2* __PVT__nodeport_configuration__DOT__i_pipe_rxlink;
    Vsig_topology_top_sig_cmn_pipeline_ff__D2* __PVT__nodeport_configuration__DOT__i_pipe_txlink_slv;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset_n,0,0);
        VL_IN8(__PVT__rxsactive_slv,0,0);
        VL_OUT8(__PVT__txsactive_slv,0,0);
        VL_IN8(__PVT__rxlinkactivereq_slv,0,0);
        VL_OUT8(__PVT__rxlinkactiveack_slv,0,0);
        VL_IN8(__PVT__rxreqflitpend_slv,0,0);
        VL_IN8(__PVT__rxreqflitv_slv,0,0);
        VL_OUT8(__PVT__rxreqlcrdv_slv,0,0);
        VL_IN8(__PVT__rxrspflitpend_slv,0,0);
        VL_IN8(__PVT__rxrspflitv_slv,0,0);
        VL_OUT8(__PVT__rxrsplcrdv_slv,0,0);
        VL_IN8(__PVT__rxdatflitpend_slv,0,0);
        VL_IN8(__PVT__rxdatflitv_slv,0,0);
        VL_OUT8(__PVT__rxdatlcrdv_slv,0,0);
        VL_OUT8(__PVT__txlinkactivereq_slv,0,0);
        VL_IN8(__PVT__txlinkactiveack_slv,0,0);
        VL_OUT8(__PVT__txrspflitpend_slv,0,0);
        VL_OUT8(__PVT__txrspflitv_slv,0,0);
        VL_IN8(__PVT__txrsplcrdv_slv,0,0);
        VL_OUT8(__PVT__txdatflitpend_slv,0,0);
        VL_OUT8(__PVT__txdatflitv_slv,0,0);
        VL_IN8(__PVT__txdatlcrdv_slv,0,0);
        VL_OUT8(__PVT__txsnpflitpend_slv,0,0);
        VL_OUT8(__PVT__txsnpflitv_slv,0,0);
        VL_IN8(__PVT__txsnplcrdv_slv,0,0);
        VL_IN8(__PVT__syscoreq_slv,0,0);
        VL_OUT8(__PVT__syscoack_slv,0,0);
        VL_IN8(__PVT__txsactive_mst,0,0);
        VL_OUT8(__PVT__rxsactive_mst,0,0);
        VL_IN8(__PVT__txlinkactivereq_mst,0,0);
        VL_OUT8(__PVT__txlinkactiveack_mst,0,0);
        VL_OUT8(__PVT__rxreqflitpend_mst,0,0);
        VL_OUT8(__PVT__rxreqflitv_mst,0,0);
        VL_IN8(__PVT__rxreqlcrdv_mst,0,0);
        VL_OUT8(__PVT__rxrspflitpend_mst,0,0);
        VL_OUT8(__PVT__rxrspflitv_mst,0,0);
        VL_IN8(__PVT__rxrsplcrdv_mst,0,0);
        VL_OUT8(__PVT__rxdatflitpend_mst,0,0);
        VL_OUT8(__PVT__rxdatflitv_mst,0,0);
        VL_IN8(__PVT__rxdatlcrdv_mst,0,0);
        VL_OUT8(__PVT__rxlinkactivereq_mst,0,0);
        VL_IN8(__PVT__rxlinkactiveack_mst,0,0);
        VL_IN8(__PVT__txrspflitpend_mst,0,0);
        VL_IN8(__PVT__txrspflitv_mst,0,0);
        VL_OUT8(__PVT__txrsplcrdv_mst,0,0);
        VL_IN8(__PVT__txdatflitpend_mst,0,0);
        VL_IN8(__PVT__txdatflitv_mst,0,0);
        VL_OUT8(__PVT__txdatlcrdv_mst,0,0);
        VL_IN8(__PVT__txsnpflitpend_mst,0,0);
        VL_IN8(__PVT__txsnpflitv_mst,0,0);
        VL_OUT8(__PVT__txsnplcrdv_mst,0,0);
        VL_OUT8(__PVT__syscoreq_mst,0,0);
        VL_IN8(__PVT__syscoack_mst,0,0);
        CData/*1:0*/ __Vcellout__nodeport_configuration__DOT__i_pipe_sact__data_out;
        CData/*1:0*/ __Vcellinp__nodeport_configuration__DOT__i_pipe_sact__data_in;
        CData/*1:0*/ __Vcellout__nodeport_configuration__DOT__i_pipe_rxlink__data_out;
        CData/*1:0*/ __Vcellinp__nodeport_configuration__DOT__i_pipe_rxlink__data_in;
        CData/*1:0*/ __Vcellout__nodeport_configuration__DOT__i_pipe_txlink_slv__data_out;
        CData/*1:0*/ __Vcellinp__nodeport_configuration__DOT__i_pipe_txlink_slv__data_in;
        CData/*0:0*/ __PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals;
        CData/*0:0*/ __PVT__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals_nxt;
        CData/*0:0*/ __Vdly__nodeport_configuration__DOT__hn_to_sn_configuration__DOT__unused_signals;
        VL_INW(__PVT__rxreqflit_slv,150,0,5);
    };
    struct {
        VL_INW(__PVT__rxrspflit_slv,72,0,3);
        VL_INW(__PVT__rxdatflit_slv,679,0,22);
        VL_OUTW(__PVT__txrspflit_slv,72,0,3);
        VL_OUTW(__PVT__txdatflit_slv,679,0,22);
        VL_OUTW(__PVT__txsnpflit_slv,150,0,5);
        VL_OUTW(__PVT__rxreqflit_mst,150,0,5);
        VL_OUTW(__PVT__rxrspflit_mst,72,0,3);
        VL_OUTW(__PVT__rxdatflit_mst,679,0,22);
        VL_INW(__PVT__txrspflit_mst,72,0,3);
        VL_INW(__PVT__txdatflit_mst,679,0,22);
        VL_INW(__PVT__txsnpflit_mst,150,0,5);
        VlWide<3>/*75:0*/ __Vcellout__i_pipe_rxrsp_slv__data_out;
        VlWide<3>/*75:0*/ __Vcellinp__i_pipe_rxrsp_slv__data_in;
        VlWide<22>/*682:0*/ __Vcellout__i_pipe_rxdat_slv__data_out;
        VlWide<22>/*682:0*/ __Vcellinp__i_pipe_rxdat_slv__data_in;
        VlWide<22>/*682:0*/ __Vcellout__i_pipe_rxdat_mst__data_out;
        VlWide<22>/*682:0*/ __Vcellinp__i_pipe_rxdat_mst__data_in;
        VlWide<5>/*153:0*/ __Vcellout__i_pipe_rxsnp_mst__data_out;
        VlWide<5>/*153:0*/ __Vcellinp__i_pipe_rxsnp_mst__data_in;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cmn_pipeline_chi__pi27(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cmn_pipeline_chi__pi27();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cmn_pipeline_chi__pi27);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
