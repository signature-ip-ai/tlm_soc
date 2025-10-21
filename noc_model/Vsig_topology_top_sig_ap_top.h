// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_AP_TOP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_AP_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_ap_adder;
class Vsig_topology_top_sig_ap_opcode_decoder;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_ap_top final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_ap_opcode_decoder* __PVT__sig_ap_opcode_decoder_inst;
    Vsig_topology_top_sig_ap_adder* __PVT__sig_ap_adder_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__resetn_i,0,0);
        VL_IN8(__PVT__valid_i,0,0);
        VL_IN8(__PVT__atom_op_i,6,0);
        VL_IN8(__PVT__atom_size_i,2,0);
        VL_IN8(__PVT__atom_is_big_endian_i,0,0);
        VL_IN8(__PVT__addr_is_aligned_i,0,0);
        VL_IN8(__PVT__dat_txn_en_i,1,0);
        VL_IN8(__PVT__ready_i,0,0);
        VL_OUT8(__PVT__ready_o,0,0);
        VL_OUT8(__PVT__dat_init_wr_flag_o,0,0);
        VL_OUT8(__PVT__dat_res_wr_flag_o,0,0);
        VL_OUT8(__PVT__valid_o,0,0);
        CData/*0:0*/ __PVT__atom_addr_upper_shift_decoder;
        CData/*6:0*/ __PVT__atom_addr_bit_offset_decoder;
        CData/*2:0*/ __PVT__atom_size_decoder;
        CData/*0:0*/ __PVT__atom_is_big_endian_decoder;
        CData/*3:0*/ __PVT__alu_control_decoder;
        CData/*0:0*/ __PVT__atom_addr_upper_shift_adder;
        CData/*6:0*/ __PVT__atom_addr_bit_offset_adder;
        CData/*0:0*/ __PVT__atom_is_big_endian_adder;
        CData/*3:0*/ __PVT__alu_control_adder;
        CData/*0:0*/ __PVT__dat_res_wr_flag_int;
        CData/*3:0*/ __PVT__alu_control_reg;
        CData/*0:0*/ __PVT__atom_addr_upper_shift_reg;
        CData/*6:0*/ __PVT__atom_addr_bit_offset_reg;
        CData/*0:0*/ __PVT__atom_is_big_endian_reg;
        CData/*7:0*/ __PVT__align_operand_nxt;
        CData/*7:0*/ __PVT__align_operand_reg;
        CData/*7:0*/ __PVT__bitmask_first_set_bit_nxt;
        CData/*7:0*/ __PVT__bitmask_first_set_bit_reg;
        CData/*4:0*/ __Vfunc_get_first_set_bit_idx__2__Vfuncout;
        CData/*4:0*/ __Vfunc_clogb2__3__Vfuncout;
        CData/*3:0*/ __Vdly__alu_control_reg;
        CData/*0:0*/ __Vdly__atom_addr_upper_shift_reg;
        CData/*6:0*/ __Vdly__atom_addr_bit_offset_reg;
        CData/*0:0*/ __Vdly__atom_is_big_endian_reg;
        CData/*7:0*/ __Vdly__align_operand_reg;
        CData/*7:0*/ __Vdly__bitmask_first_set_bit_reg;
        CData/*0:0*/ __VdlySet__bitmask_reg__v0;
        CData/*0:0*/ __VdlySet__bitmask_reg__v2;
        VL_IN(__PVT__atom_be_i,31,0);
        VL_INW(__PVT__dat_init_i,127,0,4);
        VL_INW(__PVT__dat_txn_i,255,0,8);
        VL_OUTW(__PVT__dat_res_o,127,0,4);
        VL_OUT(__PVT__bytemask_o,31,0);
        VlWide<4>/*127:0*/ __PVT__dat_init_decoder;
        VlWide<8>/*255:0*/ __PVT__dat_txn_decoder;
        VlWide<4>/*127:0*/ __PVT__dat_init_adder;
        VlWide<8>/*255:0*/ __PVT__dat_txn_adder;
        VlWide<4>/*127:0*/ __PVT__dat_res_int;
        VlWide<4>/*127:0*/ __PVT__dat_init_reg;
        VlWide<8>/*255:0*/ __PVT__dat_txn_reg;
        VlWide<8>/*255:0*/ __Vfunc_replicator__0__Vfuncout;
        IData/*31:0*/ __Vfunc_replicator__0__bytemask;
        IData/*31:0*/ __Vfunc_replicator__0__unnamedblk2__DOT__i;
        VlWide<8>/*255:0*/ __Vfunc_replicator__1__Vfuncout;
        IData/*31:0*/ __Vfunc_replicator__1__bytemask;
        IData/*31:0*/ __Vfunc_replicator__1__unnamedblk2__DOT__i;
        IData/*31:0*/ __Vfunc_get_first_set_bit_idx__2__bitmask;
        IData/*31:0*/ __Vfunc_clogb2__3__set_bit_location;
        IData/*31:0*/ __Vfunc_clogb2__3__unnamedblk1__DOT__i;
        VlWide<4>/*127:0*/ __Vdly__dat_init_reg;
        VlWide<8>/*255:0*/ __Vdly__dat_txn_reg;
    };
    struct {
        VlWide<8>/*255:0*/ __VdlyVal__bitmask_reg__v0;
        VlWide<8>/*255:0*/ __VdlyVal__bitmask_reg__v1;
        VL_IN64(__PVT__atom_addr_i,51,0);
        VlUnpacked<IData/*31:0*/, 2> __PVT__bytemask_decoder;
        VlUnpacked<VlWide<8>/*255:0*/, 2> __PVT__bitmask_nxt;
        VlUnpacked<VlWide<8>/*255:0*/, 2> __PVT__bitmask_reg;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_ap_top(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_ap_top();
    VL_UNCOPYABLE(Vsig_topology_top_sig_ap_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
