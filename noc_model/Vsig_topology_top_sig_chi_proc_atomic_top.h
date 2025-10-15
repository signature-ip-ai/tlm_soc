// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_PROC_ATOMIC_TOP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_PROC_ATOMIC_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_ap_top;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_proc_atomic_top final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_ap_top* __PVT__u_sig_ap_top;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk_i,0,0);
    VL_IN8(__PVT__rstb_cc_clk_i,0,0);
    VL_OUT8(__PVT__debug_o,0,0);
    CData/*2:0*/ __PVT__atom_proc_state_c;
    CData/*2:0*/ __PVT__atom_proc_state_n;
    CData/*0:0*/ __PVT__dat_init_rcvd;
    CData/*0:0*/ __PVT__dat_txn_rcvd;
    CData/*0:0*/ __PVT__clr_dat_rcvd;
    CData/*0:0*/ __PVT__ap_in_ready;
    CData/*0:0*/ __PVT__ap_in_valid;
    CData/*0:0*/ __PVT__ap_out_ready;
    CData/*0:0*/ __PVT__ap_out_valid;
    CData/*1:0*/ __PVT__dat_txn_en;
    CData/*0:0*/ __PVT__send_res_data;
    CData/*0:0*/ __PVT__send_init_data;
    CData/*0:0*/ __PVT__addr_is_aligned;
    CData/*0:0*/ __PVT__reg_meta_out;
    CData/*3:0*/ __PVT__res_idx;
    CData/*0:0*/ __PVT__clr_collnreg_sending_ini;
    CData/*0:0*/ __PVT__clr_collnreg_sending_ini_n;
    CData/*0:0*/ __Vcellinp__u_sig_ap_top__atom_is_big_endian_i;
    CData/*2:0*/ __Vcellinp__u_sig_ap_top__atom_size_i;
    CData/*6:0*/ __Vcellinp__u_sig_ap_top__atom_op_i;
    CData/*2:0*/ __Vdly__atom_proc_state_c;
    CData/*0:0*/ __Vdly__dat_init_rcvd;
    CData/*0:0*/ __Vdly__dat_txn_rcvd;
    CData/*0:0*/ __Vdly__clr_collnreg_sending_ini;
    IData/*31:0*/ __PVT__aligned_dat_txn_be;
    VlWide<4>/*127:0*/ __PVT__ap_dat_res_out;
    IData/*31:0*/ __PVT__ap_dat_be_out;
    VlWide<8>/*255:0*/ __PVT__aligned_dat_txn;
    VlWide<4>/*127:0*/ __PVT__aligned_dat_ini;
    VlWide<16>/*511:0*/ __PVT__dat_res_full;
    IData/*31:0*/ __Vcellinp__u_sig_ap_top__atom_be_i;
    VlWide<8>/*255:0*/ __Vcellinp__u_sig_ap_top__dat_txn_i;
    VlWide<3>/*86:0*/ __PVT__ap_meta_in;
    VlWide<26>/*804:0*/ __PVT__ap_data_in;
    VlWide<22>/*683:0*/ __PVT__ap_data_out;
    QData/*51:0*/ __Vcellinp__u_sig_ap_top__atom_addr_i;
    VlWide<3>/*86:0*/ __Vdly__ap_meta_in;
    VlWide<26>/*804:0*/ __Vdly__ap_data_in;
    VlWide<22>/*683:0*/ __Vdly__ap_data_out;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_proc_atomic_top(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_proc_atomic_top();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_proc_atomic_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
