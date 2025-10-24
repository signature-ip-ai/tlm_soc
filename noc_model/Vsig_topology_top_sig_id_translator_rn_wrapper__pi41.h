// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_RN_WRAPPER__PI41_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_RN_WRAPPER__PI41_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_id_translator_rn_req__pi55;
class Vsig_topology_top_sig_id_translator_rn_snp__pi54;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_id_translator_rn_wrapper__pi41 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_id_translator_rn_snp__pi54* __PVT__i_sig_id_translator_rn_snp;
    Vsig_topology_top_sig_id_translator_rn_req__pi55* __PVT__i_sig_id_translator_rn_req;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__tx_rsp_v,0,0);
        VL_IN8(__PVT__tx_rsp_opcode,4,0);
        VL_IN8(__PVT__tx_dat_v,0,0);
        VL_IN8(__PVT__ic_rx_req_v,0,0);
        VL_IN8(__PVT__ic_rx_req_lkly_shared,0,0);
        VL_IN8(__PVT__ic_rx_req_opcode,6,0);
        VL_IN8(__PVT__ic_rx_req_expcompack,0,0);
        VL_IN8(__PVT__tx_snp_v,0,0);
        VL_IN8(__PVT__tx_snp_opcode,4,0);
        VL_IN8(__PVT__vc0_rx_rsp_v,0,0);
        VL_IN8(__PVT__vc0_rx_rsp_opcode,4,0);
        VL_IN8(__PVT__vc1_rx_rsp_v,0,0);
        VL_IN8(__PVT__vc1_rx_rsp_opcode,4,0);
        VL_IN8(__PVT__vc0_rx_dat_v,0,0);
        VL_IN8(__PVT__vc0_rx_dat_opcode,3,0);
        VL_IN8(__PVT__vc1_rx_dat_v,0,0);
        VL_IN8(__PVT__vc1_rx_dat_opcode,3,0);
        VL_OUT8(__PVT__id_translator_full_req,0,0);
        VL_OUT8(__PVT__id_translator_full_snp,0,0);
        VL_OUT8(__PVT__id_translator_req_snp_empty,0,0);
        VL_OUT8(__PVT__id_translator_hs_pending_txn_req,0,0);
        VL_OUT8(__PVT__id_translator_hs_pending_txn_snp,0,0);
        CData/*0:0*/ __PVT__id_translator_req_empty;
        CData/*0:0*/ __PVT__id_translator_snp_empty;
        CData/*0:0*/ __PVT__vc0_rx_rsp_v_req;
        CData/*0:0*/ __PVT__vc1_rx_rsp_v_req;
        CData/*0:0*/ __PVT__vc0_rx_dat_v_req;
        CData/*0:0*/ __PVT__vc1_rx_dat_v_req;
        CData/*0:0*/ __PVT__vc0_rx_rsp_v_snp;
        CData/*0:0*/ __PVT__vc1_rx_rsp_v_snp;
        CData/*0:0*/ __PVT__vc0_rx_dat_v_snp;
        CData/*0:0*/ __PVT__vc1_rx_dat_v_snp;
        VL_IN16(__PVT__tx_rsp_dbid_from_hn,11,0);
        VL_IN16(__PVT__tx_rsp_txnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_rsp_dbid_to_rn,11,0);
        VL_IN16(__PVT__tx_dat_dbid_from_hn,11,0);
        VL_IN16(__PVT__tx_dat_txnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_dat_dbid_to_rn,11,0);
        VL_IN16(__PVT__ic_rx_req_txnid_from_rn,11,0);
        VL_IN16(__PVT__tx_snp_txnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_snp_txnid_to_rn,11,0);
        VL_IN16(__PVT__vc0_rx_rsp_txnid_from_rn,11,0);
        VL_OUT16(__PVT__vc0_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_rsp_txnid_from_rn,11,0);
        VL_OUT16(__PVT__vc1_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_dbid_from_rn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_dbid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_dbid_from_rn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_dbid_to_hn,11,0);
        SData/*11:0*/ __PVT__vc0_rx_rsp_txnid_to_hn_req;
        SData/*11:0*/ __PVT__vc0_rx_rsp_txnid_to_hn_snp;
        SData/*11:0*/ __PVT__vc1_rx_rsp_txnid_to_hn_req;
        SData/*11:0*/ __PVT__vc1_rx_rsp_txnid_to_hn_snp;
        SData/*11:0*/ __PVT__vc0_rx_dat_txnid_to_hn_req;
        SData/*11:0*/ __PVT__vc0_rx_dat_txnid_to_hn_snp;
        SData/*11:0*/ __PVT__vc0_rx_dat_dbid_to_hn_req;
        SData/*11:0*/ __PVT__vc0_rx_dat_dbid_to_hn_snp;
        SData/*11:0*/ __PVT__vc1_rx_dat_txnid_to_hn_req;
    };
    struct {
        SData/*11:0*/ __PVT__vc1_rx_dat_txnid_to_hn_snp;
        SData/*11:0*/ __PVT__vc1_rx_dat_dbid_to_hn_req;
        SData/*11:0*/ __PVT__vc1_rx_dat_dbid_to_hn_snp;
        SData/*11:0*/ __PVT__vc0_rx_rsp_txnid_to_hn_muxed;
        SData/*11:0*/ __PVT__vc1_rx_rsp_txnid_to_hn_muxed;
        SData/*11:0*/ __PVT__vc0_rx_dat_txnid_to_hn_muxed;
        SData/*11:0*/ __PVT__vc0_rx_dat_dbid_to_hn_muxed;
        SData/*11:0*/ __PVT__vc1_rx_dat_txnid_to_hn_muxed;
        SData/*11:0*/ __PVT__vc1_rx_dat_dbid_to_hn_muxed;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_id_translator_rn_wrapper__pi41(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_id_translator_rn_wrapper__pi41();
    VL_UNCOPYABLE(Vsig_topology_top_sig_id_translator_rn_wrapper__pi41);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
