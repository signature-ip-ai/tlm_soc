// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_COMMON_PORTTOP__PI8_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_COMMON_PORTTOP__PI8_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_l3_rxtop__pi22;
class Vsig_topology_top_sig_l3_txtop__pi23;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_common_porttop__pi8 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_l3_rxtop__pi22* __PVT__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0;
    Vsig_topology_top_sig_l3_txtop__pi23* __PVT__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__intfrx_clk,0,0);
        VL_IN8(__PVT__rx_intfrx_gclk,0,0);
        VL_IN8(__PVT__tx_intfrx_gclk,0,0);
        VL_IN8(__PVT__rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__rx_ic_gclk,0,0);
        VL_IN8(__PVT__tx_ic_gclk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__myproc_id,2,0);
        VL_OUT8(__PVT__ctrlr_port_or_ic_rx_is_inactive,0,0);
        VL_OUT8(__PVT__activate_ctrlr_port_or_ic_tx_clk,0,0);
        VL_OUT8(__PVT__rx_activate_clk,0,0);
        VL_OUT8(__PVT__tx_is_inactive,0,0);
        VL_IN8(__PVT__ic_RX_SNPFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_SNPFLITV,0,0);
        VL_IN8(__PVT__ic_RX_SNPFLIT_snp_or_req_bit,0,0);
        VL_OUT8(__PVT__ic_RX_SNPLCRDV_VC0,0,0);
        VL_OUT8(__PVT__ic_RX_SNPLCRDV_VC1,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLITV,0,0);
        VL_IN8(__PVT__ic_RX_RSPFLIT_metadata,5,0);
        VL_OUT8(__PVT__ic_RX_RSPLCRDV_VC0,0,0);
        VL_OUT8(__PVT__ic_RX_RSPLCRDV_VC1,0,0);
        VL_IN8(__PVT__ic_RX_DATFLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_DATFLITV,0,0);
        VL_IN8(__PVT__ic_RX_DATFLIT_metadata,5,0);
        VL_OUT8(__PVT__ic_RX_DATLCRDV_VC0,0,0);
        VL_OUT8(__PVT__ic_RX_DATLCRDV_VC1,0,0);
        VL_OUT8(__PVT__ic_TX_REQFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_REQFLITV,0,0);
        VL_OUT8(__PVT__ic_TX_REQFLIT_snp_or_req_bit,0,0);
        VL_IN8(__PVT__ic_TX_REQLCRDV_VC0,0,0);
        VL_IN8(__PVT__ic_TX_REQLCRDV_VC1,0,0);
        VL_OUT8(__PVT__ic_TX_RSPFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_RSPFLITV,0,0);
        VL_OUT8(__PVT__ic_TX_RSPFLIT_metadata,5,0);
        VL_IN8(__PVT__ic_TX_RSPLCRDV_VC0,0,0);
        VL_IN8(__PVT__ic_TX_RSPLCRDV_VC1,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLITPEND,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLITV,0,0);
        VL_OUT8(__PVT__ic_TX_DATFLIT_metadata,5,0);
        VL_IN8(__PVT__ic_TX_DATLCRDV_VC0,0,0);
        VL_IN8(__PVT__ic_TX_DATLCRDV_VC1,0,0);
        VL_IN8(__PVT__icx_exist,3,0);
        VL_IN8(__PVT__porthas_datgnt,0,0);
        VL_IN8(__PVT__porthas_rspgnt,0,0);
        VL_IN8(__PVT__myport_direction,3,0);
        CData/*0:0*/ __PVT__enable_balanced_routing;
        CData/*3:0*/ __PVT__icx_exist_req;
        CData/*3:0*/ __PVT__icx_exist_rsp;
        CData/*3:0*/ __PVT__icx_exist_dat;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_reqf_vc1;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_reqf_vc0;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_datf_vc1;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__valid_flit_out_datf_vc0;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_datf_vc1;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_reqf_vc1;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_datf_vc0;
        CData/*0:0*/ __Vcellout__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__end_flit_out_reqf_vc0;
        CData/*0:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_datf_vc1;
        CData/*0:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_reqf_vc1;
        CData/*0:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_datf_vc0;
        CData/*0:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__gnt_reqf_vc0;
    };
    struct {
        VL_IN16(__PVT__ic_RX_SNPFLIT_metadata,8,0);
        VL_OUT16(__PVT__ic_TX_REQFLIT_metadata,8,0);
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__reqf_vc0_tx_hs_req_send;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__datf_vc0_tx_hs_req_send;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__reqf_vc1_tx_hs_req_send;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__datf_vc1_tx_hs_req_send;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__rspf_vc0_rx_hs_gnt_recv;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__rspf_vc1_rx_hs_gnt_recv;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__datf_vc0_rx_hs_gnt_recv;
        SData/*9:0*/ __PVT__sig_l3_porttop_gen_blk__DOT__datf_vc1_rx_hs_gnt_recv;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__valid_req_vec_dat_vc1;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__valid_req_vec_dat_vc0;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_dat_vc1;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_dat_vc1;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_dat_vc0;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_dat_vc0;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_rsp_vc1;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_rsp_vc1;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__end_req_vec_rsp_vc0;
        SData/*9:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__req_vec_rsp_vc0;
        VL_INW(__PVT__ic_RX_SNPFLIT,150,0,5);
        VL_INW(__PVT__ic_RX_RSPFLIT,72,0,3);
        VL_INW(__PVT__ic_RX_DATFLIT,679,0,22);
        VL_OUTW(__PVT__flit_out_reqf_vc0,160,0,6);
        VL_OUTW(__PVT__flit_out_rspf_vc0,78,0,3);
        VL_OUTW(__PVT__flit_out_datf_vc0,685,0,22);
        VL_OUTW(__PVT__flit_out_reqf_vc1,160,0,6);
        VL_OUTW(__PVT__flit_out_rspf_vc1,78,0,3);
        VL_OUTW(__PVT__flit_out_datf_vc1,685,0,22);
        VL_INW(__PVT__flit_all_req_vc0,1609,0,51);
        VL_INW(__PVT__flit_all_req_vc1,1609,0,51);
        VL_INW(__PVT__flit_all_rsp_vc0,789,0,25);
        VL_INW(__PVT__flit_all_rsp_vc1,789,0,25);
        VL_INW(__PVT__flit_all_dat_vc0,6859,0,215);
        VL_INW(__PVT__flit_all_dat_vc1,6859,0,215);
        VL_OUTW(__PVT__ic_TX_REQFLIT,150,0,5);
        VL_OUTW(__PVT__ic_TX_RSPFLIT,72,0,3);
        VL_OUTW(__PVT__ic_TX_DATFLIT,679,0,22);
        VlWide<5>/*151:0*/ __Vcellinp__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__ic_RX_SNPFLIT;
        VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_common_porttop__pi8(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_common_porttop__pi8();
    VL_UNCOPYABLE(Vsig_topology_top_sig_common_porttop__pi8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
