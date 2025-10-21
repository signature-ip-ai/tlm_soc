// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_AP_ADDER_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_AP_ADDER_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_ap_adder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__resetn_i,0,0);
    VL_IN8(__PVT__alu_control_i,3,0);
    VL_IN8(__PVT__atom_addr_upper_shift_i,0,0);
    VL_IN8(__PVT__atom_addr_bit_offset_i,6,0);
    VL_IN8(__PVT__atom_is_big_endian_i,0,0);
    VL_IN8(__PVT__align_operand_i,7,0);
    VL_IN8(__PVT__bitmask_first_set_bit_i,7,0);
    VL_OUT8(__PVT__dat_res_wr_flag_o,0,0);
    CData/*3:0*/ __PVT__adder_op;
    CData/*0:0*/ __PVT__dat_res_wr_flag;
    CData/*0:0*/ __PVT__unused_signal;
    CData/*0:0*/ __PVT__unused_signal_nxt;
    CData/*0:0*/ __Vdly__unused_signal;
    VL_INW(__PVT__dat_init_i,127,0,4);
    VL_INW(__PVT__dat_txn_i,255,0,8);
    VL_OUTW(__PVT__dat_res_o,127,0,4);
    VlWide<5>/*128:0*/ __PVT__dat_res_temp;
    VlWide<4>/*127:0*/ __PVT__dat_res;
    VlWide<4>/*127:0*/ __PVT__op_A;
    VlWide<4>/*127:0*/ __PVT__op_B;
    VlWide<4>/*127:0*/ __PVT__op_A_tmp;
    VlWide<4>/*127:0*/ __PVT__op_B_tmp;
    VlWide<4>/*127:0*/ __PVT__op_B_overflow;
    VlWide<4>/*127:0*/ __PVT__op_A_signed;
    VlWide<4>/*127:0*/ __PVT__op_B_signed;
    VlWide<4>/*127:0*/ __PVT__shifted_bitmask_0;
    VlWide<4>/*127:0*/ __PVT__alu_out;
    VlWide<5>/*128:0*/ __PVT__alu_out_temp;
    VlWide<8>/*255:0*/ __PVT__swap_fsb;
    VlWide<4>/*127:0*/ __PVT__tmp;
    VL_INW(__PVT__bitmask_i[2],255,0,8);
    VlUnpacked<VlWide<8>/*255:0*/, 2> __PVT__bitmask;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_ap_adder(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_ap_adder();
    VL_UNCOPYABLE(Vsig_topology_top_sig_ap_adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
